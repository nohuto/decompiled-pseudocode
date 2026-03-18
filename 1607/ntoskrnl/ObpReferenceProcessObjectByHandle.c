/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x14050D1B0
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1404CA3FC (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x1400D16D0 (ObpIncrPointerCount.c)
 *     ExLockHandleTableEntry @ 0x1400D1730 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140451390 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD554 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rbx
  __int64 v14; // r8
  int v15; // r10d
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 result; // rax
  bool v20; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v22[14]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    v20 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v20 )
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
      v8 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_2:
      --CurrentThread->KernelApcDisable;
      if ( (v8 & 0x3FC) != 0 )
      {
        v12 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a3, v8);
        v13 = v12;
        if ( v12 )
        {
          if ( ExLockHandleTableEntry(a3, v12) )
          {
            v15 = v13[1] & 0x1FFFFFF;
            v16 = (volatile signed __int64 *)((*(__int64 *)v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( *(_DWORD *)(a3 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v8, v14)) != 0LL )
              v17 = *HandleExtraInfo;
            else
              v17 = 0LL;
            *a8 = v17;
            v18 = ((__int64)*(unsigned int *)v13 >> 17) & 7;
            a7[1] = v15;
            if ( (v13[1] & 0x2000000) != 0 )
              LOBYTE(v18) = v18 | 8;
            *a7 = v18 & 0xF;
            ObpIncrPointerCount(v16);
            _InterlockedExchangeAdd64(v13, 1uLL);
            _InterlockedOr(v22, 0);
            if ( *(_QWORD *)(a3 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v16, 1, 1u, a5);
            *a6 = (struct _KTHREAD *)(v16 + 6);
            return 0LL;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
    v20 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v20 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].WriteOperationCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].WriteOperationCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
