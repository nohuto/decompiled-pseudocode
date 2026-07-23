/*
 * XREFs of SmProcessQueryStoreStats @ 0x14054C948
 * Callers:
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 * Callees:
 *     SmpProcessQueryStoreStats @ 0x1401357D4 (SmpProcessQueryStoreStats.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r8d
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // [rsp+2Ch] [rbp-60Ch]
  unsigned int v11; // [rsp+40h] [rbp-5F8h]
  char v12; // [rsp+4Ch] [rbp-5ECh] BYREF

  StoreStats = SmpProcessQueryStoreStats(a1);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v7 = &v12;
      v8 = 8LL;
      do
      {
        v9 = *(unsigned int *)v7;
        v7 += 8;
        *a2 += v10 * v9;
        --v8;
      }
      while ( v8 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v11 << 12;
  }
  return (unsigned int)StoreStats;
}
