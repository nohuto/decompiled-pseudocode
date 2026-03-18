/*
 * XREFs of ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0065310
 * Callers:
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C006542C (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C006FB3C (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C009F580 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C001F9C4 (ExAllocateFromPagedLookasideList.c)
 */

struct _VIDMM_POOL_BLOCK *__fastcall VIDMM_LINEAR_POOL::AllocateBlock(VIDMM_LINEAR_POOL *this)
{
  __int64 *v1; // rdi
  char *v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  char *v7; // rsi
  PVOID v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  char **v11; // rax
  char *v12; // rcx
  char **v13; // rax
  char *v14; // rbp

  v1 = 0LL;
  if ( !*(_BYTE *)this )
    return (struct _VIDMM_POOL_BLOCK *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  v3 = (char *)this + 88;
  if ( *(char **)v3 != v3 )
    goto LABEL_3;
  v7 = (char *)operator new(0x18uLL, 0x39316956u, PagedPool);
  if ( v7 )
  {
    v8 = operator new(0x140uLL, 0x38316956u, PagedPool);
    *((_QWORD *)v7 + 2) = v8;
    if ( v8 )
    {
      v9 = 0;
      v10 = 0LL;
      do
      {
        *(_BYTE *)(v10 + *((_QWORD *)v7 + 2) + 56) = 1;
        v11 = (char **)*((_QWORD *)v3 + 1);
        v12 = (char *)(v10 + *((_QWORD *)v7 + 2) + 24LL);
        if ( *v11 != v3 )
          __fastfail(3u);
        *(_QWORD *)v12 = v3;
        ++v9;
        *((_QWORD *)v12 + 1) = v11;
        v10 += 64LL;
        *v11 = v12;
        *((_QWORD *)v3 + 1) = v12;
      }
      while ( v9 < 5 );
      v13 = (char **)*((_QWORD *)this + 14);
      v14 = (char *)this + 104;
      if ( *v13 != v14 )
        __fastfail(3u);
      *(_QWORD *)v7 = v14;
      *((_QWORD *)v7 + 1) = v13;
      *v13 = v7;
      *((_QWORD *)v14 + 1) = v7;
    }
    else
    {
      operator delete(v7);
    }
  }
  if ( *(char **)v3 != v3 )
  {
LABEL_3:
    v4 = *(__int64 **)v3;
    v5 = **(_QWORD **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    v1 = v4 - 3;
    *(_QWORD *)(v5 + 8) = v3;
    *((_BYTE *)v1 + 56) = 2;
  }
  return (struct _VIDMM_POOL_BLOCK *)v1;
}
