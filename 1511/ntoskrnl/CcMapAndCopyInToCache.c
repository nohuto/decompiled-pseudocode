/*
 * XREFs of CcMapAndCopyInToCache @ 0x140068870
 * Callers:
 *     CcCopyWriteEx @ 0x140077D10 (CcCopyWriteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401A8DF8 (CcCopyReadExceptionFilter.c)
 */

char __fastcall CcMapAndCopyInToCache(
        _DWORD *a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        __int64 a9)
{
  _DWORD *v9; // r14
  int v10; // esi
  int v11; // eax
  bool v12; // r13
  _SLIST_ENTRY *v13; // rdi
  __int64 v14; // rbx
  char v15; // r15
  struct _KTHREAD *v16; // rcx
  int BaseIoPriorityThread; // eax
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rdi
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  __int64 VirtualAddress; // rax
  unsigned int v24; // r14d
  unsigned int v25; // r12d
  unsigned int v26; // r15d
  ULONG_PTR v27; // r10
  unsigned int v28; // r14d
  int v29; // eax
  char *v30; // r13
  int v31; // ecx
  NTSTATUS v32; // eax
  NTSTATUS v33; // r12d
  __int64 v34; // rdx
  struct _KEVENT *v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  struct _KTHREAD *v38; // rdx
  struct _KTHREAD *v39; // rax
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v41; // ecx
  NTSTATUS v42; // r14d
  BOOLEAN v43; // al
  NTSTATUS v44; // ecx
  unsigned int v45; // r14d
  struct _KTHREAD *v46; // rcx
  KIRQL v48; // al
  NTSTATUS v49; // ebx
  KIRQL v50; // al
  __int64 v51; // rcx
  struct _KEVENT *v52; // rcx
  KIRQL v53; // al
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v55; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  BOOLEAN v58; // al
  NTSTATUS v59; // ecx
  char v60; // [rsp+58h] [rbp-C8h]
  char v61; // [rsp+59h] [rbp-C7h]
  char v62; // [rsp+5Ah] [rbp-C6h]
  char v63; // [rsp+5Bh] [rbp-C5h]
  char v64; // [rsp+5Ch] [rbp-C4h]
  char v65; // [rsp+5Dh] [rbp-C3h]
  KIRQL v66; // [rsp+5Fh] [rbp-C1h]
  __int64 v67; // [rsp+68h] [rbp-B8h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-B0h] BYREF
  unsigned int v69; // [rsp+74h] [rbp-ACh]
  char v70[4]; // [rsp+78h] [rbp-A8h]
  int v71; // [rsp+7Ch] [rbp-A4h]
  unsigned int v72; // [rsp+80h] [rbp-A0h]
  __int64 v73; // [rsp+88h] [rbp-98h] BYREF
  unsigned int v74; // [rsp+90h] [rbp-90h]
  unsigned int v75; // [rsp+94h] [rbp-8Ch]
  unsigned int v76; // [rsp+98h] [rbp-88h]
  ULONG_PTR v77; // [rsp+A0h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-78h]
  unsigned int v79; // [rsp+B0h] [rbp-70h]
  unsigned int v80; // [rsp+B4h] [rbp-6Ch]
  __int64 v81; // [rsp+B8h] [rbp-68h]
  NTSTATUS Status[14]; // [rsp+C0h] [rbp-60h] BYREF
  int v85; // [rsp+138h] [rbp+18h]
  unsigned int v87; // [rsp+140h] [rbp+20h]

  v85 = (int)a3;
  v72 = a4;
  v9 = a1;
  v10 = 0;
  v69 = 0;
  v11 = *(_DWORD *)(a6 + 80);
  v12 = (v11 & 0x10) != 0;
  v61 = v12;
  v79 = a4;
  v76 = *a3 & 0xFFF;
  v74 = 4;
  v73 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)v70 = 0;
  v64 = 0;
  v60 = 0;
  v13 = 0LL;
  v62 = 0;
  v14 = *(_QWORD *)a3;
  v67 = *(_QWORD *)a3;
  v75 = LOBYTE(CurrentThread[1].Teb) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v80 = v75;
  v15 = v12;
  v63 = v12;
  if ( (v11 & 0x10) == 0 )
  {
    v63 = 0;
    if ( (v11 & 0x1000000) == 0 || CcCanIWriteStream(a6, a4, 0, 0) )
    {
      v16 = KeGetCurrentThread();
      BaseIoPriorityThread = PsGetBaseIoPriorityThread(v16, v16, a3);
      if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v18 == KeGetCurrentThread() && *(_DWORD *)(v18 + 1788)
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(v19 + 80) & 0x8000) != 0 )
      {
        v14 = v67;
        goto LABEL_6;
      }
      v14 = v67;
    }
    v15 = 1;
    v63 = 1;
    if ( (v9[38] & 0x400) == 0 )
    {
      v53 = KeAcquireQueuedSpinLock(5uLL);
      v9[38] |= 0x400u;
      KeReleaseQueuedSpinLock(5uLL, v53);
    }
  }
LABEL_6:
  if ( v15 )
  {
    if ( !a8 )
      return 0;
  }
  else if ( !a8 )
  {
    v74 = 6;
  }
  if ( v12 )
  {
    v50 = KeAcquireQueuedSpinLock(5uLL);
    v66 = v50;
    if ( (v9[38] & 0x20) != 0 )
    {
      KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
      v13 = (_SLIST_ENTRY *)*((_QWORD *)v9 + 62);
      if ( !v13 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
        KeReleaseQueuedSpinLock(5uLL, v66);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v13->Next;
      v55 = (_SLIST_ENTRY **)*((_QWORD *)&v13->Next + 1);
      if ( *(&v13->Next->Next + 1) != v13 || *v55 != v13 )
        __fastfail(3u);
      *v55 = Next;
      *((_QWORD *)&Next->Next + 1) = v55;
      *((_QWORD *)&v13->Next + 1) = 0LL;
      v13->Next = 0LL;
      *((_QWORD *)v9 + 62) = 0LL;
      v9[38] &= ~0x20u;
      v60 = 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
      v14 = v67;
      v50 = v66;
    }
    ++v9[129];
    v64 = 1;
    KeReleaseQueuedSpinLock(5uLL, v50);
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
    v14 = v67;
  }
  v20 = v73;
  v21 = a4;
  v22 = v72;
  while ( v21 )
  {
    v69 = 0;
    VirtualAddress = CcGetVirtualAddress((_DWORD)v9, v14, (unsigned int)&v73, (unsigned int)&v68, 0, 0);
    v77 = VirtualAddress;
    v24 = v68;
    if ( v68 > v21 )
    {
      v24 = v21;
      v68 = v21;
    }
    v69 = v24;
    v25 = v21 - v24;
    v87 = v25;
    v26 = v76;
    v27 = VirtualAddress - v76;
    v77 = v27;
    v28 = v76 + v24;
    v68 = v28;
    v29 = 1;
    v71 = 1;
    LODWORD(v14) = v14 - v76;
    v81 = v14;
    v30 = a2;
    while ( 1 )
    {
      Status[4] = v28 > 0x1000;
      if ( (v29 & a5) != 0 )
      {
        v31 = *(_DWORD *)v70;
        if ( v81 >= *a7 )
        {
          v31 = *(_DWORD *)v70 | 1;
          *(_DWORD *)v70 |= 1u;
        }
        if ( (a1[38] & 0x40) != 0 )
        {
          v31 |= 2u;
          *(_DWORD *)v70 = v31;
        }
        v32 = MmCopyToCachedPage(v27, v31);
        v33 = v32;
        if ( v32 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v32);
          v41 = -1073741592;
          if ( IsNtstatusExpected )
            v41 = v33;
          RtlRaiseStatus(v41);
        }
        v25 = v87;
      }
      else
      {
        if ( v28 > 0x1000 && (a5 & 4) != 0 )
        {
          v39 = CurrentThread;
          LOBYTE(CurrentThread[1].Teb) = 1;
          if ( !LODWORD(v39[1].WaitListEntry.Flink) )
            LODWORD(v39[1].WaitListEntry.Flink) = 1;
        }
        if ( !(unsigned int)MmCheckCachedPageStates(v27, 1LL, v74) && !a8 )
        {
          v65 = 0;
          v20 = v73;
          v22 = v72;
          goto LABEL_59;
        }
        v37 = v28 > 0x1000 ? 4096 : v28;
        memmove((void *)(v77 + v26), v30, v37 - v26);
        v38 = CurrentThread;
        LOBYTE(CurrentThread[1].Teb) = v75 & 3;
        LODWORD(v38[1].WaitListEntry.Flink) = v75 >> 2;
      }
      v30 += 4096 - v26;
      a2 = v30;
      v26 = 0;
      v76 = 0;
      if ( v28 <= 0x1000 )
        break;
      v27 = v77 + 4096;
      v77 += 4096LL;
      v28 -= 4096;
      v68 = v28;
      LODWORD(v14) = v14 + 4096;
      LODWORD(v81) = v14;
      if ( v25 )
      {
        v29 = 2;
      }
      else if ( v28 <= 0x1000 )
      {
        v29 = 4;
      }
      else
      {
        v29 = 2;
      }
      v71 = v29;
    }
    v34 = *(_QWORD *)(v73 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v73 + 16)) )
    {
      v35 = *(struct _KEVENT **)(v34 + 184);
      if ( v35 )
        KeSetEvent(v35, 0, 0);
    }
    v20 = 0LL;
    v73 = 0LL;
    v36 = v69;
    LODWORD(v9) = (_DWORD)a1;
    CcSetDirtyInMask(a1, &v67, v69, a9);
    v22 = v72;
    v21 = v87;
    if ( v72 - v87 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), (unsigned int)&v67, v36, 0, v61, (__int64)Status);
      v42 = Status[0];
      if ( Status[0] < 0 )
      {
        v43 = FsRtlIsNtstatusExpected(Status[0]);
        v44 = -1073741591;
        if ( v43 )
          v44 = v42;
        RtlRaiseStatus(v44);
      }
      LODWORD(v9) = (_DWORD)a1;
    }
    if ( v87 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v14 = v36 + v67;
    v67 = v14;
  }
  v65 = 1;
LABEL_59:
  v45 = v75;
  v46 = CurrentThread;
  LOBYTE(CurrentThread[1].Teb) = v75 & 3;
  LODWORD(v46[1].WaitListEntry.Flink) = v45 >> 2;
  if ( v20 )
  {
    v51 = *(_QWORD *)(v20 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v20 + 16)) )
    {
      v52 = *(struct _KEVENT **)(v51 + 184);
      if ( v52 )
        KeSetEvent(v52, 0, 0);
    }
  }
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v61
    && a1[28] >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v60 = 1;
    v62 = 1;
  }
  if ( v63 || v62 )
  {
    if ( v60 )
      v22 = 0;
    else
      v10 = v85;
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v10, v22, 0, v61, (__int64)Status);
    if ( v64 )
    {
      v48 = KeAcquireQueuedSpinLock(5uLL);
      --a1[129];
      KeReleaseQueuedSpinLock(5uLL, v48);
    }
    v49 = Status[0];
    if ( Status[0] < 0 )
    {
      v58 = FsRtlIsNtstatusExpected(Status[0]);
      v59 = -1073741591;
      if ( v58 )
        v59 = v49;
      RtlRaiseStatus(v59);
    }
  }
  return v65;
}
