/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x140655800
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400A34AC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _KTHREAD *v8; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v10; // rdi
  __int64 v12; // r8
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  char v17[16]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+60h] [rbp-28h]
  unsigned __int64 ClientViewSize; // [rsp+70h] [rbp-18h]
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( (*((_BYTE *)Object + 416) & 6) == 6
      && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
    {
      if ( PreviousMode )
      {
        AlpcpProbeAndCaptureMessageHeader((unsigned __int64)Message, (__int64)v17, Flags);
      }
      else
      {
        v18 = *(__int128 *)((char *)&Message->8 + 8);
        ClientViewSize = Message->ClientViewSize;
      }
      v7 = AlpcpLookupMessage((__int64)Object, SDWORD2(v18), ClientViewSize, &v15);
      if ( v7 >= 0 )
      {
        if ( (*(_DWORD *)(v15 + 40) & 0x80u) == 0 )
        {
          v8 = *(struct _KTHREAD **)(v15 + 32);
          if ( v8 )
          {
            WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v15 + 32), &v20);
            v10 = WorkOnBehalfThread;
            if ( WorkOnBehalfThread )
            {
              PsImpersonateContainerOfThread(WorkOnBehalfThread);
              if ( v20 )
                ObDereferenceObjectDeferDelete(v10);
            }
            else
            {
              v10 = 0LL;
              if ( *(_QWORD *)&IoThreadToProcess(v8)[2].ThreadSeed[12] )
              {
                v10 = v8;
                PsImpersonateContainerOfThread(v8);
              }
            }
            if ( v10 )
            {
              if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
                 ? 0LL
                 : KeGetCurrentThread()->Teb )
              {
                PsEncodeThreadWorkOnBehalfTicket((__int64)v10, &v16);
                *(_QWORD *)(v12 + 696) = v16;
              }
            }
          }
          AlpcpUnlockMessage(v15);
        }
        else
        {
          AlpcpUnlockMessage(v15);
          v7 = -1073740029;
        }
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return v7;
}
