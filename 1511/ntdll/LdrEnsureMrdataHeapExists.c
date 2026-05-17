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

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  if ( !qword_1801552F0 || LdrpMrdataHeap )
    return 0LL;
  v19 = 0LL;
  v20 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v19, 0LL, &v20, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2LL, v19, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v5 = (unsigned __int64)v3;
      v6 = v2;
      if ( v3 )
      {
        LOBYTE(v4) = 1;
        *v3 = 0;
        RtlProtectHeap(v2, v4);
        LdrProtectMrdata(0, v7, v8, v9);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v5;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1, v13, v14, v15);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1, v16, v17, v18);
        RtlProtectHeap(v2, 0LL);
        RtlFreeHeap(v2, 0, v5);
        v6 = v2;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory(-1LL, &v19, &v20, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
