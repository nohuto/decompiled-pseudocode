/*
 * XREFs of SdbpCheckKObject @ 0x14053511C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1403B749C (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     SdbpReleaseSearchDBContext @ 0x1403B7CE4 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x1403B83B4 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckForMatch @ 0x140535248 (SdbpCheckForMatch.c)
 *     SdbpMatchAcpi @ 0x14054F358 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x14054F3A8 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x14054F3F8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14054F448 (SdbpMatchCpu.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  const wchar_t *v12; // rsi
  unsigned int SearchDBContext; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  _QWORD v17[18]; // [rsp+30h] [rbp-51h] BYREF
  wchar_t *v18; // [rsp+D0h] [rbp+4Fh] BYREF
  char v19; // [rsp+E0h] [rbp+5Fh] BYREF

  LODWORD(v17[0]) = 0;
  memset(&v17[1], 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  SearchDBContext = 0;
  v18 = 0LL;
  if ( !a3 || (v16 = AslFileMappingCreate(&v18, a3, a4, a5, a6), v12 = v18, v16 >= 0) )
  {
    memset(v17, 0, 0x60uLL);
    LODWORD(v17[0]) |= 0x1Au;
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
  SdbpReleaseSearchDBContext((__int64)v17);
  AslFileMappingDelete((__int64)v12);
  return SearchDBContext;
}
