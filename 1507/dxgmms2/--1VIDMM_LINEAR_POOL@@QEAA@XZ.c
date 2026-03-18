/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0075AA8
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0010FE0 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0075F58 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rdi
  struct _VIDMM_POOL_BLOCK *v4; // rdx
  __int64 **v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rcx
  void ***v11; // rdi
  void **v12; // rsi
  void ***v13; // rax

  v1 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_POOL_BLOCK *)(v3 - 32);
    v3 = *(char **)v3;
    VIDMM_LINEAR_POOL::Free(this, v4);
  }
  v5 = (__int64 **)((char *)this + 40);
  if ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    v8 = (_QWORD *)((char *)this + 72);
    v9 = (__int64 *)*((_QWORD *)this + 9);
    v10 = *v9;
    if ( (VIDMM_LINEAR_POOL *)v9[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72) || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v6 - 4));
  }
  v11 = (void ***)((char *)this + 104);
  while ( *v11 != (void **)v11 )
  {
    v12 = *v11;
    v13 = (void ***)**v11;
    if ( (*v11)[1] != v11 || v13[1] != v12 )
      __fastfail(3u);
    *v11 = (void **)v13;
    v13[1] = (void **)v11;
    operator delete(v12[2]);
    operator delete(v12);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
