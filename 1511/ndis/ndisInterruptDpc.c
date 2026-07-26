/*
 * XREFs of ndisInterruptDpc @ 0x1C0006D00
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00155EC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0026A28 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004ADAC (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004AE8C (ndisTraceDpcStart.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        void (__fastcall *SystemArgument2)(_QWORD, _QWORD, _QWORD, _QWORD))
{
  unsigned int v4; // r12d
  __int64 v6; // r9
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  unsigned int Number; // edi
  __int64 v12; // rsi
  unsigned int v13; // ecx
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *v15; // rcx
  KIRQL v16; // r14
  int v17; // r14d
  __int64 v18; // rdi
  KSPIN_LOCK *v19; // r14
  struct _KDPC *v20; // rcx
  char *v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  LARGE_INTEGER v24; // rax
  KIRQL v25; // al
  ULONG_PTR v26; // r8
  KIRQL v27; // di
  ULONG_PTR v28; // rbx
  unsigned int v29; // edx
  bool v30; // bl
  struct _KEVENT *v31; // rcx
  __int64 v32; // r10
  unsigned __int8 v33; // r9
  unsigned __int8 v34; // cl
  _BYTE *v35; // rdx
  __int64 v36; // rdi
  void (__fastcall *v37)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  __int64 Clock; // rax
  unsigned int v39; // eax
  char DatapathCyclesMask; // si
  __int64 v41; // rcx
  void *v42; // r14
  __int64 v43; // rax
  char v44; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h]
  void *v48; // [rsp+48h] [rbp-B8h]
  void (__fastcall *v49)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-B0h]
  struct _KDPC *v50; // [rsp+58h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v51; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_PCW_CONTEXT v52; // [rsp+78h] [rbp-88h] BYREF
  __int16 WnodeEventItem; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[14]; // [rsp+92h] [rbp-6Eh]
  __int16 v55; // [rsp+A0h] [rbp-60h]
  _BYTE v56[22]; // [rsp+A2h] [rbp-5Eh]
  __int16 v57; // [rsp+B8h] [rbp-48h]
  _WORD v58[3]; // [rsp+BAh] [rbp-46h]
  void (__fastcall *v59)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+C0h] [rbp-40h]
  struct NDIS_PCW_CONTEXT v60; // [rsp+C8h] [rbp-38h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+E0h] [rbp-20h] BYREF

  v4 = -1;
  v49 = SystemArgument2;
  v48 = SystemArgument1;
  v6 = *((_QWORD *)DeferredContext + 12);
  v50 = Dpc;
  v52.CurrentCpu = -1;
  v8 = *(_DWORD *)(v6 + 48);
  v52.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v9 = *(_DWORD *)(v6 + 80);
  v52.DatapathEventsMask = v8;
  v52.DatapathCyclesMask = v9;
  if ( (v9 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v52, 0xCu, 0x23uLL);
    LOBYTE(v8) = v52.DatapathEventsMask;
  }
  if ( (v8 & 1) != 0 )
    ndisPcwAddEvent(&v52, 0LL, 1uLL);
  if ( dword_1C0082D44 != -1
    && ((v10 = *(_BYTE *)(v6 + 32), v10 > 6u) || v10 == 6 && *(_BYTE *)(v6 + 33) >= 0x14u)
    && (*(_DWORD *)(v6 + 124) & 0x400000) == 0
    || KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = *((_QWORD *)DeferredContext + 12);
    v44 = byte_1C0082D41;
    LODWORD(v47) = Number;
    v13 = *(_DWORD *)(v12 + 48);
    v60.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
    v60.DatapathCyclesMask = *(_DWORD *)(v12 + 80);
    v60.DatapathEventsMask = v13;
    v60.CurrentCpu = -1;
    if ( (v13 & 0x800000) != 0 )
      ndisPcwAddEvent(&v60, 0x24uLL, 1uLL);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 4496));
    v15 = *(struct _NDIS_REFCOUNT_BLOCK **)(v12 + 4952);
    v16 = v14;
    if ( v15 )
      ndisReferenceWithTag(v15);
    ++*(_DWORD *)(v12 + 4504);
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(13LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v12, *(unsigned int *)(v12 + 4504));
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 4496), v16);
    v17 = 0;
    if ( DeferredContext[193] )
      v17 = (int)v48;
    v18 = *((_QWORD *)DeferredContext + 27) + 80LL * (Number + v17 * ndisMaxNumberOfProcessors);
    v19 = (KSPIN_LOCK *)(v18 + 72);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 72));
    if ( (*(_DWORD *)(v18 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v12);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 4496));
      v26 = *(_QWORD *)(v12 + 4952);
      v27 = v25;
      if ( v26 )
      {
        if ( *(_BYTE *)(v26 + 1) )
        {
          if ( *(_BYTE *)(v26 + 1) == 1 )
          {
            v28 = v26 + 4808;
            v29 = *(_DWORD *)(v26 + 4864);
            if ( v29 >> 17 < 0x3FFE && (unsigned __int16)v29 >> 1 == (v29 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 4808));
              *(_DWORD *)(v28 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v29 & 0xFFFE) == 0 && (v29 & 1) == 0 )
                ndisReportRefcountImbalance(*(_QWORD *)(v12 + 4952), 0x4Bu);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 4808), 0);
            }
          }
        }
        else
        {
          v32 = *(_QWORD *)(v26 + 8);
          if ( v32 && (v33 = *(_BYTE *)(v26 + 3), v34 = 0, v33) )
          {
            while ( 1 )
            {
              v35 = (_BYTE *)(v32 + 2LL * v34);
              if ( *v35 == 75 )
              {
                if ( v35[1] )
                  break;
              }
              if ( ++v34 >= v33 )
                goto LABEL_56;
            }
            --v35[1];
          }
          else
          {
LABEL_56:
            if ( !_bittestandreset((signed __int32 *)(v26 + 24), 0xBu) )
              ndisReportRefcountImbalance(v26, 0x4Bu);
          }
        }
      }
      v30 = --*(_DWORD *)(v12 + 4504) == 0;
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v12, *(unsigned int *)(v12 + 4504));
      KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 4496), v27);
      if ( v30 )
      {
        v31 = *(struct _KEVENT **)(v12 + 1608);
        if ( v31 )
          KeSetEvent(v31, 0, 0);
      }
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v12);
    }
    else
    {
      v20 = v50;
      *(_QWORD *)(v18 + 48) = v48;
      *(_QWORD *)(v18 + 56) = v49;
      *(_DWORD *)(v18 + 64) = v47;
      *(_QWORD *)(v18 + 32) = v20;
      *(_QWORD *)(v18 + 40) = DeferredContext;
      *(_DWORD *)(v18 + 68) = 1;
      if ( !v44 )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v18, CriticalWorkQueue);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v18 + 72));
        return;
      }
      if ( HIBYTE(word_1C008501C) )
      {
        *(_QWORD *)v54 = 1572864LL;
        v55 = 0;
        *(_QWORD *)v56 = 0LL;
        v57 = 0;
        v58[0] = 0;
        WnodeEventItem = 48;
        *(_QWORD *)&v54[6] = qword_1C0085010;
        *(_DWORD *)&v58[1] = 0x20000;
        *(GUID *)&v56[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
      }
      *(_DWORD *)(v18 + 68) |= 2u;
      v21 = (char *)qword_1C0082D80 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v21 + 2);
      v22 = (__int64 *)*((_QWORD *)v21 + 1);
      *(_QWORD *)v18 = v21;
      *(_QWORD *)(v18 + 8) = v22;
      if ( (char *)*v22 != v21 )
        __fastfail(3u);
      *v22 = v18;
      *((_QWORD *)v21 + 1) = v18;
      ++*((_DWORD *)v21 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v21 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v21 + 1, 0, 1, 0);
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0082D78 + KeGetPcr()->Prcb.Number, 1) )
      {
        HIDWORD(v23) = DueTime.HighPart;
        v24.QuadPart = -1LL;
        if ( DueTime.QuadPart )
          v24 = DueTime;
        LODWORD(v23) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0082D70 + 2 * v23,
          v24,
          (PKDPC)qword_1C0082D70 + 2 * (unsigned __int64)(unsigned int)v23 + 1);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v18 + 72));
        return;
      }
    }
    KeReleaseSpinLockFromDpcLevel(v19);
    return;
  }
  v36 = *((_QWORD *)DeferredContext + 12);
  v37 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
  v59 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 23);
  v46 = 0LL;
  v51.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v36 + 40);
  v51.DatapathEventsMask = *(_DWORD *)(v36 + 48);
  v51.DatapathCyclesMask = *(_DWORD *)(v36 + 80);
  v49 = v37;
  v47 = 0LL;
  v51.CurrentCpu = -1;
  if ( HIBYTE(dword_1C0085018) )
  {
    v45 = 1;
    ndisTraceDpcStart(v36, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
    v37 = v49;
    v47 = Clock;
  }
  else
  {
    v45 = 0;
  }
  if ( DeferredContext[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
      goto LABEL_84;
LABEL_83:
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
    goto LABEL_84;
  }
  ++*(_DWORD *)(v36 + 2724);
  v39 = *(_DWORD *)(v36 + 2716);
  *(_QWORD *)(v36 + 2696) = 0LL;
  *(_QWORD *)(v36 + 2704) = 0LL;
  *(_DWORD *)(v36 + 2712) = 0;
  if ( *(_DWORD *)(v36 + 2720) < v39 )
    *(_DWORD *)(v36 + 2720) = v39;
  *(_DWORD *)(v36 + 2716) = 0;
  if ( byte_1C0082D41 )
  {
    if ( dword_1C0082D4C )
    {
      v4 = dword_1C0082D44;
    }
    else
    {
      v4 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v36 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
      if ( dword_1C0082D44 < v4 )
        v4 = dword_1C0082D44;
    }
  }
  DatapathCyclesMask = v51.DatapathCyclesMask;
  LODWORD(v46) = v4;
  if ( (v51.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v51, 0);
    DatapathCyclesMask = v51.DatapathCyclesMask;
  }
  v41 = *((_QWORD *)DeferredContext + 1);
  if ( DeferredContext[193] == 1 )
  {
    v42 = v48;
    v59(v41, (unsigned int)v48, SystemArgument2, &v46, 0LL);
  }
  else
  {
    v37(v41, SystemArgument2, &v46, 0LL);
    v42 = v48;
  }
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v51, 0, 0xDuLL);
  if ( (v46 & 0x100000000LL) != 0 )
  {
    ndisQueueDpcWorkItem(v50, DeferredContext, v42, SystemArgument2, byte_1C0082D41);
    goto LABEL_84;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 && DeferredContext[4] )
    goto LABEL_83;
LABEL_84:
  if ( v45 )
  {
    v43 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v36, 1LL, v43 - v47);
  }
}
