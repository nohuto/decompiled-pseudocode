/*
 * XREFs of VerifierEtwUnregister @ 0x1406D0E34
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetEtwUnregister @ 0x1406C4074 (VfTargetEtwUnregister.c)
 */

NTSTATUS __fastcall VerifierEtwUnregister(REGHANDLE RegHandle)
{
  VfTargetEtwUnregister(RegHandle);
  return pXdvEtwUnregister(RegHandle);
}
