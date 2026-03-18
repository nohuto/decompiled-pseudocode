/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0085A10
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008D1E8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00309B0 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0030B20 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 */

char __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  char v4; // si
  unsigned __int8 m_AchievedStart; // r15
  bool v7; // r12
  int v8; // edi
  _LARGE_INTEGER v9; // rbx
  unsigned int v10; // eax
  NTSTATUS v11; // eax
  unsigned int count; // [rsp+40h] [rbp-89h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+48h] [rbp-81h] BYREF
  int Data; // [rsp+50h] [rbp-79h] BYREF
  unsigned int value; // [rsp+54h] [rbp-75h] BYREF
  unsigned int type; // [rsp+58h] [rbp-71h] BYREF
  unsigned int ValueLengthQueried; // [rsp+5Ch] [rbp-6Dh] BYREF
  unsigned int ValueType; // [rsp+60h] [rbp-69h] BYREF
  unsigned int length; // [rsp+64h] [rbp-65h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+68h] [rbp-61h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+78h] [rbp-51h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+88h] [rbp-41h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+98h] [rbp-31h] BYREF
  wchar_t valueNameCount_buffer[8]; // [rsp+A0h] [rbp-29h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+B0h] [rbp-19h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+C8h] [rbp-1h] BYREF

  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  v4 = 1;
  *(_DWORD *)&valueNameStartTime.Length = 1310738;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_DWORD *)&valueNameCount.Length = 786442;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_DWORD *)&valueNameStartAchieved.Length = 1835034;
  count = 0;
  m_AchievedStart = this->m_AchievedStart;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v7 = m_AchievedStart != 0;
  if ( CreatedNewKey )
    goto LABEL_19;
  v8 = FxRegKey::_QueryValue(this->m_Globals, RestartKey, &valueNameStartTime, 8u, &startTickCount, &length, &type);
  if ( v8 >= 0 )
  {
    if ( length == 8 && type == 3 )
    {
      v8 = FxRegKey::_QueryULong(RestartKey, &valueNameCount, &count);
      if ( v8 == -1073741772 )
      {
        count = 1;
        v8 = 0;
      }
    }
    if ( v8 >= 0 )
    {
      v9 = startTickCount;
      if ( currentTickCount.QuadPart >= startTickCount.QuadPart )
      {
        if ( KeQueryTimeIncrement() * (currentTickCount.QuadPart - v9.QuadPart) <= 600000000 )
        {
          if ( ++count > 5 )
          {
LABEL_11:
            v8 = -1073741823;
            goto LABEL_22;
          }
          goto LABEL_20;
        }
        if ( !m_AchievedStart )
        {
          if ( (int)FxRegKey::_QueryValue(
                      this->m_Globals,
                      RestartKey,
                      &valueNameStartAchieved,
                      4u,
                      &value,
                      &ValueLengthQueried,
                      &ValueType) < 0
            || ValueLengthQueried != 4
            || (v10 = value, ValueType != 4) )
          {
            v10 = 0;
          }
          if ( !v10 )
          {
            m_AchievedStart = 0;
            goto LABEL_11;
          }
        }
        v7 = 1;
        m_AchievedStart = 0;
      }
LABEL_19:
      count = 1;
      v8 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
LABEL_20:
      if ( v8 >= 0 )
        v8 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
    }
  }
LABEL_22:
  if ( v7 )
  {
    Data = m_AchievedStart;
    v11 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &Data, 4u);
    if ( v8 < 0 )
      return 0;
    v8 = v11;
  }
  if ( v8 < 0 )
    return 0;
  return v4;
}
