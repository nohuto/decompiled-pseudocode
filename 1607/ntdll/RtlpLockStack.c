/*
 * XREFs of RtlpLockStack @ 0x1800023BC
 * Callers:
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x1800A8430 (NtLockVirtualMemory.c)
 */

NTSTATUS RtlpLockStack()
{
  struct _TEB *v0; // rdx
  unsigned __int64 v1; // r8
  ULONG_PTR v2; // r9
  unsigned __int64 i; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  v1 = (unsigned __int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v2 = (ULONG_PTR)v0->NtTib.StackBase - v1;
  for ( i = (unsigned __int64)v0->NtTib.StackBase - 4096; i >= v1; i -= 4096LL )
    ;
  BaseAddress = (char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  RegionSize = v2;
  return NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
}
