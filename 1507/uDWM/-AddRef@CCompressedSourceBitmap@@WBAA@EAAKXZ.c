/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x18004A640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 256));
}
