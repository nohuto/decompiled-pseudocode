/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C009ABC0
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2ED8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C002B194 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?_SetValue@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@K0K@Z @ 0x1C007FC8C (-_SetValue@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@K0K@Z.c)
 */

char __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  char v3; // r15
  char v5; // si
  int v8; // edi
  _LARGE_INTEGER v9; // rbx
  NTSTATUS v10; // eax
  unsigned int count; // [rsp+40h] [rbp-79h] BYREF
  unsigned int started; // [rsp+44h] [rbp-75h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+48h] [rbp-71h] BYREF
  unsigned int length; // [rsp+50h] [rbp-69h] BYREF
  unsigned int ValueType; // [rsp+54h] [rbp-65h] BYREF
  unsigned int type; // [rsp+58h] [rbp-61h] BYREF
  unsigned int ValueLengthQueried; // [rsp+5Ch] [rbp-5Dh] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+60h] [rbp-59h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+70h] [rbp-49h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+80h] [rbp-39h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+90h] [rbp-29h] BYREF
  wchar_t valueNameCount_buffer[8]; // [rsp+98h] [rbp-21h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+A8h] [rbp-11h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+C0h] [rbp+7h] BYREF

  started = 0;
  v3 = 0;
  count = 0;
  v5 = 1;
  *(_DWORD *)&valueNameStartTime.Length = 1310738;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_DWORD *)&valueNameCount.Length = 786442;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_DWORD *)&valueNameStartAchieved.Length = 1835034;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  started = this->m_AchievedStart;
  if ( started )
  {
    v3 = 1;
  }
  else if ( (int)FxRegKey::_QueryValue(
                   this->m_Globals,
                   RestartKey,
                   &valueNameStartAchieved,
                   4u,
                   &started,
                   &length,
                   &type) < 0
         || length != 4
         || type != 4 )
  {
    started = 0;
  }
  if ( CreatedNewKey )
    goto LABEL_26;
  v8 = FxRegKey::_QueryValue(
         this->m_Globals,
         RestartKey,
         &valueNameStartTime,
         8u,
         &startTickCount,
         &ValueLengthQueried,
         &ValueType);
  if ( v8 >= 0 )
  {
    if ( ValueLengthQueried == 8 && ValueType == 3 )
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
LABEL_17:
            v8 = -1073741823;
            goto LABEL_18;
          }
          goto LABEL_28;
        }
        if ( !started )
          goto LABEL_17;
        started = 0;
        v3 = 1;
      }
LABEL_26:
      count = 1;
      v8 = FxRegKey::_SetValue(RestartKey, &valueNameStartTime, 3u, &currentTickCount, 8u);
LABEL_28:
      if ( v8 >= 0 )
        v8 = FxRegKey::_SetValue(RestartKey, &valueNameCount, 4u, &count, 4u);
    }
  }
LABEL_18:
  if ( v3 )
  {
    v10 = FxRegKey::_SetValue(RestartKey, &valueNameStartAchieved, 4u, &started, 4u);
    if ( v8 < 0 )
      return 0;
    v8 = v10;
  }
  if ( v8 < 0 )
    return 0;
  return v5;
}
