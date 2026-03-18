/*
 * XREFs of ZwAlpcCreateSectionView @ 0x140151560
 * Callers:
 *     VfZwAlpcCreateSectionView @ 0x1406D15B4 (VfZwAlpcCreateSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
