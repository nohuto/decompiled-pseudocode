/*
 * XREFs of MiProcessWorkingSets @ 0x140099DB0
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     MiComputeAgingPercent @ 0x140113350 (MiComputeAgingPercent.c)
 *     MiComputeSystemTrimCriteria @ 0x14011341C (MiComputeSystemTrimCriteria.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14021A3F8 (MiCheckSystemTrimEndCriteria.c)
 *     MiComputeTrimAmount @ 0x14021A5E8 (MiComputeTrimAmount.c)
 *     MiOrderTrimList @ 0x14021ABB0 (MiOrderTrimList.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1)
{
  PRKEVENT v1; // rdi
  _QWORD *v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // rbx
  _KSPIN_LOCK_QUEUE *v8; // r8
  __int16 *v9; // rsi
  __int16 v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int16 **v14; // r14
  int v15; // r15d
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 Next; // rax
  int v19; // r12d
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v21; // rdx
  __int16 *v22; // rcx
  __int16 *v23; // rax
  __int16 **v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  _QWORD *v27; // rdi
  bool v28; // zf
  char v29; // r14
  unsigned int v30; // r13d
  int Blink; // r12d
  __int64 v32; // rcx
  struct _LIST_ENTRY *v33; // rax
  int v34; // r8d
  int v35; // r9d
  __int16 **v36; // rax
  __int16 **v37; // rdi
  _QWORD *v38; // rcx
  __int64 *v39; // r8
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 *v44; // rdx
  __int64 **v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // r15
  unsigned int v48; // r14d
  int v49; // eax
  __int64 v50; // rax
  __int16 v51; // cx
  __int16 ***v52; // rax
  signed __int64 *v53; // rdx
  signed __int64 v54; // rax
  signed __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // dl
  __int64 v58; // rax
  int v59; // eax
  char v60; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v61; // [rsp+34h] [rbp-CCh]
  __int16 v62; // [rsp+38h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+58h] [rbp-A8h]
  unsigned int v65; // [rsp+5Ch] [rbp-A4h]
  int v66; // [rsp+60h] [rbp-A0h]
  _QWORD *v67; // [rsp+68h] [rbp-98h]
  PRKEVENT Event; // [rsp+70h] [rbp-90h]
  unsigned int v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v73[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v74; // [rsp+A2h] [rbp-5Eh]
  _KSPIN_LOCK_QUEUE *v75; // [rsp+A8h] [rbp-58h]
  struct _LIST_ENTRY *v76; // [rsp+B0h] [rbp-50h]
  struct _LIST_ENTRY *v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *v79; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  struct _LIST_ENTRY *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  __int64 v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  __int64 v88[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v89[4]; // [rsp+190h] [rbp+90h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v1 = *(PRKEVENT *)(a1 + 5256);
  v2 = (_QWORD *)a1;
  Event = v1;
  v67 = (_QWORD *)a1;
  MiComputeAgingPercent();
  v61 = MiComputeSystemTrimCriteria(v2, v73);
  v3 = v61;
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v60 = v74;
    v50 = v2[657];
    v69 = v61;
    v88[5] = v4;
    v88[7] = 2LL;
    v51 = *(_WORD *)(v50 + 2358);
    v72 = v84;
    v71 = v83;
    v70 = v2[688];
    v88[4] = (__int64)&v60;
    v88[6] = (__int64)&v62;
    v88[8] = (__int64)&v69;
    v88[10] = (__int64)&v72;
    v88[12] = (__int64)&v71;
    v88[14] = (__int64)&v70;
    v62 = v51;
    v88[9] = 4LL;
    v88[11] = 8LL;
    v88[13] = 8LL;
    v88[15] = 8LL;
    MmTlgWrite(v6, (int)&dword_1402A45C3, v5, v6, 8u, (__int64)v88);
  }
  ++LODWORD(v1[5].Header.WaitListHead.Flink);
  if ( (v3 & 5) != 0 )
    MiDrainZeroLookasides(v2, 0LL, 0LL, 0LL);
  v66 = 0;
  v65 = 0;
  if ( (v3 & 5) != 0 )
    LOBYTE(v1[2].Header.SignalState) = 1;
  if ( (v3 & 2) != 0 )
    ++v1[98].Header.LockNV;
  v7 = 0LL;
  if ( (v3 & 0x40) != 0 )
  {
    if ( HIWORD(v1[98].Header.SignalState) > 0xAu )
      HIWORD(v1[98].Header.SignalState) = 10;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v1[2].Header.SignalState) == 1 )
    {
      v39 = v2 + 658;
      BYTE2(v1[2].Header.SignalState) = 0;
      v40 = (__int64 *)v2[658];
      if ( v40 != v2 + 658 )
      {
        do
        {
          v41 = v40 - 3;
          v40 = (__int64 *)*v40;
          if ( (struct _LIST_ENTRY *)v41[11] >= v1[2].Header.WaitListHead.Blink )
          {
            v43 = v41[3];
            v44 = v41 + 3;
            v45 = (__int64 **)v44[1];
            if ( *(__int64 **)(v43 + 8) != v44 || *v45 != v44 )
              __fastfail(3u);
            *v45 = (__int64 *)v43;
            *(_QWORD *)(v43 + 8) = v45;
            v46 = *v39;
            *v44 = *v39;
            v44[1] = (__int64)v39;
            if ( *(__int64 **)(v46 + 8) != v39 )
              __fastfail(3u);
            *(_QWORD *)(v46 + 8) = v44;
            *v39 = (__int64)v44;
          }
        }
        while ( v40 != v39 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v8 = 0LL;
  v9 = (__int16 *)(v2 + 658);
  BYTE1(v1[2].Header.SignalState) = 1;
  do
  {
LABEL_14:
    v75 = v8;
    v64 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v87 = MiOrderTrimList(v2, (unsigned __int8)MiTrimPassToAge[v73[0] & 0x7F]);
      v8 = 0LL;
    }
    v10 = ++LOWORD(v1[98].Header.SignalState);
    v85 = v84 - v86;
    while ( 1 )
    {
      if ( *(__int16 **)v9 == v9 )
        goto LABEL_57;
      v11 = *(__int64 **)v9;
      v12 = **(_QWORD **)v9;
      if ( *(__int16 **)(*(_QWORD *)v9 + 8LL) != v9 || *(__int64 **)(v12 + 8) != v11 )
        __fastfail(3u);
      *(_QWORD *)v9 = v12;
      v13 = (__int64)(v11 - 3);
      *(_QWORD *)(v12 + 8) = v9;
      v14 = (__int16 **)(v13 + 24);
      *(_QWORD *)(v13 + 24) = v8;
      if ( *(_WORD *)(v13 + 194) == v10 )
        break;
      *(_WORD *)(v13 + 194) = v10;
      v15 = v3 & 0x40;
      if ( (v3 & 0x40) != 0 && (struct _LIST_ENTRY *)*(_QWORD *)(v13 + 88) < Event[2].Header.WaitListHead.Blink )
      {
        v36 = (__int16 **)*((_QWORD *)v9 + 1);
        v37 = (__int16 **)(v13 + 24);
        *v37 = v9;
        v37[1] = (__int16 *)v36;
        if ( *v36 != v9 )
          __fastfail(3u);
        *v36 = (__int16 *)v37;
        *((_QWORD *)v9 + 1) = v37;
LABEL_57:
        v2 = v67;
        goto LABEL_41;
      }
      v16 = *(_QWORD *)(v13 + 120);
      if ( v16 > 5 || (*(_BYTE *)(v13 + 216) & 7) != 0 )
      {
        v17 = (int)v8;
        if ( v74 == 2 )
        {
          v56 = *(_QWORD *)(v13 + 96);
          if ( v16 <= v56 || v16 - v56 < 0x40000 )
            v17 = 1;
        }
        *(_BYTE *)(v13 + 217) = *(_BYTE *)(v13 + 217) & 0xF9 | 2;
        if ( !v17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_28;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 (signed __int64)v8,
                                                 (signed __int64)&LockHandle) == &LockHandle )
            {
LABEL_28:
              __writecr8(LockHandle.OldIrql);
              v19 = MiTrimOrAgeWorkingSet(v13, (__int64)v73, v3);
              v8 = 0LL;
              LockHandle.LockQueue.Next = 0LL;
              LockHandle.LockQueue.Lock = &SpinLock;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              LockHandle.OldIrql = CurrentIrql;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
                v8 = 0LL;
              }
              else
              {
                v21 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle);
                if ( v21 )
                {
                  KxWaitForLockOwnerShip((__int64)&LockHandle, v21);
                  v8 = 0LL;
                }
              }
              if ( v19 || !v64 )
                goto LABEL_32;
              if ( !*(_QWORD *)(v13 + 208) )
                goto LABEL_112;
              v57 = *(_BYTE *)(v13 + 216);
              if ( ((v57 >> 3) & 7) != 0 )
                *(_BYTE *)(v13 + 216) = v57 ^ (v57 ^ (8 * ((v57 >> 3) - 1))) & 0x38;
              if ( (*(_BYTE *)(v13 + 216) & 0x38) == 0 )
              {
LABEL_32:
                v3 = v61;
              }
              else
              {
LABEL_112:
                v73[1] = MiTrimPassToAge[v73[0] & 0x7F];
                v58 = MiComputeTrimAmount(v73, v13, 0LL);
                v3 = v61;
                if ( v58 )
                {
                  v86 += v58;
                  *(_BYTE *)(v13 + 216) |= 0x38u;
                  v75 = (_KSPIN_LOCK_QUEUE *)((char *)v75 + v58);
                  *(_QWORD *)(v13 + 208) = v58;
                }
                v8 = 0LL;
              }
              goto LABEL_33;
            }
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            v8 = 0LL;
          }
          LockHandle.LockQueue.Next = v8;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_28;
        }
LABEL_33:
        if ( !v15
          || (struct _LIST_ENTRY *)*(_QWORD *)(v13 + 88) < Event[2].Header.WaitListHead.Blink
          || *(_QWORD *)(v13 + 8) )
        {
          *(_BYTE *)(v13 + 217) &= 0xF9u;
          v22 = MiSystemPartition;
          if ( (*(_BYTE *)(v13 + 216) & 7) == 0 )
            v22 = MiPartitionIdToPointer(*(_WORD *)(v13 + 180));
          v23 = v22 + 2632;
          v24 = (__int16 **)*((_QWORD *)v22 + 659);
          *v14 = v23;
          *(_QWORD *)(v13 + 32) = v24;
          if ( *v24 != v23 )
            __fastfail(3u);
          *v24 = (__int16 *)v14;
          *((_QWORD *)v23 + 1) = v14;
          v25 = *(_QWORD *)(v13 + 8);
          if ( v25 )
          {
            KeSignalGate(v25, 1LL);
            v8 = 0LL;
          }
        }
        else
        {
          *(_BYTE *)(v13 + 217) |= 6u;
          *(_QWORD *)(v13 + 32) = v7;
          v7 = (_QWORD *)(v13 + 32);
        }
      }
      else if ( *(_QWORD *)(v13 + 8) )
      {
        v52 = (__int16 ***)*((_QWORD *)v9 + 1);
        *v14 = v9;
        *(_QWORD *)(v13 + 32) = v52;
        if ( *v52 != (__int16 **)v9 )
          __fastfail(3u);
        *v52 = v14;
        *((_QWORD *)v9 + 1) = v14;
      }
      else
      {
        *(_BYTE *)(v13 + 217) |= 6u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v47 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v48 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v13 - 1272), 7u) )
        {
          do
          {
            if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v48);
          }
          while ( (*(_DWORD *)(v13 - 1272) & 0x80u) != 0
               || _interlockedbittestandset((volatile signed __int32 *)(v13 - 1272), 7u) );
        }
        v49 = *(_DWORD *)(v13 - 700) & 7;
        if ( v49 == 1 )
          _InterlockedXor((volatile signed __int32 *)(v13 - 700), 7u);
        _InterlockedAnd((volatile signed __int32 *)(v13 - 1272), 0xFFFFFF7F);
        __writecr8(v47);
        if ( v49 == 1 )
        {
          v53 = (signed __int64 *)(v13 - 1008);
          _m_prefetchw(&KiProcessOutSwapListHead);
          v54 = KiProcessOutSwapListHead;
          do
          {
            *v53 = v54;
            v55 = v54;
            v54 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v53, v54);
          }
          while ( v54 != v55 );
          if ( !v54 )
            KeSetEvent(&KiSwapEvent, 10, 0);
        }
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        *(_BYTE *)(v13 + 217) &= 0xF9u;
        MiReturnWsToExpansionList(v13, 0LL);
        v8 = 0LL;
      }
    }
    v26 = *(__int64 **)v9;
    v27 = (_QWORD *)(v13 + 24);
    *v27 = *(_QWORD *)v9;
    v27[1] = v9;
    if ( (__int16 *)v26[1] != v9 )
      __fastfail(3u);
    v28 = v64 == 0;
    v2 = v67;
    v26[1] = (__int64)v27;
    *(_QWORD *)v9 = v27;
    if ( v28 )
      break;
    v59 = MiCheckSystemTrimEndCriteria(v2, v73, &LockHandle);
    v1 = Event;
    v8 = 0LL;
  }
  while ( !v59 );
LABEL_41:
  if ( (v3 & 0x40) != 0 )
  {
    while ( 1 )
    {
      v38 = v7;
      if ( !v7 )
        break;
      v7 = (_QWORD *)*v7;
      v42 = (__int64)(v38 - 4);
      *(_BYTE *)(v42 + 217) &= 0xF9u;
      MiReturnWsToExpansionList(v42, 1LL);
    }
    v8 = 0LL;
  }
  v29 = v3 | v66;
  v1 = Event;
  v30 = v3 & 0xFFFFFF3C | v65;
  v66 |= v3;
  v65 = v30;
  Blink = (int)Event[1].Header.WaitListHead.Blink;
  if ( v30 != Blink )
  {
    if ( (Blink & 5) != 0 )
      LOBYTE(Event[2].Header.SignalState) = 1;
    v3 = v30 ^ Blink;
    v74 = 7;
    v61 = v3;
    goto LABEL_14;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v29 & 5) != 0 )
    LOBYTE(v1[2].Header.SignalState) = 0;
  if ( Blink )
  {
    LODWORD(v1[1].Header.WaitListHead.Blink) = (_DWORD)v8;
    KeSetEvent(v1, 0, 0);
  }
  if ( (v29 & 0x83) != 0 )
  {
    v32 = v81;
    v1[101].Header.WaitListHead.Flink = v76;
    v1[101].Header.WaitListHead.Blink = v77;
    *(_QWORD *)&v1[102].Header.Lock = v78;
    v1[102].Header.WaitListHead.Flink = v79;
    v1[102].Header.WaitListHead.Blink = v80;
    v33 = v82;
    v1[103].Header.WaitListHead.Flink = v82;
    *(_QWORD *)&v1[103].Header.Lock = v32;
    *(_QWORD *)&v1[101].Header.Lock = (char *)v33 + v32;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
    MmTlgWrite(v35, (int)&dword_1402A4537, v34, v35, 2u, (__int64)v89);
}
