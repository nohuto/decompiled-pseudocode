/*
 * XREFs of CmpLogUnsupportedOperation @ 0x14060BDC0
 * Callers:
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14060BF68 (CmpSendUnsupportedOperationTelemetryEvent.c)
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
    return TlgWrite(&stru_1402F34E0, &unk_14027B27F, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
