/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateContainerOfThread @ 0x14003262C (PsImpersonateContainerOfThread.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PsImpersonateContainerOfProcess @ 0x1402444F4 (PsImpersonateContainerOfProcess.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // r14d
  char v13; // cl
  signed __int64 BugCheckParameter4; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  char v20; // cl
  signed __int64 v21; // rcx
  int v22; // r14d
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  signed __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rbx
  void *v30; // rcx
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __m128i v35; // [rsp+38h] [rbp-60h]
  HANDLE UniqueThread; // [rsp+48h] [rbp-50h]
  __int128 v37; // [rsp+50h] [rbp-48h]
  __int128 v38; // [rsp+60h] [rbp-38h]
  unsigned __int64 ClientViewSize; // [rsp+70h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 < 0 )
    goto LABEL_56;
  if ( (*((_BYTE *)Object + 416) & 6) != 6
    || KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)*((_QWORD *)Object + 3) )
  {
    goto LABEL_55;
  }
  if ( PreviousMode )
  {
    if ( (Flags & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)Message >= MmUserProbeAddress )
        Message = (PPORT_MESSAGE)MmUserProbeAddress;
      v35 = *(__m128i *)&Message->u1.s1.DataLength;
      UniqueThread = Message->ClientId.UniqueThread;
      LOWORD(v37) = _mm_cvtsi128_si32(v35);
      WORD1(v37) = v35.m128i_i16[0] + 40;
      DWORD1(v37) = _mm_cvtsi128_si32(_mm_srli_si128(v35, 4));
      *((_QWORD *)&v37 + 1) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v35, 8));
      *(_QWORD *)&v38 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v35, 12));
      DWORD2(v38) = (_DWORD)UniqueThread;
      ClientViewSize = HIDWORD(UniqueThread);
    }
    else
    {
      if ( (unsigned __int64)Message >= MmUserProbeAddress )
        Message = (PPORT_MESSAGE)MmUserProbeAddress;
      v37 = *(_OWORD *)&Message->u1.s1.DataLength;
      v38 = *(__int128 *)((char *)&Message->8 + 8);
      ClientViewSize = Message->ClientViewSize;
    }
  }
  else
  {
    v37 = *(_OWORD *)&Message->u1.s1.DataLength;
    v38 = *(__int128 *)((char *)&Message->8 + 8);
    ClientViewSize = Message->ClientViewSize;
  }
  v7 = AlpcpLookupMessage((__int64)Object, SDWORD2(v38), ClientViewSize, &BugCheckParameter2);
  if ( v7 >= 0 )
  {
    v11 = BugCheckParameter2;
    if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2, v8, v9, v10);
      v12 = 0;
      v13 = *(_BYTE *)(v11 - 32);
      if ( (v13 & 1) != 0 )
      {
        v12 = 0x10000 - *(__int16 *)(v11 - 30);
        *(_BYTE *)(v11 - 32) = v13 & 0xFE;
        *(_WORD *)(v11 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
      KeAbPostRelease(v11 - 16);
      if ( v12 > 0 )
      {
        BugCheckParameter4 = -v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v12);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      v7 = -1073740029;
      goto LABEL_56;
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    if ( v15 )
    {
      PsImpersonateContainerOfThread(v15);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v11, v16, v17, v18);
      v19 = 0;
      v20 = *(_BYTE *)(v11 - 32);
      if ( (v20 & 1) != 0 )
      {
        v19 = 0x10000 - *(__int16 *)(v11 - 30);
        *(_BYTE *)(v11 - 32) = v20 & 0xFE;
        *(_WORD *)(v11 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
      KeAbPostRelease(v11 - 16);
      if ( v19 > 0 )
      {
        v21 = -v19 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v19);
        if ( v21 <= 0 )
        {
          if ( v21 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v21);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      goto LABEL_56;
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2, v8, v9, v10);
    v22 = 0;
    v23 = *(_BYTE *)(v11 - 32);
    if ( (v23 & 1) != 0 )
    {
      v22 = 0x10000 - *(__int16 *)(v11 - 30);
      *(_BYTE *)(v11 - 32) = v23 & 0xFE;
      *(_WORD *)(v11 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 - 16));
    KeAbPostRelease(v11 - 16);
    if ( v22 > 0 )
    {
      v27 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), -v22);
      if ( v27 <= 0 )
      {
        if ( v27 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v27);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    v28 = AlpcpReferenceConnectedPort((__int64)Object, v24, v25, v26);
    v29 = (void *)v28;
    if ( v28 )
    {
      v30 = *(void **)(v28 + 24);
      if ( ((unsigned __int8)v30 & 1) == 0 && v30 )
        PsImpersonateContainerOfProcess(v30);
      ObfDereferenceObject(v29);
      goto LABEL_56;
    }
LABEL_55:
    v7 = -1073741790;
  }
LABEL_56:
  if ( Object )
    ObfDereferenceObject(Object);
  v31 = KeGetCurrentThread();
  v32 = v31->KernelApcDisable + 1;
  v31->KernelApcDisable = v32;
  if ( !v32
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
    && !v31->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
