/*
 * XREFs of SepRmCommandServerThread @ 0x14053C31C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x1400F46BC (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x140150780 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x140200060 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x1404BCEC0 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1404BDA68 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x1404C5D68 (SepRmCapUpdateWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1404F4548 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1404F4B6C (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14053C468 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmSetAuditEventWrkr @ 0x14053C5B4 (SepRmSetAuditEventWrkr.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x14053C94C (PoRequestShutdownEvent.c)
 *     SepRmCleanupRmLsaState @ 0x14064D2C0 (SepRmCleanupRmLsaState.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14065458C (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1406545B4 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
  _QWORD *v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  char inited; // al
  struct _KTHREAD *v10; // rcx
  char v11; // si
  bool v12; // r14
  PVOID PortContext; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+98h] [rbp-70h] BYREF
  int v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+298h] [rbp+190h] BYREF
  $899616CA535F31E7B2C291907A0FBA2E v21; // [rsp+2A0h] [rbp+198h]
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
    v20 = 33554904LL;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
            v4 = PortContext;
            v2 = 0LL;
            if ( PortContext == (PVOID)-8LL )
              v4 = 0LL;
            PortContext = v4;
          }
          while ( v3 == -1073741813 || v3 == -1073741823 || v3 == -1073741281 );
          v5 = ReceiveMessage.u2.s2.Type & 0x7FFF;
          ReceiveMessage.u2.s2.Type = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(v19 - 1) <= 9 )
          {
            v6 = PsAttachSiloToCurrentThread(v4);
            ((void (__fastcall *)(__int64, __int64))SepRmCommandDispatch[v19])((__int64)&ReceiveMessage, (__int64)&v20);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (_PORT_MESSAGE *)&v20;
            MessageId = ReceiveMessage.MessageId;
            v21 = ReceiveMessage.8;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest(&ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)v4) )
      {
        SepRmAuditingEnabled = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeEvent(&v16, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_1403068B0, 1u);
        qword_140306950 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo != (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_1403068B0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_1403067B0, 1u);
        qword_140306850 = (__int64)&v16;
        v12 = SepLsaDeletedLogonQueueInfo != (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_1403067B0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v8 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( v12 )
          KeWaitForSingleObject(&v16, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        v4 = PortContext;
        PortHandle = 0LL;
      }
      PsGetMonitorContextServerSilo(SeRmSiloMonitor, v4, &v14);
      SepRmCleanupRmLsaState(v14);
      PsDereferenceMonitorContextServerSilo(v14);
    }
    while ( !PsIsHostSilo((__int64)PortContext) );
  }
}
