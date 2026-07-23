/*
 * XREFs of VerifierEtwUnregister @ 0x14071CFDC
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetEtwUnregister @ 0x140710144 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  VfTargetEtwUnregister(a1);
  return pXdvEtwUnregister(a1);
}
