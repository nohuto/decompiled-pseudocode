/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x140424A60
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14053B60C (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        char a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  volatile signed __int64 *v13; // r10
  int v14; // r11d
  volatile signed __int64 *v15; // rdi
  _DWORD *HandleExtraInfo; // rax
  __int64 v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  __int16 v20; // ax
  signed __int64 v22; // rsi
  __int64 v23; // rax
  signed __int64 BugCheckParameter4; // rsi
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF

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
      ObpPushStackInfo(a2 - 48, 1, 1u, a5);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(a2 - 48));
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, a2, 0x10uLL, BugCheckParameter4);
    *a6 = a2;
    return 0LL;
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
      v12 = ExMapHandleToPointer(a3);
      v13 = (volatile signed __int64 *)v12;
      if ( v12 )
      {
        v14 = *(_DWORD *)(v12 + 8) & 0x1FFFFFF;
        v15 = (volatile signed __int64 *)((*(__int64 *)v12 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
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
        v19 = _InterlockedIncrement64(v15);
        if ( v19 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v15 + 6), 0x10uLL, v19);
        _InterlockedExchangeAdd64(v13, 1uLL);
        _InterlockedOr(v25, 0);
        if ( *(_QWORD *)(a3 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
        v20 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)v15, 1, 1u, a5);
        *a6 = v15 + 6;
        return 0LL;
      }
      v23 = (unsigned __int16)++CurrentThread->KernelApcDisable;
      if ( !(_WORD)v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225480LL;
    }
    v18 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0;
    if ( !v18 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].WriteOperationCount, 1, 1u, a5);
    v22 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
    if ( v22 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v22);
    *a6 = CurrentThread;
    return 0LL;
  }
}
