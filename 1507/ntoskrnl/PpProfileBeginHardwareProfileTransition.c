/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x14068D984
 * Callers:
 *     PipProcessStartPhase1 @ 0x14045E75C (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
