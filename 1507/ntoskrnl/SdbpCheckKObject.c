/*
 * XREFs of SdbpCheckKObject @ 0x1405A9EE4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1405AAA20 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1405AAEC8 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckForMatch @ 0x1405AB464 (SdbpCheckForMatch.c)
 *     SdbpMatchAcpi @ 0x1405C70E0 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1405C7130 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1405C7180 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1405C71D0 (SdbpMatchCpu.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int SearchDBContext; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  _DWORD v17[36]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+4Fh] BYREF
  char v19; // [rsp+E0h] [rbp+5Fh] BYREF

  v17[0] = 0;
  memset(&v17[2], 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  SearchDBContext = 0;
  v18 = 0LL;
  if ( !a3 || (v16 = AslFileMappingCreate(&v18, a3, a4, a5, a6), v12 = v18, v16 >= 0) )
  {
    memset(v17, 0, 0x60uLL);
    v17[0] |= 0x1Au;
    SearchDBContext = SdbpCreateSearchDBContext(v17, v12);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v11, a2, (unsigned int)v17, (__int64)&v19, (__int64)&v18);
      if ( SearchDBContext )
      {
        v15 = a7;
        if ( a7 )
        {
          SearchDBContext = SdbpMatchAcpi(v11, a2, *a7);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v11, a2, v15[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v11, a2, v15[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v11, a2, v15[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete(v12);
  return SearchDBContext;
}
