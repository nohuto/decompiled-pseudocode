/*
 * XREFs of PfFileInfoNotify @ 0x14006E310
 * Callers:
 *     <none>
 * Callees:
 *     PfLogDeleteHelper @ 0x14001BAB4 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14001BC98 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001BD60 (PfFbLogEntryComplete.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PfSnCheckLoggingForThread @ 0x140077A24 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x140079800 (PfSnLogPageFaultCommon.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     _wcsupr @ 0x140144618 (_wcsupr.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PfSnNameRemoveAll @ 0x1403F1D78 (PfSnNameRemoveAll.c)
 *     PfpRpFileKeyUpdate @ 0x1403FACF0 (PfpRpFileKeyUpdate.c)
 *     PfSnLogVolumeCreate @ 0x1404D5BE0 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x1404D6A0C (PfSnLogStreamCreate.c)
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
  unsigned __int64 *v15; // rdi
  __int64 v16; // rax
  PSLIST_ENTRY v17; // rbx
  int v18; // r15d
  unsigned __int64 v19; // rtt
  PSLIST_ENTRY j; // rdx
  int v21; // r14d
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _SLIST_ENTRY *Next; // rdi
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r14
  signed __int64 v31; // rdx
  struct _EX_RUNDOWN_REF *v32; // rdi
  int v33; // ecx
  unsigned int v34; // edx
  int v35; // r15d
  signed __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // r8d
  const void *v40; // r12
  int v41; // ebx
  unsigned int v42; // r13d
  unsigned int v43; // r15d
  unsigned int *v44; // rdi
  int v45; // r9d
  wchar_t *v46; // rcx
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  _QWORD *v53; // r8
  unsigned __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // r8
  __int16 v57; // cx
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  KIRQL v60; // al
  unsigned int v61; // r13d
  unsigned int *v62; // rdi
  __int16 v63; // cx
  int v64; // ecx
  int v65; // ecx
  __int64 i; // rdi
  _SLIST_ENTRY *v67; // rcx
  signed __int64 Count; // rdx
  signed __int64 v69; // rax
  unsigned __int64 v70; // rdx
  _QWORD v71[3]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v72; // [rsp+48h] [rbp-41h]
  _QWORD v73[3]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v74; // [rsp+68h] [rbp-21h]
  __int128 v75; // [rsp+70h] [rbp-19h]
  __int128 v76; // [rsp+80h] [rbp-9h]
  __int64 v77; // [rsp+90h] [rbp+7h]
  BOOLEAN v78; // [rsp+F0h] [rbp+67h]
  KIRQL v79; // [rsp+F8h] [rbp+6Fh]
  PSLIST_ENTRY ListEntry; // [rsp+100h] [rbp+77h] BYREF
  unsigned int *v81; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *a1 == 13;
  ListEntry = 0LL;
  v81 = 0LL;
  if ( !v2 )
  {
    v21 = -1073741811;
    goto LABEL_56;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v33 = a1[1];
    if ( v33 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140317B10);
      return 0;
    }
    v64 = v33 - 10;
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        if ( v65 != 1 )
        {
LABEL_107:
          v21 = -1073741637;
          goto LABEL_56;
        }
        if ( (dword_1403059D0 & 2) != 0 )
        {
          v21 = -1073741431;
          goto LABEL_56;
        }
        return 0;
      }
      PfLockExclusiveAcquire(&qword_140305888);
      if ( qword_140305878 )
      {
        PfLockExclusiveAcquire(&qword_140305890);
        dword_1403058A8 |= 1u;
        for ( i = qword_140305898; (__int64 *)i != &qword_140305898; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305890, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305890);
        KeAbPostRelease((ULONG_PTR)&qword_140305890);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        ExWaitForRundownProtectionRelease(&stru_140305880);
        v21 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_140305880, 1LL);
        qword_140305878 = 0LL;
      }
      else
      {
        v21 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305888, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_98:
        KeAbPostRelease((ULONG_PTR)&qword_140305888);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        goto LABEL_20;
      }
    }
    else
    {
      PfLockExclusiveAcquire(&qword_140305888);
      if ( qword_140305878 )
      {
        v21 = -1073741791;
      }
      else
      {
        PfLockExclusiveAcquire(&qword_140305890);
        dword_1403058A8 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305890, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305890);
        KeAbPostRelease((ULONG_PTR)&qword_140305890);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)a1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        v21 = 0;
        qword_140305878 = *((_QWORD *)a1 + 2);
        _InterlockedExchange64((volatile __int64 *)&stru_140305880, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305888, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_98;
    }
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305888);
    goto LABEL_98;
  }
  if ( (v3 & 4) != 0 )
  {
    v48 = a1[1];
    if ( v48 )
    {
      v49 = v48 - 2;
      if ( v49 )
      {
        if ( v49 == 1 )
          PfSnNameRemoveAll(*((_QWORD *)a1 + 2));
      }
      else
      {
        PfSnLogStreamCreate(*((_QWORD *)a1 + 2));
      }
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_1403026A0 >= (unsigned int)dword_1403026A4 && (unsigned int)(a1[1] - 2) > 2 )
  {
    v21 = -1073741697;
    goto LABEL_56;
  }
  v4 = a1[1];
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)a1 + 2);
    v6 = v5[1] & 0xFFF;
    v7 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    if ( !PfSnNumActiveTraces )
      goto LABEL_8;
    v27 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    v28 = v5[4];
    v29 = v5[1];
    v72 = v5[3];
    v30 = *(_QWORD *)(v28 + 544);
    v74 = *v5;
    _m_prefetchw((const void *)(v30 + 1192));
    v31 = *(_QWORD *)(v30 + 1192);
    if ( (v31 & 0xF) != 0 )
    {
      do
      {
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 1192), v31 - 1, v31);
        if ( v31 == v36 )
          break;
        v31 = v36;
      }
      while ( (v36 & 0xF) != 0 );
    }
    v32 = (struct _EX_RUNDOWN_REF *)(v31 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      goto LABEL_8;
    v34 = v31 & 0xF;
    if ( v34 <= 1 )
    {
      if ( v34 )
      {
        if ( ExAcquireRundownProtectionEx(v32 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(v30 + 1192));
          v58 = *(_QWORD *)(v30 + 1192);
          while ( (v58 & 0xF) == 0 )
          {
            if ( v32 != (struct _EX_RUNDOWN_REF *)(v58 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v59 = v58;
            v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 1192), v58 + 15, v58);
            if ( v59 == v58 )
              goto LABEL_30;
          }
          _m_prefetchw(&v32[45]);
          Count = v32[45].Count;
          if ( (Count & 1) != 0 )
          {
LABEL_120:
            v70 = Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v70, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v70 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v70 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v69 = _InterlockedCompareExchange64((volatile signed __int64 *)&v32[45], Count - 30, Count);
              v2 = Count == v69;
              Count = v69;
              if ( v2 )
                break;
              if ( (v69 & 1) != 0 )
                goto LABEL_120;
            }
          }
        }
      }
      else
      {
        v78 = 1;
        v60 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
        v79 = v60;
        v32 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v30 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v32 )
        {
          v78 = ExAcquireRundownProtection(v32 + 45);
          v60 = v79;
        }
        KeReleaseSpinLock(&qword_1403058D0, v60);
        if ( !v78 )
          goto LABEL_8;
      }
    }
LABEL_30:
    if ( v32 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(v28, v32, 0LL) )
      {
        v35 = v29 - (v29 & 0xFFF);
        if ( v7 )
        {
          do
          {
            if ( (int)PfSnLogPageFaultCommon((_DWORD)v32, v74, v72, v35, 0) < 0 )
              break;
            v35 += 4096;
            --v27;
          }
          while ( v27 );
        }
      }
      ExReleaseRundownProtection_0(v32 + 45);
    }
LABEL_8:
    if ( dword_1403026A0 < (unsigned int)dword_1403026A4 )
    {
      v8 = *((_QWORD *)a1 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1724) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
      {
        v50 = 2;
        if ( v14 < 2 )
          v50 = (*(_DWORD *)(v9 + 1724) >> 12) & 7;
        v14 = v50;
      }
      if ( v14 < dword_1402FEDB0 )
      {
        v21 = 0;
      }
      else
      {
        *(_QWORD *)&v75 = v12;
        *((_QWORD *)&v75 + 1) = v11 >> 12;
        v15 = 0LL;
        v16 = v7 & 0x7FFFFFFFFFFFFFFFLL | (v10 << 63);
        v17 = 0LL;
        *(_QWORD *)&v76 = v16;
        *((_QWORD *)&v76 + 1) = (v13 ^ *(_QWORD *)(v13 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
        LODWORD(v77) = dword_140317B10;
        HIDWORD(v77) = *(_DWORD *)(v13 + 744);
        v18 = dword_14030575C
            + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
              + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
        while ( 1 )
        {
          _m_prefetchw(&stru_1403025E0);
          v19 = stru_1403025E0.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v19 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&stru_1403025E0,
                        (stru_1403025E0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                        stru_1403025E0.Count & 0xFFFFFFFFFFFFFFFEuLL)
            && !ExfAcquireRundownProtection(&stru_1403025E0) )
          {
            v21 = -1073741431;
            goto LABEL_125;
          }
          for ( j = RtlpInterlockedPopEntrySList(&stru_140302600); !j; j = RtlpInterlockedPopEntrySList(&stru_140302600) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_1403025F0);
            if ( j )
              break;
            v21 = qword_140302638(&stru_1403025E0);
            if ( v21 < 0 )
              goto LABEL_129;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v15 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v17 = j;
            v21 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          qword_140302640(j);
        }
        RtlpInterlockedPushEntrySList(&stru_1403025F0, j);
        v21 = -1073741789;
LABEL_129:
        ++dword_14030264C;
        dword_140302650 += 64;
        ExReleaseRundownProtection_0(&stru_1403025E0);
LABEL_16:
        if ( v21 >= 0 )
        {
          v22 = *v15;
          v23 = v75;
          *((_DWORD *)v15 + 2) = v18;
          v24 = v76;
          *v15 = v22 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v15 + 1) = v23;
          *(_QWORD *)&v23 = v77;
          *((_OWORD *)v15 + 2) = v24;
          v15[6] = v23;
          *((_QWORD *)&v17[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v17[2].Next + 2);
          Next = v17[1].Next;
          if ( (__int64)v17[2].Next - *((_QWORD *)&v17[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v17);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v17);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
          }
          v21 = 0;
          goto LABEL_20;
        }
LABEL_125:
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140302790 + 1, 1u);
        if ( v17 )
        {
          v67 = v17;
LABEL_127:
          PfFbLogEntryComplete(v67, (__int64)j, 0LL);
        }
      }
LABEL_20:
      if ( v21 >= 0 )
        return (unsigned int)v21;
      goto LABEL_56;
    }
    v21 = -1073741697;
LABEL_56:
    if ( (int)a1[1] <= 3 )
      ++dword_1403027A4;
    return (unsigned int)v21;
  }
  switch ( v4 )
  {
    case 0:
      v61 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v43 = (v61 + 65) & 0xFFFFFFF8;
      v21 = PfFbLogEntryReserve(&stru_140302560, &ListEntry, &v81, v43);
      if ( v21 < 0 )
        goto LABEL_113;
      v62 = v81;
      *v81 = *v81 & 0x80000002 | (8 * ((v61 + 65) & 0xFFFFFF8)) | 2;
      v62[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      v62[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      *((_QWORD *)v62 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v62[9] ^= (v62[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      v62[9] ^= (v62[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v62 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v62[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      v63 = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      *((_WORD *)v62 + 20) = v63;
      *((_WORD *)v62 + 21) = v63;
      memmove(v62 + 14, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v61);
      v46 = (wchar_t *)(v62 + 14);
      *((_WORD *)v62 + *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 28) = 0;
      goto LABEL_44;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL), 0);
      return 0;
    case 2:
      v37 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v37 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v37 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1403057D8, v37, 1LL);
      if ( dword_1403026A0 >= (unsigned int)dword_1403026A4 )
      {
        v21 = -1073741697;
        goto LABEL_56;
      }
      v38 = *((_QWORD *)a1 + 2);
      v39 = *(_DWORD *)(v38 + 32);
      v40 = (const void *)(*(_QWORD *)(v38 + 24) + 2LL * (unsigned __int16)v39);
      v41 = *(unsigned __int16 *)(v38 + 34) - (unsigned __int16)v39;
      v42 = 2 * v41;
      v43 = (2 * v41 + 53) & 0xFFFFFFF8;
      v21 = PfFbLogEntryReserve(&stru_140302560, &ListEntry, &v81, v43);
      if ( v21 >= 0 )
      {
        v44 = v81;
        *v81 = *v81 & 0x80000000 | (8 * ((v42 + 53) & 0xFFFFFF8));
        v44[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v44[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
        *((_QWORD *)v44 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
        v44[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
        *((_QWORD *)v44 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        v44[10] ^= (v44[10] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
        v45 = v44[10] ^ (v44[10] ^ (*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
        v44[10] = v45;
        v44[10] = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
        *((_WORD *)v44 + 21) = v41;
        memmove(v44 + 11, v40, v42);
        v46 = (wchar_t *)(v44 + 11);
        *((_WORD *)v44 + *((unsigned __int16 *)v44 + 21) + 22) = 0;
LABEL_44:
        wcsupr(v46);
        PfFbLogEntryComplete(ListEntry, v47, v43);
        return 0;
      }
LABEL_113:
      v67 = ListEntry;
      if ( !ListEntry )
        goto LABEL_20;
      goto LABEL_127;
    case 3:
      v51 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v51 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v51 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1403057D8, v51, 0LL);
      if ( dword_1403026A0 < (unsigned int)dword_1403026A4 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL),
          (*(_BYTE *)(*((_QWORD *)a1 + 2) + 36LL) & 8) != 0);
        return 0;
      }
      v21 = -1073741697;
      goto LABEL_56;
    case 8:
      v56 = *((_QWORD *)a1 + 2);
      v73[0] = 0LL;
      v57 = (2 * (unsigned __int8)*(_DWORD *)v56) & 6 ^ (*(_QWORD *)(v56 + 16) - 1);
      LODWORD(v73[0]) = *(_DWORD *)(v56 + 4);
      v73[1] = *(_QWORD *)(v56 + 8);
      v73[2] = (*(_QWORD *)(v56 + 16) + 4095LL) ^ v57 & 0xFFF;
      v53 = v73;
      v54 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v55 = 24;
      goto LABEL_68;
    case 13:
      v52 = (_QWORD *)*((_QWORD *)a1 + 2);
      if ( !v52[1] )
      {
        v21 = -1073741747;
        goto LABEL_56;
      }
      v71[1] = v52[1];
      v71[2] = (unsigned int)dword_140317B10;
      v71[0] = *v52;
      v53 = v71;
      v54 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v55 = 31;
LABEL_68:
      PfLogEvent(v55, dword_14030575C + (v54 >> 10), v53, 0x18u);
      v21 = 0;
      break;
    default:
      goto LABEL_107;
  }
  return (unsigned int)v21;
}
