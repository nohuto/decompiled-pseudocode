/*
 * XREFs of SepRmCommandServerThread @ 0x14056BA4C
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x14015A350 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x140219248 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmLsaConnectRequest @ 0x14056BF00 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x14056C184 (PoRequestShutdownEvent.c)
 *     SepRmCleanupRmLsaState @ 0x14068CB90 (SepRmCleanupRmLsaState.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
  void *v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char inited; // al
  struct _KTHREAD *v13; // rcx
  char v14; // si
  bool v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *ServerSiloGlobals; // rax
  PVOID PortContext; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Object; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT v23; // [rsp+70h] [rbp-98h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+B0h] [rbp-58h]
  _DWORD v26[2]; // [rsp+288h] [rbp+180h] BYREF
  $7CBBF446B42CD89E9CE13B91FE0381B0 v27; // [rsp+290h] [rbp+188h]
  unsigned int MessageId; // [rsp+2A0h] [rbp+198h]

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
    ReceiveMessage.u2.ZeroInit = 0;
    v26[1] = 0;
    v2 = 0LL;
    ReceiveMessage.u1.Length = 33554904;
    v26[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            do
            {
              v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
              v2 = 0LL;
            }
            while ( v3 == -1073741813 );
          }
          while ( v3 == -1073741823 || v3 == -1073741281 );
          v4 = PortContext;
          if ( PortContext == (PVOID)-8LL )
          {
            v4 = (void *)xHalTimerWatchdogStop();
            PortContext = v4;
          }
          v5 = ReceiveMessage.u2.s2.Type & 0x7FFF;
          ReceiveMessage.u2.s2.Type = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(v25 - 1) <= 0xA )
          {
            v6 = PsAttachSiloToCurrentThread((__int64)v4);
            ((void (__fastcall *)(_PORT_MESSAGE *, _DWORD *))SepRmCommandDispatch[v25])(&ReceiveMessage, v26);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (_PORT_MESSAGE *)v26;
            MessageId = ReceiveMessage.MessageId;
            v27 = ReceiveMessage.8;
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
        KeInitializeEvent(&v23, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140329870, 1u);
        qword_140329910 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo != (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_140329870);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v13 = KeGetCurrentThread();
        v14 = inited;
        --v13->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140329760, 1u);
        qword_140329800 = (__int64)&v23;
        v15 = SepLsaDeletedLogonQueueInfo != (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_140329760);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
        if ( v8 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v14 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( v15 )
          KeWaitForSingleObject(&v23, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        PortHandle = 0LL;
        v4 = PortContext;
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v4);
      SepRmCleanupRmLsaState(ServerSiloGlobals + 768);
      if ( PsIsHostSilo((__int64)PortContext) )
        break;
      ObfDereferenceObjectWithTag(PortContext, 0x74536553u);
      PortContext = MmBadPointer;
    }
  }
}
