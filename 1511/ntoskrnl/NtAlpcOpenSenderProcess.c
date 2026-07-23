/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x140480FF8
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
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
  _QWORD *v13; // rcx
  OBJECT_ATTRIBUTES *v14; // rdx
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rsi
  signed __int64 *v20; // rbx
  __int64 v21; // rdi
  PVOID v22; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v24[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v25; // [rsp+48h] [rbp-80h] BYREF
  __int128 Source2; // [rsp+50h] [rbp-78h] BYREF
  __int128 v27; // [rsp+60h] [rbp-68h]
  unsigned __int64 ClientViewSize; // [rsp+70h] [rbp-58h]
  OBJECT_ATTRIBUTES v29; // [rsp+78h] [rbp-50h] BYREF
  PVOID v30; // [rsp+A8h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v30 = Object;
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v13 = ProcessHandle;
    if ( (unsigned __int64)ProcessHandle >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *v13 = *v13;
    AlpcpProbeAndCaptureMessageHeader((__m128i *)PortMessage, (__int64)&Source2, Flags);
    v14 = ObjectAttributes;
    if ( (unsigned __int64)ObjectAttributes >= MmUserProbeAddress )
      v14 = (OBJECT_ATTRIBUTES *)MmUserProbeAddress;
    v29 = *v14;
    v12 = Object;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v27 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v29 = *ObjectAttributes;
  }
  v11 = AlpcpLookupMessage((__int64)v12, DWORD2(v27), ClientViewSize, v24);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v12);
    goto LABEL_15;
  }
  v15 = v24[0];
  if ( (*(_DWORD *)(v24[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v24[0]);
    ObfDereferenceObject(v12);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(v24[0] + 32);
  if ( v16 )
  {
    if ( RtlCompareMemory((const void *)(v16 + 1576), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v15);
      ObfDereferenceObject(v12);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v17 = *(_QWORD **)(v16 + 544);
    ObfReferenceObjectWithTag(v17, 0x63706C41u);
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(v24[0] + 24);
  if ( !v19 )
  {
    AlpcpUnlockMessage(v24[0]);
    v22 = v12;
    goto LABEL_32;
  }
  v20 = (signed __int64 *)(v19 + 352);
  v21 = KeAbPreAcquire(v19 + 352, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v19 + 352), v21, v19 + 352);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  if ( (*(_DWORD *)(v19 + 416) & 0x40) == 0 )
  {
    v17 = *(_QWORD **)(v19 + 24);
    if ( v17[93] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v17, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      v15 = v24[0];
      v12 = Object;
LABEL_13:
      AlpcpUnlockMessage(v15);
      v11 = PsOpenProcess(&v25, DesiredAccess, (__int64)&v29, (__int128 *)((char *)&Source2 + 8), 0, PreviousMode);
      ObfDereferenceObjectWithTag(v17, 0x63706C41u);
      ObfDereferenceObject(v12);
      if ( v11 >= 0 )
        *ProcessHandle = v25;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    AlpcpUnlockMessage(v24[0]);
    v22 = Object;
LABEL_32:
    ObfDereferenceObject(v22);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
  KeAbPostRelease(v19 + 352);
  AlpcpUnlockMessage(v24[0]);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegion();
  return v11;
}
