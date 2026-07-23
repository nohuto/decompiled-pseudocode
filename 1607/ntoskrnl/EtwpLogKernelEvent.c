/*
 * XREFs of EtwpLogKernelEvent @ 0x1400592C0
 * Callers:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     EtwpCCSwapFlush @ 0x14007369C (EtwpCCSwapFlush.c)
 *     PerfInfoLogInterrupt @ 0x1400904F0 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     EtwpTraceFileName @ 0x14009EF04 (EtwpTraceFileName.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     EtwpLogMemInfo @ 0x140226584 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402270D8 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x14022AF30 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x140496518 (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14049673C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceProcessRundown @ 0x140499740 (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140499864 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x140499ACC (EtwpSystemImageEnumCallback.c)
 *     EtwpTraceImageRundown @ 0x1404B2604 (EtwpTraceImageRundown.c)
 *     CmEtwRunDown @ 0x1405FB6F4 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1405FBCCC (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x140658EFC (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14065A04C (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x140664594 (MmLogQueryCombineStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x1406A2448 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A26C4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1406A28B4 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1406A6BE8 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1406A6E78 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1406A6FE0 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406A710C (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406A7548 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406A7AD0 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406A8034 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1406A81C0 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpUpdateEventsLostCount @ 0x1400A86DC (EtwpUpdateEventsLostCount.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     EtwpUnlockBufferList @ 0x1400EB1E0 (EtwpUnlockBufferList.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpReserveWithPebsIndex @ 0x140226BB4 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x140226C44 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        LONGLONG a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  __int64 v9; // r15
  unsigned __int8 v10; // bl
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  __m128i v15; // xmm5
  __m128i v16; // xmm4
  unsigned int v17; // r15d
  __int64 v18; // r9
  __m128i v19; // xmm3
  __m128i v20; // xmm0
  __int64 v21; // r9
  __int64 v22; // rcx
  __m128i v23; // xmm3
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __m128i v26; // xmm4
  _DWORD *v27; // rcx
  unsigned __int8 v28; // r13
  int v29; // eax
  signed __int64 v30; // r9
  unsigned int v31; // r11d
  unsigned int v32; // r10d
  bool v33; // zf
  _DWORD *EtwSupport; // r9
  signed __int64 *v35; // r13
  signed __int64 v36; // rdi
  signed __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rdi
  unsigned __int32 v40; // r8d
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rax
  unsigned __int32 v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int16 v45; // r9
  char *v46; // rax
  char *v47; // r13
  __int64 v48; // rdi
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int64 v52; // rtt
  int v53; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  _DWORD *v60; // r8
  int v61; // edi
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rcx
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // [rsp+30h] [rbp-49h] BYREF
  void *v73; // [rsp+38h] [rbp-41h]
  unsigned int v74; // [rsp+40h] [rbp-39h]
  _DWORD Size[3]; // [rsp+44h] [rbp-35h]
  unsigned __int32 v76; // [rsp+50h] [rbp-29h]
  unsigned int v77; // [rsp+54h] [rbp-25h]
  unsigned __int64 v78; // [rsp+58h] [rbp-21h] BYREF
  signed __int64 *v79; // [rsp+60h] [rbp-19h]
  unsigned __int32 v80; // [rsp+68h] [rbp-11h]
  __int64 v81; // [rsp+70h] [rbp-9h]
  __int64 v82; // [rsp+78h] [rbp-1h]
  __int64 v83; // [rsp+80h] [rbp+7h]
  __int64 v84; // [rsp+D8h] [rbp+5Fh] BYREF
  unsigned int v85; // [rsp+E8h] [rbp+6Fh]

  v85 = a4;
  v84 = a2;
  v6 = EtwpHostSiloState;
  v7 = a4;
  v83 = EtwpHostSiloState;
  v9 = (unsigned int)a3;
  v10 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 8LL * (unsigned int)a3 + 400),
            1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v10 = 1;
  }
  v11 = *(_QWORD *)(v6 + 8 * v9 + 912);
  v82 = v9;
  v81 = v11;
  if ( (v11 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v9, v6, v10);
  }
  else if ( v11 )
  {
    v12 = 0;
    Size[0] = 0;
    v13 = 0;
    v14 = 0;
    if ( v7 )
    {
      if ( v7 >= 8 )
      {
        v15 = 0LL;
        v16 = 0LL;
        v17 = 2;
        do
        {
          v18 = 2LL * v14;
          v14 += 8;
          a3 = 2LL * (v17 + 4);
          v19 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v18 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v17 + 8)));
          v20 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 + 4) + 8));
          v21 = 2LL * (v17 + 5);
          a2 = 2LL * (v17 + 3);
          v22 = 2LL * (v17 + 2);
          v23 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v19,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 + 1) + 8)))),
                  v15);
          v17 += 8;
          v15 = v23;
          v24 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v22 + 8)), v20),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * a2 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)))),
                  v16);
          v16 = v24;
        }
        while ( v14 < v7 - (v7 & 7) );
        v25 = _mm_add_epi32(v24, v15);
        v26 = _mm_add_epi32(v25, _mm_srli_si128(v25, 8));
        v13 = _mm_cvtsi128_si32(_mm_add_epi32(v26, _mm_srli_si128(v26, 4)));
        Size[0] = v13;
      }
      if ( v14 < v7 )
      {
        v27 = (_DWORD *)(16LL * v14 + a1 + 8);
        a2 = v7 - v14;
        do
        {
          v13 += *v27;
          v27 += 4;
          --a2;
        }
        while ( a2 );
        Size[0] = v13;
      }
    }
    v28 = a6;
    if ( (a6 & 0x100) == 0 )
    {
      v29 = *(_DWORD *)(v11 + 816);
      if ( (v29 & 0xC00) != 0 )
      {
        if ( (v29 & 0x400) != 0 )
        {
          a2 = 1316LL;
          if ( a5 == 1316 )
          {
            v46 = (char *)EtwpReserveWithPebsIndex(v11, 1316, v13, (unsigned int)&v78, (__int64)&v72, a6);
            v45 = a5;
            v73 = v46;
            goto LABEL_33;
          }
        }
        if ( (v29 & 0x800) != 0 )
        {
          a2 = 0LL;
          if ( *(_DWORD *)(*(_QWORD *)(v11 + 848) + 16LL) )
          {
            do
            {
              v64 = *(_QWORD *)(v11 + 848);
              if ( *(_WORD *)(v64 + 2LL * (unsigned int)a2 + 20) == a5 )
              {
                v46 = (char *)EtwpReserveWithPmcCounters(v11, a5, v13, (unsigned int)&v78, (__int64)&v72, a6);
                v45 = a5;
                v73 = v46;
                goto LABEL_33;
              }
              a2 = (unsigned int)(a2 + 1);
            }
            while ( (unsigned int)a2 < *(_DWORD *)(v64 + 16) );
          }
        }
      }
      v30 = v13 + 16;
      if ( *(int *)(v11 + 16) < 0 || (unsigned int)v30 > *(_DWORD *)(v11 + 8) )
      {
LABEL_102:
        EtwpUpdateEventsLostCount(v11, a2, a3, v30);
        goto LABEL_46;
      }
      v31 = *(_DWORD *)(v11 + 4);
      v32 = *(_DWORD *)v11;
      LODWORD(v73) = (v13 + 23) & 0xFFFFFFF8;
      v74 = v31;
      v77 = v32;
      while ( 1 )
      {
        v33 = (*(_DWORD *)(v11 + 12) & 0x10000000) == 0;
        EtwSupport = KeGetCurrentPrcb()->EtwSupport;
        *(_QWORD *)&Size[1] = EtwSupport;
        if ( v33 )
          v35 = (signed __int64 *)&EtwSupport[2 * v32 + 16];
        else
          v35 = (signed __int64 *)(v11 + 128);
        LOBYTE(v84) = 0;
        _m_prefetchw(v35);
        v36 = *v35;
        if ( (*v35 & 0xF) != 0 )
        {
          do
          {
            v37 = _InterlockedCompareExchange64(v35, v36 - 1, v36);
            if ( v36 == v37 )
              break;
            v36 = v37;
          }
          while ( (v37 & 0xF) != 0 );
        }
        if ( v36 )
        {
          v38 = v36 & 0xF;
          if ( (v36 & 0xF) != 0 )
          {
            v39 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v38 == 1 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFu);
              _m_prefetchw(v35);
              v65 = *v35;
              while ( (v65 & 0xF) == 0 )
              {
                if ( v39 != (v65 & 0xFFFFFFFFFFFFFFF0uLL) )
                  break;
                v66 = v65;
                v65 = _InterlockedCompareExchange64(v35, v65 + 15, v65);
                if ( v66 == v65 )
                  goto LABEL_25;
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFF1);
            }
          }
          else
          {
            EtwpLockBufferList(v11, &v84);
            v39 = *v35 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v39 )
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 12));
            EtwpUnlockBufferList(v11, &v84);
            EtwSupport = *(_DWORD **)&Size[1];
            v31 = v74;
          }
LABEL_25:
          if ( v39 )
          {
            _m_prefetchw((const void *)(v39 + 8));
            v40 = *(_DWORD *)(v39 + 8);
            v76 = v40;
            if ( v40 <= v31 )
            {
              while ( 1 )
              {
                v41 = *(__int64 (__fastcall **)())(v11 + 40);
                if ( v41 == EtwpGetCycleCount )
                {
                  v42 = __rdtsc();
                }
                else
                {
                  v42 = ((__int64 (__fastcall *)(__int64 (__fastcall *)()))v41)(EtwpGetCycleCount);
                  v40 = v76;
                  v31 = v74;
                }
                v72 = v42;
                v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 8), v40 + (_DWORD)v73, v40);
                if ( v40 == v43 )
                  break;
                v40 = v43;
                v76 = v43;
                if ( v43 > v31 )
                  goto LABEL_57;
              }
              if ( v43 + (unsigned int)v73 > v31 )
              {
                *(_DWORD *)(v39 + 4) = v43;
LABEL_57:
                EtwSupport = *(_DWORD **)&Size[1];
                goto LABEL_58;
              }
              v80 = v43;
              v78 = v39;
              v79 = v35;
              ++*(_QWORD *)(*(_QWORD *)&Size[1] + 8LL * v77 + 576);
              v44 = v39 + v43;
              if ( !v44 )
                goto LABEL_46;
              v45 = a5;
              *(_QWORD *)(v44 + 8) = v72;
              v73 = (void *)(v44 + 16);
              v7 = v85;
              *(_DWORD *)v44 = (unsigned __int8)a6 | 0xC0110000;
              *(_WORD *)(v44 + 4) = v13 + 16;
              v46 = (char *)v73;
              *(_WORD *)(v44 + 6) = v45;
LABEL_33:
              if ( v46 )
              {
                v47 = v46;
                if ( v7 )
                {
                  while ( 1 )
                  {
                    v48 = *(unsigned int *)(a1 + 8);
                    if ( (unsigned int)v48 > v13 )
                      break;
                    memmove(v47, *(const void **)a1, (unsigned int)v48);
                    v47 += v48;
                    v13 -= v48;
                    ++v12;
                    a1 += 16LL;
                    if ( v12 >= v85 )
                    {
                      v11 = v81;
                      goto LABEL_38;
                    }
                  }
                  memset(v73, 0, Size[0]);
                  v11 = v81;
                  EtwpUpdateEventsLostCount(v81, v69, v70, v71);
LABEL_38:
                  v45 = a5;
                }
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v11 + 12) & 0x80000) != 0 )
                {
                  EtwpSendTraceEvent(v11, &v78);
                  v45 = a5;
                }
                v49 = v79;
                _m_prefetchw(v79);
                v50 = *v49;
                v51 = v78;
                if ( (*v49 ^ v78) >= 0xF )
                {
LABEL_68:
                  _InterlockedDecrement((volatile signed __int32 *)(v51 + 12));
                }
                else
                {
                  while ( 1 )
                  {
                    v52 = v50;
                    v50 = _InterlockedCompareExchange64(v79, v50 + 1, v50);
                    if ( v52 == v50 )
                      break;
                    v51 = v78;
                    if ( (v50 ^ v78) >= 0xF )
                      goto LABEL_68;
                  }
                }
                v53 = *(_DWORD *)(v11 + 816);
                if ( (v53 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v11 + 832), v45 & 0x1FFF) )
                  EtwpStackTraceDispatcher(*(_DWORD *)v11 | v53 & 0xFFFF0000, &v72, 0LL, a6);
              }
              goto LABEL_46;
            }
          }
        }
        else
        {
          LODWORD(v39) = 0;
        }
LABEL_58:
        v61 = EtwpSwitchBuffer(v11, v39, (_DWORD)v35, *EtwSupport, a6);
        if ( (*(_DWORD *)(v11 + 12) & 0x4000000) != 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          a3 = PerformanceCounter.QuadPart
             - _InterlockedExchange64((volatile __int64 *)(v11 + 1064), PerformanceCounter.QuadPart);
          do
          {
            v30 = *(_QWORD *)(v11 + 1072);
            if ( v30 )
            {
              a2 = ((v30 + a3 + 2 * v30) >> 63) & 3;
              v68 = (v30 + a3 + 2 * v30) / 4;
            }
            else
            {
              v68 = a3;
            }
          }
          while ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1072), v68, v30) );
        }
        if ( v61 < 0 )
          goto LABEL_102;
        v32 = v77;
        v31 = v74;
      }
    }
    if ( (a6 & 0x10000000) != 0 )
    {
      v62 = EtwpReserveTraceBuffer(v11, v13 + 24, (unsigned int)&v78, (unsigned int)&v72, a6);
      v63 = v62;
      if ( v62 )
      {
        v45 = a5;
        *(_WORD *)(v62 + 6) = a5;
        *(_DWORD *)v62 = v28 | 0xC0040000;
        *(_QWORD *)(v62 + 16) = v72;
        *(_WORD *)(v62 + 4) = v13 + 24;
        *(_DWORD *)(v62 + 8) = KeGetCurrentThread()[1].KernelStack;
        *(_DWORD *)(v62 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
        v46 = (char *)(v62 + 24);
        v73 = (void *)(v63 + 24);
        goto LABEL_33;
      }
    }
    else
    {
      *(_QWORD *)&Size[1] = KeGetCurrentThread();
      v58 = EtwpReserveTraceBuffer(v11, v13 + 32, (unsigned int)&v78, (unsigned int)&v72, a6);
      v59 = v58;
      if ( v58 )
      {
        v60 = *(_DWORD **)&Size[1];
        v45 = a5;
        *(_WORD *)(v58 + 6) = a5;
        *(_DWORD *)v58 = v28 | 0xC0020000;
        *(_QWORD *)(v58 + 16) = v72;
        *(_WORD *)(v58 + 4) = v13 + 32;
        *(_DWORD *)(v58 + 8) = v60[398];
        *(_DWORD *)(v58 + 12) = v60[396];
        *(_DWORD *)(v58 + 24) = v60[163];
        *(_DWORD *)(v58 + 28) = v60[183];
        v46 = (char *)(v58 + 32);
        v73 = (void *)(v59 + 32);
        goto LABEL_33;
      }
    }
LABEL_46:
    if ( v10 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v83 + 8 * v82 + 400), 1u);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v55, v56, v57);
    }
  }
}
