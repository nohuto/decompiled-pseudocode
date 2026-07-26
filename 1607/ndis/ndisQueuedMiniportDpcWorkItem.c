/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0021260
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  int v1; // esi
  unsigned int Number; // r13d
  __int64 v4; // rax
  __int64 v5; // r14
  char v6; // r15
  char v7; // r15
  ULONG v8; // r12d
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int *v12; // r11
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v14; // eax
  unsigned int v15; // ecx
  char DatapathCyclesMask; // di
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  char v20; // di
  KIRQL v21; // al
  ULONG_PTR v22; // r10
  KIRQL v23; // si
  __int64 v24; // r9
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // al
  _BYTE *v27; // rdx
  __int64 v29; // rdi
  unsigned int v30; // ecx
  KIRQL v31; // al
  __int64 v32; // rdi
  int v33; // edx
  _WORD *v34; // r8
  __int64 v35; // r10
  unsigned __int8 v36; // r9
  _BYTE *v37; // rcx
  KSPIN_LOCK *v38; // rdi
  __int64 v39; // rdi
  char *v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // rcx
  LARGE_INTEGER v43; // rax
  __int64 v44; // r8
  __int64 Clock; // rax
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // dl
  __int64 v48; // rax
  ULONG_PTR v49; // r14
  unsigned int v50; // edx
  struct _KEVENT *v51; // rcx
  KIRQL v52; // [rsp+30h] [rbp-D0h]
  char v53; // [rsp+31h] [rbp-CFh]
  KIRQL v54; // [rsp+32h] [rbp-CEh]
  char Type_high; // [rsp+33h] [rbp-CDh]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-CCh] BYREF
  void (__fastcall *v57)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-C8h]
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  unsigned int *v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  struct NDIS_PCW_CONTEXT v67; // [rsp+98h] [rbp-68h] BYREF
  _QWORD WnodeEventItem[6]; // [rsp+B0h] [rbp-50h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+E0h] [rbp-20h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-10h] BYREF

  v1 = 0;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  Affinity.Mask = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v8 = *(_DWORD *)(a1 + 64);
  v66 = v4;
  v60 = *(_QWORD *)(v5 + 96);
  v62 = *(_QWORD *)(a1 + 48);
  v63 = *(_QWORD *)(a1 + 56);
  v54 = 0;
  if ( Number != v8 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v8, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    v54 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v10 = 0LL;
  v11 = *(_QWORD *)(v5 + 96);
  v12 = *(unsigned int **)(v5 + 24);
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v5 + 184);
  v58 = 0LL;
  v65.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v11 + 40);
  v65.DatapathEventsMask = *(_DWORD *)(v11 + 48);
  v65.DatapathCyclesMask = *(_DWORD *)(v11 + 80);
  v61 = v12;
  v57 = v13;
  v59 = 0LL;
  v65.CurrentCpu = -1;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v53 = 1;
    ndisTraceDpcStart(v11, 1LL);
    Clock = WmiGetClock(0LL, 0LL, v44);
    v13 = v57;
    v10 = Clock;
    v12 = v61;
    v59 = Clock;
  }
  else
  {
    v53 = 0;
  }
  if ( !*(_BYTE *)(v5 + 4) )
  {
    ++*(_DWORD *)(v11 + 2724);
    v14 = *(_DWORD *)(v11 + 2716);
    *(_QWORD *)(v11 + 2696) = 0LL;
    *(_QWORD *)(v11 + 2704) = 0LL;
    *(_DWORD *)(v11 + 2712) = 0;
    if ( *(_DWORD *)(v11 + 2720) < v14 )
      *(_DWORD *)(v11 + 2720) = v14;
    *(_DWORD *)(v11 + 2716) = 0;
    if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        v15 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
      else
      {
        v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(v11 + 3344) + (KeGetPcr()->Prcb.Number << 12))];
        if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v15 )
          v15 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
    }
    else
    {
      v15 = -1;
    }
    DatapathCyclesMask = v65.DatapathCyclesMask;
    LODWORD(v58) = v15;
    if ( (v65.DatapathCyclesMask & 1) != 0 )
    {
      ndisPcwStartCycleCounter(&v65);
      v13 = v57;
      DatapathCyclesMask = v65.DatapathCyclesMask;
    }
    v17 = *(_QWORD *)(v5 + 8);
    if ( *(_BYTE *)(v5 + 193) == 1 )
      v13(v17, (unsigned int)v62, v63, &v58, 0LL);
    else
      ((void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))v12)(v17, v63, &v58, 0LL);
    if ( (DatapathCyclesMask & 1) != 0 )
      ndisPcwEndCycleCounter(&v65);
    if ( (v58 & 0x100000000LL) == 0 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 104)) && *(_BYTE *)(v5 + 4) )
        KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
LABEL_24:
      v10 = v59;
      goto LABEL_25;
    }
    v29 = *(_QWORD *)(v5 + 96);
    Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
    v30 = *(_DWORD *)(v29 + 48);
    LODWORD(v57) = KeGetPcr()->Prcb.Number;
    v67.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v29 + 40);
    v67.DatapathCyclesMask = *(_DWORD *)(v29 + 80);
    v61 = (unsigned int *)v29;
    v67.DatapathEventsMask = v30;
    v67.CurrentCpu = -1;
    if ( (v30 & 0x800000) != 0 )
      ndisPcwAddEvent(&v67, 0x24uLL, 1uLL);
    SpinLock = (PKSPIN_LOCK)(v29 + 4496);
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 4496));
    v32 = *(_QWORD *)(v29 + 4952);
    v52 = v31;
    if ( v32 )
    {
      v33 = *(unsigned __int8 *)(v32 + 1);
      if ( *(_BYTE *)(v32 + 1) )
      {
        if ( v33 != 1 )
          goto LABEL_64;
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 4936), 1u);
        goto LABEL_63;
      }
      v34 = 0LL;
      if ( _bittestandset((signed __int32 *)(v32 + 24), 0xDu) )
      {
        v35 = *(_QWORD *)(v32 + 8);
        if ( v35 && (v36 = *(_BYTE *)(v32 + 3)) != 0 )
        {
          do
          {
            v37 = (_BYTE *)(v35 + 2LL * (unsigned __int8)v33);
            if ( *v37 == 77 )
            {
              if ( v37[1] != 0xFF )
              {
                ++v37[1];
                goto LABEL_63;
              }
            }
            else if ( !v37[1] )
            {
              v34 = (_WORD *)(v35 + 2LL * (unsigned __int8)v33);
            }
            LOBYTE(v33) = v33 + 1;
          }
          while ( (unsigned __int8)v33 < v36 );
          if ( !v34 )
            goto LABEL_86;
          *v34 = 333;
        }
        else
        {
LABEL_86:
          if ( !*(_BYTE *)(v32 + 1) )
          {
            v46 = *(_BYTE *)(v32 + 3);
            if ( v46 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v32);
              *(_BYTE *)(v32 + 1) = 2;
            }
            else
            {
              if ( (unsigned int)v46 + 2 <= 0xFF )
                v47 = v46 + 2;
              else
                v47 = -1;
              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v32, v47);
            }
          }
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32, 0x4Du);
        }
LABEL_63:
        v31 = v52;
      }
    }
LABEL_64:
    v38 = SpinLock;
    ++*((_DWORD *)SpinLock + 2);
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
    {
      WPP_SF_qD(13LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v61, v61[1126]);
      v31 = v52;
    }
    KeReleaseSpinLock(v38, v31);
    if ( *(_BYTE *)(v5 + 193) )
      v1 = v62;
    v39 = *(_QWORD *)(v5 + 216) + 80LL * ((unsigned int)v57 + ndisMaxNumberOfProcessors * v1);
    SpinLock = (PKSPIN_LOCK)(v39 + 72);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v39 + 72));
    if ( (*(_DWORD *)(v39 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 104));
      ndisDereferenceMiniport((__int64)v61);
    }
    else
    {
      *(_QWORD *)(v39 + 32) = v66;
      *(_QWORD *)(v39 + 48) = v62;
      *(_QWORD *)(v39 + 56) = v63;
      *(_DWORD *)(v39 + 64) = (_DWORD)v57;
      *(_QWORD *)(v39 + 40) = v5;
      *(_DWORD *)(v39 + 68) = 1;
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
        *(_DWORD *)(v39 + 68) |= 2u;
        v40 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v40 + 2);
        v41 = (__int64 *)*((_QWORD *)v40 + 1);
        if ( (char *)*v41 != v40 )
          __fastfail(3u);
        *(_QWORD *)v39 = v40;
        *(_QWORD *)(v39 + 8) = v41;
        *v41 = v39;
        *((_QWORD *)v40 + 1) = v39;
        ++*((_DWORD *)v40 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v40 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v40 + 1, 0, 1, 0);
        if ( !_InterlockedExchange(
                (volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number),
                1) )
        {
          HIDWORD(v42) = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
          v43.QuadPart = -1LL;
          if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
            v43 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
          LODWORD(v42) = KeGetPcr()->Prcb.Number;
          KeSetTimer(
            (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v42],
            v43,
            (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v42 + 8]);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v39, CriticalWorkQueue);
      }
    }
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    goto LABEL_24;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 104)) )
    KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
LABEL_25:
  if ( v53 )
  {
    v48 = WmiGetClock(0LL, 0LL, v9);
    ndisTraceDpcEnd(v11, 1LL, v48 - v10);
  }
  if ( !v7 && v54 != 2 )
    KeLowerIrql(v54);
  if ( Number != v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v18 = v60;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v60);
  v19 = v18 + 4496;
  v20 = 0;
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 4496));
  v22 = *(_QWORD *)(v18 + 4952);
  v23 = v21;
  if ( v22 )
  {
    if ( *(_BYTE *)(v22 + 1) )
    {
      if ( *(_BYTE *)(v22 + 1) == 1 )
      {
        v49 = v22 + 4936;
        v50 = *(_DWORD *)(v22 + 4992);
        if ( v50 >> 17 < 0x3FFE && (unsigned __int16)v50 >> 1 == (v50 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 4936));
          *(_DWORD *)(v49 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v50 & 0xFFFE) == 0 && (v50 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v22, 0x4DuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 4936), 0);
        }
        v18 = v60;
      }
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( v24 && (v25 = *(_BYTE *)(v22 + 3), v26 = 0, v25) )
      {
        while ( 1 )
        {
          v27 = (_BYTE *)(v24 + 2LL * v26);
          if ( *v27 == 77 )
          {
            if ( v27[1] )
              break;
          }
          if ( ++v26 >= v25 )
            goto LABEL_38;
        }
        --v27[1];
      }
      else
      {
LABEL_38:
        if ( !_bittestandreset((signed __int32 *)(v22 + 24), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v22, 0x4DuLL);
      }
    }
  }
  if ( (*(_DWORD *)(v19 + 8))-- == 1 )
    v20 = 1;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v18, *(unsigned int *)(v18 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v19, v23);
  if ( v20 )
  {
    v51 = *(struct _KEVENT **)(v18 + 1608);
    if ( v51 )
      KeSetEvent(v51, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v18);
}
