/*
 * XREFs of MiDeleteValidSystemPte @ 0x1400A1760
 * Callers:
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiDeleteSessionPdes @ 0x140116E90 (MiDeleteSessionPdes.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     EtwpGetNextEventOffsetType @ 0x14020FF18 (EtwpGetNextEventOffsetType.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x1406AAE38 (KdSendTraceData.c)
 */

void __fastcall MiDeleteValidSystemPte(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rbx
  ULONG_PTR BugCheckParameter4; // r15
  int v11; // esi
  unsigned int v12; // r15d
  bool v13; // zf
  __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rsi
  char v17; // bl
  __int64 v18; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  void *v24; // rax
  const void **v25; // r15
  __int64 v26; // r14
  _QWORD *v27; // rcx
  __int64 v28; // xmm0_8
  __int64 v29; // r9
  volatile signed __int64 *v30; // rdx
  signed __int64 *v31; // roff
  signed __int64 v32; // rax
  __int64 v33; // r8
  signed __int64 v34; // rtt
  int v35; // ecx
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  ULONG_PTR v38; // rax
  unsigned int v39; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+38h] [rbp-C8h]
  _DWORD v41[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int64 *v44; // [rsp+60h] [rbp-A0h]
  unsigned int v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48[3]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v49; // [rsp+98h] [rbp-68h] BYREF
  int v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+B0h] [rbp-50h]
  _OWORD v53[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  _QWORD v56[2]; // [rsp+110h] [rbp+10h] BYREF

  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(BugCheckParameter2) - 0x58000000000LL;
  if ( *(_QWORD *)v9 )
    MiTerminateWsle(a2, a3, *(_QWORD *)v9);
  BugCheckParameter4 = *(_QWORD *)(v9 + 8);
  if ( (_QWORD *)(BugCheckParameter4 | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v38 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x401uLL, (ULONG_PTR)BugCheckParameter2, v38, BugCheckParameter4);
  }
  if ( (*(_BYTE *)(a3 + 216) & 7) == 1 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2928));
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2920));
  }
  MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  *BugCheckParameter2 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    MiWritePteShadow(BugCheckParameter2, 0LL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) == 0 || (v11 = 1, (unsigned __int64)(a2 + 0x98000000000LL) > 0x7FFFFFFFFFLL) )
    v11 = 0;
  MiLockPageAtDpcInline(v9);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  if ( v11 )
  {
    memset(v48, 0, sizeof(v48));
    MiIdentifyPfn(v9, v48);
  }
  *(_QWORD *)v9 = *a5;
  *a5 = v9;
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
  {
    v12 = EtwpActiveSystemLoggers;
    v13 = !_BitScanForward((unsigned int *)&v14, EtwpActiveSystemLoggers);
    v56[0] = v48;
    v56[1] = 24LL;
    while ( !v13 )
    {
      v12 &= v12 - 1;
      v39 = v12;
      v15 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v14;
      if ( v15 && (*((_DWORD *)v15 + 1) & 1) != 0 )
      {
        v16 = (unsigned __int16)EtwpSystemLogger[2 * v14];
        v17 = 0;
        v18 = EtwpSiloState;
        if ( KeGetCurrentIrql() >= 2u )
          goto LABEL_21;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v18 + 8 * v16 + 400), 1u) )
        {
          v17 = 1;
LABEL_21:
          v20 = *(_QWORD *)(v18 + 8 * v16 + 912);
          v21 = v16;
          if ( (v20 & 1) != 0 )
          {
            EtwpCloseLogger(v16, v18, v17);
          }
          else if ( v20 )
          {
            v22 = EtwpReserveTraceBuffer(v20, 48LL, (__int64)&v43, &v46, 6914);
            if ( v22 )
            {
              *(_DWORD *)v22 = -1073479678;
              *(_QWORD *)(v22 + 16) = v46;
              *(_DWORD *)(v22 + 4) = 41353264;
              *(_DWORD *)(v22 + 8) = KeGetCurrentThread()[1].KernelStack;
              *(_DWORD *)(v22 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
              v47 = (_QWORD *)(v22 + 24);
              if ( v22 != -24LL )
              {
                v23 = 24;
                v42 = v22 + 24;
                v24 = (void *)(v22 + 24);
                v40 = 0;
                v25 = (const void **)v56;
                while ( 1 )
                {
                  v26 = *((unsigned int *)v25 + 2);
                  if ( (unsigned int)v26 > v23 )
                    break;
                  memmove(v24, *v25, (unsigned int)v26);
                  v23 -= v26;
                  v24 = (void *)(v26 + v42);
                  v42 += v26;
                  v25 += 2;
                  if ( ++v40 )
                    goto LABEL_32;
                }
                v27 = v47;
                *v47 = 0LL;
                v27[1] = 0LL;
                v27[2] = 0LL;
                _InterlockedIncrement((volatile signed __int32 *)(v20 + 256));
                if ( (*(_DWORD *)(v20 + 832) & 8) != 0 )
                  *(_DWORD *)(v20 + 464) = 1;
LABEL_32:
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v20 + 12) & 0x80000) != 0 )
                {
                  if ( (*(_DWORD *)(v20 + 836) & 0x800) != 0
                    && (unsigned __int8)KeAreInterruptsEnabled()
                    && KeGetCurrentIrql() < 2u )
                  {
                    EtwpSendDbgId(v20);
                  }
                  if ( (unsigned int)EtwpGetNextEventOffsetType(v43, v45, v41)
                    && (unsigned __int64)v41[0] + 72 <= (unsigned int)(KdTransportMaxPacketSize - 64) )
                  {
                    v53[0] = *(_OWORD *)v43;
                    v53[1] = *(_OWORD *)(v43 + 16);
                    v53[2] = *(_OWORD *)(v43 + 32);
                    v54 = *(_OWORD *)(v43 + 48);
                    v28 = *(_QWORD *)(v43 + 64);
                    LODWORD(v53[0]) = v41[0] + 72;
                    LODWORD(v54) = v41[0] + 72;
                    v49 = v53;
                    v55 = v28;
                    v51 = v43 + v45;
                    v50 = 72;
                    v52 = v41[0];
                    KdSendTraceData(&v49, 2LL);
                  }
                }
                v29 = v43;
                v30 = v44;
                v31 = (signed __int64 *)v44;
                _m_prefetchw((const void *)v44);
                v32 = *v31;
                v33 = v43;
                if ( (v43 ^ (unsigned __int64)*v31) >= 0xF )
                {
LABEL_47:
                  _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
                }
                else
                {
                  while ( 1 )
                  {
                    v34 = v32;
                    v32 = _InterlockedCompareExchange64(v30, v32 + 1, v32);
                    if ( v34 == v32 )
                      break;
                    if ( (v29 ^ (unsigned __int64)v32) >= 0xF )
                    {
                      v33 = v43;
                      goto LABEL_47;
                    }
                  }
                }
                v35 = *(_DWORD *)(v20 + 832);
                if ( (v35 & 0x80u) != 0 && _bittest((const signed __int32 *)(*(_QWORD *)(v20 + 848) + 76LL), 0x17u) )
                  EtwpStackTraceDispatcher(*(_DWORD *)v20 | v35 & 0xFFFF0000, &v46, 0LL, 289413890LL);
                v12 = v39;
                v21 = v16;
              }
            }
            if ( v17 )
            {
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(EtwpSiloState + 8 * v21 + 400),
                1u);
              v36 = KeGetCurrentThread();
              v37 = v36->KernelApcDisable + 1;
              v36->KernelApcDisable = v37;
              if ( !v37
                && ($E81C3296F15336D9BF9B2D43BB137B25 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
                && !v36->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery((__int64)v36);
              }
            }
          }
          goto LABEL_57;
        }
        KeLeaveCriticalRegion();
      }
LABEL_57:
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
    }
  }
}
