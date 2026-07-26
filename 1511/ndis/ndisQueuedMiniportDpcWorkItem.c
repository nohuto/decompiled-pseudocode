/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C000A800
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
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

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  int v1; // r14d
  unsigned int Number; // edx
  __int64 v4; // rax
  ULONG v5; // ecx
  __int64 v6; // rdi
  char v7; // r15
  char v8; // r15
  __int64 v9; // r13
  __int64 v10; // rsi
  KSPIN_LOCK *v11; // r11
  void (__fastcall *v12)(__int64, __int64, __int64 *, _QWORD); // r12
  __int64 Clock; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  char DatapathCyclesMask; // bl
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // r15
  unsigned int v20; // ecx
  KIRQL v21; // al
  struct _NDIS_REFCOUNT_BLOCK *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  char *v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rcx
  LARGE_INTEGER v28; // rax
  __int64 v29; // rax
  KIRQL v30; // al
  ULONG_PTR v31; // r8
  KIRQL v32; // si
  ULONG_PTR v33; // rbx
  unsigned int v34; // edx
  unsigned int v35; // eax
  bool v36; // bl
  struct _KEVENT *v37; // rcx
  __int64 v38; // r10
  unsigned __int8 v39; // r9
  unsigned __int8 v40; // cl
  _BYTE *v41; // rdx
  char v42; // [rsp+30h] [rbp-D0h]
  KIRQL v43; // [rsp+31h] [rbp-CFh]
  char v44; // [rsp+32h] [rbp-CEh]
  char v45; // [rsp+33h] [rbp-CDh]
  KIRQL v46; // [rsp+34h] [rbp-CCh]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  ULONG v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  unsigned int v52; // [rsp+60h] [rbp-A0h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v55; // [rsp+78h] [rbp-88h] BYREF
  __int16 WnodeEventItem; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v57[14]; // [rsp+92h] [rbp-6Eh]
  __int16 v58; // [rsp+A0h] [rbp-60h]
  _BYTE v59[22]; // [rsp+A2h] [rbp-5Eh]
  __int16 v60; // [rsp+B8h] [rbp-48h]
  _WORD v61[3]; // [rsp+BAh] [rbp-46h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  struct NDIS_PCW_CONTEXT v63; // [rsp+C8h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+E0h] [rbp-20h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-10h] BYREF

  v1 = 0;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  Affinity.Mask = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v8 = v7 & 2;
  v62 = v4;
  v9 = *(_QWORD *)(v6 + 96);
  v49 = *(_QWORD *)(a1 + 48);
  v51 = *(_QWORD *)(a1 + 56);
  v52 = Number;
  v50 = v5;
  v45 = v8;
  v43 = 0;
  if ( Number != v5 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v5, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v8 )
    v43 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v10 = *(_QWORD *)(v6 + 96);
  v11 = *(KSPIN_LOCK **)(v6 + 184);
  v12 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(v6 + 24);
  v48 = 0LL;
  v55.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v10 + 40);
  v55.DatapathEventsMask = *(_DWORD *)(v10 + 48);
  v55.DatapathCyclesMask = *(_DWORD *)(v10 + 80);
  SpinLock = v11;
  v54 = 0LL;
  v55.CurrentCpu = -1;
  if ( HIBYTE(dword_1C0085018) )
  {
    v42 = 1;
    ndisTraceDpcStart(v10, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
    v11 = SpinLock;
    v54 = Clock;
  }
  else
  {
    v42 = 0;
  }
  if ( *(_BYTE *)(v6 + 4) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v6 + 104)) )
      goto LABEL_51;
    goto LABEL_50;
  }
  ++*(_DWORD *)(v10 + 2724);
  v14 = *(_DWORD *)(v10 + 2716);
  *(_QWORD *)(v10 + 2696) = 0LL;
  *(_QWORD *)(v10 + 2704) = 0LL;
  *(_DWORD *)(v10 + 2712) = 0;
  if ( *(_DWORD *)(v10 + 2720) < v14 )
    *(_DWORD *)(v10 + 2720) = v14;
  *(_DWORD *)(v10 + 2716) = 0;
  if ( byte_1C0082D41 )
  {
    if ( dword_1C0082D4C )
    {
      v15 = dword_1C0082D44;
    }
    else
    {
      v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v10 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
      if ( dword_1C0082D44 < v15 )
        v15 = dword_1C0082D44;
    }
  }
  else
  {
    v15 = -1;
  }
  DatapathCyclesMask = v55.DatapathCyclesMask;
  LODWORD(v48) = v15;
  if ( (v55.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v55, 0);
    DatapathCyclesMask = v55.DatapathCyclesMask;
  }
  v17 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v6 + 193) == 1 )
    ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 *, _QWORD))v11)(v17, (unsigned int)v49, v51, &v48, 0LL);
  else
    v12(v17, v51, &v48, 0LL);
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v55, 0, 0xDuLL);
  if ( (v48 & 0x100000000LL) != 0 )
  {
    v18 = KeGetPcr()->Prcb.Number;
    v19 = *(_QWORD *)(v6 + 96);
    v44 = byte_1C0082D41;
    v63.CurrentCpu = -1;
    v20 = *(_DWORD *)(v19 + 48);
    v63.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v19 + 40);
    v63.DatapathCyclesMask = *(_DWORD *)(v19 + 80);
    v63.DatapathEventsMask = v20;
    if ( (v20 & 0x800000) != 0 )
      ndisPcwAddEvent(&v63, 0x24uLL, 1uLL);
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 4496));
    v22 = *(struct _NDIS_REFCOUNT_BLOCK **)(v19 + 4952);
    v46 = v21;
    if ( v22 )
      ndisReferenceWithTag(v22, 0x4Bu);
    ++*(_DWORD *)(v19 + 4504);
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(13LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v19, *(unsigned int *)(v19 + 4504));
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 4496), v46);
    if ( *(_BYTE *)(v6 + 193) )
      v1 = v49;
    v23 = *(_QWORD *)(v6 + 216) + 80LL * (v18 + ndisMaxNumberOfProcessors * v1);
    SpinLock = (PKSPIN_LOCK)(v23 + 72);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 72));
    if ( (*(_DWORD *)(v23 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
      LOBYTE(v24) = 75;
      ndisDereferenceMiniport(v19, v24);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v62;
      *(_QWORD *)(v23 + 48) = v49;
      *(_QWORD *)(v23 + 56) = v51;
      *(_QWORD *)(v23 + 40) = v6;
      *(_DWORD *)(v23 + 64) = v18;
      *(_DWORD *)(v23 + 68) = 1;
      if ( !v44 )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v23, CriticalWorkQueue);
        KeReleaseSpinLockFromDpcLevel(SpinLock);
        v8 = v45;
        goto LABEL_51;
      }
      if ( HIBYTE(word_1C008501C) )
      {
        *(_QWORD *)v57 = 1572864LL;
        v58 = 0;
        *(_QWORD *)v59 = 0LL;
        v60 = 0;
        v61[0] = 0;
        WnodeEventItem = 48;
        *(_QWORD *)&v57[6] = qword_1C0085010;
        *(_DWORD *)&v61[1] = 0x20000;
        *(GUID *)&v59[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
      }
      *(_DWORD *)(v23 + 68) |= 2u;
      v25 = (char *)qword_1C0082D80 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v25 + 2);
      v26 = (__int64 *)*((_QWORD *)v25 + 1);
      *(_QWORD *)v23 = v25;
      *(_QWORD *)(v23 + 8) = v26;
      if ( (char *)*v26 != v25 )
        __fastfail(3u);
      *v26 = v23;
      *((_QWORD *)v25 + 1) = v23;
      ++*((_DWORD *)v25 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v25 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v25 + 1, 0, 1, 0);
      if ( !_InterlockedExchange((volatile __int32 *)qword_1C0082D78 + KeGetPcr()->Prcb.Number, 1) )
      {
        HIDWORD(v27) = DueTime.HighPart;
        v28.QuadPart = -1LL;
        if ( DueTime.QuadPart )
          v28 = DueTime;
        LODWORD(v27) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)qword_1C0082D70 + 2 * v27,
          v28,
          (PKDPC)qword_1C0082D70 + 2 * (unsigned __int64)(unsigned int)v27 + 1);
        KeReleaseSpinLockFromDpcLevel(SpinLock);
        v8 = v45;
        goto LABEL_51;
      }
    }
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    v8 = v45;
    goto LABEL_51;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v6 + 104)) && *(_BYTE *)(v6 + 4) )
LABEL_50:
    KeSetEvent((PRKEVENT)(v6 + 128), 0, 0);
LABEL_51:
  if ( v42 )
  {
    v29 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v10, 1LL, v29 - v54);
  }
  if ( !v8 && v43 != 2 )
    KeLowerIrql(v43);
  if ( v52 != v50 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v9);
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 4496));
  v31 = *(_QWORD *)(v9 + 4952);
  v32 = v30;
  if ( v31 )
  {
    if ( *(_BYTE *)(v31 + 1) )
    {
      if ( *(_BYTE *)(v31 + 1) == 1 )
      {
        v33 = v31 + 4808;
        v34 = *(_DWORD *)(v31 + 4864);
        if ( v34 >> 17 < 0x3FFE && (unsigned __int16)v34 >> 1 == (v34 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 4808));
          *(_DWORD *)(v33 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v34 & 0xFFFE) == 0 && (v34 & 1) == 0 )
            ndisReportRefcountImbalance(*(_QWORD *)(v9 + 4952), 0x4Bu);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 4808), 0);
        }
      }
    }
    else
    {
      v38 = *(_QWORD *)(v31 + 8);
      if ( v38 && (v39 = *(_BYTE *)(v31 + 3), v40 = 0, v39) )
      {
        while ( 1 )
        {
          v41 = (_BYTE *)(v38 + 2LL * v40);
          if ( *v41 == 75 )
          {
            if ( v41[1] )
              break;
          }
          if ( ++v40 >= v39 )
            goto LABEL_82;
        }
        --v41[1];
      }
      else
      {
LABEL_82:
        if ( !_bittestandreset((signed __int32 *)(v31 + 24), 0xBu) )
          ndisReportRefcountImbalance(v31, 0x4Bu);
      }
    }
  }
  v35 = --*(_DWORD *)(v9 + 4504);
  v36 = v35 == 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v9, v35);
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 4496), v32);
  if ( v36 )
  {
    v37 = *(struct _KEVENT **)(v9 + 1608);
    if ( v37 )
      KeSetEvent(v37, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v9);
}
