/*
 * XREFs of VerifierIoAllocateWorkItem @ 0x140705598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  return pXdvIoAllocateWorkItem(a1, retaddr, (__int64 (*)(void))IovAllocateWorkItem);
}
