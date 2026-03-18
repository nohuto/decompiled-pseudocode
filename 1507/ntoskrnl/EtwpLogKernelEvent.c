/*
 * XREFs of EtwpLogKernelEvent @ 0x1400A57F0
 * Callers:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwpCCSwapTrace @ 0x1400177F0 (EtwpCCSwapTrace.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     PerfInfoLogInterrupt @ 0x1400A3F90 (PerfInfoLogInterrupt.c)
 *     KiExecuteAllDpcs @ 0x1400A53E0 (KiExecuteAllDpcs.c)
 *     EtwpTraceFileName @ 0x14011A858 (EtwpTraceFileName.c)
 *     PpmEventProcessorPerfStateChange @ 0x1401576DC (PpmEventProcessorPerfStateChange.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     EtwpLogMemInfo @ 0x14025DBCC (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14025E6F4 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x140260A38 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 *     EtwpTraceProcessRundown @ 0x14041C47C (EtwpTraceProcessRundown.c)
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     EtwpSystemImageEnumCallback @ 0x14051C6D0 (EtwpSystemImageEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x14051CC04 (EtwpSysModuleRunDown.c)
 *     EtwpTraceImageRundown @ 0x1405334D4 (EtwpTraceImageRundown.c)
 *     EtwpLogGroupMask @ 0x14054A654 (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14054A870 (EtwpLogAlwaysPresentRundown.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1406532A8 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1406A2ADC (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406A4DE0 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1406A92D0 (MmLogQueryCombineStats.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406E4820 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1406E4A04 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1406E81E4 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1406E8450 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1406E85AC (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406E86D4 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406E8870 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406E8B94 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406E90E4 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406E9678 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1406E97FC (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwpReserveWithPebsIndex @ 0x14025E1D0 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14025E260 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 */

unsigned __int64 __fastcall EtwpLogKernelEvent(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5)
{
  unsigned __int16 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  char v9; // bl
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // r15
  struct _KTHREAD *v14; // rcx
  int v15; // r8d
  unsigned int v16; // r10d
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  unsigned int v19; // r11d
  __int64 v20; // r9
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm3
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm4
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // r14d
  struct _KTHREAD *v34; // rdi
  __int16 v35; // bp
  unsigned __int64 v36; // rsi
  char *v37; // rsi
  __int16 v38; // di
  unsigned __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // r13d
  bool v45; // zf
  __int64 v46; // r9
  __int64 EtwSupport; // rcx
  unsigned __int64 *v48; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v50; // rdi
  signed __int64 v51; // rax
  int v52; // eax
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  volatile signed __int32 *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  signed __int64 v58; // rax
  signed __int64 v59; // rcx
  signed __int64 v60; // rtt
  unsigned __int32 v61; // esi
  __int64 (__fastcall *v62)(); // rax
  unsigned __int64 v63; // rax
  unsigned __int32 v64; // eax
  unsigned __int64 v65; // rsi
  size_t v66; // rdi
  unsigned __int64 *v67; // roff
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rtt
  int v70; // ecx
  unsigned int i; // [rsp+30h] [rbp-78h]
  unsigned int v72; // [rsp+34h] [rbp-74h]
  unsigned int v73; // [rsp+38h] [rbp-70h]
  unsigned __int64 v74; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v75; // [rsp+48h] [rbp-60h]
  unsigned __int64 v76; // [rsp+50h] [rbp-58h]
  unsigned __int64 v77; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 *v78; // [rsp+60h] [rbp-48h]
  int v79; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a2], 1u) )
    {
      v11 = KeGetCurrentThread();
      result = (unsigned int)++v11->KernelApcDisable;
      if ( !(_WORD)result )
      {
        result = (unsigned __int64)&v11->152;
        if ( *(_QWORD *)result != result && !v11->SpecialApcDisable )
          return KiCheckForKernelApcDelivery(v11);
      }
      return result;
    }
    v9 = 1;
  }
  result = 8 * v7;
  v13 = WmipLoggerContext[v7];
  v76 = 8 * v7;
  if ( (v13 & 1) != 0 )
  {
    if ( v9 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)((char *)EtwpLoggerRundown + result), 1u);
      v14 = KeGetCurrentThread();
      result = (unsigned int)++v14->KernelApcDisable;
      if ( !(_WORD)result )
        goto LABEL_112;
    }
    return result;
  }
  if ( !v13 )
    return result;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)v6 >= 8 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 2;
    do
    {
      v20 = 2LL * v16;
      v16 += 8;
      v21 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v20 + 8)),
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v19 + 8)));
      v22 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 + 4) + 8));
      v23 = 2LL * (v19 + 5);
      v24 = 2LL * (v19 + 3);
      v25 = 2LL * (v19 + 2);
      v26 = _mm_add_epi32(
              _mm_unpacklo_epi32(
                v21,
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 - 1) + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 + 1) + 8)))),
              v17);
      v19 += 8;
      v17 = v26;
      v27 = _mm_add_epi32(
              _mm_unpacklo_epi32(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v25 + 8)), v22),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))),
              v18);
      v18 = v27;
    }
    while ( v16 < (unsigned __int64)((unsigned int)v6 - (v6 & 7)) );
    v28 = _mm_add_epi32(v17, v27);
    v29 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
    v15 = _mm_cvtsi128_si32(_mm_add_epi32(v29, _mm_srli_si128(v29, 4)));
  }
  v30 = 0;
  v31 = 0;
  if ( v16 < (unsigned int)v6 )
  {
    if ( (unsigned int)v6 - v16 >= 2 )
    {
      do
      {
        v32 = v16;
        v16 += 2;
        v32 *= 2LL;
        v30 += *(_DWORD *)(a1 + 8 * v32 + 8);
        v31 += *(_DWORD *)(a1 + 8 * v32 + 24);
      }
      while ( v16 < (int)v6 - 1 );
    }
    if ( v16 < (unsigned int)v6 )
      v15 += *(_DWORD *)(a1 + 16LL * v16 + 8);
    v15 += v31 + v30;
  }
  v33 = a5;
  if ( (a5 & 0x100) != 0 )
  {
    if ( (a5 & 0x10000000) != 0 )
    {
      v38 = v15 + 24;
      result = EtwpReserveTraceBuffer((unsigned int *)v13, v15 + 24, (__int64)&v77, &v74, a5);
      v39 = result;
      if ( result )
      {
        *(_WORD *)(result + 4) = v38;
        *(_WORD *)(result + 6) = v5;
        *(_DWORD *)result = (unsigned __int8)a5 | 0xC0040000;
        *(_QWORD *)(result + 16) = v74;
        *(_DWORD *)(result + 8) = KeGetCurrentThread()[1].KernelStack;
        result = LODWORD(KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink);
        *(_DWORD *)(v39 + 12) = result;
        v37 = (char *)(v39 + 24);
        goto LABEL_93;
      }
    }
    else
    {
      v34 = KeGetCurrentThread();
      v35 = v15 + 32;
      result = EtwpReserveTraceBuffer((unsigned int *)v13, v15 + 32, (__int64)&v77, &v74, a5);
      v36 = result;
      if ( result )
      {
        *(_WORD *)(result + 4) = v35;
        *(_WORD *)(result + 6) = v5;
        *(_DWORD *)result = (unsigned __int8)a5 | 0xC0020000;
        *(_QWORD *)(result + 16) = v74;
        *(_DWORD *)(result + 8) = v34[1].KernelStack;
        *(_DWORD *)(result + 12) = v34[1].CurrentRunTime;
        *(_DWORD *)(result + 24) = v34->SchedulerApc.SpareLong0;
        result = v34->UserTime;
        *(_DWORD *)(v36 + 28) = result;
        v37 = (char *)(v36 + 32);
        goto LABEL_92;
      }
    }
    goto LABEL_110;
  }
  v40 = *(_DWORD *)(v13 + 832);
  if ( (v40 & 0xC00) != 0 )
  {
    if ( (v40 & 0x400) != 0 && v5 == 1316 )
    {
      result = EtwpReserveWithPebsIndex(v13, 1316, v15, (unsigned int)&v77, (__int64)&v74, a5);
      v37 = (char *)result;
      goto LABEL_93;
    }
    if ( (v40 & 0x800) != 0 )
    {
      v41 = 0LL;
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 864) + 16LL) )
      {
        do
        {
          v42 = *(_QWORD *)(v13 + 864);
          if ( *(_WORD *)(v42 + 2 * v41 + 20) == v5 )
          {
            result = EtwpReserveWithPmcCounters(v13, v5, v15, (unsigned int)&v77, (__int64)&v74, a5);
            v37 = (char *)result;
            goto LABEL_93;
          }
          v41 = (unsigned int)(v41 + 1);
        }
        while ( (unsigned int)v41 < *(_DWORD *)(v42 + 16) );
      }
    }
  }
  v73 = v15 + 16;
  if ( *(int *)(v13 + 16) < 0 || (unsigned int)(v15 + 16) > *(_DWORD *)(v13 + 8) )
  {
LABEL_108:
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 256));
    result = *(unsigned int *)(v13 + 832);
    if ( (result & 8) != 0 )
      *(_DWORD *)(v13 + 464) = 1;
    goto LABEL_110;
  }
  v43 = *(unsigned int *)v13;
  v44 = *(_DWORD *)(v13 + 4);
  v72 = (v15 + 23) & 0xFFFFFFF8;
  for ( i = *(_DWORD *)v13; ; v43 = i )
  {
    v45 = (*(_DWORD *)(v13 + 12) & 0x10000000) == 0;
    v46 = 15LL;
    EtwSupport = (__int64)KeGetCurrentPrcb()->EtwSupport;
    v75 = (_DWORD *)EtwSupport;
    if ( v45 )
      v48 = (unsigned __int64 *)(EtwSupport + 8 * ((unsigned int)v43 + 8LL));
    else
      v48 = (unsigned __int64 *)(v13 + 144);
    CurrentIrql = 0;
    _m_prefetchw(v48);
    v50 = *v48;
    if ( (*v48 & 0xF) != 0 )
    {
      do
      {
        EtwSupport = v50 - 1;
        v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v48, v50 - 1, v50);
        if ( v50 == v51 )
          break;
        v50 = v51;
      }
      while ( (v51 & 0xF) != 0 );
    }
    if ( v50 )
    {
      v52 = v50 & 0xF;
      if ( (v50 & 0xF) != 0 )
      {
        v50 &= 0xFFFFFFFFFFFFFFF0uLL;
        if ( v52 == 1 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFu);
          _m_prefetchw(v48);
          v53 = *v48;
          for ( EtwSupport = (*v48 & 0xF) + 15; (v53 & 0xF) == 0; EtwSupport = (v53 & 0xF) + 15 )
          {
            EtwSupport = v53 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v50 != (v53 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            EtwSupport = v53 + 15;
            v54 = v53;
            v53 = _InterlockedCompareExchange64((volatile signed __int64 *)v48, v53 + 15, v53);
            if ( v54 == v53 )
              goto LABEL_78;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFF1);
        }
      }
      else
      {
        v55 = (volatile signed __int32 *)(v13 + 712);
        if ( *(_DWORD *)(v13 + 316) == 1 )
        {
          v56 = KeAbPreAcquire(v13 + 712, 0LL, 0LL, 15LL);
          v57 = v56;
          if ( _interlockedbittestandset64(v55, 0LL) )
            ExfAcquirePushLockExclusiveEx(v13 + 712, v56, v13 + 712);
          if ( v57 )
            *(_BYTE *)(v57 + 26) |= 1u;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v13 + 712);
          }
          else if ( _interlockedbittestandset64(v55, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 712));
          }
        }
        v50 = *v48 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v50 )
          _InterlockedIncrement((volatile signed __int32 *)(v50 + 12));
        if ( *(_DWORD *)(v13 + 316) == 1 )
        {
          _m_prefetchw((const void *)v55);
          v58 = *(_QWORD *)v55;
          if ( (*(_QWORD *)v55 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v59 = 0LL;
          else
            v59 = v58 - 16;
          if ( (v58 & 2) != 0
            || (v60 = *(_QWORD *)v55, v60 != _InterlockedCompareExchange64((volatile signed __int64 *)v55, v59, v58)) )
          {
            ExfReleasePushLock(v13 + 712);
          }
          KeAbPostRelease(v13 + 712);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v13 + 712, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v55, 0LL);
          __writecr8(CurrentIrql);
        }
      }
LABEL_78:
      if ( v50 )
      {
        _m_prefetchw((const void *)(v50 + 8));
        v61 = *(_DWORD *)(v50 + 8);
        if ( v61 <= v44 )
          break;
      }
    }
LABEL_88:
    if ( (int)EtwpSwitchBuffer(v13, v50, (signed __int64 *)v48, *v75, a5) < 0 )
      goto LABEL_108;
  }
  while ( 1 )
  {
    v62 = *(__int64 (__fastcall **)())(v13 + 40);
    v63 = v62 == EtwpGetCycleCount
        ? __rdtsc()
        : ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64))v62)(
            EtwSupport,
            v43,
            EtwpGetCycleCount,
            v46);
    v43 = v72;
    v74 = v63;
    v64 = _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 8), v61 + v72, v61);
    EtwSupport = v64;
    if ( v61 == v64 )
      break;
    v61 = v64;
    if ( v64 > v44 )
      goto LABEL_88;
  }
  if ( v64 + v72 > v44 )
  {
    *(_DWORD *)(v50 + 4) = v64;
    goto LABEL_88;
  }
  result = i;
  v77 = v50;
  v78 = v48;
  v79 = EtwSupport;
  ++*(_QWORD *)&v75[2 * i + 144];
  v65 = v50 + EtwSupport;
  if ( v50 + EtwSupport )
  {
    v33 = a5;
    v5 = a4;
    *(_QWORD *)(v65 + 8) = v74;
    *(_WORD *)(v65 + 6) = a4;
    *(_DWORD *)v65 = (unsigned __int8)a5 | 0xC0110000;
    result = v73;
    *(_WORD *)(v65 + 4) = v73;
    v37 = (char *)(v65 + 16);
LABEL_92:
    v6 = a3;
LABEL_93:
    if ( v37 )
    {
      if ( (_DWORD)v6 )
      {
        do
        {
          v66 = *(unsigned int *)(a1 + 8);
          memmove(v37, *(const void **)a1, v66);
          v37 += v66;
          a1 += 16LL;
          --v6;
        }
        while ( v6 );
      }
      if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
        && (*(_DWORD *)(v13 + 12) & 0x80000) != 0 )
      {
        EtwpSendTraceEvent(v13, &v77);
      }
      v67 = v78;
      _m_prefetchw(v78);
      result = *v67;
      v68 = v77;
      if ( (*v67 ^ v77) >= 0xF )
      {
LABEL_104:
        _InterlockedDecrement((volatile signed __int32 *)(v68 + 12));
      }
      else
      {
        while ( 1 )
        {
          v69 = result;
          result = _InterlockedCompareExchange64((volatile signed __int64 *)v78, result + 1, result);
          if ( v69 == result )
            break;
          v68 = v77;
          if ( (result ^ v77) >= 0xF )
            goto LABEL_104;
        }
      }
      v70 = *(_DWORD *)(v13 + 832);
      if ( (v70 & 0x80u) != 0 )
      {
        result = *(_QWORD *)(v13 + 848);
        if ( _bittest((const signed __int32 *)result, v5 & 0x1FFF) )
          result = EtwpStackTraceDispatcher(*(_DWORD *)v13 | v70 & 0xFFFF0000, &v74, 0LL, v33);
      }
    }
  }
LABEL_110:
  if ( v9 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v76 / 8], 1u);
    v14 = KeGetCurrentThread();
    result = (unsigned int)++v14->KernelApcDisable;
    if ( !(_WORD)result )
    {
LABEL_112:
      result = (unsigned __int64)&v14->152;
      if ( *(_QWORD *)result != result && !v14->SpecialApcDisable )
        return KiCheckForKernelApcDelivery(v14);
    }
  }
  return result;
}
