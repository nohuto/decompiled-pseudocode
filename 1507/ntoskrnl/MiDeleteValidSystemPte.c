/*
 * XREFs of MiDeleteValidSystemPte @ 0x140038C20
 * Callers:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     EtwpGetNextEventOffsetType @ 0x14025F288 (EtwpGetNextEventOffsetType.c)
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 *     EtwpSendDbgId @ 0x1406E7CE8 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x14072AE7C (KdSendTraceData.c)
 */

char __fastcall MiDeleteValidSystemPte(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v6; // r15
  __int64 v11; // rsi
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r14d
  unsigned int v16; // ebx
  signed __int64 Process; // rax
  unsigned int v18; // r13d
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  char v22; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KTHREAD *v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r14
  signed __int64 v29; // r8
  void *KernelStack; // rdx
  __int64 v31; // rcx
  signed __int64 v32; // r8
  __int64 v33; // xmm0_8
  __int64 v34; // r9
  volatile signed __int64 *v35; // rdx
  signed __int64 *v36; // roff
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  signed __int64 v39; // rtt
  int v40; // esi
  unsigned int v41; // esi
  struct _KTHREAD *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 CurrentIrql; // r15
  int NestingLevel; // ecx
  __int64 v47; // rdx
  struct _KTHREAD *v48; // rcx
  __int64 v50; // [rsp+38h] [rbp-A9h] BYREF
  int i; // [rsp+40h] [rbp-A1h]
  unsigned int v52; // [rsp+44h] [rbp-9Dh] BYREF
  __int64 v53; // [rsp+48h] [rbp-99h] BYREF
  volatile signed __int64 *v54; // [rsp+50h] [rbp-91h]
  unsigned int v55; // [rsp+58h] [rbp-89h]
  __int128 v56; // [rsp+60h] [rbp-81h] BYREF
  __int64 v57; // [rsp+70h] [rbp-71h]
  _OWORD *v58; // [rsp+78h] [rbp-69h] BYREF
  int v59; // [rsp+80h] [rbp-61h]
  __int64 v60; // [rsp+88h] [rbp-59h]
  unsigned int v61; // [rsp+90h] [rbp-51h]
  _OWORD v62[3]; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-11h]
  __int64 v64; // [rsp+E0h] [rbp-1h]

  PteShadow = *BugCheckParameter2;
  v6 = (unsigned __int64)(BugCheckParameter2 + 0x12090482600LL);
  if ( (unsigned __int64)(BugCheckParameter2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
  v11 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( *(_QWORD *)v11 )
    MiTerminateWsle(a2, a3, *(_QWORD *)v11);
  BugCheckParameter4 = *(_QWORD *)(v11 + 8);
  if ( (unsigned __int64 *)(BugCheckParameter4 | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v13 = *BugCheckParameter2;
    if ( v6 <= 0x7F8 )
      v13 = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x401uLL, (ULONG_PTR)BugCheckParameter2, v13, BugCheckParameter4);
  }
  if ( (*(_BYTE *)(a3 + 216) & 7) == 1 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2928));
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2920));
  }
  MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  *BugCheckParameter2 = 0LL;
  if ( v6 <= 0x7F8 )
    MiWritePteShadow(BugCheckParameter2, 0LL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) == 0 || (v14 = a2 + 0x98000000000LL, v15 = 1, v14 > 0x7FFFFFFFFFLL) )
    v15 = 0;
  v16 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
  if ( v15 )
  {
    v56 = 0uLL;
    v57 = 0LL;
    MiIdentifyPfn(v11, &v56);
  }
  *(_QWORD *)v11 = *a5;
  *a5 = v11;
  *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 5;
  LOBYTE(Process) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 )
  {
    v18 = EtwpActiveSystemLoggers;
    v19 = !_BitScanForward((unsigned int *)&v20, EtwpActiveSystemLoggers);
    for ( i = v20; !v19; i = v20 )
    {
      v18 &= v18 - 1;
      Process = (signed __int64)&EtwpGroupMasks + 32 * (unsigned int)v20;
      if ( Process )
      {
        LODWORD(Process) = *(_DWORD *)(Process + 4);
        if ( (Process & 1) != 0 )
        {
          v21 = (unsigned __int16)EtwpSystemLogger[2 * v20];
          v22 = 0;
          LOBYTE(Process) = KeGetCurrentIrql();
          if ( (unsigned __int8)Process < 2u )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v22 = 1;
            LOBYTE(Process) = ExAcquireRundownProtectionCacheAwareEx(
                                (PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v21],
                                1u);
            if ( !(_BYTE)Process )
              goto LABEL_30;
          }
          v27 = v21;
          v28 = WmipLoggerContext[v21];
          if ( (v28 & 1) != 0 )
          {
            if ( v22 )
            {
              ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v27], 1u);
LABEL_30:
              v26 = KeGetCurrentThread();
              LOWORD(Process) = v26->KernelApcDisable + 1;
              v26->KernelApcDisable = Process;
              if ( !(_WORD)Process )
              {
                Process = (signed __int64)&v26->152;
                if ( *(_QWORD *)Process != Process && !v26->SpecialApcDisable )
                  LOBYTE(Process) = KiCheckForKernelApcDelivery(v26, v24, v25);
              }
            }
          }
          else if ( v28 )
          {
            Process = EtwpReserveTraceBuffer((unsigned int *)v28, 0x30u, (__int64)&v53, &v50, 289413890);
            v29 = Process;
            if ( Process )
            {
              *(_DWORD *)Process = -1073479678;
              *(_QWORD *)(Process + 16) = v50;
              *(_DWORD *)(Process + 4) = 41353264;
              KernelStack = KeGetCurrentThread()[1].KernelStack;
              *(_DWORD *)(Process + 8) = (_DWORD)KernelStack;
              Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
              v31 = *(unsigned int *)(Process + 744);
              *(_DWORD *)(v29 + 12) = v31;
              v32 = v29 + 24;
              if ( v32 )
              {
                *(_OWORD *)v32 = v56;
                *(_QWORD *)(v32 + 16) = v57;
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v28 + 12) & 0x80000) != 0 )
                {
                  if ( (*(_DWORD *)(v28 + 836) & 0x800) != 0
                    && (unsigned __int8)KeAreInterruptsEnabled(v31, KernelStack)
                    && KeGetCurrentIrql() < 2u )
                  {
                    EtwpSendDbgId(v28);
                  }
                  if ( (unsigned int)EtwpGetNextEventOffsetType(v53, v55, &v52)
                    && (unsigned __int64)v52 + 72 <= (unsigned int)(KdTransportMaxPacketSize - 64) )
                  {
                    v62[0] = *(_OWORD *)v53;
                    v62[1] = *(_OWORD *)(v53 + 16);
                    v62[2] = *(_OWORD *)(v53 + 32);
                    v63 = *(_OWORD *)(v53 + 48);
                    v33 = *(_QWORD *)(v53 + 64);
                    LODWORD(v62[0]) = v52 + 72;
                    LODWORD(v63) = v52 + 72;
                    v58 = v62;
                    v61 = v52;
                    v60 = v53 + v55;
                    v64 = v33;
                    v59 = 72;
                    KdSendTraceData(&v58, 2LL);
                  }
                }
                v34 = v53;
                v35 = v54;
                v36 = (signed __int64 *)v54;
                _m_prefetchw((const void *)v54);
                Process = *v36;
                v37 = v53;
                v38 = v53 ^ *v36;
                if ( v38 >= 0xF )
                {
LABEL_55:
                  _InterlockedDecrement((volatile signed __int32 *)(v37 + 12));
                }
                else
                {
                  while ( 1 )
                  {
                    v38 = Process + 1;
                    v39 = Process;
                    Process = _InterlockedCompareExchange64(v35, Process + 1, Process);
                    if ( v39 == Process )
                      break;
                    v38 = v34 ^ Process;
                    if ( (v34 ^ (unsigned __int64)Process) >= 0xF )
                    {
                      v37 = v53;
                      goto LABEL_55;
                    }
                  }
                }
                v40 = *(_DWORD *)(v28 + 832);
                if ( (v40 & 0x80u) != 0 )
                {
                  Process = *(_QWORD *)(v28 + 848);
                  if ( _bittest((const signed __int32 *)(Process + 76), 0x17u) )
                  {
                    v41 = *(_DWORD *)v28 | v40 & 0xFFFF0000;
                    v42 = KeGetCurrentThread();
                    if ( (v42->MiscFlags & 0x400) != 0 || (*((_DWORD *)&v42[1].SwapListEntry + 3) & 1) != 0 )
                      goto LABEL_72;
                    if ( !(unsigned __int8)KeAreInterruptsEnabled(v38, v35) )
                    {
                      CurrentIrql = 15;
                      goto LABEL_63;
                    }
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql < 2u )
                    {
                      if ( (v41 & 0x1000000) == 0 )
                        MmCanThreadFault(v44, v43);
                    }
                    else
                    {
LABEL_63:
                      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
                      if ( CurrentIrql == 2 )
                      {
                        if ( !NestingLevel )
                        {
                          v47 = 2LL;
                          goto LABEL_71;
                        }
                        goto LABEL_72;
                      }
                      if ( NestingLevel )
                        goto LABEL_72;
                    }
                    v47 = CurrentIrql;
LABEL_71:
                    EtwpQueueStackWalkApc(v42, v47, v41, &v50);
LABEL_72:
                    LOBYTE(Process) = EtwpTraceStackWalk(v41, 289409794LL, v42, &v50);
                  }
                }
              }
            }
            if ( v22 )
            {
              ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v27], 1u);
              v48 = KeGetCurrentThread();
              LOWORD(Process) = v48->KernelApcDisable + 1;
              v48->KernelApcDisable = Process;
              if ( !(_WORD)Process )
              {
                Process = (signed __int64)&v48->152;
                if ( *(_QWORD *)Process != Process && !v48->SpecialApcDisable )
                {
                  if ( KeGetCurrentIrql() )
                  {
                    KeGetCurrentThread()->ApcState.KernelApcPending = 1;
                    LOBYTE(Process) = HalRequestSoftwareInterrupt(1LL);
                  }
                  else
                  {
                    __writecr8(1uLL);
                    LOBYTE(Process) = KiDeliverApc(0LL, 0LL, 0LL);
                    __writecr8(0LL);
                  }
                }
              }
            }
          }
        }
      }
      v19 = !_BitScanForward((unsigned int *)&v20, v18);
    }
  }
  return Process;
}
