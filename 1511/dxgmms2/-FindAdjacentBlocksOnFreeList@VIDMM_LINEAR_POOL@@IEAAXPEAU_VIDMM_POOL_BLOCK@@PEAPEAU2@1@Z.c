/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0058B54
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0059094 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
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
  struct _VIDMM_POOL_BLOCK *v7; // r11
  __int64 v8; // rbx
  VIDMM_LINEAR_POOL *v9; // rdx
  struct _VIDMM_POOL_BLOCK *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = (char *)*((_QWORD *)a2 + 6);
  v5 = *((_QWORD *)a2 + 7);
  v6 = (char *)this + 72;
  while ( 1 )
  {
    if ( v4 == v6 || (char *)v5 == v6 )
    {
      v12 = (_QWORD *)((char *)this + 40);
      if ( v4 == v6 )
      {
        *a4 = 0LL;
        v11 = (_QWORD *)*((_QWORD *)this + 6);
        goto LABEL_12;
      }
      *a3 = 0LL;
      if ( (_QWORD *)*v12 != v12 )
      {
        v10 = (struct _VIDMM_POOL_BLOCK *)(*v12 - 32LL);
        goto LABEL_10;
      }
LABEL_14:
      *a4 = 0LL;
      return;
    }
    v7 = (struct _VIDMM_POOL_BLOCK *)(v4 - 48);
    v4 = *(char **)v4;
    v8 = v5 - 48;
    v5 = *(_QWORD *)(v5 + 8);
    if ( ((*(_DWORD *)v7 - 3) & 0xFFFFFFFC) != 0 || *(_DWORD *)v7 == 4 )
      break;
    if ( ((*(_DWORD *)v8 - 3) & 0xFFFFFFFC) != 0 || *(_DWORD *)v8 == 4 )
    {
      v9 = *(VIDMM_LINEAR_POOL **)(v8 + 32);
      *a3 = (struct _VIDMM_POOL_BLOCK *)v8;
      if ( v9 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      {
        v10 = (VIDMM_LINEAR_POOL *)((char *)v9 - 32);
LABEL_10:
        *a4 = v10;
        return;
      }
      goto LABEL_14;
    }
  }
  v11 = (_QWORD *)*((_QWORD *)v7 + 5);
  v12 = (_QWORD *)((char *)this + 40);
  *a4 = v7;
LABEL_12:
  if ( v11 == v12 )
    *a3 = 0LL;
  else
    *a3 = (struct _VIDMM_POOL_BLOCK *)(v11 - 4);
}
