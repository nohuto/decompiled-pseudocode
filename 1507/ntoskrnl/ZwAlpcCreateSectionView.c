/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14017FF30
 * Callers:
 *     VfZwAlpcCreateSectionView @ 0x14075517C (VfZwAlpcCreateSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
