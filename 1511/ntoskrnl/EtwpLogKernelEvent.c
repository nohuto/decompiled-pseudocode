/*
 * XREFs of EtwpLogKernelEvent @ 0x140044C80
 * Callers:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x140044870 (KiExecuteAllDpcs.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     PerfInfoLogInterrupt @ 0x1400D1A20 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     EtwpCCSwapFlush @ 0x14011EF28 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x14012036C (EtwpTraceFileName.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     EtwpLogMemInfo @ 0x14020E8A4 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14020F3CC (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x140211630 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x1405004F4 (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140500714 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceProcessRundown @ 0x140500BA4 (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140500D74 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x140500FD0 (EtwpSystemImageEnumCallback.c)
 *     EtwpTraceImageRundown @ 0x140501278 (EtwpTraceImageRundown.c)
 *     MmLogQueryCombineStats @ 0x14051A0A0 (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x1405DD7C4 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1405DDD7C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1406237E8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x140625390 (MmPerfLogSessionRundown.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406617E8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1406619CC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1406650E8 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x14066535C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1406654B8 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406655E0 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x14066577C (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140665A08 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140665F58 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x140666490 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x140666614 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x1400F4610 (EtwpUpdateEventsLostCount.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpReserveWithPebsIndex @ 0x14020EEA8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14020EF38 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 */

void __fastcall EtwpLogKernelEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, unsigned int a5)
{
  __int64 v5; // r12
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  unsigned int v11; // r15d
  int v12; // r13d
  unsigned int v13; // r10d
  __m128i v14; // xmm5
  __m128i v15; // xmm4
  unsigned int v16; // r13d
  __int64 v17; // r9
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __int64 v20; // r9
  __int64 v21; // rcx
  __m128i v22; // xmm3
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // r9
  unsigned int v29; // r11d
  unsigned int v30; // r10d
  bool v31; // zf
  struct _KTHREAD *EtwSupport; // r9
  signed __int64 *v33; // r12
  signed __int64 v34; // rdi
  signed __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int32 v38; // r8d
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rax
  int v41; // edx
  unsigned __int32 v42; // eax
  unsigned __int64 v43; // rcx
  __int16 v44; // r9
  char *v45; // rax
  unsigned int v46; // r12d
  char *v47; // r13
  __int64 v48; // rdi
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int64 v52; // rtt
  int v53; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  LONG *p_LockNV; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rcx
  signed __int64 v61; // rax
  signed __int64 v62; // rtt
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  char v66[8]; // [rsp+30h] [rbp-41h] BYREF
  __int64 v67; // [rsp+38h] [rbp-39h] BYREF
  void *v68; // [rsp+40h] [rbp-31h]
  unsigned int Size; // [rsp+48h] [rbp-29h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-25h]
  struct _KTHREAD *v71; // [rsp+50h] [rbp-21h]
  unsigned int v72; // [rsp+58h] [rbp-19h]
  unsigned __int32 v73; // [rsp+5Ch] [rbp-15h]
  unsigned __int64 v74; // [rsp+60h] [rbp-11h] BYREF
  signed __int64 *v75; // [rsp+68h] [rbp-9h]
  unsigned __int32 v76; // [rsp+70h] [rbp-1h]
  __int64 v77; // [rsp+78h] [rbp+7h]
  __int64 v78; // [rsp+80h] [rbp+Fh]
  unsigned int v79; // [rsp+E0h] [rbp+6Fh]

  v79 = a3;
  v5 = EtwpSiloState;
  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 8LL * (unsigned int)a2 + 400),
            1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v9 = 1;
  }
  v10 = *(_QWORD *)(v5 + 8 * v7 + 912);
  v78 = v7;
  v77 = v10;
  if ( (v10 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v7, v5, v9);
  }
  else if ( v10 )
  {
    v11 = 0;
    Size = 0;
    v12 = 0;
    v13 = 0;
    if ( v6 )
    {
      if ( v6 >= 8 )
      {
        v14 = 0LL;
        v15 = 0LL;
        v16 = 2;
        do
        {
          v17 = 2LL * v13;
          v13 += 8;
          a3 = 2LL * (v16 + 4);
          v18 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v17 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v16 + 8)));
          v19 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v16 + 4) + 8));
          v20 = 2LL * (v16 + 5);
          a2 = 2LL * (v16 + 3);
          v21 = 2LL * (v16 + 2);
          v22 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v18,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v16 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v16 + 1) + 8)))),
                  v14);
          v16 += 8;
          v14 = v22;
          v23 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)), v19),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * a2 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v20 + 8)))),
                  v15);
          v15 = v23;
        }
        while ( v13 < v6 - (v6 & 7) );
        v24 = _mm_add_epi32(v23, v14);
        v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
        v12 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
        Size = v12;
      }
      if ( v13 < v6 )
      {
        v26 = (_DWORD *)(16LL * v13 + a1 + 8);
        a2 = v6 - v13;
        do
        {
          v12 += *v26;
          v26 += 4;
          --a2;
        }
        while ( a2 );
        Size = v12;
      }
    }
    if ( (a5 & 0x100) == 0 )
    {
      v27 = *(_DWORD *)(v10 + 832);
      if ( (v27 & 0xC00) != 0 )
      {
        if ( (v27 & 0x400) != 0 )
        {
          a2 = 1316LL;
          if ( a4 == 1316 )
          {
            v45 = (char *)EtwpReserveWithPebsIndex(v10, 1316, v12, (unsigned int)&v74, (__int64)&v67, a5);
            v44 = 1316;
            v68 = v45;
            goto LABEL_33;
          }
        }
        if ( (v27 & 0x800) != 0 )
        {
          a2 = 0LL;
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 864) + 16LL) )
          {
            do
            {
              v60 = *(_QWORD *)(v10 + 864);
              if ( *(_WORD *)(v60 + 2LL * (unsigned int)a2 + 20) == a4 )
              {
                v45 = (char *)EtwpReserveWithPmcCounters(v10, a4, v12, (unsigned int)&v74, (__int64)&v67, a5);
                v44 = a4;
                v68 = v45;
                goto LABEL_33;
              }
              a2 = (unsigned int)(a2 + 1);
            }
            while ( (unsigned int)a2 < *(_DWORD *)(v60 + 16) );
          }
        }
      }
      v28 = (unsigned int)(v12 + 16);
      if ( *(int *)(v10 + 16) < 0 || (unsigned int)v28 > *(_DWORD *)(v10 + 8) )
      {
LABEL_94:
        EtwpUpdateEventsLostCount(v10, a2, a3, v28);
        goto LABEL_44;
      }
      v29 = *(_DWORD *)(v10 + 4);
      v30 = *(_DWORD *)v10;
      LODWORD(v68) = (v12 + 23) & 0xFFFFFFF8;
      Size_4 = v29;
      v72 = v30;
      while ( 1 )
      {
        v31 = (*(_DWORD *)(v10 + 12) & 0x10000000) == 0;
        EtwSupport = (struct _KTHREAD *)KeGetCurrentPrcb()->EtwSupport;
        v71 = EtwSupport;
        if ( v31 )
          v33 = (signed __int64 *)(&EtwSupport->ThreadLock + v30);
        else
          v33 = (signed __int64 *)(v10 + 144);
        v66[0] = 0;
        _m_prefetchw(v33);
        v34 = *v33;
        if ( (*v33 & 0xF) != 0 )
        {
          do
          {
            v35 = _InterlockedCompareExchange64(v33, v34 - 1, v34);
            if ( v34 == v35 )
              break;
            v34 = v35;
          }
          while ( (v35 & 0xF) != 0 );
        }
        if ( v34 )
        {
          v36 = v34 & 0xF;
          if ( (v34 & 0xF) != 0 )
          {
            v37 = v34 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v36 == 1 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFu);
              _m_prefetchw(v33);
              v61 = *v33;
              while ( (v61 & 0xF) == 0 )
              {
                if ( v37 != (v61 & 0xFFFFFFFFFFFFFFF0uLL) )
                  break;
                v62 = v61;
                v61 = _InterlockedCompareExchange64(v33, v61 + 15, v61);
                if ( v62 == v61 )
                  goto LABEL_25;
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFF1);
            }
          }
          else
          {
            EtwpLockBufferList(v10, v66);
            v37 = *v33 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v37 )
              _InterlockedIncrement((volatile signed __int32 *)(v37 + 12));
            EtwpUnlockBufferList(v10, v66);
            EtwSupport = v71;
            v29 = Size_4;
          }
LABEL_25:
          if ( v37 )
          {
            _m_prefetchw((const void *)(v37 + 8));
            v38 = *(_DWORD *)(v37 + 8);
            v73 = v38;
            if ( v38 <= v29 )
            {
              while ( 1 )
              {
                v39 = *(__int64 (__fastcall **)())(v10 + 40);
                if ( v39 == EtwpGetCycleCount )
                {
                  v40 = __rdtsc();
                }
                else
                {
                  v40 = ((__int64 (__fastcall *)(__int64 (__fastcall *)()))v39)(EtwpGetCycleCount);
                  v38 = v73;
                  v29 = Size_4;
                }
                v41 = (int)v68;
                v67 = v40;
                v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 8), v38 + (_DWORD)v68, v38);
                if ( v38 == v42 )
                  break;
                v38 = v42;
                v73 = v42;
                if ( v42 > v29 )
                  goto LABEL_54;
              }
              if ( v42 + v41 > v29 )
              {
                *(_DWORD *)(v37 + 4) = v42;
LABEL_54:
                EtwSupport = v71;
                goto LABEL_55;
              }
              v76 = v42;
              v74 = v37;
              v75 = v33;
              ++*(&v71->Affinity.Mask + v72);
              v43 = v37 + v42;
              if ( !v43 )
                goto LABEL_44;
              v44 = a4;
              *(_QWORD *)(v43 + 8) = v67;
              v68 = (void *)(v43 + 16);
              v6 = v79;
              *(_DWORD *)v43 = (unsigned __int8)a5 | 0xC0110000;
              *(_WORD *)(v43 + 4) = v12 + 16;
              v45 = (char *)v68;
              *(_WORD *)(v43 + 6) = a4;
LABEL_33:
              if ( v45 )
              {
                v46 = v12;
                v47 = v45;
                if ( v6 )
                {
                  while ( 1 )
                  {
                    v48 = *(unsigned int *)(a1 + 8);
                    if ( (unsigned int)v48 > v46 )
                      break;
                    memmove(v47, *(const void **)a1, (unsigned int)v48);
                    v47 += v48;
                    v46 -= v48;
                    ++v11;
                    a1 += 16LL;
                    if ( v11 >= v79 )
                    {
                      v10 = v77;
                      goto LABEL_38;
                    }
                  }
                  memset(v68, 0, Size);
                  v10 = v77;
                  EtwpUpdateEventsLostCount(v77, v63, v64, v65);
LABEL_38:
                  v44 = a4;
                }
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v10 + 12) & 0x80000) != 0 )
                {
                  EtwpSendTraceEvent(v10, &v74);
                  v44 = a4;
                }
                v49 = v75;
                _m_prefetchw(v75);
                v50 = *v49;
                v51 = v74;
                if ( (*v49 ^ v74) >= 0xF )
                {
LABEL_61:
                  _InterlockedDecrement((volatile signed __int32 *)(v51 + 12));
                }
                else
                {
                  while ( 1 )
                  {
                    v52 = v50;
                    v50 = _InterlockedCompareExchange64(v75, v50 + 1, v50);
                    if ( v52 == v50 )
                      break;
                    v51 = v74;
                    if ( (v50 ^ v74) >= 0xF )
                      goto LABEL_61;
                  }
                }
                v53 = *(_DWORD *)(v10 + 832);
                if ( (v53 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v10 + 848), v44 & 0x1FFF) )
                  EtwpStackTraceDispatcher(*(_DWORD *)v10 | v53 & 0xFFFF0000, &v67, 0LL, a5);
              }
              goto LABEL_44;
            }
          }
        }
        else
        {
          LODWORD(v37) = 0;
        }
LABEL_55:
        if ( (int)EtwpSwitchBuffer(v10, v37, (_DWORD)v33, EtwSupport->Header.LockNV, a5) < 0 )
          goto LABEL_94;
        v30 = v72;
        v29 = Size_4;
      }
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v58 = EtwpReserveTraceBuffer(v10, v12 + 24, (unsigned int)&v74, (unsigned int)&v67, a5);
      v59 = v58;
      if ( v58 )
      {
        v44 = a4;
        *(_WORD *)(v58 + 6) = a4;
        *(_DWORD *)v58 = (unsigned __int8)a5 | 0xC0040000;
        *(_QWORD *)(v58 + 16) = v67;
        *(_WORD *)(v58 + 4) = v12 + 24;
        *(_DWORD *)(v58 + 8) = KeGetCurrentThread()[1].KernelStack;
        *(_DWORD *)(v58 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
        v45 = (char *)(v58 + 24);
        v68 = (void *)(v59 + 24);
        goto LABEL_33;
      }
    }
    else
    {
      v71 = KeGetCurrentThread();
      v55 = EtwpReserveTraceBuffer(v10, v12 + 32, (unsigned int)&v74, (unsigned int)&v67, a5);
      v56 = v55;
      if ( v55 )
      {
        p_LockNV = &v71->Header.LockNV;
        v44 = a4;
        *(_WORD *)(v55 + 6) = a4;
        *(_DWORD *)v55 = (unsigned __int8)a5 | 0xC0020000;
        *(_QWORD *)(v55 + 16) = v67;
        *(_WORD *)(v55 + 4) = v12 + 32;
        *(_DWORD *)(v55 + 8) = p_LockNV[396];
        *(_DWORD *)(v55 + 12) = p_LockNV[394];
        *(_DWORD *)(v55 + 24) = p_LockNV[163];
        *(_DWORD *)(v55 + 28) = p_LockNV[183];
        v45 = (char *)(v55 + 32);
        v68 = (void *)(v56 + 32);
        goto LABEL_33;
      }
    }
LABEL_44:
    if ( v9 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(EtwpSiloState + 8 * v78 + 400), 1u);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    }
  }
}
