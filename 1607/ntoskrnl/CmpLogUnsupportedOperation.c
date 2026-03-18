/*
 * XREFs of CmpLogUnsupportedOperation @ 0x14060BD0C
 * Callers:
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14060BEB4 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

TLG_STATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  TLG_STATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( stru_1402F34E0.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return TlgWrite(&stru_1402F34E0, &unk_14027B17F, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
