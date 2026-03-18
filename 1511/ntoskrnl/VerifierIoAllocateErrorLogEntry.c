/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x1406B93C8
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateErrorLogEntry @ 0x1401260DC (IoAllocateErrorLogEntry.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

PVOID __fastcall VerifierIoAllocateErrorLogEntry(PVOID IoObject, UCHAR a2)
{
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  else
    return pXdvIoAllocateErrorLogEntry(IoObject, a2);
}
