/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x1800051C8
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180072810 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
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
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (__int64)v4;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1LL);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1LL);
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
