/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x180051380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 48));
}
