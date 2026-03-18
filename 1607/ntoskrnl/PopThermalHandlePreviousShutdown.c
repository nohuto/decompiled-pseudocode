/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x140580B3C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     PopOpenPowerKey @ 0x140132520 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14015B5E0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 */

char PopThermalHandlePreviousShutdown()
{
  int v0; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp+17h] BYREF
  int v6; // [rsp+70h] [rbp+27h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+2Fh] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ThermalShutdownOccurred");
    KeyValueInformation = 0uLL;
    v6 = 0;
    v0 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v0 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v0 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( v0 >= 0 )
      {
        LOBYTE(v0) = ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0LL);
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          LOBYTE(v0) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
          if ( (_BYTE)v0 )
            LOBYTE(v0) = TlgWrite(&pCallbackContext, &unk_14027CBE0, 0LL, 0LL, 2u, &pData);
        }
      }
    }
    if ( KeyHandle )
      LOBYTE(v0) = ZwClose(KeyHandle);
  }
  return v0;
}
