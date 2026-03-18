/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x1407398E4
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateErrorLogEntry @ 0x140159BD4 (IoAllocateErrorLogEntry.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

PVOID __fastcall VerifierIoAllocateErrorLogEntry(PVOID IoObject, UCHAR a2)
{
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  else
    return pXdvIoAllocateErrorLogEntry(IoObject, a2);
}
