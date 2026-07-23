/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x140580FE8
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     PopOpenPowerKey @ 0x140132A90 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 */

char PopThermalHandlePreviousShutdown()
{
  int v0; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  ULONG MatchingChangeStamp; // [rsp+48h] [rbp-1h] BYREF
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
           &MatchingChangeStamp);
    if ( v0 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v0 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( v0 >= 0 )
      {
        LOBYTE(v0) = ZwUpdateWnfStateData(&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
        if ( hProvider.LevelPlus1 > 5 )
        {
          LOBYTE(v0) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
          if ( (_BYTE)v0 )
            LOBYTE(v0) = TlgWrite(&hProvider, &unk_14027CCE0, 0LL, 0LL, 2u, &pData);
        }
      }
    }
    if ( KeyHandle )
      LOBYTE(v0) = ZwClose(KeyHandle);
  }
  return v0;
}
