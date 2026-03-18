/*
 * XREFs of ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z @ 0x1C009AB80
 * Callers:
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 * Callees:
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098E64 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdatePendingResourceReserveCB(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2)
{
  __int64 v3; // rax

  *((_QWORD *)a1 + 26) = *((_QWORD *)a1 + 19);
  v3 = *((_QWORD *)a1 + 17);
  *((_QWORD *)a1 + 28) = v3;
  *((_QWORD *)a1 + 27) = a2;
  *(_BYTE *)(v3 + 464) = 1;
  if ( VIDMM_SEGMENT::IsNonOverlappingResourceCB(a1) )
    *(_BYTE *)(*((_QWORD *)a1 + 17) + 465LL) = 1;
}
