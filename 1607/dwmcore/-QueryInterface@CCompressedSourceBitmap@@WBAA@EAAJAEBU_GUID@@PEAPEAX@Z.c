/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILCOMBase *)(a1 - 256), a2, a3);
}
