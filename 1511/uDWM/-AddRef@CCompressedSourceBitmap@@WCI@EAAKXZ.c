/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180050D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 40));
}
