/*
 * XREFs of ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098E10
 * Callers:
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::IsMovableResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  __int64 v1; // rax

  return a1
      && (**((_DWORD **)a1 + 63) & 0x200) == 0
      && (*((_DWORD *)a1 + 19) & 0x100) == 0
      && ((v1 = *((_QWORD *)a1 + 13)) == 0 || (*(_BYTE *)(v1 + 32) & 1) == 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 16LL) + 384LL) + 128LL) <= 1u;
}
