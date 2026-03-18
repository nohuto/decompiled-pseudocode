/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C006542C
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C009F7AC (-ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00652DC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0065310 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDMM_POOL_BLOCK **a5)
{
  _BYTE *v5; // rax
  VIDMM_LINEAR_POOL *v9; // r14
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  _QWORD *v12; // r10
  __int64 v13; // r15
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  struct _VIDMM_POOL_BLOCK **v36; // rdx
  struct _VIDMM_POOL_BLOCK *v37; // rcx
  struct _VIDMM_POOL_BLOCK *v38; // rdi
  struct _VIDMM_POOL_BLOCK **v39; // rcx
  __int64 v40; // rax

  v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v12[3] = a2;
    v12[4] = *(_QWORD *)a2;
    v12[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v12[6] = a3;
    v12[7] = a4;
  }
  v13 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( *v5 )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C003561C);
      v40 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v40 + 24) = 1312LL;
      goto LABEL_29;
    }
    memset(Block, 0, 0x40uLL);
    v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    *((_BYTE *)v10 + 56) = 2;
    this = *(VIDMM_LINEAR_POOL **)a2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    *((_QWORD *)v10 + 1) = v13;
    if ( g_IsInternalReleaseOrDbg )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      v35[3] = v10;
      v35[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*((_QWORD *)v10 + 1) + *(_QWORD *)v10);
      v35[5] = this;
      v5 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    }
  }
  v14 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( v14 )
  {
    if ( *v5 )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v15 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v11 = v15;
    if ( v15 )
    {
      memset(v15, 0, 0x40uLL);
      *((_BYTE *)v11 + 56) = 2;
      *(_QWORD *)v11 = a4;
      *((_QWORD *)v11 + 1) = v14;
      if ( g_IsInternalReleaseOrDbg )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v17, v18, v19);
        v20[3] = v11;
        v20[4] = *(_QWORD *)v11;
        v20[5] = *(_QWORD *)v11 + *((_QWORD *)v11 + 1);
      }
      goto LABEL_10;
    }
    if ( v10 )
      VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
    _InterlockedIncrement(&dword_1C003561C);
    v40 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v40 + 24) = 1352LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v40);
    return 3221225495LL;
  }
LABEL_10:
  if ( v10 )
  {
    v36 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 4);
    v37 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 24);
    if ( *v36 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *(_QWORD *)v37 = (char *)a2 + 24;
    v38 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
    *((_QWORD *)v37 + 1) = v36;
    *v36 = v37;
    *((_QWORD *)a2 + 4) = v37;
    v39 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v39 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      __fastfail(3u);
    *(_QWORD *)v38 = (char *)a2 + 40;
    *((_QWORD *)v38 + 1) = v39;
    *v39 = v38;
    *((_QWORD *)a2 + 6) = v38;
    *((_QWORD *)a2 + 1) -= v13;
    *(_QWORD *)a2 = a3;
  }
  if ( v11 )
  {
    v21 = (_QWORD *)((char *)a2 + 24);
    v22 = *((_QWORD *)a2 + 3);
    v23 = (_QWORD *)((char *)v11 + 24);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v22 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      __fastfail(3u);
    *((_QWORD *)v11 + 4) = v21;
    v24 = (_QWORD *)((char *)v11 + 40);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *v21 = v23;
    v25 = (_QWORD *)((char *)a2 + 40);
    v26 = *((_QWORD *)a2 + 5);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v26 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      __fastfail(3u);
    *v24 = v26;
    v24[1] = v25;
    *(_QWORD *)(v26 + 8) = v24;
    *v25 = v24;
    *((_QWORD *)a2 + 1) -= v14;
  }
  v27 = (_QWORD *)((char *)a2 + 24);
  *((_BYTE *)a2 + 56) = 3;
  v28 = *((_QWORD *)a2 + 3);
  v29 = (_QWORD *)*((_QWORD *)a2 + 4);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v28 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) || (_QWORD *)*v29 != v27 )
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  v30 = (_QWORD *)((char *)v9 + 56);
  v31 = *((_QWORD *)v9 + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)v9 + 56) )
    __fastfail(3u);
  *v27 = v31;
  *((_QWORD *)a2 + 4) = v30;
  *(_QWORD *)(v31 + 8) = v27;
  *v30 = v27;
  *a5 = a2;
  return 0LL;
}
