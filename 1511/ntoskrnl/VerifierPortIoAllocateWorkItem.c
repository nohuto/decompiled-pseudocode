/*
 * XREFs of VerifierPortIoAllocateWorkItem @ 0x1406B9844
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierPortIoAllocateWorkItem(__int64 a1, __int64 a2)
{
  return pXdvIoAllocateWorkItem(a1, a2, (__int64 (*)(void))IovAllocateWorkItem);
}
