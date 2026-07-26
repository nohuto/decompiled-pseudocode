/*
 * XREFs of ndisInterruptDpc @ 0x1C0008260
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004A50C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004A5EC (ndisTraceDpcStart.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r9
  unsigned int v6; // r14d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // rbx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  void (__fastcall *v14)(__int64, _QWORD, void *, __int64 *, _QWORD); // r12
  char v15; // r15
  unsigned int v16; // eax
  char DatapathCyclesMask; // r14
  __int64 v18; // rcx
  void *v19; // rsi
  unsigned __int8 v20; // al
  unsigned int Number; // r12d
  __int64 v22; // r15
  unsigned int v23; // ecx
  KIRQL v24; // al
  struct _NDIS_REFCOUNT_BLOCK *v25; // rcx
  KIRQL v26; // r14
  int v27; // esi
  __int64 v28; // rsi
  char *v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rcx
  LARGE_INTEGER v32; // rax
  __int64 Clock; // rax
  __int64 v34; // rax
  char v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  void *v38; // [rsp+48h] [rbp-B8h]
  struct _KDPC *v39; // [rsp+50h] [rbp-B0h]
  void (__fastcall *v40)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v41; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_PCW_CONTEXT v42; // [rsp+78h] [rbp-88h] BYREF
  struct NDIS_PCW_CONTEXT v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD WnodeEventItem[6]; // [rsp+A8h] [rbp-58h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+D8h] [rbp-28h] BYREF

  v39 = Dpc;
  v5 = *((_QWORD *)DeferredContext + 12);
  v6 = -1;
  v38 = SystemArgument2;
  v42.CurrentCpu = -1;
  v9 = *(_DWORD *)(v5 + 48);
  v42.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v10 = *(_DWORD *)(v5 + 80);
  v42.DatapathEventsMask = v9;
  v42.DatapathCyclesMask = v10;
  if ( (v10 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v42, 0xCu, 0x23uLL);
    LOBYTE(v9) = v42.DatapathEventsMask;
  }
  v11 = 1LL;
  if ( (v9 & 1) != 0 )
    ndisPcwAddEvent(&v42, 0LL, 1uLL);
  if ( dword_1C0084D44 != -1 )
  {
    v20 = *(_BYTE *)(v5 + 32);
    if ( (v20 > 6u || v20 == 6 && *(_BYTE *)(v5 + 33) >= 0x14u) && (*(_DWORD *)(v5 + 124) & 0x400000) == 0 )
      goto LABEL_35;
  }
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0
    || !ndisDpcWatchdogLimit
    || WatchdogInformation.DpcWatchdogCount >= ndisDpcWatchdogLimit )
  {
    v12 = *((_QWORD *)DeferredContext + 12);
    v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
    v14 = (void (__fastcall *)(__int64, _QWORD, void *, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
    v36 = 0LL;
    v41.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
    v41.DatapathEventsMask = *(_DWORD *)(v12 + 48);
    v41.DatapathCyclesMask = *(_DWORD *)(v12 + 80);
    v40 = v13;
    v37 = 0LL;
    v41.CurrentCpu = -1;
    if ( HIBYTE(dword_1C00870D8) )
    {
      v15 = 1;
      ndisTraceDpcStart(v12, 1LL);
      Clock = WmiGetClock(0LL, 0LL);
      v13 = v40;
      v37 = Clock;
    }
    else
    {
      v15 = 0;
    }
    if ( DeferredContext[4] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
        goto LABEL_26;
    }
    else
    {
      ++*(_DWORD *)(v12 + 2724);
      v16 = *(_DWORD *)(v12 + 2716);
      *(_QWORD *)(v12 + 2696) = 0LL;
      *(_QWORD *)(v12 + 2704) = 0LL;
      *(_DWORD *)(v12 + 2712) = 0;
      if ( *(_DWORD *)(v12 + 2720) < v16 )
        *(_DWORD *)(v12 + 2720) = v16;
      *(_DWORD *)(v12 + 2716) = 0;
      if ( byte_1C0084D41 )
      {
        if ( dword_1C0084D4C )
        {
          v6 = dword_1C0084D44;
        }
        else
        {
          v6 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v12 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
          if ( dword_1C0084D44 < v6 )
            v6 = dword_1C0084D44;
        }
      }
      LODWORD(v36) = v6;
      DatapathCyclesMask = v41.DatapathCyclesMask;
      if ( (v41.DatapathCyclesMask & 1) != 0 )
      {
        ndisPcwStartCycleCounter(&v41, 0);
        v13 = v40;
        DatapathCyclesMask = v41.DatapathCyclesMask;
      }
      v18 = *((_QWORD *)DeferredContext + 1);
      v19 = v38;
      if ( DeferredContext[193] == 1 )
        v14(v18, (unsigned int)SystemArgument1, v38, &v36, 0LL);
      else
        v13(v18, v38, &v36, 0LL);
      if ( (DatapathCyclesMask & 1) != 0 )
        ndisPcwEndCycleCounter(&v41, 0, 0xDuLL);
      if ( (v36 & 0x100000000LL) != 0 )
      {
        ndisQueueDpcWorkItem(v39, DeferredContext, SystemArgument1, v19, byte_1C0084D41);
LABEL_26:
        if ( v15 )
        {
          v34 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(v12, 1LL, v34 - v37);
        }
        return;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1
        || !DeferredContext[4] )
      {
        goto LABEL_26;
      }
    }
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
    goto LABEL_26;
  }
  v11 = 1LL;
LABEL_35:
  Number = KeGetPcr()->Prcb.Number;
  v22 = *((_QWORD *)DeferredContext + 12);
  v35 = byte_1C0084D41;
  v43.CurrentCpu = -1;
  v23 = *(_DWORD *)(v22 + 48);
  v43.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v22 + 40);
  v43.DatapathCyclesMask = *(_DWORD *)(v22 + 80);
  v43.DatapathEventsMask = v23;
  if ( (v23 & 0x800000) != 0 )
    ndisPcwAddEvent(&v43, 0x24uLL, v11);
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4496));
  v25 = *(struct _NDIS_REFCOUNT_BLOCK **)(v22 + 4952);
  v26 = v24;
  if ( v25 )
    ndisReferenceWithTag(v25, 0x4Bu);
  ++*(_DWORD *)(v22 + 4504);
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(13LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v22, *(unsigned int *)(v22 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 4496), v26);
  v27 = 0;
  if ( DeferredContext[193] )
    v27 = (int)SystemArgument1;
  v28 = *((_QWORD *)DeferredContext + 27) + 80LL * (Number + v27 * ndisMaxNumberOfProcessors);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v28 + 72));
  if ( (*(_DWORD *)(v28 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    ndisDereferenceMiniport(v22, 0x4Bu);
  }
  else
  {
    *(_QWORD *)(v28 + 32) = v39;
    *(_DWORD *)(v28 + 68) = 1;
    *(_QWORD *)(v28 + 40) = DeferredContext;
    *(_QWORD *)(v28 + 48) = SystemArgument1;
    *(_QWORD *)(v28 + 56) = SystemArgument2;
    *(_DWORD *)(v28 + 64) = Number;
    if ( v35 )
    {
      if ( HIBYTE(word_1C00870DC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C00870D0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v28 + 68) |= 2u;
      v29 = (char *)qword_1C0084D80 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v29 + 2);
      v30 = (__int64 *)*((_QWORD *)v29 + 1);
      *(_QWORD *)v28 = v29;
      *(_QWORD *)(v28 + 8) = v30;
      if ( (char *)*v30 != v29 )
        __fastfail(3u);
      *v30 = v28;
      *((_QWORD *)v29 + 1) = v28;
      ++*((_DWORD *)v29 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v29 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v29 + 1, 0, 1, 0);
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0084D78 + KeGetPcr()->Prcb.Number, 1) )
      {
        HIDWORD(v31) = DueTime.HighPart;
        v32.QuadPart = -1LL;
        if ( DueTime.QuadPart )
          v32 = DueTime;
        LODWORD(v31) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0084D70 + 2 * v31,
          v32,
          (PKDPC)qword_1C0084D70 + 2 * (unsigned __int64)(unsigned int)v31 + 1);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v28, CriticalWorkQueue);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v28 + 72));
}
