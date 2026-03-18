/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0065214
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0065840 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
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
  char *v7; // r11
  char v8; // si
  __int64 v9; // rbx
  char v10; // r11
  VIDMM_LINEAR_POOL *v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  v4 = (char *)*((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a2 + 6);
  v6 = (char *)this + 72;
  while ( 1 )
  {
    if ( v4 == v6 || (char *)v5 == v6 )
    {
      v14 = (_QWORD *)((char *)this + 40);
      if ( v4 == v6 )
      {
        *a4 = 0LL;
        v13 = (_QWORD *)*((_QWORD *)this + 6);
        goto LABEL_12;
      }
      *a3 = 0LL;
      if ( (_QWORD *)*v14 != v14 )
      {
        v12 = (struct _VIDMM_POOL_BLOCK *)(*v14 - 24LL);
        goto LABEL_10;
      }
LABEL_14:
      *a4 = 0LL;
      return;
    }
    v7 = v4 - 40;
    v4 = *(char **)v4;
    v8 = v7[56];
    v9 = v5 - 40;
    v5 = *(_QWORD *)(v5 + 8);
    if ( ((v8 - 3) & 0xFC) != 0 || v8 == 4 )
      break;
    v10 = *(_BYTE *)(v9 + 56);
    if ( ((v10 - 3) & 0xFC) != 0 || v10 == 4 )
    {
      v11 = *(VIDMM_LINEAR_POOL **)(v9 + 24);
      *a3 = (struct _VIDMM_POOL_BLOCK *)v9;
      if ( v11 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      {
        v12 = (VIDMM_LINEAR_POOL *)((char *)v11 - 24);
LABEL_10:
        *a4 = v12;
        return;
      }
      goto LABEL_14;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)v7 + 4);
  v14 = (_QWORD *)((char *)this + 40);
  *a4 = (struct _VIDMM_POOL_BLOCK *)v7;
LABEL_12:
  if ( v13 == v14 )
    *a3 = 0LL;
  else
    *a3 = (struct _VIDMM_POOL_BLOCK *)(v13 - 3);
}
