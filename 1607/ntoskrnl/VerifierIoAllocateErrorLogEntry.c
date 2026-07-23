/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x140705484
 * Callers:
 *     <none>
 * Callees:
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1, char a2)
{
  __int64 v4; // rdx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v4) = a2;
  return pXdvIoAllocateErrorLogEntry(a1, v4);
}
