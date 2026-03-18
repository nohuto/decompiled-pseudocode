/*
 * XREFs of PspChargeJobWakeCounter @ 0x140417810
 * Callers:
 *     PopSetSpecialRequest @ 0x140409CAC (PopSetSpecialRequest.c)
 *     PopClearSpecialRequest @ 0x14040A1E8 (PopClearSpecialRequest.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     PopDisablePowerExecutionRequest @ 0x1404E61DC (PopDisablePowerExecutionRequest.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     PopEnablePowerExecutionRequest @ 0x140556B0C (PopEnablePowerExecutionRequest.c)
 *     PsChargeProcessWakeCounter @ 0x1405572F4 (PsChargeProcessWakeCounter.c)
 *     PsReleaseProcessWakeCounter @ 0x14055A9FC (PsReleaseProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406C00C8 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspSendWakeNotification @ 0x140417AA0 (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1406E41D8 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        _QWORD *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // edi
  _QWORD *v11; // r14
  char *v12; // rbx
  volatile signed __int64 *v13; // rax
  signed __int64 v14; // rdi
  int v15; // edi
  __int16 v16; // ax
  bool v17; // r14
  char v18; // al
  int v19; // [rsp+90h] [rbp+8h]
  unsigned int v20; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A8h] [rbp+20h]

  v19 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v9 = a3;
  v22 = 0LL;
  v11 = Object;
  v12 = (char *)Object;
  v20 = 1 << a3;
  if ( (a5 & 1) != 0 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    v22 = Object[134];
    ExAcquireResourceSharedLite((PERESOURCE)(v22 + 56), 1u);
    while ( v22 != v11[134] )
    {
      ExReleaseResourceLite((PERESOURCE)(v22 + 56));
      v22 = v11[134];
      ExAcquireResourceSharedLite((PERESOURCE)(v22 + 56), 1u);
    }
  }
  while ( 1 )
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v12 + 56), 1u);
    v13 = (volatile signed __int64 *)((a5 & 4) != 0 ? v12 + 936 : &v12[8 * v9 + 896]);
    v14 = a4 + _InterlockedExchangeAdd64(v13, a4);
    if ( (a5 & 4) != 0 )
    {
      if ( *((_DWORD *)v12 + 216) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        v15 = a3;
        if ( (xmmword_1403D1290 & 0x200) != 0 )
          EtwTraceWakeCounter((_DWORD)v11, a3, 0, a6, a7);
      }
      else
      {
        v15 = a3;
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
    }
    else
    {
      v17 = (*((_DWORD *)v12 + 324) & 0x800) != 0;
      if ( (*((_DWORD *)v12 + 324) & 0x800) != 0 && !v14 && (HIDWORD(*((_QWORD *)v12 + 118)) & v20) == 0 )
      {
        v17 = 0;
        _InterlockedOr((volatile signed __int32 *)v12 + 238, v20);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
      if ( v17 )
      {
        v18 = 0;
        if ( a4 > 0 )
          v18 = 6;
        if ( (a5 & 1) != 0 )
          v18 |= 1u;
        v15 = a3;
        PspSendWakeNotification(v12, v18);
      }
      else
      {
        v15 = a3;
      }
      LODWORD(v11) = v19;
    }
    v12 = (char *)*((_QWORD *)v12 + 133);
    if ( v12 == a2 || (*((_DWORD *)v12 + 324) & 0x1000) == 0 )
      break;
    v9 = a3;
  }
  if ( (a5 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v22 + 56));
    if ( CurrentThread )
    {
      v16 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( (xmmword_1403D1290 & 0x2000) != 0 && (a5 & 4) == 0 )
    EtwTraceWakeCounter((_DWORD)v11, v15, a4, a6, a7);
}
