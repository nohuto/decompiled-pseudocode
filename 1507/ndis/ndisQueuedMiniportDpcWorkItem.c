/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004A50C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004A5EC (ndisTraceDpcStart.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  KIRQL v2; // r12
  char v3; // r13
  unsigned int Number; // edx
  struct _KDPC *v5; // rax
  __int64 v6; // rdi
  char v7; // r15
  char v8; // r15
  ULONG v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, _QWORD, void *, __int64 *, _QWORD); // rax
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  unsigned int v14; // eax
  unsigned int v15; // ecx
  char DatapathCyclesMask; // si
  __int64 v17; // rcx
  KIRQL v18; // al
  ULONG_PTR v19; // r8
  KIRQL v20; // si
  __int64 v21; // rax
  unsigned __int8 v22; // r9
  unsigned __int8 v23; // dl
  bool v24; // bl
  __int64 Clock; // rax
  __int64 v26; // rax
  ULONG_PTR v27; // rbx
  unsigned int v28; // edx
  struct _KEVENT *v29; // rcx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-59h] BYREF
  __int64 v31; // [rsp+40h] [rbp-51h] BYREF
  ULONG v32; // [rsp+48h] [rbp-49h]
  unsigned int v33; // [rsp+4Ch] [rbp-45h]
  void *v34; // [rsp+50h] [rbp-41h]
  __int64 v35; // [rsp+58h] [rbp-39h]
  void *v36; // [rsp+60h] [rbp-31h]
  struct NDIS_PCW_CONTEXT v37; // [rsp+68h] [rbp-29h] BYREF
  struct _KDPC *v38; // [rsp+80h] [rbp-11h]
  void (__fastcall *v39)(__int64, _QWORD, void *, __int64 *, _QWORD); // [rsp+88h] [rbp-9h]
  void (__fastcall *v40)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+90h] [rbp-1h]
  _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+A8h] [rbp+17h] BYREF

  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v2 = 0;
  PreviousAffinity.Mask = 0LL;
  Affinity.Mask = 0LL;
  v3 = 1;
  Number = KeGetPcr()->Prcb.Number;
  v5 = *(struct _KDPC **)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v8 = v7 & 2;
  v38 = v5;
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_QWORD *)(v6 + 96);
  v36 = *(void **)(a1 + 48);
  v34 = *(void **)(a1 + 56);
  v33 = Number;
  v32 = v9;
  if ( Number != v9 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v9, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v8 )
    v2 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v11 = *(_QWORD *)(v6 + 96);
  v12 = *(void (__fastcall **)(__int64, _QWORD, void *, __int64 *, _QWORD))(v6 + 184);
  v37.CurrentCpu = -1;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 24);
  v39 = v12;
  v31 = 0LL;
  v37.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v11 + 40);
  v37.DatapathEventsMask = *(_DWORD *)(v11 + 48);
  v37.DatapathCyclesMask = *(_DWORD *)(v11 + 80);
  v40 = v13;
  v35 = 0LL;
  if ( HIBYTE(dword_1C00870D8) )
  {
    ndisTraceDpcStart(v11, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
    v13 = v40;
    v35 = Clock;
  }
  else
  {
    v3 = 0;
  }
  if ( *(_BYTE *)(v6 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_23;
    goto LABEL_47;
  }
  ++*(_DWORD *)(v11 + 2724);
  v14 = *(_DWORD *)(v11 + 2716);
  *(_QWORD *)(v11 + 2696) = 0LL;
  *(_QWORD *)(v11 + 2704) = 0LL;
  *(_DWORD *)(v11 + 2712) = 0;
  if ( *(_DWORD *)(v11 + 2720) < v14 )
    *(_DWORD *)(v11 + 2720) = v14;
  *(_DWORD *)(v11 + 2716) = 0;
  if ( byte_1C0084D41 )
  {
    if ( dword_1C0084D4C )
    {
      v15 = dword_1C0084D44;
    }
    else
    {
      v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v11 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
      if ( dword_1C0084D44 < v15 )
        v15 = dword_1C0084D44;
    }
  }
  else
  {
    v15 = -1;
  }
  DatapathCyclesMask = v37.DatapathCyclesMask;
  LODWORD(v31) = v15;
  if ( (v37.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v37, 0);
    DatapathCyclesMask = v37.DatapathCyclesMask;
  }
  v17 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v6 + 193) == 1 )
    v39(v17, (unsigned int)v36, v34, &v31, 0LL);
  else
    v13(v17, v34, &v31, 0LL);
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v37, 0, 0xDuLL);
  if ( (v31 & 0x100000000LL) != 0 )
  {
    ndisQueueDpcWorkItem(v38, (void *)v6, v36, v34, byte_1C0084D41);
    goto LABEL_23;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 104), 0xFFFFFFFF) == 1 && *(_BYTE *)(v6 + 4) )
LABEL_47:
    KeSetEvent((PRKEVENT)(v6 + 128), 0, 0);
LABEL_23:
  if ( v3 )
  {
    v26 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v11, 1LL, v26 - v35);
  }
  if ( !v8 && v2 != 2 )
    KeLowerIrql(v2);
  if ( v33 != v32 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v10);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4496));
  v19 = *(_QWORD *)(v10 + 4952);
  v20 = v18;
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 1) )
    {
      if ( *(_BYTE *)(v19 + 1) == 1 )
      {
        v27 = v19 + 4808;
        v28 = *(_DWORD *)(v19 + 4864);
        if ( v28 >> 17 < 0x3FFE && (unsigned __int16)v28 >> 1 == (v28 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v19 + 4808));
          *(_DWORD *)(v27 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v28 & 0xFFFE) == 0 && (v28 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v19, 0x4BuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v19 + 4808), 0);
        }
      }
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 8);
      if ( v21 && (v22 = *(_BYTE *)(v19 + 3), v23 = 0, v22) )
      {
        while ( *(_BYTE *)(v21 + 2LL * v23) != 75 || !*(_BYTE *)(v21 + 2LL * v23 + 1) )
        {
          if ( ++v23 >= v22 )
            goto LABEL_36;
        }
        --*(_BYTE *)(v21 + 2LL * v23 + 1);
      }
      else
      {
LABEL_36:
        if ( !_bittestandreset((signed __int32 *)(v19 + 24), 0xBu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v19, 0x4BuLL);
      }
    }
  }
  v24 = --*(_DWORD *)(v10 + 4504) == 0;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v10, *(unsigned int *)(v10 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4496), v20);
  if ( v24 )
  {
    v29 = *(struct _KEVENT **)(v10 + 1608);
    if ( v29 )
      KeSetEvent(v29, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v10);
}
