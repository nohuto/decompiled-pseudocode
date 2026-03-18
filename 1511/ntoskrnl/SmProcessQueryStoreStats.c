/*
 * XREFs of SmProcessQueryStoreStats @ 0x140657844
 * Callers:
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SmpProcessQueryStoreStats @ 0x140207720 (SmpProcessQueryStoreStats.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r8d
  char *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE v11[12]; // [rsp+20h] [rbp-618h] BYREF
  unsigned int v12; // [rsp+2Ch] [rbp-60Ch]
  unsigned int v13; // [rsp+40h] [rbp-5F8h]
  char v14; // [rsp+48h] [rbp-5F0h] BYREF

  StoreStats = SmpProcessQueryStoreStats(a1, (__int64)v11);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v6 = &v14;
      v7 = v12;
      v8 = 8LL;
      do
      {
        v9 = *(unsigned int *)v6;
        v6 += 8;
        *a2 += v7 * v9;
        --v8;
      }
      while ( v8 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v13 << 12;
  }
  return (unsigned int)StoreStats;
}
