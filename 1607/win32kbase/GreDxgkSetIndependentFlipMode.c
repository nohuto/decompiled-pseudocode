/*
 * XREFs of GreDxgkSetIndependentFlipMode @ 0x1C00C3C50
 * Callers:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00F3D90 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z @ 0x1C00F3E30 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00F4010 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDxgkSetIndependentFlipMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C011B6D0)(a1, a2, a3, a4);
}
