/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x14049E4AC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
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
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  __int64 v22; // rdi
  PVOID v23; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v25[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v26; // [rsp+48h] [rbp-80h] BYREF
  __int128 Source2; // [rsp+50h] [rbp-78h] BYREF
  __int128 v28; // [rsp+60h] [rbp-68h]
  unsigned __int64 ClientViewSize; // [rsp+70h] [rbp-58h]
  OBJECT_ATTRIBUTES v30; // [rsp+78h] [rbp-50h] BYREF
  PVOID v31; // [rsp+A8h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v31 = Object;
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v13 = (__int64)ProcessHandle;
    if ( (unsigned __int64)ProcessHandle >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
    v15 = ObjectAttributes;
    if ( (unsigned __int64)ObjectAttributes >= v14 )
      v15 = (POBJECT_ATTRIBUTES)v14;
    v30 = *v15;
    v12 = Object;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v28 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v30 = *ObjectAttributes;
  }
  v11 = AlpcpLookupMessage(v12, DWORD2(v28), (unsigned int)ClientViewSize, v25);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v12);
    goto LABEL_15;
  }
  v16 = v25[0];
  if ( (*(_DWORD *)(v25[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v25[0]);
    ObfDereferenceObject(v12);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v17 = *(_QWORD *)(v25[0] + 32);
  if ( v17 )
  {
    if ( RtlCompareMemory((const void *)(v17 + 1584), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v16);
      ObfDereferenceObject(v12);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v18 = *(_QWORD **)(v17 + 544);
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(v25[0] + 24);
  if ( !v20 )
  {
    AlpcpUnlockMessage(v25[0]);
    v23 = v12;
    goto LABEL_32;
  }
  v21 = (signed __int64 *)(v20 + 352);
  v22 = KeAbPreAcquire(v20 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v20 + 352), v22, v20 + 352);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[93] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v16 = v25[0];
      v12 = Object;
LABEL_13:
      AlpcpUnlockMessage(v16);
      v11 = PsOpenProcess(
              (unsigned __int64)&v26,
              DesiredAccess,
              (__int64)&v30,
              (__int128 *)((char *)&Source2 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v12);
      if ( v11 >= 0 )
        *ProcessHandle = v26;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    AlpcpUnlockMessage(v25[0]);
    v23 = Object;
LABEL_32:
    ObfDereferenceObject(v23);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v25[0]);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegion();
  return v11;
}
