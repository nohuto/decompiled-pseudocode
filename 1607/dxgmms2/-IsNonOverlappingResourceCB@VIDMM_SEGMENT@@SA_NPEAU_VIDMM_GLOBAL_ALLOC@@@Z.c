/*
 * XREFs of ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098E64
 * Callers:
 *     ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z @ 0x1C009AB80 (-UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_SEGMENT::IsNonOverlappingResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  char *v2; // r8
  char *v3; // rcx
  char *v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdx
  int *v7; // rax

  if ( *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 63) + 16LL) + 8LL) > 0 )
    return 1;
  v2 = (char *)a1 + 296;
  v3 = (char *)*((_QWORD *)a1 + 37);
  while ( v3 != v2 )
  {
    v4 = v3 - 56;
    v3 = *(char **)v3;
    v5 = v4 + 40;
    v6 = (_QWORD *)*((_QWORD *)v4 + 5);
    while ( v6 != v5 )
    {
      v7 = (int *)(v6 - 5);
      v6 = (_QWORD *)*v6;
      if ( v7[26] > 0 )
        return 1;
    }
  }
  return 0;
}
