/*
 * XREFs of MiProcessWorkingSets @ 0x1400A53A0
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiComputeSystemTrimCriteria @ 0x140014E30 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140015198 (MiComputeAgingPercent.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiLogProcessWorkingSetsStop @ 0x140092348 (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1401D7674 (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x1401D7DD0 (MiOrderTrimList.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  PRKEVENT v2; // rdi
  _QWORD *v4; // rsi
  int v5; // r13d
  UINT32 cData; // r11d
  __int64 v7; // rdx
  ULONG64 v8; // r8
  const struct _TlgProvider_t *v9; // r9
  int *v10; // rbx
  __int64 v11; // rdx
  int ***v12; // r15
  int v13; // r12d
  __int16 v14; // r8
  int **v15; // rdi
  int *v16; // rax
  unsigned __int64 v17; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int8 CurrentIrql; // cl
  int *v20; // rcx
  unsigned __int16 v21; // ax
  int *v22; // rax
  int **v23; // rcx
  __int64 v24; // rcx
  int **v25; // rax
  bool v26; // zf
  char v27; // r14
  unsigned int v28; // eax
  int Blink; // r13d
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  struct _LIST_ENTRY *v32; // rax
  int *v33; // rax
  int *v34; // rcx
  __int64 *v35; // rdx
  __int64 *v36; // rcx
  __int64 *v37; // r8
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rsi
  unsigned __int8 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r9
  __int64 *v45; // r8
  __int64 **v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int16 v49; // cx
  __int64 v50; // rax
  int *v51; // rax
  signed __int64 *v52; // rsi
  signed __int64 v53; // rax
  signed __int64 v54; // rcx
  unsigned __int64 v55; // rax
  int v56; // eax
  char v57; // al
  const GUID *v58; // [rsp+20h] [rbp-E0h]
  const GUID *v59; // [rsp+28h] [rbp-D8h]
  __int16 v60; // [rsp+40h] [rbp-C0h]
  char v61; // [rsp+42h] [rbp-BEh] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int16 v63; // [rsp+50h] [rbp-B0h] BYREF
  int v64; // [rsp+54h] [rbp-ACh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v66; // [rsp+70h] [rbp-90h]
  unsigned int v67; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+8Ch] [rbp-74h]
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int16 *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  int *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  __int64 *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  __int64 *v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  __int64 *v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int64 *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  __int64 *v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(PRKEVENT *)(a1 + 5616);
  Event = v2;
  v4 = (_QWORD *)a1;
  v62 = a2;
  v66 = (_QWORD *)a1;
  MiComputeAgingPercent(a1);
  v5 = MiComputeSystemTrimCriteria(v4, a2);
  LOWORD(cData) = 10;
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v61 = *(_BYTE *)(a2 + 2);
    v48 = v4[702];
    v69 = v5;
    v78 = v7;
    v80 = 2LL;
    v49 = *(_WORD *)(v48 + 2358);
    v74 = *(_QWORD *)(a2 + 72);
    v71 = *(_QWORD *)(a2 + 64);
    v73 = v4[736];
    v75 = v4[752];
    v72 = v4[766];
    v77 = &v61;
    v79 = &v63;
    v81 = &v69;
    v83 = &v74;
    v85 = &v71;
    v87 = &v73;
    v89 = &v75;
    v91 = &v72;
    v63 = v49;
    v82 = 4LL;
    v84 = 8LL;
    v86 = 8LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    TlgWriteEx(v9, &unk_14025454C, v8, (ULONG)v9, v58, v59, cData, &pData);
    LOWORD(cData) = 10;
  }
  ++LODWORD(v2[5].Header.WaitListHead.Flink);
  if ( (v5 & 5) != 0 )
  {
    MiDrainZeroLookasides(v4, 0LL, 0LL, 0LL);
    LOWORD(cData) = 10;
  }
  v64 = 0;
  v67 = 0;
  if ( (v5 & 5) != 0 )
    LOBYTE(v2[2].Header.SignalState) = 1;
  if ( (v5 & 2) != 0 )
    ++v2[98].Header.LockNV;
  v10 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    if ( HIWORD(v2[98].Header.SignalState) > 0xAu )
      HIWORD(v2[98].Header.SignalState) = cData;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v2[2].Header.SignalState) == 1 )
    {
      v35 = v4 + 703;
      BYTE2(v2[2].Header.SignalState) = 0;
      v36 = (__int64 *)v4[703];
      if ( v36 != v4 + 703 )
      {
        do
        {
          v37 = v36 - 3;
          v36 = (__int64 *)*v36;
          if ( (struct _LIST_ENTRY *)v37[11] >= v2[2].Header.WaitListHead.Blink )
          {
            v44 = v37[3];
            v45 = v37 + 3;
            v46 = (__int64 **)v45[1];
            if ( *(__int64 **)(v44 + 8) != v45 || *v46 != v45 )
              __fastfail(3u);
            *v46 = (__int64 *)v44;
            *(_QWORD *)(v44 + 8) = v46;
            v47 = *v35;
            *v45 = *v35;
            v45[1] = (__int64)v35;
            if ( *(__int64 **)(v47 + 8) != v35 )
              __fastfail(3u);
            *(_QWORD *)(v47 + 8) = v45;
            *v35 = (__int64)v45;
          }
        }
        while ( v36 != v35 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v11 = v62;
  v12 = (int ***)(v4 + 703);
  BYTE1(v2[2].Header.SignalState) = 1;
  do
  {
LABEL_14:
    v13 = 0;
    v70 = v5 & 1;
    if ( (v5 & 1) != 0 )
    {
      v50 = MiOrderTrimList(v4, MiTrimPassToAge[*(_BYTE *)v11 & 0x7F]);
      v11 = v62;
      *(_QWORD *)(v62 + 96) = v50;
    }
    v14 = ++LOWORD(v2[98].Header.SignalState);
    *(_QWORD *)(v11 + 80) = *(_QWORD *)(v11 + 72) - *(_QWORD *)(v11 + 88);
    v60 = v14;
    while ( 1 )
    {
      if ( *v12 == (int **)v12 )
        goto LABEL_57;
      v15 = *v12;
      v16 = **v12;
      if ( (*v12)[1] != (int *)v12 || *((int ***)v16 + 1) != v15 )
        __fastfail(3u);
      *v12 = (int **)v16;
      *((_QWORD *)v16 + 1) = v12;
      *v15 = 0LL;
      if ( *((_WORD *)v15 + 85) == v14 )
        break;
      *((_WORD *)v15 + 85) = v14;
      if ( (v5 & 0x40) != 0 && (struct _LIST_ENTRY *)v15[8] < Event[2].Header.WaitListHead.Blink )
      {
        v33 = (int *)v12[1];
        *v15 = (int *)v12;
        v15[1] = v33;
        if ( *(int ****)v33 != v12 )
          __fastfail(3u);
        *(_QWORD *)v33 = v15;
        v12[1] = v15;
LABEL_57:
        v4 = v66;
        goto LABEL_44;
      }
      v17 = (unsigned __int64)v15[12];
      if ( v17 > 5 || ((_BYTE)v15[24] & 7) != 0 )
      {
        *((_BYTE *)v15 + 193) = *((_BYTE *)v15 + 193) & 0xF9 | 2;
        if ( *(_BYTE *)(v11 + 2) != 2 || (v55 = (unsigned __int64)v15[9], v17 > v55) && v17 - v55 >= 0x40000 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_27;
          }
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
            {
LABEL_27:
              __writecr8(LockHandle.OldIrql);
              v13 = MiTrimOrAgeWorkingSet((PEX_SPIN_LOCK)v15 - 6);
              if ( v13 == 1 )
                *(_BYTE *)(v62 + 4) = 2;
              LockHandle.LockQueue.Lock = &SpinLock;
              LockHandle.LockQueue.Next = 0LL;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              LockHandle.OldIrql = CurrentIrql;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle);
              }
              else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle) )
              {
                KxWaitForLockOwnerShip(&LockHandle);
              }
              v11 = v62;
              v14 = v60;
              goto LABEL_33;
            }
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
          goto LABEL_27;
        }
LABEL_33:
        if ( (v5 & 0x40) == 0 || (struct _LIST_ENTRY *)v15[8] < Event[2].Header.WaitListHead.Blink || *(v15 - 2) )
        {
          *((_BYTE *)v15 + 193) &= 0xF9u;
          v20 = MiSystemPartition;
          if ( ((_BYTE)v15[24] & 7) == 0 )
          {
            v21 = *((_WORD *)v15 + 78);
            if ( v21 != 1023 )
              v20 = *(int **)(qword_1402FEC28 + 8LL * v21);
          }
          v22 = v20 + 1406;
          v23 = (int **)*((_QWORD *)v20 + 704);
          *v15 = v22;
          v15[1] = (int *)v23;
          if ( *v23 != v22 )
            __fastfail(3u);
          *v23 = (int *)v15;
          *((_QWORD *)v22 + 1) = v15;
          v24 = (__int64)*(v15 - 2);
          if ( v24 )
          {
            KeSignalGate(v24, 1LL);
            v11 = v62;
            v14 = v60;
          }
        }
        else
        {
          *((_BYTE *)v15 + 193) |= 6u;
          v15[1] = v10;
          v10 = (int *)(v15 + 1);
        }
        if ( v13 == 1 )
          goto LABEL_57;
      }
      else if ( *(v15 - 2) )
      {
        v51 = (int *)v12[1];
        *v15 = (int *)v12;
        v15[1] = v51;
        if ( *(int ****)v51 != v12 )
          __fastfail(3u);
        *(_QWORD *)v51 = v15;
        v12[1] = v15;
      }
      else
      {
        *((_BYTE *)v15 + 193) |= 6u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v39 = (volatile signed __int32 *)(v15 - 163);
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v15 - 326, v41, v42);
        v43 = *((_DWORD *)v15 - 183) & 7;
        if ( v43 == 1 )
          _InterlockedXor(v39 + 143, 7u);
        _InterlockedAnd(v39, 0xFFFFFF7F);
        __writecr8(v40);
        if ( v43 == 1 )
        {
          v52 = (signed __int64 *)(v39 + 66);
          _m_prefetchw(&KiProcessOutSwapListHead);
          v53 = KiProcessOutSwapListHead;
          do
          {
            *v52 = v53;
            v54 = v53;
            v53 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v52, v53);
          }
          while ( v53 != v54 );
          if ( !v53 )
            KeSetEvent(&KiSwapEvent, 10, 0);
        }
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        *((_BYTE *)v15 + 193) &= 0xF9u;
        MiReturnWsToExpansionList((__int64)(v15 - 3), 0LL);
        v11 = v62;
        v14 = v60;
      }
    }
    v25 = *v12;
    *v15 = (int *)*v12;
    v15[1] = (int *)v12;
    if ( v25[1] != (int *)v12 )
      __fastfail(3u);
    v26 = v70 == 0;
    v4 = v66;
    v25[1] = (int *)v15;
    *v12 = v15;
    if ( v26 )
      break;
    v56 = MiCheckSystemTrimEndCriteria(v4, v11, &LockHandle);
    v11 = v62;
    v2 = Event;
  }
  while ( !v56 );
LABEL_44:
  if ( (v5 & 0x40) != 0 )
  {
    while ( 1 )
    {
      v34 = v10;
      if ( !v10 )
        break;
      v10 = *(int **)v10;
      v38 = (__int64)(v34 - 8);
      *(_BYTE *)(v38 + 217) &= 0xF9u;
      MiReturnWsToExpansionList(v38, 1LL);
    }
    v11 = v62;
  }
  v2 = Event;
  if ( v13 == 1 )
  {
    v57 = v64;
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v57 & 5) != 0 )
      LOBYTE(v2[2].Header.SignalState) = 0;
  }
  else
  {
    v27 = v5 | v64;
    v64 |= v5;
    v28 = v5 & 0xFFFFFF3C | v67;
    Blink = (int)Event[1].Header.WaitListHead.Blink;
    v67 = v28;
    if ( v28 != Blink )
    {
      if ( (Blink & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      v5 = v28 ^ Blink;
      *(_BYTE *)(v11 + 2) = 7;
      goto LABEL_14;
    }
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v27 & 5) != 0 )
      LOBYTE(v2[2].Header.SignalState) = 0;
    if ( Blink )
    {
      LODWORD(v2[1].Header.WaitListHead.Blink) = 0;
      KeSetEvent(v2, 0, 0);
    }
    if ( (v27 & 0x83) != 0 )
    {
      v30 = (_QWORD *)v62;
      v2[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(v62 + 8);
      v2[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v30[2];
      *(_QWORD *)&v2[102].Header.Lock = v30[3];
      v2[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v30[4];
      v2[102].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v30[5];
      v31 = v30[6];
      *(_QWORD *)&v2[103].Header.Lock = v31;
      v32 = (struct _LIST_ENTRY *)v30[7];
      v2[103].Header.WaitListHead.Flink = v32;
      *(_QWORD *)&v2[101].Header.Lock = (char *)v32 + v31;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  MiLogProcessWorkingSetsStop();
}
