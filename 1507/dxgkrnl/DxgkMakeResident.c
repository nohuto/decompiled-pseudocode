/*
 * XREFs of DxgkMakeResident @ 0x1C0145BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1, __int64 a2, __int64 a3)
{
  return DxgkMakeResidentInternal(a1, 1, a3);
}
