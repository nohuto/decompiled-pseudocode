/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180050D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 24));
}
