/*
 * XREFs of PfFileInfoNotify @ 0x1400B82A0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     PfSnCheckLoggingForThread @ 0x14001A72C (PfSnCheckLoggingForThread.c)
 *     PfLogDeleteHelper @ 0x14001AA34 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14001AC18 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001ACF0 (PfFbLogEntryComplete.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     _wcsupr @ 0x140172698 (_wcsupr.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PfSnLogStreamCreate @ 0x140443320 (PfSnLogStreamCreate.c)
 *     PfpRpFileKeyUpdate @ 0x1404CC0A0 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x14052B72C (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x14054C294 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 *v19; // rsi
  PSLIST_ENTRY v20; // rbx
  int v21; // r15d
  unsigned __int64 v22; // rtt
  PSLIST_ENTRY j; // rdx
  int v24; // r14d
  unsigned __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _SLIST_HEADER *Next; // rsi
  unsigned __int64 v29; // rtt
  __int64 v31; // r14
  unsigned __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rsi
  int v38; // ecx
  unsigned __int64 v39; // r15
  __int64 v40; // r14
  unsigned __int64 v41; // rtt
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // r8d
  const void *v45; // r12
  int v46; // ebx
  unsigned int v47; // r13d
  unsigned int v48; // r15d
  unsigned int *v49; // rsi
  int v50; // r9d
  wchar_t *v51; // rcx
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int16 v58; // cx
  _QWORD *v59; // r8
  unsigned __int64 v60; // rdx
  int v61; // ecx
  _QWORD *v62; // rcx
  unsigned int v63; // r13d
  unsigned int *v64; // rsi
  __int16 v65; // cx
  int v66; // ecx
  int v67; // ecx
  struct _KTHREAD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rbx
  struct _KTHREAD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  struct _KTHREAD *v75; // rcx
  __int16 v76; // ax
  struct _KTHREAD *v77; // rcx
  __int16 v78; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rbx
  struct _KTHREAD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rsi
  __int64 i; // rsi
  struct _KTHREAD *v87; // rcx
  __int16 v88; // ax
  unsigned __int64 v89; // rax
  _SLIST_ENTRY *v90; // rcx
  unsigned __int64 v91; // rtt
  _QWORD v92[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v93[3]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v94; // [rsp+60h] [rbp-9h]
  __int128 v95; // [rsp+70h] [rbp+7h]
  __int64 v96; // [rsp+80h] [rbp+17h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int *v98; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v99; // [rsp+E0h] [rbp+77h]

  v5 = *a1 == 12;
  ListEntry = 0LL;
  v98 = 0LL;
  if ( !v5 )
  {
    v24 = -1073741811;
    goto LABEL_56;
  }
  v6 = a1[2];
  if ( (v6 & 8) != 0 )
  {
    v38 = a1[1];
    if ( v38 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140367DD0);
      return 0;
    }
    v66 = v38 - 10;
    if ( v66 )
    {
      v67 = v66 - 1;
      if ( v67 )
      {
        if ( v67 != 1 )
        {
LABEL_98:
          v24 = -1073741637;
          goto LABEL_56;
        }
        if ( (dword_140353740 & 2) != 0 )
        {
          v24 = -1073741431;
          goto LABEL_56;
        }
        return 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v80 = KeAbPreAcquire((ULONG_PTR)&qword_1403535F8, 0LL, 0LL, a4);
      v82 = v80;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403535F8, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_1403535F8, v80, &qword_1403535F8);
      if ( v82 )
        *(_BYTE *)(v82 + 26) |= 1u;
      if ( qword_1403535E8 )
      {
        v83 = KeGetCurrentThread();
        --v83->KernelApcDisable;
        v84 = KeAbPreAcquire((ULONG_PTR)&qword_140353600, 0LL, 0LL, v81);
        v85 = v84;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353600, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140353600, v84, &qword_140353600);
        if ( v85 )
          *(_BYTE *)(v85 + 26) |= 1u;
        dword_140353618 |= 1u;
        for ( i = qword_140353608; (__int64 *)i != &qword_140353608; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353600, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140353600);
        KeAbPostRelease((ULONG_PTR)&qword_140353600);
        v87 = KeGetCurrentThread();
        v88 = v87->KernelApcDisable + 1;
        v87->KernelApcDisable = v88;
        if ( !v88
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v87->ApcState.ApcListHead[0].Flink != &v87->152
          && !v87->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v87);
        }
        v89 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1403535F0, 1LL, 0LL);
        if ( v89 >= 2 )
          ExfWaitForRundownProtectionRelease(&stru_1403535F0, v89);
        _InterlockedExchange64((volatile __int64 *)&stru_1403535F0, 1LL);
        qword_1403535E8 = 0LL;
        v24 = 0;
      }
      else
      {
        v24 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403535F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_95:
        KeAbPostRelease((ULONG_PTR)&qword_1403535F8);
        v77 = KeGetCurrentThread();
        v78 = v77->KernelApcDisable + 1;
        v77->KernelApcDisable = v78;
        if ( !v78
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v77->ApcState.ApcListHead[0].Flink != &v77->152
          && !v77->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v77);
        }
        goto LABEL_21;
      }
    }
    else
    {
      v68 = KeGetCurrentThread();
      --v68->KernelApcDisable;
      v69 = KeAbPreAcquire((ULONG_PTR)&qword_1403535F8, 0LL, 0LL, a4);
      v71 = v69;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403535F8, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_1403535F8, v69, &qword_1403535F8);
      if ( v71 )
        *(_BYTE *)(v71 + 26) |= 1u;
      if ( qword_1403535E8 )
      {
        v24 = -1073741791;
      }
      else
      {
        v72 = KeGetCurrentThread();
        --v72->KernelApcDisable;
        v73 = KeAbPreAcquire((ULONG_PTR)&qword_140353600, 0LL, 0LL, v70);
        v74 = v73;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353600, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140353600, v73, &qword_140353600);
        if ( v74 )
          *(_BYTE *)(v74 + 26) |= 1u;
        dword_140353618 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353600, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140353600);
        KeAbPostRelease((ULONG_PTR)&qword_140353600);
        v75 = KeGetCurrentThread();
        v76 = v75->KernelApcDisable + 1;
        v75->KernelApcDisable = v76;
        if ( !v76
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v75->ApcState.ApcListHead[0].Flink != &v75->152
          && !v75->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v75);
        }
        v24 = 0;
        qword_1403535E8 = *((_QWORD *)a1 + 2);
        _InterlockedExchange64((volatile __int64 *)&stru_1403535F0, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403535F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_95;
    }
    ExfTryToWakePushLock(&qword_1403535F8);
    goto LABEL_95;
  }
  if ( (v6 & 4) != 0 )
  {
    v53 = a1[1];
    if ( v53 )
    {
      v54 = v53 - 2;
      if ( v54 )
      {
        if ( v54 == 1 )
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
  if ( dword_140350420 >= (unsigned int)dword_140350424 && (unsigned int)(a1[1] - 2) > 2 )
  {
    v24 = -1073741697;
    goto LABEL_56;
  }
  v7 = a1[1];
  if ( v7 == 4 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v9 = *(_DWORD *)(v8 + 8) & 0xFFF;
    v10 = (v9 + (unsigned __int64)*(unsigned int *)(v8 + 16) + 4095) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v31 = *(_QWORD *)(v8 + 32);
      v32 = (v9 + (unsigned __int64)*(unsigned int *)(v8 + 16) + 4095) >> 12;
      v33 = *(_QWORD *)(v8 + 8);
      v34 = *(_QWORD *)(v8 + 24);
      v35 = *(_QWORD *)(v31 + 544);
      v99 = *(_QWORD *)v8;
      v36 = PfSnReferenceProcessTrace(v35);
      v37 = v36;
      if ( v36 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v31, (__int64)v36, 0) )
        {
          v39 = v33 - (v33 & 0xFFF);
          if ( v10 )
          {
            v40 = v99;
            do
            {
              if ( (int)PfSnLogPageFaultCommon((__int64)v37, v40, v34, v39, 0) < 0 )
                break;
              v39 += 4096LL;
              --v32;
            }
            while ( v32 );
          }
        }
        _m_prefetchw(&v37[45]);
        v41 = v37[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v41 != _InterlockedCompareExchange64((volatile signed __int64 *)&v37[45], v41 - 2, v41) )
          ExfReleaseRundownProtection(v37 + 45);
      }
    }
    if ( dword_140350420 < (unsigned int)dword_140350424 )
    {
      v11 = *((_QWORD *)a1 + 2);
      v12 = *(_QWORD *)(v11 + 32);
      v13 = *(int *)(v11 + 20);
      v14 = *(_QWORD *)(v11 + 8);
      v15 = *(_QWORD *)(v11 + 24);
      v16 = *(_QWORD *)(v12 + 544);
      v17 = (*(_DWORD *)(v12 + 1724) >> 12) & 7;
      if ( (*(_DWORD *)(v16 + 772) & 0x100000) != 0 )
      {
        v55 = 2;
        if ( v17 < 2 )
          v55 = (*(_DWORD *)(v12 + 1724) >> 12) & 7;
        v17 = v55;
      }
      if ( v17 < dword_14034F270 )
      {
        v24 = 0;
      }
      else
      {
        *(_QWORD *)&v94 = v15;
        v18 = *(_QWORD *)(v16 + 744) ^ *(_QWORD *)(v16 + 776);
        v19 = 0LL;
        *((_QWORD *)&v94 + 1) = v14 >> 12;
        *(_QWORD *)&v95 = v10 & 0x7FFFFFFFFFFFFFFFLL | (v13 << 63);
        v20 = 0LL;
        *((_QWORD *)&v95 + 1) = v18 & 0x1FFFFFFFFFFFFFFFLL;
        LODWORD(v96) = dword_140367DD0;
        HIDWORD(v96) = *(_DWORD *)(v16 + 744);
        v21 = dword_1403534CC
            + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
              + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
        while ( 1 )
        {
          _m_prefetchw(&RunRef);
          v22 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v22 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&RunRef,
                        (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                        RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL)
            && !ExfAcquireRundownProtection(&RunRef) )
          {
            v24 = -1073741431;
            goto LABEL_133;
          }
          for ( j = RtlpInterlockedPopEntrySList(&stru_140350380); !j; j = RtlpInterlockedPopEntrySList(&stru_140350380) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140350370);
            if ( j )
              break;
            v24 = qword_1403503B8(&RunRef);
            if ( v24 < 0 )
              goto LABEL_137;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v19 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v20 = j;
            v24 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          qword_1403503C0(j);
        }
        RtlpInterlockedPushEntrySList(&stru_140350370, j);
        v24 = -1073741789;
LABEL_137:
        ++dword_1403503CC;
        dword_1403503D0 += 64;
        _m_prefetchw(&RunRef);
        j = (PSLIST_ENTRY)((RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2);
        v91 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v91 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&RunRef,
                      (signed __int64)j,
                      RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&RunRef);
LABEL_16:
        if ( v24 >= 0 )
        {
          v25 = *v19;
          v26 = v94;
          *((_DWORD *)v19 + 2) = v21;
          v27 = v95;
          *v19 = v25 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v19 + 1) = v26;
          *(_QWORD *)&v26 = v96;
          *((_OWORD *)v19 + 2) = v27;
          v19[6] = v26;
          *((_QWORD *)&v20[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v20[2].Next + 2);
          Next = (_SLIST_HEADER *)v20[1].Next;
          if ( (__int64)v20[2].Next - *((_QWORD *)&v20[1].Next + 1) < SLODWORD(Next[5].Alignment) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Alignment)(v20);
          }
          else
          {
            RtlpInterlockedPushEntrySList(Next + 2, v20);
            _m_prefetchw(Next);
            v29 = Next->Alignment & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)Next, v29 - 2, v29) )
              ExfReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
          }
          v24 = 0;
          goto LABEL_21;
        }
LABEL_133:
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140350510 + 1, 1u);
        if ( v20 )
        {
          v90 = v20;
LABEL_135:
          PfFbLogEntryComplete(v90, (__int64)j, 0LL);
        }
      }
LABEL_21:
      if ( v24 >= 0 )
        return (unsigned int)v24;
      goto LABEL_56;
    }
    v24 = -1073741697;
LABEL_56:
    if ( (int)a1[1] <= 3 )
      ++dword_140350524;
    return (unsigned int)v24;
  }
  switch ( v7 )
  {
    case 0:
      v63 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v48 = (v63 + 65) & 0xFFFFFFF8;
      v24 = PfFbLogEntryReserve(&stru_1403502E0, &ListEntry, &v98, v48);
      if ( v24 < 0 )
        goto LABEL_128;
      v64 = v98;
      *v98 = *v98 & 0x80000002 | (8 * ((v63 + 65) & 0xFFFFFF8)) | 2;
      v64[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      v64[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      *((_QWORD *)v64 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v64[9] ^= (v64[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      v64[9] ^= (v64[9] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v64 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v64[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      v65 = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      *((_WORD *)v64 + 20) = v65;
      *((_WORD *)v64 + 21) = v65;
      memmove(v64 + 14, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v63);
      v51 = (wchar_t *)(v64 + 14);
      *((_WORD *)v64 + *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 28) = 0;
      goto LABEL_41;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL), 0);
      return 0;
    case 2:
      v42 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v42 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v42 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140353548, v42, 1LL);
      if ( dword_140350420 >= (unsigned int)dword_140350424 )
      {
        v24 = -1073741697;
        goto LABEL_56;
      }
      v43 = *((_QWORD *)a1 + 2);
      v44 = *(_DWORD *)(v43 + 32);
      v45 = (const void *)(*(_QWORD *)(v43 + 24) + 2LL * (unsigned __int16)v44);
      v46 = *(unsigned __int16 *)(v43 + 34) - (unsigned __int16)v44;
      v47 = 2 * v46;
      v48 = (2 * v46 + 53) & 0xFFFFFFF8;
      v24 = PfFbLogEntryReserve(&stru_1403502E0, &ListEntry, &v98, v48);
      if ( v24 >= 0 )
      {
        v49 = v98;
        *v98 = *v98 & 0x80000000 | (8 * ((v47 + 53) & 0xFFFFFF8));
        v49[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v49[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
        *((_QWORD *)v49 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
        v49[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
        *((_QWORD *)v49 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        v49[10] ^= (v49[10] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
        v50 = v49[10] ^ (v49[10] ^ (*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
        v49[10] = v50;
        v49[10] = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
        *((_WORD *)v49 + 21) = v46;
        memmove(v49 + 11, v45, v47);
        v51 = (wchar_t *)(v49 + 11);
        *((_WORD *)v49 + *((unsigned __int16 *)v49 + 21) + 22) = 0;
LABEL_41:
        wcsupr(v51);
        PfFbLogEntryComplete(ListEntry, v52, v48);
        return 0;
      }
LABEL_128:
      v90 = ListEntry;
      if ( !ListEntry )
        goto LABEL_21;
      goto LABEL_135;
    case 3:
      v56 = *((_QWORD *)a1 + 2);
      if ( *(unsigned __int16 *)(v56 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v56 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140353548, v56, 0LL);
      if ( dword_140350420 < (unsigned int)dword_140350424 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL),
          (*(_BYTE *)(*((_QWORD *)a1 + 2) + 36LL) & 8) != 0);
        return 0;
      }
      v24 = -1073741697;
      goto LABEL_56;
    case 8:
      v57 = *((_QWORD *)a1 + 2);
      v93[0] = 0LL;
      v58 = (2 * (unsigned __int8)*(_DWORD *)v57) & 6 ^ (*(_QWORD *)(v57 + 16) - 1);
      LODWORD(v93[0]) = *(_DWORD *)(v57 + 4);
      v93[1] = *(_QWORD *)(v57 + 8);
      v93[2] = (*(_QWORD *)(v57 + 16) + 4095LL) ^ v58 & 0xFFF;
      v59 = v93;
      v60 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v61 = 24;
      goto LABEL_64;
    case 13:
      v62 = (_QWORD *)*((_QWORD *)a1 + 2);
      if ( !v62[1] )
      {
        v24 = -1073741747;
        goto LABEL_56;
      }
      v92[1] = v62[1];
      v92[2] = (unsigned int)dword_140367DD0;
      v92[0] = *v62;
      v59 = v92;
      v60 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v61 = 31;
LABEL_64:
      PfLogEvent(v61, dword_1403534CC + (v60 >> 10), v59, 0x18u);
      v24 = 0;
      break;
    default:
      goto LABEL_98;
  }
  return (unsigned int)v24;
}
