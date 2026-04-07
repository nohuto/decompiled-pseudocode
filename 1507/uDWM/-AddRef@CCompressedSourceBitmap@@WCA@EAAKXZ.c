/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x18004A670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 32));
}
