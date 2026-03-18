/*
 * XREFs of PspExitProcess @ 0x14042257C
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400101E8 (ExGetCallBackBlockContext.c)
 *     PfpLogApplicationEvent @ 0x14001A7CC (PfpLogApplicationEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCleanTimerResolutionRequest @ 0x140130474 (ExCleanTimerResolutionRequest.c)
 *     PfSnEndProcessTrace @ 0x14044540C (PfSnEndProcessTrace.c)
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     DbgkFlushErrorPort @ 0x140553854 (DbgkFlushErrorPort.c)
 */

void __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // si
  signed __int64 *v6; // rbp
  __int64 v7; // r15
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // r14
  __int16 v10; // ax
  void *v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v14)(__int64, _QWORD, _QWORD); // rax

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2, 3LL);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2);
    --CurrentThread->KernelApcDisable;
    v5 = (PspNotifyEnableMask & 4) != 0;
    if ( (PspNotifyEnableMask & 2) != 0 || (PspNotifyEnableMask & 4) != 0 )
    {
      v6 = (signed __int64 *)&PspCreateProcessNotifyRoutine;
      v7 = 64LL;
      do
      {
        v8 = ExReferenceCallBackBlock(v6);
        v9 = v8;
        if ( v8 )
        {
          if ( ExGetCallBackBlockContext((__int64)v8) )
          {
            if ( v5 )
            {
              v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v12);
              v14(a2, *(_QWORD *)(a2 + 744), 0LL);
            }
          }
          else
          {
            v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v12);
            v13(*(_QWORD *)(a2 + 992), *(_QWORD *)(a2 + 744), 0LL);
          }
          ExDereferenceCallBackBlock(v6, v9);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v11 = *(void **)(a2 + 1112);
  if ( !v11 )
    goto LABEL_11;
  if ( v11 != (void *)1 )
  {
    ObfDereferenceObject(v11);
LABEL_11:
    *(_QWORD *)(a2 + 1112) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 772) < 0 )
      ExCleanTimerResolutionRequest((__int64)v11);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2LL);
  }
}
