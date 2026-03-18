/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14025C0B8
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140754AF8 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
