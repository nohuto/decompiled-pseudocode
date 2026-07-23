/*
 * XREFs of VerifierIoAllocateDriverObjectExtension @ 0x140705424
 * Callers:
 *     <none>
 * Callees:
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateDriverObjectExtension(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  if ( !(unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return pXdvIoAllocateDriverObjectExtension(a1, a2, a3, a4);
  *a4 = 0LL;
  return 3221225626LL;
}
