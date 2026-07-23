/*
 * XREFs of CcPinFileData @ 0x140031960
 * Callers:
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcPinMappedData @ 0x140446090 (CcPinMappedData.c)
 *     CcMapData @ 0x1404464C0 (CcMapData.c)
 *     CcPreparePinWrite @ 0x140457144 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x140457310 (CcMapDataCommon.c)
 *     CcPinRead @ 0x1404A8820 (CcPinRead.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140033460 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14006C2A0 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateInitializeBcb @ 0x14006C544 (CcAllocateInitializeBcb.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1401B25EC (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B26F4 (CcReferenceFileOffset.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
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
  ULONG_PTR v28; // rdi
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  unsigned __int8 v31; // bl
  __int64 v32; // rax
  _QWORD *v33; // r15
  unsigned __int8 v34; // si
  signed __int32 v35; // eax
  struct _ERESOURCE *v36; // rcx
  __int64 v37; // r15
  struct _KTHREAD *v38; // rdi
  NTSTATUS v39; // edx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  unsigned int v42; // esi
  unsigned __int64 v43; // rbx
  struct _KTHREAD *v44; // rsi
  unsigned int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rdi
  int v48; // eax
  __int16 v49; // ax
  unsigned __int8 v50; // si
  unsigned __int8 v51; // di
  signed __int32 v52; // eax
  char v53; // si
  unsigned __int64 v54; // rcx
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rbx
  int v57; // ecx
  int v58; // edx
  __int16 v59; // r9
  unsigned int v60; // r8d
  unsigned int v61; // r12d
  unsigned int v62; // r15d
  __int64 v63; // rax
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
  ULONG_PTR v77; // [rsp+38h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v79; // [rsp+50h] [rbp-A8h]
  __int64 v80; // [rsp+58h] [rbp-A0h] BYREF
  int v81; // [rsp+60h] [rbp-98h] BYREF
  __int64 v82; // [rsp+68h] [rbp-90h] BYREF
  __int64 v83; // [rsp+70h] [rbp-88h]
  int v84; // [rsp+78h] [rbp-80h]
  NTSTATUS v85; // [rsp+7Ch] [rbp-7Ch]
  int v86; // [rsp+80h] [rbp-78h]
  int v87; // [rsp+84h] [rbp-74h]
  ULONG_PTR v88; // [rsp+88h] [rbp-70h]
  __int64 v89; // [rsp+90h] [rbp-68h]
  int v90; // [rsp+98h] [rbp-60h]
  int v91; // [rsp+9Ch] [rbp-5Ch]
  int v92; // [rsp+A0h] [rbp-58h]
  int v93; // [rsp+A4h] [rbp-54h]
  __int64 v94; // [rsp+A8h] [rbp-50h]
  __int64 v95; // [rsp+B0h] [rbp-48h]
  char v96; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v97; // [rsp+108h] [rbp+10h]
  unsigned int v98; // [rsp+110h] [rbp+18h]
  char v99; // [rsp+118h] [rbp+20h]

  v99 = a4;
  v98 = a3;
  v97 = a2;
  v10 = 0LL;
  v78 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v89 = v11;
  v12 = a3;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x10CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v81 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v78, (unsigned int)&v81, (a6 & 0x40) != 0, 0);
  }
  v15 = v11 + 280;
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
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v18, AbEntrySummary);
  v90 = v18;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
  v10 = (__int64)&CurrentThread->LockEntries[v18];
LABEL_7:
  if ( v10 )
  {
    if ( v15 < qword_140326950 || v15 >= qword_140326950 + 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  }
  v20 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v20;
  if ( !v20 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
    ExpAcquireFastMutexContended(v11 + 280);
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
    goto LABEL_105;
  if ( v26 > 0x2000000 )
  {
    LOBYTE(v14) = 1;
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v22 + 0x80000, v14);
    goto LABEL_22;
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
LABEL_105:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
  }
LABEL_22:
  v28 = *BcbListHeadLargeOffset - 16LL;
  v88 = v28;
  if ( *((_DWORD *)a2 + 1) )
  {
LABEL_127:
    while ( *(_WORD *)v28 == 765 && v22 < *(_QWORD *)(v28 + 32) )
    {
      v66 = *(_QWORD *)(v28 + 8);
      if ( v22 >= v66 )
      {
LABEL_32:
        v24 = 1;
        break;
      }
      if ( v23 >= v66 )
        v23 = *(_QWORD *)(v28 + 8);
      v83 = v23;
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v88 = v28;
    }
  }
  else if ( *(_WORD *)v28 == 765 )
  {
    if ( *(_DWORD *)(v28 + 36) )
      goto LABEL_127;
    v29 = v83;
    while ( *(_WORD *)v28 == 765 && (unsigned int)v22 < *(_DWORD *)(v28 + 32) )
    {
      v30 = *(_DWORD *)(v28 + 8);
      if ( (unsigned int)v22 >= v30 )
        goto LABEL_32;
      if ( v29 >= v30 )
      {
        v29 = *(_DWORD *)(v28 + 8);
        LODWORD(v83) = v29;
        v23 = v83;
      }
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v88 = v28;
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
      v31 = v99;
      v33 = a8;
      goto LABEL_68;
    }
    v82 = v22;
    v56 = v23 - v22;
    HIDWORD(v80) = HIDWORD(v56);
    v57 = v22;
    v58 = v22 & 0xFFF;
    v59 = v58 + v56;
    LODWORD(v80) = v58 + v56;
    v60 = v58 + v81;
    v81 += v58;
    v31 = v99;
    if ( (v99 || (*(_DWORD *)(v11 + 152) & 4) != 0) && !a5 )
    {
      v61 = 0;
    }
    else
    {
      v61 = 2;
      LODWORD(v79) = 2;
      if ( (v22 & 0xFFF) == 0 )
      {
        if ( v98 >= 0x1000 )
          v61 = 3;
        LODWORD(v79) = v61;
      }
      if ( (v59 & 0xFFF) != 0 )
        goto LABEL_91;
      v61 |= 4u;
    }
    LODWORD(v79) = v61;
LABEL_91:
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    {
      v31 = 1;
      v99 = 1;
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
    v28 = v63;
    v77 = v63;
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
            KeBugCheckEx(0x34u, 0x201DBuLL, v28, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v64, 0) )
        {
          KeBugCheckEx(0x34u, 0x201E2uLL, v28, 0LL, 0LL);
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
      v33 = a8;
      goto LABEL_67;
    }
    if ( !v63 )
    {
      v75 = 0;
      v53 = a6;
      v33 = a8;
      goto LABEL_68;
    }
    if ( !v31 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v63 + 72), 0) )
      KeBugCheckEx(0x34u, 0x20244uLL, v28, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v76 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v62, v61, 0LL, *a8) )
    {
      v75 = 0;
      v53 = a6;
      v33 = a8;
      goto LABEL_68;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v33 = a8;
    goto LABEL_116;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) != 0 )
  {
    v31 = v99;
  }
  else
  {
    v31 = 1;
    v99 = 1;
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
      {
        v28 = 0LL;
        v77 = 0LL;
        v75 = 0;
        v53 = a6;
        v33 = a8;
        goto LABEL_68;
      }
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v76 = 0;
    }
    v33 = a8;
    goto LABEL_84;
  }
  v32 = (unsigned int)(v22 - *(_DWORD *)(v28 + 8));
  v33 = a8;
  *a8 -= v32;
  v82 = *(_QWORD *)(v28 + 8);
  v80 = *(unsigned int *)(v28 + 4);
  if ( (a6 & 1) != 0 )
  {
    ++*(_DWORD *)(v28 + 64);
    *(_QWORD *)(v11 + 288) = 0LL;
    v34 = *(_BYTE *)(v11 + 328);
    v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
    if ( v35 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v35);
    __writecr8(v34);
    KeAbPostRelease(v11 + 280);
    v76 = 0;
    v31 = v99;
    if ( !v99 )
    {
      v36 = (struct _ERESOURCE *)(v28 + 72);
      if ( (a6 & 2) != 0 )
        ExAcquireResourceExclusiveLite(v36, 1u);
      else
        ExAcquireSharedStarveExclusive(v36, 1u);
    }
    if ( (a6 & 4) != 0 )
      goto LABEL_66;
    v37 = *v33;
    v38 = KeGetCurrentThread();
    v91 = 0;
    v39 = 0;
    v85 = 0;
    v96 = 1;
    v40 = ((v37 & 0xFFF) + (unsigned __int64)(unsigned int)v80 + 4095) >> 12;
    v86 = v40;
    v41 = v37 & 0xFFFFFFFFFFFFF000uLL;
    v79 = v41;
    v42 = BYTE4(v38[1].Queue) + 4 * LODWORD(v38[1].WaitListEntry.Flink);
    while ( (_DWORD)v40 )
    {
      BYTE4(v38[1].Queue) = 1;
      if ( (unsigned int)(v40 - 1) > LODWORD(v38[1].WaitListEntry.Flink) )
      {
        v67 = v40 - 1;
        if ( (unsigned int)(v40 - 1) > 0xF )
          v67 = 15;
        LODWORD(v38[1].WaitListEntry.Flink) = v67;
      }
      v84 = 0;
      v79 = (unsigned int)((_DWORD)v40 << 12);
      v39 = MmCheckCachedPageStates(v41, v79, 0LL, &v96);
      v85 = v39;
      if ( v39 < 0 )
        break;
      v41 += v79;
      v79 = v41;
      LODWORD(v40) = 0;
      v86 = 0;
    }
    BYTE4(v38[1].Queue) = v42 & 3;
    LODWORD(v38[1].WaitListEntry.Flink) = v42 >> 2;
    if ( v39 < 0 )
      RtlRaiseStatus(v39);
    v43 = v11 + 280;
    v44 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v44, v11 + 280, KeGetCurrentIrql(), 0LL);
    v92 = 1;
    --v44->SpecialApcDisable;
    v95 = 0LL;
    if ( !v44->AbEntrySummary )
    {
      if ( !v44->AbOrphanedEntrySummary )
      {
        v87 = 0;
        v47 = 0LL;
        v94 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v44, v11 + 280);
        goto LABEL_50;
      }
      v68 = v44->AbOrphanedEntrySummary;
      v44->AbOrphanedEntrySummary = 0;
      v44->AbEntrySummary |= v68;
      v87 = 1;
    }
    v45 = v44->AbEntrySummary;
    _BitScanForward((unsigned int *)&v46, v45);
    v93 = v46;
    v44->AbEntrySummary = v45 & ~(1 << v46);
    v47 = (__int64)&v44->LockEntries[v46];
    v94 = v47;
LABEL_50:
    v95 = v47;
    if ( v47 )
    {
      if ( v43 < qword_140326950 || v43 >= qword_140326950 + 0x8000000000LL )
        v48 = -1;
      else
        v48 = MmGetSessionIdEx(v44->ApcState.Process);
      *(_DWORD *)(v47 + 40) = v48;
      *(_QWORD *)(v47 + 32) = v43 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v44->116 + 1, 0xFu);
    }
    v49 = v44->SpecialApcDisable + 1;
    v44->SpecialApcDisable = v49;
    if ( !v49 && ($2B8565053CDC740D4E4887693DD8AC9E *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
      KiCheckForKernelApcDelivery();
    v50 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v43, 0) )
      ExpAcquireFastMutexContended(v11 + 280);
    if ( v47 )
      *(_BYTE *)(v47 + 26) |= 1u;
    *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
    *(_DWORD *)(v11 + 328) = v50;
    v33 = a8;
    if ( !*(_QWORD *)(v77 + 184) )
    {
      *(_QWORD *)(v77 + 184) = *a8;
      *(_QWORD *)(v77 + 56) = v78;
      v78 = 0LL;
    }
    *(_QWORD *)(v11 + 288) = 0LL;
    v51 = *(_BYTE *)(v11 + 328);
    v52 = _InterlockedCompareExchange((volatile signed __int32 *)v43, 1, 0);
    if ( v52 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v52);
    __writecr8(v51);
    KeAbPostRelease(v11 + 280);
    v28 = v77;
    *v33 = *(_QWORD *)(v77 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v77 + 8));
    v31 = v99;
    goto LABEL_66;
  }
  if ( !v31 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
  {
    v28 = 0LL;
    v77 = 0LL;
    v75 = 0;
    v53 = a6;
    goto LABEL_68;
  }
  ++*(_DWORD *)(v28 + 64);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  v76 = 0;
  if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v28 + 4), 0LL, 0LL, *v33) )
  {
    v75 = 0;
    v53 = a6;
    goto LABEL_68;
  }
  ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
LABEL_116:
  if ( !*(_QWORD *)(v28 + 184) )
  {
    *(_QWORD *)(v28 + 184) = *v33;
    *(_QWORD *)(v28 + 56) = v78;
    v78 = 0LL;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
LABEL_84:
  *v33 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
LABEL_66:
  v53 = a6;
LABEL_67:
  v75 = 1;
LABEL_68:
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
    v31 = v99;
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
    v31 = v99;
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
    *v33 = 0LL;
    if ( v28 )
      CcUnpinFileDataEx(v28, v31, 0LL);
  }
  return v75;
}
