/*
 * XREFs of PfFileInfoNotify @ 0x1400EC950
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140006D40 (ExAcquireRundownProtectionEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PfFbLogEntryReserve @ 0x1400D1CA4 (PfFbLogEntryReserve.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnCheckLoggingForThread @ 0x1400E9B50 (PfSnCheckLoggingForThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     PfSnLogPageFaultCommon @ 0x1400ED3E0 (PfSnLogPageFaultCommon.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfFbLogEntryComplete @ 0x1400EDE54 (PfFbLogEntryComplete.c)
 *     PfLogDeleteHelper @ 0x1400EE1A4 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 *     _wcsupr @ 0x14014DFA8 (_wcsupr.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PfSnLogVolumeCreate @ 0x1404C0524 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x1404F4BC4 (PfSnNameRemoveAll.c)
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x1404F7FE4 (PfSnLogStreamCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 *v16; // r14
  PSLIST_ENTRY v17; // rbx
  int v18; // r15d
  unsigned __int64 v19; // rtt
  PSLIST_ENTRY j; // rdx
  int v21; // esi
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _SLIST_HEADER *Next; // rsi
  unsigned __int64 v26; // rtt
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // r14
  signed __int64 v32; // rdx
  struct _EX_RUNDOWN_REF *v33; // rsi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // r8d
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r15d
  unsigned int *v41; // rsi
  int v42; // r9d
  wchar_t *v43; // rcx
  int v44; // eax
  unsigned int v45; // edx
  int v46; // r15d
  signed __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  _QWORD *v50; // rcx
  _QWORD *v51; // r8
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int16 v55; // cx
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  unsigned int v58; // r15d
  unsigned int *v59; // rsi
  __int16 v60; // cx
  KIRQL v61; // al
  int v62; // ecx
  int v63; // ecx
  __int64 i; // rsi
  _SLIST_ENTRY *v65; // rcx
  signed __int64 Count; // rdx
  signed __int64 v67; // rax
  unsigned __int64 v68; // rdx
  _QWORD v69[3]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v70; // [rsp+48h] [rbp-41h]
  __int64 v71; // [rsp+50h] [rbp-39h]
  _QWORD v72[3]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v73; // [rsp+70h] [rbp-19h]
  __int128 v74; // [rsp+80h] [rbp-9h]
  __int64 v75; // [rsp+90h] [rbp+7h]
  BOOLEAN v76; // [rsp+F0h] [rbp+67h]
  KIRQL v77; // [rsp+F8h] [rbp+6Fh]
  PSLIST_ENTRY ListEntry; // [rsp+100h] [rbp+77h] BYREF
  unsigned int *v79; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *a1 == 13;
  ListEntry = 0LL;
  v79 = 0LL;
  if ( !v2 )
  {
    v21 = -1073741811;
    goto LABEL_65;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v34 = a1[1];
    if ( v34 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_14033B850);
      return 0;
    }
    v62 = v34 - 10;
    if ( v62 )
    {
      v63 = v62 - 1;
      if ( v63 )
      {
        if ( v63 != 1 )
        {
LABEL_101:
          v21 = -1073741637;
          goto LABEL_65;
        }
        if ( (dword_140328810 & 2) != 0 )
        {
          v21 = -1073741431;
          goto LABEL_65;
        }
        return 0;
      }
      FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_1403286C8);
      if ( qword_1403286B8 )
      {
        FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_1403286D0);
        dword_1403286E8 |= 1u;
        for ( i = qword_1403286D8; (__int64 *)i != &qword_1403286D8; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403286D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403286D0);
        KeAbPostRelease((ULONG_PTR)&qword_1403286D0);
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease(&RunRef);
        v21 = 0;
        _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
        qword_1403286B8 = 0LL;
      }
      else
      {
        v21 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403286C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_100:
        KeAbPostRelease((ULONG_PTR)&qword_1403286C8);
        KeLeaveCriticalRegion();
        goto LABEL_21;
      }
    }
    else
    {
      FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_1403286C8);
      if ( qword_1403286B8 )
      {
        v21 = -1073741791;
      }
      else
      {
        FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_1403286D0);
        dword_1403286E8 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403286D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403286D0);
        KeAbPostRelease((ULONG_PTR)&qword_1403286D0);
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)a1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        v21 = 0;
        qword_1403286B8 = *((_QWORD *)a1 + 2);
        _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403286C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_100;
    }
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403286C8);
    goto LABEL_100;
  }
  if ( (v3 & 4) != 0 )
  {
    v44 = a1[1];
    if ( v44 == 3 )
    {
      PfSnNameRemoveAll(*((_QWORD *)a1 + 2));
    }
    else if ( v44 )
    {
      if ( v44 == 2 )
        PfSnLogStreamCreate(*((_QWORD *)a1 + 2));
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_140328260 >= (unsigned int)dword_140328264 && (unsigned int)(a1[1] - 2) > 2 )
  {
    v21 = -1073741697;
    goto LABEL_65;
  }
  v4 = a1[1];
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)a1 + 2);
    v6 = v5[1] & 0xFFF;
    v7 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    if ( !PfSnNumActiveTraces )
      goto LABEL_8;
    v28 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    v29 = v5[4];
    v30 = v5[1];
    v70 = v5[3];
    v31 = *(_QWORD *)(v29 + 544);
    v71 = *v5;
    _m_prefetchw((const void *)(v31 + 1192));
    v32 = *(_QWORD *)(v31 + 1192);
    if ( (v32 & 0xF) != 0 )
    {
      do
      {
        v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 1192), v32 - 1, v32);
        if ( v32 == v47 )
          break;
        v32 = v47;
      }
      while ( (v47 & 0xF) != 0 );
    }
    v33 = (struct _EX_RUNDOWN_REF *)(v32 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      goto LABEL_8;
    v45 = v32 & 0xF;
    if ( v45 <= 1 )
    {
      if ( v45 )
      {
        if ( ExAcquireRundownProtectionEx(v33 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(v31 + 1192));
          v56 = *(_QWORD *)(v31 + 1192);
          while ( (v56 & 0xF) == 0 )
          {
            if ( v33 != (struct _EX_RUNDOWN_REF *)(v56 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v57 = v56;
            v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 1192), v56 + 15, v56);
            if ( v57 == v56 )
              goto LABEL_39;
          }
          _m_prefetchw(&v33[45]);
          Count = v33[45].Count;
          if ( (Count & 1) != 0 )
          {
LABEL_119:
            v68 = Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v68 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v68 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v67 = _InterlockedCompareExchange64((volatile signed __int64 *)&v33[45], Count - 30, Count);
              v2 = Count == v67;
              Count = v67;
              if ( v2 )
                break;
              if ( (v67 & 1) != 0 )
                goto LABEL_119;
            }
          }
        }
      }
      else
      {
        v76 = 1;
        v61 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
        v77 = v61;
        v33 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v31 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v33 )
        {
          v76 = ExAcquireRundownProtection(v33 + 45);
          v61 = v77;
        }
        KeReleaseSpinLock(&qword_140328710, v61);
        if ( !v76 )
          goto LABEL_8;
      }
    }
LABEL_39:
    if ( v33 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(v29, (__int64)v33, 0) )
      {
        v46 = v30 - (v30 & 0xFFF);
        if ( v7 )
        {
          do
          {
            if ( (int)PfSnLogPageFaultCommon((_DWORD)v33, v71, v70, v46, 0) < 0 )
              break;
            v46 += 4096;
            --v28;
          }
          while ( v28 );
        }
      }
      ExReleaseRundownProtection(v33 + 45);
    }
LABEL_8:
    if ( dword_140328260 < (unsigned int)dword_140328264 )
    {
      v8 = *((_QWORD *)a1 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1728) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
      {
        v49 = 2;
        if ( v14 < 2 )
          v49 = (*(_DWORD *)(v9 + 1728) >> 12) & 7;
        v14 = v49;
      }
      if ( v14 < dword_1403271F0 )
      {
        v21 = 0;
      }
      else
      {
        *(_QWORD *)&v73 = v12;
        v15 = *(_QWORD *)(v13 + 744) ^ *(_QWORD *)(v13 + 776);
        v16 = 0LL;
        *((_QWORD *)&v73 + 1) = v11 >> 12;
        *(_QWORD *)&v74 = v7 & 0x7FFFFFFFFFFFFFFFLL | (v10 << 63);
        v17 = 0LL;
        *((_QWORD *)&v74 + 1) = v15 & 0x1FFFFFFFFFFFFFFFLL;
        LODWORD(v75) = dword_14033B850;
        HIDWORD(v75) = *(_DWORD *)(v13 + 744);
        v18 = dword_14032859C
            + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
              + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
        while ( 1 )
        {
          _m_prefetchw(&stru_1403281A0);
          v19 = stru_1403281A0.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v19 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&stru_1403281A0,
                        (stru_1403281A0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                        stru_1403281A0.Count & 0xFFFFFFFFFFFFFFFEuLL)
            && !ExfAcquireRundownProtection(&stru_1403281A0) )
          {
            v21 = -1073741431;
            goto LABEL_124;
          }
          for ( j = RtlpInterlockedPopEntrySList(&stru_1403281C0); !j; j = RtlpInterlockedPopEntrySList(&stru_1403281C0) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_1403281B0);
            if ( j )
              break;
            v21 = qword_1403281F8(&stru_1403281A0);
            if ( v21 < 0 )
              goto LABEL_128;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v16 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v17 = j;
            v21 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          qword_140328200(j);
        }
        RtlpInterlockedPushEntrySList(&stru_1403281B0, j);
        v21 = -1073741789;
LABEL_128:
        ++dword_14032820C;
        dword_140328210 += 64;
        ExReleaseRundownProtection(&stru_1403281A0);
LABEL_16:
        if ( v21 >= 0 )
        {
          v22 = *v16;
          v23 = v73;
          *((_DWORD *)v16 + 2) = v18;
          v24 = v74;
          *v16 = v22 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v16 + 1) = v23;
          *(_QWORD *)&v23 = v75;
          *((_OWORD *)v16 + 2) = v24;
          v16[6] = v23;
          *((_QWORD *)&v17[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v17[2].Next + 2);
          Next = (_SLIST_HEADER *)v17[1].Next;
          if ( (__int64)v17[2].Next - *((_QWORD *)&v17[1].Next + 1) < SLODWORD(Next[5].Alignment) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Alignment)(v17);
          }
          else
          {
            RtlpInterlockedPushEntrySList(Next + 2, v17);
            _m_prefetchw(Next);
            v26 = Next->Alignment & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)Next, v26 - 2, v26) )
              ExfReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
          }
          v21 = 0;
          goto LABEL_21;
        }
LABEL_124:
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140328350 + 1, 1u);
        if ( v17 )
        {
          v65 = v17;
LABEL_126:
          PfFbLogEntryComplete(v65);
        }
      }
LABEL_21:
      if ( v21 >= 0 )
        return (unsigned int)v21;
      goto LABEL_65;
    }
    v21 = -1073741697;
LABEL_65:
    if ( (int)a1[1] <= 3 )
      ++dword_140328364;
    return (unsigned int)v21;
  }
  switch ( v4 )
  {
    case 0:
      v58 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v21 = PfFbLogEntryReserve(&stru_140328120, &ListEntry, &v79, (v58 + 65) & 0xFFFFFFF8);
      if ( v21 < 0 )
        goto LABEL_112;
      v59 = v79;
      *v79 = *v79 & 0x80000002 | (8 * ((v58 + 65) & 0xFFFFFF8)) | 2;
      v59[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      v59[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      *((_QWORD *)v59 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v59[9] ^= (v59[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      v59[9] ^= (v59[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v59 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v59[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      v60 = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      *((_WORD *)v59 + 20) = v60;
      *((_WORD *)v59 + 21) = v60;
      memmove(v59 + 14, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v58);
      v43 = (wchar_t *)(v59 + 14);
      *((_WORD *)v59 + *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 28) = 0;
      goto LABEL_35;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 56LL));
      return 0;
    case 2:
      v35 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v35 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140328618, v35, 1LL);
      if ( dword_140328260 >= (unsigned int)dword_140328264 )
      {
        v21 = -1073741697;
        goto LABEL_65;
      }
      v36 = *((_QWORD *)a1 + 2);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = *(unsigned __int16 *)(v36 + 34) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v21 = PfFbLogEntryReserve(&stru_140328120, &ListEntry, &v79, (2 * v39 + 53) & 0xFFFFFFF8);
      if ( v21 >= 0 )
      {
        v41 = v79;
        *v79 = *v79 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
        v41[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v41[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
        *((_QWORD *)v41 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
        v41[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
        *((_QWORD *)v41 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        v41[10] ^= (v41[10] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
        v42 = v41[10] ^ (v41[10] ^ (*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
        v41[10] = v42;
        v41[10] = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
        *((_WORD *)v41 + 21) = v39;
        memmove(v41 + 11, v38, v40);
        v43 = (wchar_t *)(v41 + 11);
        *((_WORD *)v41 + *((unsigned __int16 *)v41 + 21) + 22) = 0;
LABEL_35:
        wcsupr(v43);
        PfFbLogEntryComplete(ListEntry);
        return 0;
      }
LABEL_112:
      v65 = ListEntry;
      if ( !ListEntry )
        goto LABEL_21;
      goto LABEL_126;
    case 3:
      v48 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v48 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140328618, v48, 0LL);
      if ( dword_140328260 < (unsigned int)dword_140328264 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 44LL));
        return 0;
      }
      v21 = -1073741697;
      goto LABEL_65;
    case 8:
      v54 = *((_QWORD *)a1 + 2);
      v72[0] = 0LL;
      v55 = (2 * (unsigned __int8)*(_DWORD *)v54) & 6 ^ (*(_QWORD *)(v54 + 16) - 1);
      LODWORD(v72[0]) = *(_DWORD *)(v54 + 4);
      v72[1] = *(_QWORD *)(v54 + 8);
      v72[2] = (*(_QWORD *)(v54 + 16) + 4095LL) ^ v55 & 0xFFF;
      v51 = v72;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 24LL;
      goto LABEL_69;
    case 13:
      v50 = (_QWORD *)*((_QWORD *)a1 + 2);
      if ( !v50[1] )
      {
        v21 = -1073741747;
        goto LABEL_65;
      }
      v69[1] = v50[1];
      v69[2] = (unsigned int)dword_14033B850;
      v69[0] = *v50;
      v51 = v69;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 31LL;
LABEL_69:
      PfLogEvent(v53, dword_14032859C + (unsigned int)(v52 >> 10), v51);
      v21 = 0;
      break;
    default:
      goto LABEL_101;
  }
  return (unsigned int)v21;
}
