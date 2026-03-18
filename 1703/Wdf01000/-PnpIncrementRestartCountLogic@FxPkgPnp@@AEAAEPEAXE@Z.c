/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0097B14
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A086C (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017610 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C003870C (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 */

char __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  char v3; // r15
  unsigned __int8 m_AchievedStart; // r13
  bool v6; // r14
  char v7; // si
  int v8; // edi
  _LARGE_INTEGER v9; // rbx
  NTSTATUS v11; // eax
  unsigned int count; // [rsp+40h] [rbp-99h] BYREF
  unsigned int length; // [rsp+44h] [rbp-95h] BYREF
  unsigned int type; // [rsp+48h] [rbp-91h] BYREF
  unsigned int ValueLengthQueried; // [rsp+4Ch] [rbp-8Dh] BYREF
  unsigned int ValueType; // [rsp+50h] [rbp-89h] BYREF
  unsigned int value; // [rsp+54h] [rbp-85h] BYREF
  int Data; // [rsp+58h] [rbp-81h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+60h] [rbp-79h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+78h] [rbp-61h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+88h] [rbp-51h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+98h] [rbp-41h] BYREF
  FxPkgPnp *v25; // [rsp+A0h] [rbp-39h]
  wchar_t valueNameCount_buffer[8]; // [rsp+A8h] [rbp-31h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+B8h] [rbp-21h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+D0h] [rbp-9h] BYREF

  count = 0;
  v3 = 0;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_DWORD *)&valueNameStartTime.Length = 1310738;
  *(_DWORD *)&valueNameCount.Length = 786442;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_DWORD *)&valueNameStartAchieved.Length = 1835034;
  m_AchievedStart = this->m_AchievedStart;
  v25 = this;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v6 = m_AchievedStart != 0;
  if ( CreatedNewKey )
  {
    v7 = 1;
    goto LABEL_22;
  }
  v8 = FxRegKey::_QueryValue(this->m_Globals, RestartKey, &valueNameStartTime, 8u, &startTickCount, &length, &type);
  v7 = 1;
  if ( v8 >= 0 && length == 8 && type == 3 )
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
          v8 = -1073741823;
        else
          v3 = 1;
LABEL_23:
        if ( v8 >= 0 && v3 )
          v8 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
        goto LABEL_26;
      }
      if ( !m_AchievedStart
        && !((int)FxRegKey::_QueryValue(
                    v25->m_Globals,
                    RestartKey,
                    &valueNameStartAchieved,
                    4u,
                    &value,
                    &ValueLengthQueried,
                    &ValueType) >= 0
          && ValueLengthQueried == 4
          && ValueType == 4
           ? value
           : 0) )
      {
        m_AchievedStart = 0;
        v8 = -1073741823;
        goto LABEL_26;
      }
      v6 = 1;
      m_AchievedStart = 0;
    }
LABEL_22:
    count = 1;
    v3 = 1;
    v8 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
    goto LABEL_23;
  }
LABEL_26:
  if ( v6 )
  {
    Data = m_AchievedStart;
    v11 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &Data, 4u);
    if ( v8 < 0 )
      return 0;
    v8 = v11;
  }
  if ( v8 < 0 )
    return 0;
  return v7;
}
