/*
 * XREFs of VerifierKeWaitForSingleObjectNoReboot @ 0x1406C6958
 * Callers:
 *     <none>
 * Callees:
 *     ViKeWaitForSingleObjectCommon @ 0x1406C730C (ViKeWaitForSingleObjectCommon.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObjectNoReboot(__int64 a1)
{
  return ViKeWaitForSingleObjectCommon(a1);
}
