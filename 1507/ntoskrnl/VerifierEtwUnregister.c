/*
 * XREFs of VerifierEtwUnregister @ 0x1407549FC
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetEtwUnregister @ 0x140745928 (VfTargetEtwUnregister.c)
 */

NTSTATUS __fastcall VerifierEtwUnregister(REGHANDLE RegHandle)
{
  VfTargetEtwUnregister(RegHandle);
  return pXdvEtwUnregister(RegHandle);
}
