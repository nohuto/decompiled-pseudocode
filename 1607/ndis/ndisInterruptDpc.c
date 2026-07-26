/*
 * XREFs of ndisInterruptDpc @ 0x1C0004D50
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0021960 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        KSPIN_LOCK *SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  __int64 Clock; // r14
  void (__fastcall *v15)(__int64, PVOID, __int64 *, _QWORD); // r13
  void (__fastcall *v16)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  char v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char DatapathCyclesMask; // r14
  __int64 v21; // rcx
  PKSPIN_LOCK v22; // r13
  __int64 v23; // rdx
  PVOID v24; // r12
  unsigned __int8 v25; // al
  __int64 v26; // r13
  unsigned int v27; // ecx
  KIRQL v28; // al
  __int64 v29; // rbx
  int v30; // esi
  _WORD *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  struct _KDPC *v34; // rax
  char *v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // rcx
  LARGE_INTEGER v38; // rax
  __int64 v39; // r14
  unsigned int v40; // ecx
  __int64 v41; // rsi
  __int64 v42; // rdx
  char *v43; // rdi
  __int64 *v44; // rax
  __int64 v45; // r9
  unsigned __int8 v46; // r10
  unsigned __int8 v47; // r8
  _BYTE *v48; // rdx
  unsigned __int8 v49; // dl
  unsigned __int8 v50; // dl
  __int64 v51; // r8
  __int64 v52; // rax
  KIRQL v53; // [rsp+30h] [rbp-D0h]
  char Type_high; // [rsp+31h] [rbp-CFh]
  char v55; // [rsp+31h] [rbp-CFh]
  unsigned int Number; // [rsp+38h] [rbp-C8h]
  unsigned int v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-B0h]
  struct _KDPC *v62; // [rsp+58h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v63; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_PCW_CONTEXT v64; // [rsp+78h] [rbp-88h] BYREF
  struct NDIS_PCW_CONTEXT v65; // [rsp+90h] [rbp-70h] BYREF
  struct NDIS_PCW_CONTEXT v66; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD WnodeEventItem[6]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v68[6]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+120h] [rbp+20h] BYREF

  v4 = *((_QWORD *)DeferredContext + 12);
  SpinLock = SystemArgument1;
  v62 = Dpc;
  v8 = *(_DWORD *)(v4 + 48);
  v64.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v9 = *(_DWORD *)(v4 + 80);
  v64.DatapathEventsMask = v8;
  v64.DatapathCyclesMask = v9;
  v64.CurrentCpu = -1;
  if ( (v9 & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v64, 0xCu, 0x23uLL);
    LOBYTE(v8) = v64.DatapathEventsMask;
  }
  v10 = 1LL;
  if ( (v8 & 1) != 0 )
    ndisPcwAddEvent(&v64, 0LL, 1uLL);
  if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1 )
  {
    v25 = *(_BYTE *)(v4 + 32);
    if ( (v25 > 6u || v25 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u) && (*(_DWORD *)(v4 + 124) & 0x400000) == 0 )
    {
LABEL_37:
      v26 = *((_QWORD *)DeferredContext + 12);
      Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
      Number = KeGetPcr()->Prcb.Number;
      v27 = *(_DWORD *)(v26 + 48);
      v65.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v26 + 40);
      v65.DatapathCyclesMask = *(_DWORD *)(v26 + 80);
      v65.DatapathEventsMask = v27;
      v65.CurrentCpu = -1;
      if ( (v27 & 0x800000) != 0 )
        ndisPcwAddEvent(&v65, 0x24uLL, v10);
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4496));
      v29 = *(_QWORD *)(v26 + 4952);
      v30 = 0;
      v53 = v28;
      if ( !v29 )
        goto LABEL_42;
      if ( *(_BYTE *)(v29 + 1) )
      {
        if ( *(_BYTE *)(v29 + 1) != 1 )
          goto LABEL_42;
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v29 + 4936), 1u);
      }
      else
      {
        v31 = 0LL;
        if ( !_bittestandset((signed __int32 *)(v29 + 24), 0xDu) )
        {
LABEL_42:
          ++*(_DWORD *)(v26 + 4504);
          if ( (unsigned __int8)byte_1C00895DB >= 4u )
          {
            WPP_SF_qD(13LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v26, *(unsigned int *)(v26 + 4504));
            v28 = v53;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 4496), v28);
          if ( DeferredContext[193] )
            v30 = (int)SystemArgument1;
          v32 = *((_QWORD *)DeferredContext + 27) + 80LL * (Number + v30 * ndisMaxNumberOfProcessors);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v32 + 72));
          if ( (*(_DWORD *)(v32 + 68) & 1) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
            LOBYTE(v33) = 77;
            ndisDereferenceMiniport(v26, v33);
          }
          else
          {
            v34 = v62;
            *(_QWORD *)(v32 + 48) = SystemArgument1;
            *(_DWORD *)(v32 + 68) = 1;
            *(_QWORD *)(v32 + 32) = v34;
            *(_QWORD *)(v32 + 40) = DeferredContext;
            *(_QWORD *)(v32 + 56) = SystemArgument2;
            *(_DWORD *)(v32 + 64) = Number;
            if ( Type_high )
            {
              if ( HIBYTE(word_1C008AE5C) )
              {
                memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
                HIDWORD(WnodeEventItem[5]) = 0x20000;
                LOWORD(WnodeEventItem[0]) = 48;
                WnodeEventItem[1] = qword_1C008AE50;
                *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
                BYTE4(WnodeEventItem[0]) = 24;
                IoWMIWriteEvent(WnodeEventItem);
              }
              *(_DWORD *)(v32 + 68) |= 2u;
              v35 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v35 + 2);
              v36 = (__int64 *)*((_QWORD *)v35 + 1);
              if ( (char *)*v36 != v35 )
                __fastfail(3u);
              *(_QWORD *)v32 = v35;
              *(_QWORD *)(v32 + 8) = v36;
              *v36 = v32;
              *((_QWORD *)v35 + 1) = v32;
              ++*((_DWORD *)v35 + 6);
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v35 + 2);
              KeReleaseSemaphore((PRKSEMAPHORE)v35 + 1, 0, 1, 0);
              if ( !_InterlockedExchange(
                      (volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number),
                      1) )
              {
                HIDWORD(v37) = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
                v38.QuadPart = -1LL;
                if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
                  v38 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
                LODWORD(v37) = KeGetPcr()->Prcb.Number;
                KeSetTimer(
                  (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v37],
                  v38,
                  (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v37 + 8]);
              }
            }
            else
            {
              ExQueueWorkItem((PWORK_QUEUE_ITEM)v32, CriticalWorkQueue);
            }
          }
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v32 + 72));
          return;
        }
        v45 = *(_QWORD *)(v29 + 8);
        if ( v45 )
        {
          v46 = *(_BYTE *)(v29 + 3);
          v47 = 0;
          if ( v46 )
          {
            do
            {
              v48 = (_BYTE *)(v45 + 2LL * v47);
              if ( *v48 == 77 )
              {
                if ( v48[1] != 0xFF )
                {
                  ++v48[1];
                  goto LABEL_77;
                }
              }
              else if ( !v48[1] )
              {
                v31 = (_WORD *)(v45 + 2LL * v47);
              }
              ++v47;
            }
            while ( v47 < v46 );
            if ( !v31 )
              goto LABEL_80;
            *v31 = 333;
            goto LABEL_42;
          }
        }
LABEL_80:
        if ( !*(_BYTE *)(v29 + 1) )
        {
          v49 = *(_BYTE *)(v29 + 3);
          if ( v49 == 0xFF )
          {
            ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v29);
            *(_BYTE *)(v29 + 1) = 2;
          }
          else
          {
            if ( (unsigned int)v49 + 2 <= 0xFF )
              v50 = v49 + 2;
            else
              v50 = -1;
            ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v29, v50);
          }
        }
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v29);
      }
LABEL_77:
      v28 = v53;
      goto LABEL_42;
    }
  }
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    v10 = 1LL;
    goto LABEL_37;
  }
  v12 = *((_QWORD *)DeferredContext + 12);
  v13 = 0;
  Clock = 0LL;
  v15 = (void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 3);
  v16 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
  v59 = 0LL;
  v63.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
  v63.DatapathEventsMask = *(_DWORD *)(v12 + 48);
  v63.DatapathCyclesMask = *(_DWORD *)(v12 + 80);
  v60 = 0LL;
  v63.CurrentCpu = -1;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v17 = 1;
    ndisTraceDpcStart(v12, 1LL);
    Clock = WmiGetClock(0LL, 0LL, v51);
    v60 = Clock;
  }
  else
  {
    v17 = 0;
  }
  if ( DeferredContext[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  }
  else
  {
    ++*(_DWORD *)(v12 + 2724);
    v18 = *(_DWORD *)(v12 + 2716);
    *(_QWORD *)(v12 + 2696) = 0LL;
    *(_QWORD *)(v12 + 2704) = 0LL;
    *(_DWORD *)(v12 + 2712) = 0;
    if ( *(_DWORD *)(v12 + 2720) < v18 )
      *(_DWORD *)(v12 + 2720) = v18;
    *(_DWORD *)(v12 + 2716) = 0;
    if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        v19 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
      else
      {
        v19 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v12 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
        if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v19 )
          v19 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
    }
    else
    {
      v19 = -1;
    }
    DatapathCyclesMask = v63.DatapathCyclesMask;
    LODWORD(v59) = v19;
    if ( (v63.DatapathCyclesMask & 1) != 0 )
    {
      ndisPcwStartCycleCounter(&v63, 0);
      DatapathCyclesMask = v63.DatapathCyclesMask;
    }
    v21 = *((_QWORD *)DeferredContext + 1);
    if ( DeferredContext[193] == 1 )
    {
      v22 = SpinLock;
      v16(v21, (unsigned int)SpinLock, SystemArgument2, &v59, 0LL);
      v24 = SystemArgument2;
    }
    else
    {
      v24 = SystemArgument2;
      v15(v21, SystemArgument2, &v59, 0LL);
      v22 = SpinLock;
    }
    if ( (DatapathCyclesMask & 1) != 0 )
      ndisPcwEndCycleCounter(&v63, 0, 0xDuLL);
    if ( (v59 & 0x100000000LL) != 0 )
    {
      v39 = *((_QWORD *)DeferredContext + 12);
      v55 = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
      v58 = KeGetPcr()->Prcb.Number;
      v40 = *(_DWORD *)(v39 + 48);
      v66.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v39 + 40);
      v66.DatapathCyclesMask = *(_DWORD *)(v39 + 80);
      v66.DatapathEventsMask = v40;
      v66.CurrentCpu = -1;
      if ( (v40 & 0x800000) != 0 )
        ndisPcwAddEvent(&v66, 0x24uLL, 1uLL);
      LOBYTE(v23) = 77;
      ndisReferenceMiniportNoCheck(v39, v23);
      if ( DeferredContext[193] )
        v13 = (int)v22;
      v41 = *((_QWORD *)DeferredContext + 27) + 80LL * (v58 + ndisMaxNumberOfProcessors * v13);
      SpinLock = (PKSPIN_LOCK)(v41 + 72);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v41 + 72));
      if ( (*(_DWORD *)(v41 + 68) & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
        LOBYTE(v42) = 77;
        ndisDereferenceMiniport(v39, v42);
      }
      else
      {
        *(_QWORD *)(v41 + 32) = v62;
        *(_DWORD *)(v41 + 64) = v58;
        *(_QWORD *)(v41 + 40) = DeferredContext;
        *(_QWORD *)(v41 + 48) = v22;
        *(_QWORD *)(v41 + 56) = v24;
        *(_DWORD *)(v41 + 68) = 1;
        if ( v55 )
        {
          if ( HIBYTE(word_1C008AE5C) )
          {
            memset((char *)v68 + 2, 0, 0x2EuLL);
            HIDWORD(v68[5]) = 0x20000;
            LOWORD(v68[0]) = 48;
            v68[1] = qword_1C008AE50;
            *(GUID *)&v68[3] = EtwGuidNdisReceive;
            BYTE4(v68[0]) = 24;
            IoWMIWriteEvent(v68);
          }
          *(_DWORD *)(v41 + 68) |= 2u;
          v43 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v43 + 2);
          v44 = (__int64 *)*((_QWORD *)v43 + 1);
          if ( (char *)*v44 != v43 )
            __fastfail(3u);
          *(_QWORD *)v41 = v43;
          *(_QWORD *)(v41 + 8) = v44;
          *v44 = v41;
          *((_QWORD *)v43 + 1) = v41;
          ++*((_DWORD *)v43 + 6);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v43 + 2);
          KeReleaseSemaphore((PRKSEMAPHORE)v43 + 1, 0, 1, 0);
          ndisQueuePeriodicReceivesTimer();
        }
        else
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v41, CriticalWorkQueue);
        }
      }
      KeReleaseSpinLockFromDpcLevel(SpinLock);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1
           && DeferredContext[4] )
    {
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
    }
    Clock = v60;
  }
  if ( v17 )
  {
    v52 = WmiGetClock(0LL, 0LL, v11);
    ndisTraceDpcEnd(v12, 1LL, v52 - Clock);
  }
}
