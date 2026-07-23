/*
 * XREFs of CcMapAndCopyInToCache @ 0x140034AE0
 * Callers:
 *     CcCopyWriteEx @ 0x1400E9C50 (CcCopyWriteEx.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     MmUpdateSectionIoAttribution @ 0x1400A5F88 (MmUpdateSectionIoAttribution.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401B18A4 (CcCopyReadExceptionFilter.c)
 */

__int64 __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int8 a8,
        struct _KTHREAD *a9)
{
  __int64 v9; // r15
  int v10; // edx
  bool v11; // r10
  int v12; // r12d
  _SLIST_ENTRY *v13; // rbx
  char v14; // di
  int BaseIoPriorityThread; // eax
  struct _KTHREAD *v16; // rdx
  __int64 v17; // r11
  KIRQL v18; // al
  __int64 result; // rax
  int v20; // ecx
  KIRQL v21; // al
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v23; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  struct _KTHREAD *v26; // r13
  _QWORD *Object; // rbx
  KIRQL v28; // di
  _KPROCESS *Process; // rsi
  int v30; // r14d
  __int64 v31; // rdi
  KIRQL v32; // al
  __int64 v33; // rsi
  int v34; // eax
  volatile signed __int32 *v35; // rbx
  unsigned int v36; // esi
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 VirtualAddress; // rax
  unsigned int v40; // r15d
  unsigned int v41; // esi
  unsigned __int64 v42; // r13
  unsigned int v43; // r15d
  int v44; // eax
  int v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // edi
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v49; // ecx
  struct _KTHREAD *v50; // rdi
  NTSTATUS v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  struct _KEVENT *v54; // rcx
  NTSTATUS v55; // edi
  BOOLEAN v56; // al
  NTSTATUS v57; // ecx
  int v58; // ecx
  unsigned int v59; // r9d
  struct _KTHREAD *v60; // r8
  __int64 v61; // rcx
  struct _KEVENT *v62; // rcx
  unsigned int v63; // ecx
  int v64; // eax
  KIRQL v65; // al
  NTSTATUS v66; // ebx
  BOOLEAN v67; // al
  NTSTATUS v68; // ecx
  char v69; // [rsp+30h] [rbp-D8h]
  char v70; // [rsp+31h] [rbp-D7h]
  char v71; // [rsp+32h] [rbp-D6h]
  char v72; // [rsp+33h] [rbp-D5h]
  char v73; // [rsp+34h] [rbp-D4h]
  char v74; // [rsp+35h] [rbp-D3h]
  int v75; // [rsp+38h] [rbp-D0h]
  KIRQL v76; // [rsp+3Ch] [rbp-CCh]
  char v77; // [rsp+3Dh] [rbp-CBh] BYREF
  unsigned __int8 v78; // [rsp+3Eh] [rbp-CAh]
  _BYTE v79[5]; // [rsp+3Fh] [rbp-C9h]
  NTSTATUS v80; // [rsp+48h] [rbp-C0h]
  unsigned int v81; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v83; // [rsp+58h] [rbp-B0h] BYREF
  int v84; // [rsp+60h] [rbp-A8h]
  unsigned int v85; // [rsp+64h] [rbp-A4h]
  unsigned int v86; // [rsp+68h] [rbp-A0h]
  int v87; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v88; // [rsp+70h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-90h]
  int v90; // [rsp+80h] [rbp-88h]
  unsigned int v91; // [rsp+84h] [rbp-84h]
  unsigned int v92; // [rsp+88h] [rbp-80h]
  __int64 v93; // [rsp+90h] [rbp-78h]
  __int64 v94; // [rsp+98h] [rbp-70h]
  unsigned __int64 v95; // [rsp+A0h] [rbp-68h]
  NTSTATUS Exception[14]; // [rsp+A8h] [rbp-60h] BYREF
  int v99; // [rsp+120h] [rbp+18h]
  unsigned int v101; // [rsp+128h] [rbp+20h]

  v99 = (int)a3;
  v86 = a4;
  v9 = a1;
  *(_DWORD *)&v79[1] = 0;
  v10 = *(_DWORD *)(a6 + 80);
  v11 = (v10 & 0x10) != 0;
  v69 = v11;
  v92 = a4;
  v88 = *a3 & 0xFFF;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v75 = 0;
  v74 = 0;
  v71 = 0;
  v13 = 0LL;
  v70 = 0;
  v72 = 0;
  v82 = *(_QWORD *)a3;
  v85 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v91 = v85;
  v14 = v11;
  v73 = v11;
  *(_DWORD *)v79 = v11;
  if ( (v10 & 0x10) == 0 )
  {
    v73 = 0;
    if ( (v10 & 0x1000000) == 0 || CcCanIWriteStream(a6, a4, 0, 0) )
    {
      BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread());
      if ( BaseIoPriorityThread < 2 && v16 == KeGetCurrentThread() && v16[1].Timer.DueTime.LowPart
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(v17 + 80) & 0x8000) != 0 )
      {
        v12 = 0;
LABEL_13:
        v79[0] = v14;
        v11 = v69;
        goto LABEL_14;
      }
      v12 = 0;
    }
    v14 = 1;
    v73 = 1;
    if ( (*(_DWORD *)(v9 + 152) & 0x400) == 0 )
    {
      v18 = KeAcquireQueuedSpinLock(5uLL);
      *(_DWORD *)(v9 + 152) |= 0x400u;
      KeReleaseQueuedSpinLock(5uLL, v18);
    }
    goto LABEL_13;
  }
LABEL_14:
  result = a8;
  if ( !v14 || a8 )
  {
    v20 = 4;
    if ( !a8 )
      v20 = 6;
    v90 = v20;
    if ( v11 )
    {
      v21 = KeAcquireQueuedSpinLock(5uLL);
      v76 = v21;
      if ( (*(_DWORD *)(v9 + 152) & 0x20) != 0 )
      {
        KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
        v13 = *(_SLIST_ENTRY **)(v9 + 496);
        if ( !v13 )
        {
          KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
          KeReleaseQueuedSpinLock(5uLL, v76);
          KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
          RtlRaiseStatus(-1073741608);
        }
        Next = v13->Next;
        v23 = (_SLIST_ENTRY **)*((_QWORD *)&v13->Next + 1);
        if ( *(&v13->Next->Next + 1) != v13 || *v23 != v13 )
          __fastfail(3u);
        *v23 = Next;
        *((_QWORD *)&Next->Next + 1) = v23;
        *((_QWORD *)&v13->Next + 1) = 0LL;
        v13->Next = 0LL;
        *(_QWORD *)(v9 + 496) = 0LL;
        *(_DWORD *)(v9 + 152) &= ~0x20u;
        v71 = 1;
        KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
        v12 = 0;
        v21 = v76;
      }
      ++*(_DWORD *)(v9 + 516);
      v74 = 1;
      KeReleaseQueuedSpinLock(5uLL, v21);
    }
    if ( v13 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v13);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v13);
      }
      v12 = 0;
    }
    v26 = a9;
    if ( !a9 )
    {
      v26 = KeGetCurrentThread();
      a9 = v26;
      v12 = 0;
    }
    Object = v26[1].WaitBlock[1].Object;
    v87 = 0;
    if ( !Object )
      goto LABEL_42;
    if ( v26 != KeGetCurrentThread() )
    {
      v28 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      Object = v26[1].WaitBlock[1].Object;
      if ( Object )
      {
        ObfReferenceObjectWithTag(v26[1].WaitBlock[1].Object, 0x746C6644u);
        v87 = 1;
      }
      ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v28);
    }
    v12 = 0;
    if ( Object )
      Process = (_KPROCESS *)Object[68];
    else
LABEL_42:
      Process = v26->Process;
    if ( *(_QWORD *)&Process[2].ThreadSeed[12] )
    {
      v32 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
      v33 = *(_QWORD *)&Process[2].ThreadSeed[12];
      if ( v33 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v33 + 32)) <= 1 )
          __fastfail(0xEu);
        v31 = v33;
        v94 = v33;
        v12 = 0;
      }
      else
      {
        v31 = v94;
      }
      ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v32);
      v34 = 0;
      if ( !v33 )
        v34 = -1073741275;
      v30 = v34;
    }
    else
    {
      v30 = -1073741275;
      v31 = v94;
    }
    if ( v87 )
      ObDereferenceObjectDeferDelete(Object);
    if ( v30 >= 0 )
    {
      MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v31);
      IoDiskIoAttributionDereference(v31);
    }
    v35 = v83;
    v36 = a4;
    LODWORD(v37) = *(_DWORD *)&v79[1];
    while ( v36 )
    {
      *(_DWORD *)&v79[1] = 0;
      v38 = v82;
      VirtualAddress = CcGetVirtualAddress(v9, v82, &v83, &v81, 0, 0);
      v95 = VirtualAddress;
      v40 = v81;
      if ( v81 > v36 )
        v40 = v36;
      *(_DWORD *)&v79[1] = v40;
      v101 = v36 - v40;
      v41 = v88;
      v42 = VirtualAddress - v88;
      v95 = v42;
      v43 = v88 + v40;
      v81 = v43;
      v44 = 1;
      v84 = 1;
      LODWORD(v38) = v38 - v88;
      v93 = v38;
      v70 = 0;
      while ( 1 )
      {
        v77 = 1;
        Exception[4] = v43 > 0x1000;
        v80 = 0;
        if ( (v44 & a5) != 0 )
        {
          if ( v93 >= *a7 )
          {
            v12 |= 1u;
            v75 = v12;
          }
          if ( (*(_DWORD *)(a1 + 152) & 0x40) != 0 )
          {
            v12 |= 2u;
            v75 = v12;
          }
          v45 = 4096;
          if ( v43 <= 0x1000 )
            v45 = v43;
          v46 = MmCopyToCachedPage(v42, a2, v41, v45 - v41, v12);
          v47 = v46;
          v80 = v46;
          if ( v46 < 0 )
          {
            IsNtstatusExpected = FsRtlIsNtstatusExpected(v46);
            v49 = -1073741592;
            if ( IsNtstatusExpected )
              v49 = v47;
            RtlRaiseStatus(v49);
          }
          v70 = 1;
        }
        else
        {
          v50 = CurrentThread;
          if ( v43 > 0x1000 && (a5 & 4) != 0 )
          {
            BYTE4(CurrentThread[1].Queue) = 1;
            if ( !LODWORD(v50[1].WaitListEntry.Flink) )
              LODWORD(v50[1].WaitListEntry.Flink) = 1;
          }
          v51 = MmCheckCachedPageStates(v42, 1LL, v90, &v77);
          Exception[5] = v51;
          if ( !v77 && !a8 )
          {
            v78 = 0;
            v35 = v83;
            v9 = a1;
            LODWORD(v37) = *(_DWORD *)&v79[1];
            v26 = a9;
            goto LABEL_107;
          }
          if ( v51 < 0 )
            RtlRaiseStatus(v51);
          v52 = 4096;
          if ( v43 <= 0x1000 )
            v52 = v43;
          memmove((void *)(v42 + v41), a2, v52 - v41);
          v70 = 1;
          BYTE4(v50[1].Queue) = v85 & 3;
          LODWORD(v50[1].WaitListEntry.Flink) = v85 >> 2;
        }
        a2 += 4096 - v41;
        v41 = 0;
        v88 = 0;
        if ( v43 <= 0x1000 )
          break;
        v42 += 4096LL;
        v95 = v42;
        v43 -= 4096;
        v81 = v43;
        LODWORD(v38) = v38 + 4096;
        LODWORD(v93) = v38;
        if ( v101 )
        {
          v44 = 2;
        }
        else
        {
          v44 = 4;
          if ( v43 > 0x1000 )
            v44 = 2;
        }
        v84 = v44;
      }
      v70 = 0;
      v53 = *((_QWORD *)v83 + 1);
      if ( !(unsigned __int16)_InterlockedDecrement(v83 + 4) )
      {
        v54 = *(struct _KEVENT **)(v53 + 184);
        if ( v54 )
          KeSetEvent(v54, 0, 0);
      }
      v35 = 0LL;
      v83 = 0LL;
      v26 = a9;
      v37 = *(unsigned int *)&v79[1];
      v9 = a1;
      CcSetDirtyInMask(a1, &v82, *(unsigned int *)&v79[1], a9);
      v36 = v101;
      if ( v86 - v101 > 0x1000000 )
      {
        CcFlushCachePriv(*(_QWORD *)(a6 + 40), (unsigned int)&v82, v37, 0, v69, (__int64)Exception);
        v55 = Exception[0];
        if ( Exception[0] < 0 )
        {
          v56 = FsRtlIsNtstatusExpected(Exception[0]);
          v57 = -1073741591;
          if ( v56 )
            v57 = v55;
          RtlRaiseStatus(v57);
        }
      }
      if ( v101 < 0x1000 )
      {
        v58 = a5;
        if ( (a5 & 4) == 0 )
          v58 = 0;
        a5 = v58;
      }
      else
      {
        a5 |= 1u;
      }
      v82 += v37;
      v12 = v75;
    }
    v78 = 1;
LABEL_107:
    v59 = v85;
    v60 = CurrentThread;
    BYTE4(CurrentThread[1].Queue) = v85 & 3;
    LODWORD(v60[1].WaitListEntry.Flink) = v59 >> 2;
    if ( v35 )
    {
      v61 = *((_QWORD *)v35 + 1);
      if ( !(unsigned __int16)_InterlockedDecrement(v35 + 4) )
      {
        v62 = *(struct _KEVENT **)(v61 + 184);
        if ( v62 )
          KeSetEvent(v62, 0, 0);
      }
      LODWORD(v37) = *(_DWORD *)&v79[1];
    }
    if ( v70 && (_DWORD)v37 )
      CcSetDirtyInMask(v9, &v82, (unsigned int)v37, v26);
    if ( CcRemoteFileDPInlineFlushThreshold != -1
      && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
      && !v69
      && *(_DWORD *)(v9 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
    {
      v71 = 1;
      v72 = 1;
    }
    if ( v73 || v72 )
    {
      v63 = v86;
      if ( v71 )
        v63 = 0;
      v64 = v99;
      if ( v71 )
        v64 = 0;
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v64, v63, 0, v69, (__int64)Exception);
      if ( v74 )
      {
        v65 = KeAcquireQueuedSpinLock(5uLL);
        --*(_DWORD *)(v9 + 516);
        KeReleaseQueuedSpinLock(5uLL, v65);
      }
      v66 = Exception[0];
      if ( Exception[0] < 0 )
      {
        v67 = FsRtlIsNtstatusExpected(Exception[0]);
        v68 = -1073741591;
        if ( v67 )
          v68 = v66;
        RtlRaiseStatus(v68);
      }
    }
    return v78;
  }
  return result;
}
