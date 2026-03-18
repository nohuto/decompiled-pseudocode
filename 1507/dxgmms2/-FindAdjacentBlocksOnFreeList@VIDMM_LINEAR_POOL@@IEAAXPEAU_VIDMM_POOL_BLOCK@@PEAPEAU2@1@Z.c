/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0075BE0
 * Callers:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0076198 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  char *v4; // r10
  __int64 v5; // rdi
  char *v6; // rdx
  struct _VIDMM_POOL_BLOCK *v7; // rbx
  __int64 v8; // r11
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  VIDMM_LINEAR_POOL *v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // rax

  v4 = (char *)*((_QWORD *)a2 + 6);
  v5 = *((_QWORD *)a2 + 7);
  v6 = (char *)this + 72;
  while ( v4 != v6 && (char *)v5 != v6 )
  {
    v7 = (struct _VIDMM_POOL_BLOCK *)(v4 - 48);
    v4 = *(char **)v4;
    v8 = v5 - 48;
    v5 = *(_QWORD *)(v5 + 8);
    if ( ((*(_DWORD *)v7 - 3) & 0xFFFFFFFD) != 0 )
    {
      v10 = (_QWORD *)*((_QWORD *)v7 + 5);
      v9 = (_QWORD *)((char *)this + 40);
      *a4 = v7;
LABEL_11:
      if ( v10 == v9 )
        *a3 = 0LL;
      else
        *a3 = (struct _VIDMM_POOL_BLOCK *)(v10 - 4);
      return;
    }
    if ( ((*(_DWORD *)v8 - 3) & 0xFFFFFFFD) != 0 )
    {
      v11 = *(VIDMM_LINEAR_POOL **)(v8 + 32);
      *a3 = (struct _VIDMM_POOL_BLOCK *)v8;
      if ( v11 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      {
        v12 = (VIDMM_LINEAR_POOL *)((char *)v11 - 32);
        goto LABEL_17;
      }
LABEL_15:
      *a4 = 0LL;
      return;
    }
  }
  v9 = (_QWORD *)((char *)this + 40);
  if ( v4 == v6 )
  {
    *a4 = 0LL;
    v10 = (_QWORD *)*((_QWORD *)this + 6);
    goto LABEL_11;
  }
  *a3 = 0LL;
  if ( (_QWORD *)*v9 == v9 )
    goto LABEL_15;
  v12 = (struct _VIDMM_POOL_BLOCK *)(*v9 - 32LL);
LABEL_17:
  *a4 = v12;
}
