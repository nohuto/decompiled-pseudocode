/*
 * XREFs of ?IsOpaque@CCommonBrushBitmap@@SA_NAEBU1@@Z @ 0x18015806C
 * Callers:
 *     ?IsOpaque@CCommonBrushParameters@@SA_NAEBU1@@Z @ 0x1801580B8 (-IsOpaque@CCommonBrushParameters@@SA_NAEBU1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016204 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCommonBrushBitmap::IsOpaque(const struct CCommonBrushBitmap *a1)
{
  __int64 v2; // rcx
  const struct D2D_MATRIX_3X2_F *v3; // rdx

  v2 = *(_QWORD *)a1;
  return v2
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2)
      && (*((_DWORD *)a1 + 13) != 1 || !*((_BYTE *)a1 + 104))
      && D2DMatrixHelper::Is2DAxisAlignedPreserving((const struct CCommonBrushBitmap *)((char *)a1 + 24), v3);
}
