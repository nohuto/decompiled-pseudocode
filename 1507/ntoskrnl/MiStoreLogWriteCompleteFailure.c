/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x1402316E8
 * Callers:
 *     MmStoreAsyncWriteComplete @ 0x14013F13C (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v6 = 0;
      v4 = &v2;
      v2 = v0;
      v5 = 4;
      MmTlgWrite(v1, (unsigned __int8 *)dword_1402A46C8, 0LL, 0LL, 3u, &v3);
    }
  }
}
