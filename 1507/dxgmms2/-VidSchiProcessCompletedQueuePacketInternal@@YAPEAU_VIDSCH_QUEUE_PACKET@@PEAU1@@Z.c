/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690
 * Callers:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0001258 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001460 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C00019A0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0003380 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000DFB4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0012200 (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00139E4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     Template_pp @ 0x1C0013E1C (Template_pp.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001B084 (VidSchiTryEnterIndependentFlip.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  KIRQL v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _VIDSCH_QUEUE_PACKET **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r12
  CRefCountedBuffer *v21; // rcx
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rcx
  __int64 i; // rcx
  __int64 v25; // rcx
  int v26; // eax
  struct _KEVENT *v27; // rcx
  __int64 v28; // rbp
  KSPIN_LOCK *v29; // rbp
  __int64 *v30; // rbx
  __int64 *v31; // rcx
  __int64 **v32; // rax
  _DWORD *v33; // rsi
  __int64 **v34; // rdi
  __int64 ***v35; // rax
  __int64 *v36; // rbx
  __int64 v38; // rcx
  void (__fastcall *v39)(_QWORD); // rax
  __int64 v40; // rdx
  int v41; // eax
  ULONG v42; // eax
  struct _VIDSCH_GLOBAL *v43; // rcx
  __int64 v44; // rcx
  struct _KEVENT *v45; // rcx
  _QWORD *v46; // rax
  __int64 *v47; // rax
  _QWORD *v48; // rax
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+40h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+58h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+70h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+88h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-68h] BYREF
  KIRQL v54; // [rsp+110h] [rbp+8h]
  int v55; // [rsp+120h] [rbp+18h]
  __int64 v56; // [rsp+128h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 10);
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v56 = 0LL;
  v7 = *(_QWORD *)(v3 + 96);
  v8 = *(_QWORD *)(v3 + 104);
  v9 = *(_QWORD *)(v7 + 24);
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v38 = *(_QWORD *)(v3 + 56);
    if ( !v38 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v38 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pp(v38, &AbortQueuePacket, a3, a1, v38);
  }
  v10 = *((_DWORD *)a1 + 19);
  if ( (v10 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 19) = v10 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 96LL) + 3080LL) != -1 )
    {
      v39 = *(void (__fastcall **)(_QWORD))(v9 + 2528);
      if ( v39 )
        v39(*(_QWORD *)(v9 + 2560));
    }
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v21 = (CRefCountedBuffer *)*((_QWORD *)a1 + 35);
    if ( v21 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v21);
      *((_QWORD *)a1 + 35) = 0LL;
    }
    v22 = (volatile signed __int32 *)*((_QWORD *)a1 + 34);
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v22, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
  }
  v54 = KfRaiseIrql(2u);
  v11 = v54;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1872), &LockHandle);
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v48[3] = 281LL;
    v48[4] = 512LL;
    v48[5] = v9;
    v48[6] = v3;
    v48[7] = a1;
    WdLogEvent5_WdCriticalError(v48);
    JUMPOUT(0x1C000A61FLL);
  }
  if ( (*((_DWORD *)a1 + 19) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId(a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v14 = *((_QWORD *)a1 + 4);
  v15 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v14 + 8) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || *v15 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
  {
    __fastfail(3u);
  }
  *v15 = (struct _VIDSCH_QUEUE_PACKET *)v14;
  v16 = (_QWORD *)(v3 + 664);
  *(_QWORD *)(v14 + 8) = v15;
  if ( (_QWORD *)*v16 == v16 )
  {
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0 )
    {
      v17 = 10LL;
      v18 = 9806LL;
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x10) == 0
      && (*(_DWORD *)(v3 + 176) & 0x40) == 0
      && (*(_DWORD *)(v3 + 176) & 0x100) == 0 )
    {
      v17 = 0LL;
      v18 = 9839LL;
LABEL_16:
      VidSchiUpdateContextStatus(v3, v17, v18);
    }
  }
  else
  {
    v25 = *v16 - 32LL;
    v14 = *(unsigned int *)(v25 + 76);
    if ( (*(_DWORD *)(v25 + 76) & 3) == 1 )
    {
      v14 = (unsigned int)v14 | 2;
      v56 = *v16 - 32LL;
      *(_DWORD *)(v25 + 76) = v14;
    }
    if ( (*(_DWORD *)(v3 + 176) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 176) >> 9) | *(_BYTE *)(v3 + 176)) & 2) == 0 )
    {
      v17 = 10LL;
      v18 = 9787LL;
      goto LABEL_16;
    }
  }
  if ( *((_DWORD *)a1 + 12) == 5 && (*((_DWORD *)a1 + 19) & 4) == 0 )
  {
    LOBYTE(v14) = 1;
    VidSchiCompleteSignalCommmand((__int64)a1, v14, v12, v13);
  }
  if ( (*((_DWORD *)a1 + 19) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 976));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 2832));
      v23 = *(_QWORD *)(v9 + 352);
      _bittestandset64(&v23, *(unsigned __int16 *)(v7 + 4));
      *(_QWORD *)(v9 + 352) = v23;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 112); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      v40 = *((_QWORD *)a1 + i + 57);
      *((_QWORD *)a1 + i + 57) = 0LL;
      if ( v40 )
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 104));
    }
  }
  v19 = *((_DWORD *)a1 + 18);
  if ( ((v19 & 0x80040) == 0x80000 || (v19 & 0x8000) != 0) && ((v19 & 0x800) == 0 || (v19 & 0x1000) != 0) )
  {
    v20 = *((unsigned int *)a1 + 36);
    if ( (v19 & 0x80000) != 0 )
    {
      if ( (v19 & 0x8000) != 0 )
      {
        v6 = 1;
LABEL_26:
        VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 10));
        if ( v55 )
        {
          v41 = *((_DWORD *)a1 + 154);
          if ( (_BYTE)v41 )
          {
            v42 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v41);
            VidSchiUnreferencePrimaryAllocations(
              v43,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 616),
              v42,
              *((_DWORD *)a1 + 98),
              *((_DWORD *)a1 + 98),
              0);
          }
          v6 = 1;
        }
        if ( (_DWORD)v20 != -1 && (*((_DWORD *)a1 + 18) & 0x80000) == 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v20 + 872));
          v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v8 + 32) + 4LL))
                          + 8 * v20
                          + 520);
          if ( (*((_DWORD *)a1 + 18) & 0x100) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v20 + 5176) + 8LL));
            ++**(_DWORD **)(v9 + 8 * v20 + 5176);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v44 + 8));
          ++*(_DWORD *)v44;
          if ( (*((_DWORD *)a1 + 18) & 0x40000) != 0 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1880), &v50);
            *(_DWORD *)(v8 + 4 * v20 + 476) = *((_DWORD *)a1 + 92);
            *(_DWORD *)(v8 + 4 * v20 + 540) = *((_DWORD *)a1 + 29);
            *(_QWORD *)(v8 + 8 * v20 + 608) = *((_QWORD *)a1 + 15);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v50);
          }
          v6 = 1;
        }
      }
LABEL_28:
      if ( (*((_DWORD *)a1 + 18) & 0x80100) != 0 && *((_QWORD *)a1 + 16) && *((_QWORD *)a1 + 17) )
        VidSchiSubmitPresentHistoryToken((__int64)a1);
      if ( v5 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 908));
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 1000));
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v20 + 936));
      }
      VidSchiSignalRegisteredEvent(v9, v9 + 1848);
      v11 = v54;
      goto LABEL_52;
    }
    if ( (v19 & 8) == 0 )
    {
      v6 = 1;
      goto LABEL_26;
    }
    if ( (unsigned int)(*((_DWORD *)a1 + 94) - 1) <= 1 )
    {
      v6 = 1;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        goto LABEL_28;
      v6 = 1;
      v55 = 1;
    }
    v5 = 1;
    goto LABEL_26;
  }
LABEL_52:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 36) != -1 )
  {
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, -1);
    VidSchiTryEnterIndependentFlip(v9, *((unsigned int *)a1 + 36), 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 896));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 2844));
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 1008));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 760));
  VidSchiProfilePerformanceTick(9, v9, v7, v13, 0LL, (__int64)a1, 0LL, 0LL);
  if ( v6 )
    VidSchiSignalRegisteredEvent(v9, v8 + 104);
  if ( v5 )
  {
    VidSchiSignalRegisteredEvent(v9, v8 + 120);
    VidSchiSignalRegisteredEvent(v9, v9 + 1832);
    *(_QWORD *)(v9 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1744), 0, 0);
  }
  VidSchiSignalRegisteredEvent(v9, v7 + 352);
  VidSchiSignalRegisteredEvent(v9, v9 + 1816);
  *(_QWORD *)(v7 + 256) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 224), 0, 0);
  *(_QWORD *)(v9 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v9 + 1632), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v26 = *((_DWORD *)a1 + 12);
    if ( !v26 || v26 == 7 )
    {
      v27 = (struct _KEVENT *)*((_QWORD *)a1 + 43);
      if ( v27 )
      {
        KeSetEvent(v27, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 43));
      }
    }
    else if ( v26 == 6 )
    {
      v45 = (struct _KEVENT *)*((_QWORD *)a1 + 37);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
    }
  }
  VidSchiCheckPendingDeviceCommand(v8);
  v28 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 74) || *((_QWORD *)a1 + 31)) )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v46[3] = 281LL;
    v46[4] = 2560LL;
    v46[5] = a1;
    v46[6] = *((_QWORD *)a1 + 74);
    v46[7] = *((_QWORD *)a1 + 31);
    WdLogEvent5_WdCriticalError(v46);
    JUMPOUT(0x1C000A5A5LL);
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 0;
  v29 = (KSPIN_LOCK *)(v28 + 1880);
  v30 = (__int64 *)((char *)a1 + 8);
  KeAcquireInStackQueuedSpinLock(v29, &v52);
  v31 = (__int64 *)*v30;
  v32 = (__int64 **)v30[1];
  if ( *(__int64 **)(*v30 + 8) != v30 || *v32 != v30 )
    __fastfail(3u);
  *v32 = v31;
  v31[1] = (__int64)v32;
  if ( v3 != -752 )
    --*(_DWORD *)(v3 + 752);
  KeReleaseInStackQueuedSpinLock(&v52);
  v33 = (_DWORD *)(v3 + 728);
  v34 = (__int64 **)(v3 + 712);
  KeAcquireInStackQueuedSpinLock(v29, &v49);
  v35 = (__int64 ***)v34[1];
  *v30 = (__int64)v34;
  v30[1] = (__int64)v35;
  if ( *v35 != v34 )
    __fastfail(3u);
  *v35 = (__int64 **)v30;
  v34[1] = v30;
  if ( v33 )
    ++*v33;
  KeReleaseInStackQueuedSpinLock(&v49);
  while ( 1 )
  {
    v36 = 0LL;
    KeAcquireInStackQueuedSpinLock(v29, &v51);
    if ( *v34 != (__int64 *)v34 && *v33 > 0x10u )
    {
      v36 = *v34;
      v47 = (__int64 *)**v34;
      if ( (__int64 **)(*v34)[1] != v34 || (__int64 *)v47[1] != v36 )
        __fastfail(3u);
      *v34 = v47;
      v47[1] = (__int64)v34;
      --*v33;
    }
    KeReleaseInStackQueuedSpinLock(&v51);
    if ( !v36 )
      break;
    ExFreePoolWithTag(v36 - 1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v11);
  return (struct _VIDSCH_QUEUE_PACKET *)v56;
}
