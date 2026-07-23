/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1404B1A58
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  PVOID v12; // rdi
  _QWORD *v13; // rcx
  OBJECT_ATTRIBUTES *v14; // rdx
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR v20; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v22; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v24; // [rsp+70h] [rbp-58h] BYREF
  PVOID v25; // [rsp+A0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v25 = Object;
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = ThreadHandle;
      if ( (unsigned __int64)ThreadHandle >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
      AlpcpProbeAndCaptureMessageHeader((__m128i *)PortMessage, (__int64)&Source2, Flags);
      v14 = ObjectAttributes;
      if ( (unsigned __int64)ObjectAttributes >= MmUserProbeAddress )
        v14 = (OBJECT_ATTRIBUTES *)MmUserProbeAddress;
      v24 = *v14;
      v12 = Object;
    }
    else
    {
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v22 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v24 = *ObjectAttributes;
    }
    v11 = AlpcpLookupMessage((__int64)v12, DWORD2(v22), ClientViewSize, &v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v12);
    }
    else
    {
      v15 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v20);
        ObfDereferenceObject(v12);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD *)(v20 + 32);
        if ( v16 && RtlCompareMemory((const void *)(v16 + 1576), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread(&v19, DesiredAccess, (__int64)&v24, (__int128 *)((char *)&Source2 + 8), 0, PreviousMode);
          ObfDereferenceObject((PVOID)v16);
          ObfDereferenceObject(v12);
          if ( v11 >= 0 )
            *ThreadHandle = v19;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          ObfDereferenceObject(v12);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v11;
}
