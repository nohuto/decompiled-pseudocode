/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180081D00
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F460 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !qword_180163310 || LdrpMrdataHeap )
    return 0LL;
  v9 = 0LL;
  v10 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v10, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2, v9, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4uLL);
      v4 = (unsigned __int64)v3;
      v5 = v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap(v2, 0, v4);
        v5 = v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
