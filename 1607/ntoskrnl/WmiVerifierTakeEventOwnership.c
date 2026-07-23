/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14022478C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x14071D0D8 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
