/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x1401E53F4
 * Callers:
 *     MmStoreAsyncWriteComplete @ 0x14010D564 (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  int v0; // r9d
  const struct _TlgProvider_t *v1; // r10
  const GUID *pActivityId; // r11
  int v3; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  int *v5; // [rsp+68h] [rbp-20h]
  __int64 v6; // [rsp+70h] [rbp-18h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v3 = v0;
      v5 = &v3;
      v6 = 4LL;
      TlgWriteEx(v1, &unk_14025469D, 0LL, (_DWORD)pActivityId + 1, pActivityId, pActivityId, 3u, &pData);
    }
  }
}
