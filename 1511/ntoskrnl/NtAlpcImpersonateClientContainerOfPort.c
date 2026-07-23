/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x1400A02BC (PsImpersonateContainerOfThread.c)
 *     PsImpersonateContainerOfProcess @ 0x1401F5938 (PsImpersonateContainerOfProcess.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rdi
  void *v12; // rcx
  ULONG_PTR v14; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v16; // [rsp+48h] [rbp-20h]
  unsigned __int64 ClientViewSize; // [rsp+58h] [rbp-10h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( (*((_BYTE *)Object + 416) & 6) != 6
      || KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)*((_QWORD *)Object + 3) )
    {
      goto LABEL_17;
    }
    if ( PreviousMode )
    {
      AlpcpProbeAndCaptureMessageHeader((__m128i *)Message, (__int64)v15, Flags);
    }
    else
    {
      v16 = *(__int128 *)((char *)&Message->8 + 8);
      ClientViewSize = Message->ClientViewSize;
    }
    v7 = AlpcpLookupMessage((__int64)Object, DWORD2(v16), ClientViewSize, &v14);
    if ( v7 < 0 )
      goto LABEL_18;
    v8 = v14;
    if ( (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
    {
      AlpcpUnlockMessage(v14);
      v7 = -1073740029;
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(v14 + 32);
    if ( v9 )
    {
      PsImpersonateContainerOfThread(v9);
      AlpcpUnlockMessage(v8);
      goto LABEL_18;
    }
    AlpcpUnlockMessage(v14);
    v10 = AlpcpReferenceConnectedPort((__int64)Object);
    v11 = (void *)v10;
    if ( v10 )
    {
      v12 = *(void **)(v10 + 24);
      if ( ((unsigned __int8)v12 & 1) == 0 && v12 )
        PsImpersonateContainerOfProcess(v12);
      ObfDereferenceObject(v11);
    }
    else
    {
LABEL_17:
      v7 = -1073741790;
    }
  }
LABEL_18:
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return v7;
}
