/*
 * XREFs of NtAlpcOpenSenderThread @ 0x14049DD94
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x1404040D0 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
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
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  POBJECT_ATTRIBUTES v15; // rdx
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-90h] BYREF
  int v21[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v23; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v25; // [rsp+70h] [rbp-58h] BYREF
  PVOID v26; // [rsp+A0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v26 = Object;
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = (__int64)ThreadHandle;
      if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
      v15 = ObjectAttributes;
      if ( (unsigned __int64)ObjectAttributes >= v14 )
        v15 = (POBJECT_ATTRIBUTES)v14;
      v25 = *v15;
      v12 = Object;
    }
    else
    {
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v23 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v25 = *ObjectAttributes;
    }
    v11 = AlpcpLookupMessage(v12, DWORD2(v23), (unsigned int)ClientViewSize, &v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v12);
    }
    else
    {
      v16 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v20);
        ObfDereferenceObject(v12);
        v11 = -1073740029;
      }
      else
      {
        v17 = *(_QWORD *)(v20 + 32);
        if ( v17 && RtlCompareMemory((const void *)(v17 + 1584), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v17);
          AlpcpUnlockMessage(v16);
          v11 = PsOpenThread(
                  (unsigned __int64)v21,
                  DesiredAccess,
                  (__int64)&v25,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          ObfDereferenceObject((PVOID)v17);
          ObfDereferenceObject(v12);
          if ( v11 >= 0 )
            *ThreadHandle = *(HANDLE *)v21;
        }
        else
        {
          AlpcpUnlockMessage(v16);
          ObfDereferenceObject(v12);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v11;
}
