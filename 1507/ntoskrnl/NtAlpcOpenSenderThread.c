/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1405422C4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
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
  NTSTATUS v10; // esi
  PVOID v11; // r15
  _QWORD *v12; // rcx
  OBJECT_ATTRIBUTES *v13; // rcx
  ULONG_PTR v14; // rsi
  __int64 v15; // r15
  int v16; // r14d
  char v17; // cl
  signed __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  int v22; // r14d
  char v23; // cl
  signed __int64 v24; // rcx
  int v25; // r14d
  char v26; // cl
  signed __int64 v27; // rcx
  int v28; // r14d
  char v29; // cl
  signed __int64 v30; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+58h] [rbp-90h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-80h]
  void *v37; // [rsp+70h] [rbp-78h] BYREF
  __m128i v38; // [rsp+78h] [rbp-70h]
  HANDLE UniqueThread; // [rsp+88h] [rbp-60h]
  OBJECT_ATTRIBUTES v40; // [rsp+90h] [rbp-58h] BYREF
  PVOID v41; // [rsp+C0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v11 = Object;
  v41 = Object;
  if ( v10 < 0 )
    goto LABEL_29;
  if ( PreviousMode )
  {
    v12 = ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( (Flags & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)PortMessage >= MmUserProbeAddress )
        PortMessage = (PPORT_MESSAGE)MmUserProbeAddress;
      v38 = *(__m128i *)&PortMessage->u1.s1.DataLength;
      UniqueThread = PortMessage->ClientId.UniqueThread;
      LOWORD(Source2) = _mm_cvtsi128_si32(v38);
      WORD1(Source2) = v38.m128i_i16[0] + 40;
      DWORD1(Source2) = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
      *((_QWORD *)&Source2 + 1) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
      *(_QWORD *)&v35 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
      DWORD2(v35) = (_DWORD)UniqueThread;
      ClientViewSize = HIDWORD(UniqueThread);
    }
    else
    {
      if ( (unsigned __int64)PortMessage >= MmUserProbeAddress )
        PortMessage = (PPORT_MESSAGE)MmUserProbeAddress;
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v35 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
    }
    v13 = ObjectAttributes;
    if ( (unsigned __int64)ObjectAttributes >= MmUserProbeAddress )
      v13 = (OBJECT_ATTRIBUTES *)MmUserProbeAddress;
    v40 = *v13;
    v11 = Object;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v35 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v40 = *ObjectAttributes;
  }
  v10 = AlpcpLookupMessage((__int64)v11, SDWORD2(v35), ClientViewSize, &BugCheckParameter2);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v11);
    goto LABEL_29;
  }
  v14 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
  {
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    if ( v15 )
    {
      if ( RtlCompareMemory((const void *)(v15 + 1576), (char *)&Source2 + 8, 0x10uLL) == 16 )
      {
        ObfReferenceObject((PVOID)v15);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v14);
        v16 = 0;
        v17 = *(_BYTE *)(v14 - 32);
        if ( (v17 & 1) != 0 )
        {
          v16 = 0x10000 - *(__int16 *)(v14 - 30);
          *(_BYTE *)(v14 - 32) = v17 & 0xFE;
          *(_WORD *)(v14 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
        KeAbPostRelease(v14 - 16);
        if ( v16 > 0 )
        {
          v18 = -v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v16);
          if ( v18 <= 0 )
          {
            if ( v18 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v18);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v10 = PsOpenThread(&v37, DesiredAccess, (__int64)&v40, (__int64)&Source2 + 8, 0, PreviousMode);
        ObfDereferenceObject((PVOID)v15);
        ObfDereferenceObject(Object);
        if ( v10 >= 0 )
          *ThreadHandle = v37;
        goto LABEL_29;
      }
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v14);
      v28 = 0;
      v29 = *(_BYTE *)(v14 - 32);
      if ( (v29 & 1) != 0 )
      {
        v28 = 0x10000 - *(__int16 *)(v14 - 30);
        *(_BYTE *)(v14 - 32) = v29 & 0xFE;
        *(_WORD *)(v14 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
      KeAbPostRelease(v14 - 16);
      if ( v28 <= 0 || (v30 = -v28 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v28), v30 > 0) )
      {
LABEL_59:
        ObfDereferenceObject(Object);
        v10 = -1073741790;
        goto LABEL_29;
      }
      if ( v30 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v30);
    }
    else
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
      v25 = 0;
      v26 = *(_BYTE *)(v14 - 32);
      if ( (v26 & 1) != 0 )
      {
        v25 = 0x10000 - *(__int16 *)(v14 - 30);
        *(_BYTE *)(v14 - 32) = v26 & 0xFE;
        *(_WORD *)(v14 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
      KeAbPostRelease(v14 - 16);
      if ( v25 <= 0 )
        goto LABEL_59;
      v27 = -v25 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v25);
      if ( v27 > 0 )
        goto LABEL_59;
      if ( v27 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v27);
    }
    AlpcpDestroyBlob(BugCheckParameter2);
    goto LABEL_59;
  }
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  v22 = 0;
  v23 = *(_BYTE *)(v14 - 32);
  if ( (v23 & 1) != 0 )
  {
    v22 = 0x10000 - *(__int16 *)(v14 - 30);
    *(_BYTE *)(v14 - 32) = v23 & 0xFE;
    *(_WORD *)(v14 - 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
  KeAbPostRelease(v14 - 16);
  if ( v22 > 0 )
  {
    v24 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v22);
    if ( v24 <= 0 )
    {
      if ( v24 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v24);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  ObfDereferenceObject(Object);
  v10 = -1073740029;
LABEL_29:
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
