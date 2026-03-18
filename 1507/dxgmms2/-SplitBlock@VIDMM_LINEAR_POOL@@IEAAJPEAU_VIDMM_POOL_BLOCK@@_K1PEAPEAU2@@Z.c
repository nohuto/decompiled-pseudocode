/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@@Z @ 0x1C003E68C
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C003E56C (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0075F58 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDMM_POOL_BLOCK **a5)
{
  struct _VIDMM_POOL_BLOCK *v5; // rdi
  struct _VIDMM_POOL_BLOCK *v6; // rsi
  __int64 v11; // r15
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  __int64 v16; // rcx
  struct _VIDMM_POOL_BLOCK **v17; // rdx
  struct _VIDMM_POOL_BLOCK *v18; // rcx
  __int64 v19; // rax
  struct _VIDMM_POOL_BLOCK *v21; // rdi
  struct _VIDMM_POOL_BLOCK **v22; // rcx
  __int64 v23; // rdx
  char *v24; // rcx
  _QWORD *v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r8

  v5 = 0LL;
  v6 = 0LL;
  v11 = a3 - *((_QWORD *)a2 + 1);
  if ( a3 != *((_QWORD *)a2 + 1) )
  {
    Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
    v5 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C002758C);
      v19 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v19 + 24) = 1307LL;
      goto LABEL_11;
    }
    memset(Block, 0, 0x40uLL);
    *(_DWORD *)v5 = 2;
    *((_QWORD *)v5 + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)v5 + 2) = v11;
  }
  v14 = *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2) - a4;
  if ( v14 )
  {
    v15 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    v6 = v15;
    if ( v15 )
    {
      memset(v15, 0, 0x40uLL);
      *(_DWORD *)v6 = 2;
      *((_QWORD *)v6 + 1) = a4;
      *((_QWORD *)v6 + 2) = v14;
      goto LABEL_7;
    }
    if ( v5 )
      VIDMM_LINEAR_POOL::FreeBlock(this, v5);
    _InterlockedIncrement(&dword_1C002758C);
    v19 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v19 + 24) = 1347LL;
LABEL_11:
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
LABEL_7:
  if ( v5 )
  {
    v17 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
    v18 = (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 32);
    *((_QWORD *)v5 + 4) = (char *)a2 + 32;
    *((_QWORD *)v5 + 5) = v17;
    if ( *v17 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 32) )
      __fastfail(3u);
    *v17 = v18;
    v21 = (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 48);
    *((_QWORD *)a2 + 5) = v18;
    v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 7);
    *(_QWORD *)v21 = (char *)a2 + 48;
    *((_QWORD *)v21 + 1) = v22;
    if ( *v22 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48) )
      __fastfail(3u);
    *v22 = v21;
    *((_QWORD *)a2 + 7) = v21;
    *((_QWORD *)a2 + 2) -= v11;
    *((_QWORD *)a2 + 1) = a3;
  }
  if ( v6 )
  {
    v23 = *((_QWORD *)a2 + 4);
    v24 = (char *)v6 + 32;
    *((_QWORD *)v6 + 4) = v23;
    *((_QWORD *)v6 + 5) = (char *)a2 + 32;
    if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 32) )
      __fastfail(3u);
    *(_QWORD *)(v23 + 8) = v24;
    v25 = (_QWORD *)((char *)v6 + 48);
    *((_QWORD *)a2 + 4) = v24;
    v26 = *((_QWORD *)a2 + 6);
    *v25 = v26;
    v25[1] = (char *)a2 + 48;
    if ( *(struct _VIDMM_POOL_BLOCK **)(v26 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48) )
      __fastfail(3u);
    *(_QWORD *)(v26 + 8) = v25;
    *((_QWORD *)a2 + 6) = v25;
    *((_QWORD *)a2 + 2) -= v14;
  }
  v27 = (_QWORD *)((char *)a2 + 32);
  *(_DWORD *)a2 = 3;
  v28 = *((_QWORD *)a2 + 4);
  v29 = (_QWORD *)*((_QWORD *)a2 + 5);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v28 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 32) || (_QWORD *)*v29 != v27 )
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  v30 = *((_QWORD *)this + 7);
  *v27 = v30;
  *((_QWORD *)a2 + 5) = (char *)this + 56;
  if ( *(VIDMM_LINEAR_POOL **)(v30 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56) )
    __fastfail(3u);
  *(_QWORD *)(v30 + 8) = v27;
  *((_QWORD *)this + 7) = v27;
  *a5 = a2;
  return 0LL;
}
