/*
 * XREFs of ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00BBFA8
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LogCodePointPacket(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  return DrvDxgkLogCodePointPacket(a1, a2, a3, a4);
}
