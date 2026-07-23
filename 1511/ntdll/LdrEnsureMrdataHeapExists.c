/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x1800551A8
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18007E2A0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18007FA60 (RtlInstallFunctionTableCallback.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

NTSTATUS LdrEnsureMrdataHeapExists()
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  void *v2; // rbx
  _DWORD *v3; // rax
  void *v4; // rdi
  void *v5; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] || LdrpMrdataHeap )
    return 0;
  BaseAddress = 0LL;
  RegionSize = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2u, BaseAddress, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = RtlAllocateHeap(Heap, 0, 4uLL);
      v4 = v3;
      v5 = v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1u);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (__int64)v4;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap(v2, 0, v4);
        v5 = v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return LdrpMrdataHeap == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
