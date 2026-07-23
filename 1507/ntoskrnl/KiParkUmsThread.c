/*
 * XREFs of KiParkUmsThread @ 0x14020B7B4
 * Callers:
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlXRestore @ 0x140126714 (RtlXRestore.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14017F570 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x14017FA50 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x140182D90 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x140182DB0 (KeRestoreLegacyFloatingPointControlWord.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     KiUmsRestoreUch @ 0x140194D40 (KiUmsRestoreUch.c)
 *     KiIsPrimaryPresent @ 0x14020B6B0 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x14069A590 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x14069B398 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 SparePtr)
{
  struct _KTHREAD *CurrentThread; // rbx
  _DWORD *Object; // r12
  __int64 v4; // rsi
  int v5; // eax
  char v6; // r13
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  void *v9; // rsp
  NTSTATUS updated; // esi
  __int64 v11; // r8
  __int16 v12; // ax
  __int16 v13; // ax
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
  v4 = *(_QWORD *)Object;
  v5 = Object[20];
  if ( (v5 & 1) != 0 )
  {
    v6 = 1;
    Object[20] = v5 & 0xFFFFFFFE;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 && (*(_DWORD *)(v4 + 1264) & 0x40) == 0 )
  {
    *(_DWORD *)(v4 + 1264) |= 0x20u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v15 = CurrentIrql;
    IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL);
    if ( IsPrimaryPresent )
    {
      _disable();
      goto LABEL_10;
    }
    __writecr8(CurrentIrql);
  }
  *(_DWORD *)(v4 + 1264) &= ~0x20u;
LABEL_10:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v21[0] = CurrentThread[1].CurrentRunTime;
    v21[1] = CurrentThread[1].KernelStack;
    v21[2] = *(_BYTE *)(SparePtr + 72) & 1 | (IsPrimaryPresent != 0 ? 2 : 0) | (v6 != 0 ? 4 : 0);
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
  v8 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
  if ( v8 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v20 = ((unsigned __int64)&v18 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
  --CurrentThread->SpecialApcDisable;
  updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
  if ( updated < 0 )
    goto LABEL_32;
  NpxState = CurrentThread->NpxState;
  CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)Object + 9) = &v20;
  Object[20] = Object[20] & 0xFFFFFFF9 | 4;
  CurrentThread->WaitBlock[3].SparePtr = 0LL;
  if ( v6 )
  {
    v18 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
    *(_QWORD *)(v18 + 1272) = 0LL;
  }
  else
  {
    LOBYTE(v11) = 1;
    updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v11);
  }
  if ( updated < 0 )
    goto LABEL_32;
  v12 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
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
LABEL_32:
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_35;
  }
  __writecr8(1uLL);
  KiDeliverApc(1, 0, 0LL);
  __writecr8(0LL);
LABEL_35:
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
