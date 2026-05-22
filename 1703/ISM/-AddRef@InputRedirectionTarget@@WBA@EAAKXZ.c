/*
 * XREFs of ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x180005580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionTarget::AddRef(__int64 a1)
{
  return PTPProcessor::AddRef((PTPProcessor *)(a1 - 16));
}
