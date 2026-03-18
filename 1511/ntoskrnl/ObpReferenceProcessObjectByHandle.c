/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x140424D60
 * Callers:
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14047D164 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v11; // rsi
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rbx
  int v14; // r10d
  volatile signed __int64 *v15; // rdi
  _DWORD *HandleExtraInfo; // rax
  __int64 v17; // rdx
  bool v18; // zf
  __int64 result; // rax
  signed __int32 v20[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = a1;
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    v18 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0;
    if ( !v18 )
      ObpPushStackInfo((__int64)&a2[-1].WriteOperationCount, 1, 1u, a5);
    ObpIncrPointerCount(&a2[-1].WriteOperationCount);
    result = 0LL;
    *a6 = a2;
  }
  else
  {
    if ( a1 != -2LL )
    {
      if ( a4 )
        return 3221225480LL;
      a3 = ObpKernelHandleTable;
      v11 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_2:
      --CurrentThread->KernelApcDisable;
      if ( (v11 & 0x3FC) != 0 )
      {
        v12 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a3, v11);
        v13 = v12;
        if ( v12 )
        {
          if ( ExLockHandleTableEntry(a3, v12) )
          {
            v14 = v13[1] & 0x1FFFFFF;
            v15 = (volatile signed __int64 *)((*(__int64 *)v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( *(_DWORD *)(a3 + 4) )
              HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a3, v11);
            else
              HandleExtraInfo = 0LL;
            v17 = ((__int64)*(unsigned int *)v13 >> 17) & 7;
            v18 = (v13[1] & 0x2000000) == 0;
            a7[1] = v14;
            if ( !v18 )
              LOBYTE(v17) = v17 | 8;
            *a7 = v17 & 0xF;
            if ( HandleExtraInfo )
              *a8 = *HandleExtraInfo;
            else
              *a8 = 0;
            ObpIncrPointerCount(v15);
            _InterlockedExchangeAdd64(v13, 1uLL);
            _InterlockedOr(v20, 0);
            if ( *(_QWORD *)(a3 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v15, 1, 1u, a5);
            *a6 = (struct _KTHREAD *)(v15 + 6);
            return 0LL;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
    v18 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0;
    if ( !v18 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].WriteOperationCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].WriteOperationCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
