/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180051330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 256));
}
