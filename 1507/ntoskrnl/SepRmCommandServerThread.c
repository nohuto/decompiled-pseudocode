/*
 * XREFs of SepRmCommandServerThread @ 0x1405A7600
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140131C9C (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     PsIsHostSilo @ 0x14013A210 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x14017F150 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14024EF1C (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     SepRmCreateLogonSessionWrkr @ 0x14053C320 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x14053D650 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x14055C278 (SepRmCapUpdateWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140568974 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140568F58 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A774C (SepRmGlobalSaclSetWrkr.c)
 *     SepRmSetAuditEventWrkr @ 0x1405A789C (SepRmSetAuditEventWrkr.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x1405A7C34 (PoRequestShutdownEvent.c)
 *     SepRmCleanupRmLsaState @ 0x1406D0420 (SepRmCleanupRmLsaState.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1406D6438 (SepRmDeleteLogonSessionWrkr.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rbx
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // r14
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  char inited; // al
  struct _KTHREAD *v16; // rcx
  char v17; // bl
  bool v18; // si
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  PVOID PortContext; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT v24; // [rsp+60h] [rbp-A8h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+98h] [rbp-70h] BYREF
  int v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+298h] [rbp+190h] BYREF
  $1C37251571326AB4BADEA5CD0641E50F v29; // [rsp+2A0h] [rbp+198h]
  unsigned int MessageId; // [rsp+2B0h] [rbp+1A8h]

  SepRmLsaCallProcess = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject((PVOID)SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(PortHandle);
    PortHandle = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    *(_QWORD *)&ReceiveMessage.u1.s1.DataLength = 33554904LL;
    v2 = 0LL;
    v28 = 33554904LL;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
            v7 = PortContext;
            v2 = 0LL;
            if ( PortContext == (PVOID)-8LL )
              v7 = 0LL;
            PortContext = v7;
          }
          while ( v3 == -1073741813 || v3 == -1073741823 || v3 == -1073741281 );
          v8 = ReceiveMessage.u2.s2.Type & 0x7FFF;
          ReceiveMessage.u2.s2.Type = v8;
          if ( v8 != 1 )
            break;
          if ( (unsigned int)(v27 - 1) <= 8 )
          {
            v9 = PsAttachSiloToCurrentThread((__int64)v7, v4, v5, v6);
            ((void (__fastcall *)(__int64, __int64))SepRmCommandDispatch[v27])((__int64)&ReceiveMessage, (__int64)&v28);
            PsDetachSiloFromCurrentThread(v9);
            v2 = (_PORT_MESSAGE *)&v28;
            MessageId = ReceiveMessage.MessageId;
            v29 = ReceiveMessage.8;
          }
        }
        if ( v8 == 5 )
          break;
        if ( v8 == 10 )
          SepRmLsaConnectRequest(&ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)v7) )
      {
        SepRmAuditingEnabled = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeEvent(&v24, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140356BD0, 1u);
        qword_140356C70 = (__int64)&Event;
        v12 = SepLsaAuditQueueInfo != (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_140356BD0);
        v13 = KeGetCurrentThread();
        v14 = v13->KernelApcDisable + 1;
        v13->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
          && !v13->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v16 = KeGetCurrentThread();
        v17 = inited;
        --v16->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140356AD0, 1u);
        qword_140356B70 = (__int64)&v24;
        v18 = SepLsaDeletedLogonQueueInfo != (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_140356AD0);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v12 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v17 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( v18 )
          KeWaitForSingleObject(&v24, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        v7 = PortContext;
        PortHandle = 0LL;
      }
      PsGetMonitorContextServerSilo(SeRmSiloMonitor, v7, &v22, v10);
      SepRmCleanupRmLsaState(v22);
      PsDereferenceMonitorContextServerSilo(v22);
    }
    while ( !PsIsHostSilo((__int64)PortContext) );
  }
}
