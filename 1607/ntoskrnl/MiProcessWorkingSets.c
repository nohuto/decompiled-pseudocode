/*
 * XREFs of MiProcessWorkingSets @ 0x1400CD640
 * Callers:
 *     MiWorkingSetManager @ 0x1400BDF08 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     MiReturnWsToExpansionList @ 0x14007BEAC (MiReturnWsToExpansionList.c)
 *     MiLogProcessWorkingSetsStop @ 0x140088D38 (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     MiDrainZeroLookasides @ 0x1400A8C34 (MiDrainZeroLookasides.c)
 *     KeRetryOutswapProcess @ 0x1400B5500 (KeRetryOutswapProcess.c)
 *     MiComputeSystemTrimCriteria @ 0x1400BF160 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1400BF4D4 (MiComputeAgingPercent.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C (KiReleaseQueuedSpinLockInstrumented.c)
 *     _TlgWriteEx @ 0x1401E12FC (_TlgWriteEx.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1401E9324 (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x1401E9B8C (MiOrderTrimList.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rdi
  _QWORD *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rdx
  ULONG64 v8; // r8
  const struct _TlgProvider_t *v9; // r9
  int *v10; // rbx
  __int64 v11; // r9
  int ***v12; // r14
  int v13; // r12d
  __int16 v14; // dx
  int **v15; // rdi
  int *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  unsigned __int8 CurrentIrql; // cl
  bool v21; // zf
  _QWORD *v22; // rdx
  int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // ax
  int *v26; // rax
  int *v27; // rax
  int **v28; // rcx
  __int64 v29; // rcx
  int **v30; // rax
  int v31; // eax
  int v32; // r15d
  unsigned int v33; // eax
  int v34; // r13d
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  int *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // r8
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  __int64 v46; // r9
  _QWORD *v47; // r8
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int16 v51; // cx
  __int64 v52; // rax
  int *v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  const GUID *v58; // [rsp+20h] [rbp-40h]
  const GUID *v59; // [rsp+28h] [rbp-38h]
  int v60; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+168h]

  v2 = (unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = *(_QWORD *)(a1 + 6248);
  *(_QWORD *)(v2 + 64) = v3;
  v5 = (_QWORD *)a1;
  *(_QWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 56) = a1;
  MiComputeAgingPercent(a1);
  v6 = MiComputeSystemTrimCriteria(v5, a2);
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 6) = *(_BYTE *)(a2 + 2);
    v50 = v5[781];
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v6;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = v7;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = 2LL;
    v51 = *(_WORD *)(v50 + 2358);
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(a2 + 72);
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v5[808];
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v5[904];
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v5[918];
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 6;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 16;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 72;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 80;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 88;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 96;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 104;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 112;
    *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v51;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 4LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = 8LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE8) = 8LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = 8LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = 8LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = 8LL;
    TlgWriteEx(v9, &unk_14027C62A, v8, (ULONG)v9, v58, v59, 0xAu, (EVENT_DATA_DESCRIPTOR *)(v2 + 128));
  }
  ++*(_DWORD *)(v3 + 128);
  if ( (v6 & 5) != 0 )
    MiDrainZeroLookasides((__int64)v5, 0LL, 0LL, 0);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) = 0;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0;
  if ( (v6 & 5) != 0 )
    *(_BYTE *)(v3 + 52) = 1;
  if ( (v6 & 2) != 0 )
    ++*(_DWORD *)(v3 + 2352);
  v10 = 0LL;
  if ( (v6 & 0x40) != 0 )
  {
    if ( *(_WORD *)(v3 + 2358) > 0xAu )
      *(_WORD *)(v3 + 2358) = 10;
    KeAcquireInStackQueuedSpinLock(&qword_140327740, (PKLOCK_QUEUE_HANDLE)(v2 + 24));
    if ( *(_BYTE *)(v3 + 54) == 1 )
    {
      v39 = v5 + 782;
      *(_BYTE *)(v3 + 54) = 0;
      v40 = (_QWORD *)v5[782];
      if ( v40 != v5 + 782 )
      {
        do
        {
          v41 = v40 - 3;
          v40 = (_QWORD *)*v40;
          if ( v41[11] >= *(_QWORD *)(v3 + 64) )
          {
            v46 = v41[3];
            v47 = v41 + 3;
            v48 = (_QWORD *)v47[1];
            if ( *(_QWORD **)(v46 + 8) != v47 || (_QWORD *)*v48 != v47 )
              __fastfail(3u);
            *v48 = v46;
            *(_QWORD *)(v46 + 8) = v48;
            v49 = *v39;
            if ( *(_QWORD **)(*v39 + 8LL) != v39 )
              __fastfail(3u);
            *v47 = v49;
            v47[1] = v39;
            *(_QWORD *)(v49 + 8) = v47;
            *v39 = v47;
          }
        }
        while ( v40 != v39 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327740, (PKLOCK_QUEUE_HANDLE)(v2 + 24));
  }
  v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v12 = (int ***)(v5 + 782);
  *(_BYTE *)(v3 + 53) = 1;
  do
  {
LABEL_14:
    v13 = 0;
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v52 = MiOrderTrimList(v5, MiTrimPassToAge[*(_BYTE *)v11 & 0x7F]);
      v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      *(_QWORD *)(v11 + 96) = v52;
    }
    v14 = ++*(_WORD *)(v3 + 2356);
    *(_QWORD *)(v11 + 80) = *(_QWORD *)(v11 + 72) - *(_QWORD *)(v11 + 88);
    *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v14;
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
      if ( *((_WORD *)v15 - 11) == v14 )
        break;
      *((_WORD *)v15 - 11) = v14;
      if ( (v6 & 0x40) != 0
        && (unsigned __int64)v15[8] < *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40)
                                                + 64LL) )
      {
        v38 = (int *)v12[1];
        if ( *(int ****)v38 != v12 )
          __fastfail(3u);
        *v15 = (int *)v12;
        v15[1] = v38;
        *(_QWORD *)v38 = v15;
        v12[1] = v15;
LABEL_57:
        v5 = *(_QWORD **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
        goto LABEL_44;
      }
      if ( (unsigned __int64)v15[13] > 5 || ((_BYTE)v15[20] & 7) != 0 )
      {
        v17 = *((_DWORD *)v15 + 40);
        *(_DWORD *)v2 = v17;
        *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = BYTE1(v17) & 0xF9 | 2;
        *((_WORD *)v15 + 80) = *(_WORD *)v2;
        if ( *(_BYTE *)(v11 + 2) == 2 )
        {
          v54 = (unsigned __int64)v15[13];
          v55 = (unsigned __int64)v15[10];
          if ( v54 <= v55 || v54 - v55 < 0x40000 )
            goto LABEL_32;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v2 + 24, retaddr);
          v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        else
        {
          _m_prefetchw((const void *)(v2 + 24));
          v18 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          if ( !v18 )
          {
            if ( _InterlockedCompareExchange64(
                   *(volatile signed __int64 **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                   0LL,
                   ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 24) == v2 + 24 )
              goto LABEL_27;
            v18 = KxWaitForLockChainValid(v2 + 24);
            v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          }
          *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
        }
LABEL_27:
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28));
        v19 = MiTrimOrAgeWorkingSet(v15 - 3, v11, v6);
        v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v13 = v19;
        if ( v19 == 1 )
          *(_BYTE *)(v11 + 4) = 2;
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = &qword_140327740;
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v21 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = CurrentIrql;
        if ( !v21 )
        {
          KiAcquireQueuedSpinLockInstrumented(v2 + 24, &qword_140327740);
          goto LABEL_70;
        }
        v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_140327740, v2 + 24);
        if ( v22 )
        {
          KxWaitForLockOwnerShip(v2 + 24, v22);
LABEL_70:
          v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        v14 = *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_32:
        if ( (v6 & 0x40) == 0
          || (v23 = 0,
              (unsigned __int64)v15[8] < *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40)
                                                   + 64LL))
          || v15[9] )
        {
          v23 = 1;
        }
        v24 = *((_DWORD *)v15 + 40);
        *(_DWORD *)v2 = v24;
        if ( v23 )
        {
          *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = BYTE1(v24) & 0xF9;
          *((_WORD *)v15 + 80) = *(_WORD *)v2;
          v25 = *((_WORD *)v15 + 70);
          if ( v25 == 1023 )
            v26 = MiSystemPartition;
          else
            v26 = *(int **)(qword_140326FF8 + 8LL * v25);
          v27 = v26 + 1564;
          v28 = (int **)*((_QWORD *)v27 + 1);
          if ( *v28 != v27 )
            __fastfail(3u);
          *v15 = v27;
          v15[1] = (int *)v28;
          *v28 = (int *)v15;
          *((_QWORD *)v27 + 1) = v15;
          v29 = (__int64)v15[9];
          if ( v29 )
          {
            KeSignalGate(v29, 1u);
            v14 = *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          }
        }
        else
        {
          *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) |= 6u;
          *((_WORD *)v15 + 80) = *(_WORD *)v2;
          v15[1] = v10;
          v10 = (int *)(v15 + 1);
        }
        if ( v13 == 1 )
          goto LABEL_57;
      }
      else if ( v15[9] )
      {
        v53 = (int *)v12[1];
        if ( *(int ****)v53 != v12 )
          __fastfail(3u);
        *v15 = (int *)v12;
        v15[1] = v53;
        *(_QWORD *)v53 = v15;
        v12[1] = v15;
      }
      else
      {
        v44 = *((_DWORD *)v15 + 40);
        *(_DWORD *)v2 = v44;
        *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = BYTE1(v44) | 6;
        *((_WORD *)v15 + 80) = *(_WORD *)v2;
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v2 + 24));
        KeRetryOutswapProcess((volatile signed __int32 *)v15 - 326);
        KeAcquireInStackQueuedSpinLock(&qword_140327740, (PKLOCK_QUEUE_HANDLE)(v2 + 24));
        v45 = *((_DWORD *)v15 + 40);
        *(_DWORD *)v2 = v45;
        *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = BYTE1(v45) & 0xF9;
        *((_WORD *)v15 + 80) = *(_WORD *)v2;
        MiReturnWsToExpansionList((__int64)(v15 - 3));
        v14 = *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      }
    }
    v30 = *v12;
    if ( (*v12)[1] != (int *)v12 )
      __fastfail(3u);
    v21 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) == 0;
    v5 = *(_QWORD **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    *v15 = (int *)v30;
    v15[1] = (int *)v12;
    v30[1] = (int *)v15;
    *v12 = v15;
    if ( v21 )
      break;
    v56 = MiCheckSystemTrimEndCriteria(v5, v11, v2 + 24);
    v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v3 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  }
  while ( !v56 );
LABEL_44:
  if ( (v6 & 0x40) != 0 )
  {
    while ( v10 )
    {
      v42 = v10[38];
      v43 = (__int64)(v10 - 8);
      v10 = *(int **)v10;
      *(_DWORD *)v2 = v42;
      *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = BYTE1(v42) & 0xF9;
      *(_WORD *)(v43 + 184) = *(_WORD *)v2;
      MiReturnWsToExpansionList(v43);
    }
    v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
  v3 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v13 == 1 )
  {
    v57 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
    *(_BYTE *)(v3 + 53) = 0;
    if ( (v57 & 5) != 0 )
      *(_BYTE *)(v3 + 52) = 0;
  }
  else
  {
    v31 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    v32 = v6 | *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x14) = v32;
    v33 = v6 & 0xFFFFFF3C | v31;
    v34 = *(_DWORD *)(v3 + 40);
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v33;
    if ( v33 != v34 )
    {
      if ( (v34 & 5) != 0 )
        *(_BYTE *)(v3 + 52) = 1;
      v6 = v33 ^ v34;
      *(_BYTE *)(v11 + 2) = 7;
      goto LABEL_14;
    }
    *(_BYTE *)(v3 + 53) = 0;
    if ( (v32 & 5) != 0 )
      *(_BYTE *)(v3 + 52) = 0;
    if ( v34 )
    {
      *(_DWORD *)(v3 + 40) = 0;
      KeSetEvent((PRKEVENT)v3, 0, 0);
    }
    if ( (v32 & 0x83) != 0 )
    {
      v35 = *(_QWORD **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      *(_QWORD *)(v3 + 2432) = v35[1];
      *(_QWORD *)(v3 + 2440) = v35[2];
      *(_QWORD *)(v3 + 2448) = v35[3];
      *(_QWORD *)(v3 + 2456) = v35[4];
      *(_QWORD *)(v3 + 2464) = v35[5];
      v36 = v35[6];
      *(_QWORD *)(v3 + 2472) = v36;
      v37 = v35[7];
      *(_QWORD *)(v3 + 2480) = v37;
      *(_QWORD *)(v3 + 2424) = v36 + v37;
    }
  }
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v2 + 24));
  MiLogProcessWorkingSetsStop();
}
