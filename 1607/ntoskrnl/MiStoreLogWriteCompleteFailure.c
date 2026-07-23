/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x1401F4884
 * Callers:
 *     MmStoreAsyncWriteComplete @ 0x14011B3BC (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  unsigned __int64 v0; // rbp
  int v1; // r9d
  const struct _TlgProvider_t *v2; // r10
  const GUID *pActivityId; // r11
  int v4; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 0x400000000002uLL) )
    {
      *(_DWORD *)v0 = v1;
      *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = (unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 4LL;
      TlgWriteEx(
        v2,
        &unk_14027C929,
        0LL,
        (_DWORD)pActivityId + 1,
        pActivityId,
        pActivityId,
        3u,
        (EVENT_DATA_DESCRIPTOR *)(v0 + 8));
    }
  }
}
