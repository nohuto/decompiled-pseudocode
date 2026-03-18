/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x18009B760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 256));
}
