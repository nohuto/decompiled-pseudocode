/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14020CDF4
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1406D0F30 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
