/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x180050CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 16));
}
