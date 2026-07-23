/*
 * XREFs of KiParkUmsThread @ 0x1401CC5D8
 * Callers:
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 * Callees:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     RtlXRestore @ 0x1400EAC88 (RtlXRestore.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140150BA0 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x140151080 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x140154410 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x140154430 (KeRestoreLegacyFloatingPointControlWord.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     KiUmsRestoreUch @ 0x140166380 (KiUmsRestoreUch.c)
 *     KiIsPrimaryPresent @ 0x1401CC4F0 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x14061B43C (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x14061BA0C (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x14061C814 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 SparePtr, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *Object; // r12
  __int64 v6; // rsi
  int v7; // eax
  char v8; // r13
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // rsp
  NTSTATUS updated; // esi
  __int64 v13; // r8
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v15; // [rsp+32h] [rbp+2h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp+8h]
  unsigned __int64 NpxState; // [rsp+38h] [rbp+8h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  EXCEPTION_RECORD ExitStatus; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+110h] [rbp+E0h] BYREF
  _DWORD v21[4]; // [rsp+C00h] [rbp+BD0h] BYREF
  _QWORD v22[2]; // [rsp+C10h] [rbp+BE0h] BYREF

  IsPrimaryPresent = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *(_QWORD *)Object;
  v7 = Object[20];
  if ( (v7 & 1) != 0 )
  {
    v8 = 1;
    Object[20] = v7 & 0xFFFFFFFE;
  }
  else
  {
    v8 = 0;
  }
  if ( !v8 && (*(_DWORD *)(v6 + 1264) & 0x40) == 0 )
  {
    *(_DWORD *)(v6 + 1264) |= 0x20u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v15 = CurrentIrql;
    IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL, a3);
    if ( IsPrimaryPresent )
    {
      _disable();
      goto LABEL_10;
    }
    __writecr8(CurrentIrql);
  }
  *(_DWORD *)(v6 + 1264) &= ~0x20u;
LABEL_10:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v21[0] = CurrentThread[1].CurrentRunTime;
    v21[1] = CurrentThread[1].KernelStack;
    v21[2] = *(_BYTE *)(SparePtr + 72) & 1 | (IsPrimaryPresent != 0 ? 2 : 0) | (v8 != 0 ? 4 : 0);
    v22[0] = v21;
    v22[1] = 12LL;
    EtwTraceKernelEvent((int)v22, 1, 0x40000080u, 0x1922u, 4196866);
  }
  if ( IsPrimaryPresent )
  {
    result = v15;
    __writecr8(v15);
    CurrentThread->MiscFlags &= ~0x10000u;
    return result;
  }
  v10 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
  if ( v10 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v20 = ((unsigned __int64)&v18 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
  --CurrentThread->SpecialApcDisable;
  updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
  if ( updated < 0 )
    goto LABEL_29;
  NpxState = CurrentThread->NpxState;
  CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)Object + 9) = &v20;
  Object[20] = Object[20] & 0xFFFFFFF9 | 4;
  CurrentThread->WaitBlock[3].SparePtr = 0LL;
  if ( v8 )
  {
    v18 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
    *(_QWORD *)(v18 + 1272) = 0LL;
  }
  else
  {
    LOBYTE(v13) = 1;
    updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v13);
  }
  if ( updated < 0 )
    goto LABEL_29;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  updated = KeWaitForSingleObject(Object + 12, Executive, 1, 0, 0LL);
  if ( updated != 192 )
  {
    --CurrentThread->SpecialApcDisable;
    Object[20] &= ~4u;
    SparePtr = (__int64)CurrentThread->WaitBlock[3].SparePtr;
    CurrentThread->NpxState = NpxState;
    if ( (*(_BYTE *)(SparePtr + 72) & 1) != 0 )
    {
      if ( MEMORY[0xFFFFF780000003E0] )
        RtlXRestore(*(_QWORD *)(SparePtr + 64), MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
      else
        _fxrstor(*(void **)(SparePtr + 64));
    }
    else
    {
      KeResetLegacyFloatingPointState();
      KeRestoreLegacyFloatingPointControlWord();
    }
    KiUmsRestoreUch(SparePtr);
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_30;
  }
  __writecr8(1uLL);
  KiDeliverApc(1, 0LL, 0LL);
  __writecr8(0LL);
LABEL_30:
  ExitStatus.ExceptionRecord = 0LL;
  ExitStatus.NumberParameters = 1;
  ExitStatus.ExceptionInformation[0] = (unsigned __int64)CurrentThread[1].KernelStack;
  ExitStatus.ExceptionCode = updated;
  ExitStatus.ExceptionFlags = 1;
  ExitStatus.ExceptionAddress = 0LL;
  KiDispatchException(&ExitStatus, *(_QWORD *)(SparePtr + 88), *(_QWORD *)(SparePtr + 80), 1, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
