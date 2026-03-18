/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C009ECC4
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0020240 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00652DC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  char *v6; // rdi
  struct _VIDMM_POOL_BLOCK *v7; // rdx
  __int64 **v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // r8
  __int64 v13; // rcx
  void ***v14; // rdi
  void **v15; // rsi
  void ***v16; // rax

  v4 = (char *)this + 120;
  v6 = (char *)*((_QWORD *)this + 15);
  while ( v6 != v4 )
  {
    v7 = (struct _VIDMM_POOL_BLOCK *)(v6 - 24);
    v6 = *(char **)v6;
    VIDMM_LINEAR_POOL::Free(this, v7, a3, a4);
  }
  v8 = (__int64 **)((char *)this + 40);
  if ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    v11 = (_QWORD *)((char *)this + 72);
    v12 = (__int64 *)*((_QWORD *)this + 9);
    v13 = *v12;
    if ( (VIDMM_LINEAR_POOL *)v12[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72) || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v9 - 3));
  }
  v14 = (void ***)((char *)this + 104);
  while ( *v14 != (void **)v14 )
  {
    v15 = *v14;
    v16 = (void ***)**v14;
    if ( (*v14)[1] != v14 || v16[1] != v15 )
      __fastfail(3u);
    *v14 = (void **)v16;
    v16[1] = (void **)v14;
    operator delete[](v15[2]);
    operator delete(v15);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
