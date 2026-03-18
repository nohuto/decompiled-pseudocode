/*
 * XREFs of EngFntCacheAllocInternal @ 0x14029054C
 * Callers:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x14025AC08 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     EngFntCacheAlloc @ 0x14031BBA0 (EngFntCacheAlloc.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x14031B5E0 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x14031B914 (bReAllocCacheFile.c)
 *     FNTCachepClose @ 0x14031BBBC (FNTCachepClose.c)
 */

__int64 __fastcall EngFntCacheAllocInternal(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r14d
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v3 = 0LL;
  *a3 = 0;
  v5 = a2;
  v8 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v9 = *(_QWORD *)(v8 + 19592);
  if ( !v9 || !a1 )
    return 0LL;
  if ( (*(_DWORD *)(v8 + 19584) & 2) != 0 )
  {
    v10 = (v5 + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v10 + *(_QWORD *)(v9 + 40)) < *(_QWORD *)(v9 + 48) || (unsigned int)bReAllocCacheFile(v5) )
    {
      v11 = (_DWORD *)SearchFntCacheNewLink(a1);
      v7 = v11;
      if ( v11 )
      {
        if ( v11[4] || v11[5] )
        {
          v11[6] |= 1u;
        }
        else
        {
          v12 = *(_QWORD *)(v8 + 19592);
          v3 = *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v12 + 40) = v3 + v10;
          v11[4] = v5;
          v11[5] = v3 - *(_DWORD *)(*(_QWORD *)(v8 + 19592) + 32LL);
        }
        *(_DWORD *)(*(_QWORD *)(v8 + 19592) + 28LL) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(v9 + 24) |= 2u;
  }
  v13 = *(unsigned int *)(*(_QWORD *)(v8 + 19592) + 24LL);
  if ( (v13 & 1) != 0 )
  {
    FNTCachepClose(v13, v7);
    v3 = 0LL;
    *a3 = 1;
  }
  return v3;
}
