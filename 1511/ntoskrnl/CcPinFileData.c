/*
 * XREFs of CcPinFileData @ 0x1400A2420
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     CcPinRead @ 0x140479EC0 (CcPinRead.c)
 *     CcPinMappedData @ 0x14047A470 (CcPinMappedData.c)
 *     CcMapData @ 0x14047A8B0 (CcMapData.c)
 *     CcPreparePinWrite @ 0x1404A8D18 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1404A8EE4 (CcMapDataCommon.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcAllocateInitializeBcb @ 0x1400A0330 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400A3F00 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1400A4EE0 (CcGetBcbListHeadLargeOffset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1401A98A8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401A99B0 (CcReferenceFileOffset.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  volatile signed __int32 *v15; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v18; // rcx
  int SessionId; // eax
  __int16 v20; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // r15
  __int64 v23; // rbx
  char v24; // si
  __int64 v25; // rdi
  __int64 v26; // rcx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v28; // rdi
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  char v31; // bl
  unsigned __int8 v32; // si
  signed __int32 v33; // eax
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // r15
  struct _KTHREAD *v36; // rdi
  NTSTATUS v37; // edx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r15
  __int64 Flink_low; // rcx
  unsigned int v41; // esi
  volatile signed __int32 *v42; // rbx
  struct _KTHREAD *v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // r8
  __int64 v46; // rdi
  int v47; // eax
  __int16 v48; // ax
  unsigned __int8 v49; // si
  unsigned __int8 v50; // di
  signed __int32 v51; // eax
  _QWORD *v52; // r12
  char v53; // r15
  unsigned __int64 v54; // rcx
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rbx
  int v57; // ecx
  int v58; // edx
  __int16 v59; // r9
  unsigned int v60; // r8d
  unsigned int v61; // r12d
  unsigned int v62; // esi
  char *v63; // rax
  struct _ERESOURCE *v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  int v67; // eax
  unsigned __int8 v68; // al
  __int64 v69; // rdx
  struct _KEVENT *v70; // rcx
  __int64 v72; // rcx
  struct _KEVENT *v73; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v75; // [rsp+30h] [rbp-C8h]
  int v76; // [rsp+34h] [rbp-C4h]
  __int64 v77; // [rsp+38h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v79; // [rsp+50h] [rbp-A8h]
  __int64 v80; // [rsp+58h] [rbp-A0h] BYREF
  int v81; // [rsp+60h] [rbp-98h] BYREF
  __int64 v82; // [rsp+68h] [rbp-90h] BYREF
  __int64 v83; // [rsp+70h] [rbp-88h]
  int v84; // [rsp+78h] [rbp-80h]
  int v85; // [rsp+7Ch] [rbp-7Ch]
  NTSTATUS v86; // [rsp+80h] [rbp-78h]
  int v87; // [rsp+84h] [rbp-74h]
  __int64 v88; // [rsp+88h] [rbp-70h]
  __int64 v89; // [rsp+90h] [rbp-68h]
  int v90; // [rsp+98h] [rbp-60h]
  int v91; // [rsp+9Ch] [rbp-5Ch]
  int v92; // [rsp+A0h] [rbp-58h]
  __int64 v93; // [rsp+A8h] [rbp-50h]
  int v94; // [rsp+B0h] [rbp-48h]
  __int64 v95; // [rsp+B8h] [rbp-40h]

  v10 = 0LL;
  v78 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v88 = v11;
  v12 = a3;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x107uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v81 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v78, (unsigned int)&v81, (a6 & 0x40) != 0, 0);
  }
  v15 = (volatile signed __int32 *)(v11 + 280);
  if ( !KiAbEnabled )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280);
      goto LABEL_8;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v18, AbEntrySummary);
  v91 = v18;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
  v13 = 96 * v18;
  v10 = (__int64)CurrentThread->LockEntries + v13;
LABEL_8:
  if ( v10 )
  {
    if ( (unsigned __int64)(v11 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v10 + 40) = SessionId;
    v13 = 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  }
  v20 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v20;
  if ( !v20 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
LABEL_15:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v15, 0) )
    ExpAcquireFastMutexContended(v11 + 280, v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v76 = 1;
  v22 = *a2;
  v23 = *a2 + v12;
  v83 = v23;
  v24 = 0;
  v25 = v22 + 0x80000;
  v26 = *(_QWORD *)(v11 + 32);
  if ( v26 <= 0x200000 || (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    goto LABEL_106;
  if ( v26 > 0x2000000 )
  {
    LOBYTE(v14) = 1;
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v22 + 0x80000, v14);
    goto LABEL_23;
  }
  if ( v25 < v26 )
  {
    if ( *(_DWORD *)(v11 + 36) )
      v54 = 0xFFFFFFFFLL;
    else
      v54 = 8 * ((unsigned __int64)(unsigned int)v26 >> 18);
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88) + v54 + 16 * (v25 >> 19));
  }
  else
  {
LABEL_106:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
  }
LABEL_23:
  v28 = *BcbListHeadLargeOffset - 16LL;
  v89 = v28;
  if ( *((_DWORD *)a2 + 1) )
  {
LABEL_129:
    while ( *(_WORD *)v28 == 765 && v22 < *(_QWORD *)(v28 + 32) )
    {
      v66 = *(_QWORD *)(v28 + 8);
      if ( v22 >= v66 )
      {
LABEL_33:
        v24 = 1;
        break;
      }
      if ( v23 >= v66 )
        v23 = *(_QWORD *)(v28 + 8);
      v83 = v23;
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v89 = v28;
    }
  }
  else if ( *(_WORD *)v28 == 765 )
  {
    if ( *(_DWORD *)(v28 + 36) )
      goto LABEL_129;
    v29 = v83;
    while ( *(_WORD *)v28 == 765 && (unsigned int)v22 < *(_DWORD *)(v28 + 32) )
    {
      v30 = *(_DWORD *)(v28 + 8);
      if ( (unsigned int)v22 >= v30 )
        goto LABEL_33;
      if ( v29 >= v30 )
      {
        v29 = *(_DWORD *)(v28 + 8);
        LODWORD(v83) = v29;
        v23 = v83;
      }
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v89 = v28;
    }
  }
  v77 = v28;
  if ( !v24 )
  {
    v53 = a6;
    if ( (a6 & 8) != 0 )
    {
      v28 = 0LL;
      v77 = 0LL;
      v75 = 0;
      v31 = a4;
      v52 = a8;
      goto LABEL_71;
    }
    v82 = *a2;
    v56 = v23 - v82;
    HIDWORD(v80) = HIDWORD(v56);
    v57 = v82;
    v58 = v82 & 0xFFF;
    v59 = v58 + v56;
    LODWORD(v80) = v58 + v56;
    v60 = v58 + v81;
    v81 += v58;
    v31 = a4;
    if ( (a4 || (*(_DWORD *)(v11 + 152) & 4) != 0) && !a5 )
    {
      v61 = 0;
    }
    else
    {
      v61 = 2;
      LODWORD(v79) = 2;
      if ( (v82 & 0xFFF) == 0 )
      {
        if ( a3 >= 0x1000 )
          v61 = 3;
        LODWORD(v79) = v61;
      }
      if ( (v59 & 0xFFF) != 0 )
        goto LABEL_92;
      v61 |= 4u;
    }
    LODWORD(v79) = v61;
LABEL_92:
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    {
      v31 = 1;
      a4 = 1;
    }
    LODWORD(v80) = (v80 + 4095) & 0xFFFFF000;
    v62 = v80;
    *a8 -= *(_DWORD *)a2 & 0xFFF;
    LODWORD(v82) = v57 & 0xFFFFF000;
    if ( v62 > v60 )
    {
      v62 = v60;
      LODWORD(v80) = v60;
    }
    v63 = CcAllocateInitializeBcb(v11, v28, &v82, &v80);
    v28 = (__int64)v63;
    v77 = (__int64)v63;
    if ( (a6 & 1) != 0 )
    {
      if ( !v63 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v31 )
      {
        v64 = (struct _ERESOURCE *)(v63 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v64, 0) )
            KeBugCheckEx(0x34u, 0x201D6uLL, v28, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v64, 0) )
        {
          KeBugCheckEx(0x34u, 0x201DDuLL, v28, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v76 = 0;
      v53 = a6;
      if ( (a6 & 4) == 0 )
      {
        LOBYTE(v65) = 1;
        CcMapAndRead(v62, (unsigned int)v79, v65, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v28 + 184) )
        {
          *(_QWORD *)(v28 + 184) = *a8;
          *(_QWORD *)(v28 + 56) = v78;
          v78 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
      }
      v52 = a8;
      goto LABEL_70;
    }
    if ( !v63 )
    {
      v75 = 0;
      v53 = a6;
      v52 = a8;
      goto LABEL_71;
    }
    if ( !v31 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v63 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2023FuLL, v28, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v76 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v62, v61, 0LL, *a8) )
    {
      v75 = 0;
      v53 = a6;
      v52 = a8;
      goto LABEL_71;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v52 = a8;
    if ( !*(_QWORD *)(v28 + 184) )
    {
      *(_QWORD *)(v28 + 184) = *a8;
      *(_QWORD *)(v28 + 56) = v78;
      v78 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) != 0 )
  {
    v31 = a4;
  }
  else
  {
    v31 = 1;
    a4 = 1;
  }
  if ( *(_QWORD *)(v28 + 184) )
  {
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v76 = 0;
      if ( !v31 )
      {
        v55 = (struct _ERESOURCE *)(v28 + 72);
        if ( (a6 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v55, 1u);
        else
          ExAcquireSharedStarveExclusive(v55, 1u);
      }
    }
    else
    {
      if ( !v31 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
        goto LABEL_133;
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v76 = 0;
    }
    v52 = a8;
LABEL_85:
    *v52 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
    goto LABEL_69;
  }
  *a8 -= (unsigned int)(v22 - *(_DWORD *)(v28 + 8));
  v82 = *(_QWORD *)(v28 + 8);
  v80 = *(unsigned int *)(v28 + 4);
  if ( (a6 & 1) == 0 )
  {
    if ( v31 || ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
    {
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v76 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v28 + 4), 0LL, 0LL, *a8) )
      {
        v75 = 0;
        v53 = a6;
        v52 = a8;
        goto LABEL_71;
      }
      ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
      if ( !*(_QWORD *)(v28 + 184) )
      {
        *(_QWORD *)(v28 + 184) = *a8;
        *(_QWORD *)(v28 + 56) = v78;
        v78 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
      v52 = a8;
      goto LABEL_69;
    }
LABEL_133:
    v28 = 0LL;
    v77 = 0LL;
    v75 = 0;
    v53 = a6;
    v52 = a8;
    goto LABEL_71;
  }
  ++*(_DWORD *)(v28 + 64);
  *(_QWORD *)(v11 + 288) = 0LL;
  v32 = *(_BYTE *)(v11 + 328);
  v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v33 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v33);
  __writecr8(v32);
  KeAbPostRelease(v11 + 280);
  v76 = 0;
  v31 = a4;
  if ( !a4 )
  {
    v34 = (struct _ERESOURCE *)(v28 + 72);
    if ( (a6 & 2) != 0 )
      ExAcquireResourceExclusiveLite(v34, 1u);
    else
      ExAcquireSharedStarveExclusive(v34, 1u);
  }
  if ( (a6 & 4) != 0 )
    goto LABEL_68;
  v35 = *a8;
  v36 = KeGetCurrentThread();
  v90 = 0;
  v37 = 0;
  v86 = 0;
  v38 = ((v35 & 0xFFF) + (unsigned __int64)(unsigned int)v80 + 4095) >> 12;
  v84 = v38;
  v39 = v35 & 0xFFFFFFFFFFFFF000uLL;
  v79 = v39;
  Flink_low = LODWORD(v36[1].WaitListEntry.Flink);
  v41 = LOBYTE(v36[1].Teb) + 4 * Flink_low;
  while ( (_DWORD)v38 )
  {
    LOBYTE(v36[1].Teb) = 1;
    if ( (unsigned int)(v38 - 1) > LODWORD(v36[1].WaitListEntry.Flink) )
    {
      v67 = v38 - 1;
      if ( (unsigned int)(v38 - 1) > 0xF )
        v67 = 15;
      LODWORD(v36[1].WaitListEntry.Flink) = v67;
    }
    v85 = 0;
    v79 = (unsigned int)((_DWORD)v38 << 12);
    v37 = MmCheckCachedPageStates(v39, v79, 0LL);
    v86 = v37;
    if ( v37 < 0 )
      break;
    v39 += v79;
    v79 = v39;
    LODWORD(v38) = 0;
    v84 = 0;
  }
  LOBYTE(v36[1].Teb) = v41 & 3;
  LODWORD(v36[1].WaitListEntry.Flink) = v41 >> 2;
  if ( v37 < 0 )
    RtlRaiseStatus(v37);
  v42 = (volatile signed __int32 *)(v11 + 280);
  if ( KiAbEnabled )
  {
    v43 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v43, v11 + 280, KeGetCurrentIrql(), 0LL);
    v92 = 1;
    --v43->SpecialApcDisable;
    v95 = 0LL;
    if ( !v43->AbEntrySummary )
    {
      if ( !v43->AbOrphanedEntrySummary )
      {
        v87 = 0;
        v46 = 0LL;
        v93 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v43, v11 + 280);
        goto LABEL_52;
      }
      v68 = v43->AbOrphanedEntrySummary;
      v43->AbOrphanedEntrySummary = 0;
      v43->AbEntrySummary |= v68;
      v87 = 1;
    }
    v44 = v43->AbEntrySummary;
    _BitScanForward((unsigned int *)&v45, v44);
    v94 = v45;
    v43->AbEntrySummary = v44 & ~(1 << v45);
    Flink_low = 96 * v45;
    v46 = (__int64)&v43->LockEntries[v45];
    v93 = v46;
LABEL_52:
    v95 = v46;
    if ( v46 )
    {
      if ( (unsigned __int64)(v11 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
        v47 = MmGetSessionIdEx(v43->ApcState.Process);
      else
        v47 = -1;
      *(_DWORD *)(v46 + 40) = v47;
      Flink_low = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v46 + 32) = (unsigned __int64)v42 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v43->116 + 1, 0xFu);
    }
    v48 = v43->SpecialApcDisable + 1;
    v43->SpecialApcDisable = v48;
    if ( !v48 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
      KiCheckForKernelApcDelivery(Flink_low);
    goto LABEL_59;
  }
  v46 = 0LL;
LABEL_59:
  v49 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v42, 0) )
    ExpAcquireFastMutexContended(v11 + 280, v46);
  if ( v46 )
    *(_BYTE *)(v46 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = v49;
  if ( !*(_QWORD *)(v77 + 184) )
  {
    *(_QWORD *)(v77 + 184) = *a8;
    *(_QWORD *)(v77 + 56) = v78;
    v78 = 0LL;
  }
  *(_QWORD *)(v11 + 288) = 0LL;
  v50 = *(_BYTE *)(v11 + 328);
  v51 = _InterlockedCompareExchange(v42, 1, 0);
  if ( v51 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v51);
  __writecr8(v50);
  KeAbPostRelease(v11 + 280);
  v28 = v77;
  *a8 = *(_QWORD *)(v77 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v77 + 8));
  v31 = a4;
LABEL_68:
  v52 = a8;
LABEL_69:
  v53 = a6;
LABEL_70:
  v75 = 1;
LABEL_71:
  if ( (v53 & 6) == 6 && v28 && *(_QWORD *)(v28 + 184) )
  {
    v69 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 56) + 16LL)) )
    {
      v70 = *(struct _KEVENT **)(v69 + 184);
      if ( v70 )
        KeSetEvent(v70, 0, 0);
    }
    *(_QWORD *)(v28 + 184) = 0LL;
    *(_QWORD *)(v28 + 56) = 0LL;
    v31 = a4;
    v28 = v77;
  }
  if ( v76 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v78 )
  {
    v72 = *(_QWORD *)(v78 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v78 + 16)) )
    {
      v73 = *(struct _KEVENT **)(v72 + 184);
      if ( v73 )
        KeSetEvent(v73, 0, 0);
    }
    v28 = v77;
    v31 = a4;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v75 )
  {
    *a7 = v28;
    *a9 = *(_QWORD *)(v28 + 32);
  }
  else
  {
    *v52 = 0LL;
    if ( v28 )
      CcUnpinFileDataEx(v28, v31, 0);
  }
  return v75;
}
