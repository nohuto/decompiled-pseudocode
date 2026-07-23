/*
 * XREFs of MiFreePagedPoolPages @ 0x14004B720
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  int v5; // esi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // r13
  unsigned __int64 v9; // r12
  void *v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // r9
  __int64 v19; // rax
  __int64 *v20; // r8
  _SLIST_HEADER *v21; // rcx
  __int64 result; // rax
  __int64 AbEntrySummary; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *v27; // rax
  unsigned __int64 v28; // r12
  struct _KTHREAD *v29; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v31; // rcx
  char *v32; // rsi
  int SessionId; // eax
  __int16 v34; // ax
  unsigned __int64 v35; // r14
  __int64 v36; // rcx
  _BYTE *v37; // rsi
  char v38; // al
  __int64 v39; // r15
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r14
  __int64 v43; // rsi
  unsigned __int64 i; // r8
  _QWORD *v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r8
  unsigned __int64 *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r10
  __int64 v54; // rsi
  unsigned __int64 v55; // r8
  _QWORD *v56; // rdi
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rdi
  unsigned int v65; // r14d
  unsigned __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rbx
  int v72; // eax
  __int64 v73; // rbx
  unsigned __int8 CurrentIrql; // al
  int v75; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  v5 = 0;
  v6 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  *(_DWORD *)(v3 + 16) = 0;
  v7 = qword_140327F70;
  *(_QWORD *)(v3 + 24) = v6;
  if ( BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + 0xF8000000000LL )
  {
    if ( BugCheckParameter2 < qword_140326950 || BugCheckParameter2 >= qword_140326950 + 0x8000000000LL )
      KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, 0LL, 0LL);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)v3 = 1;
    *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 2;
    v9 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v9;
    v8 = v9 + 2912;
    v10 = (void *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  else
  {
    *(_DWORD *)v3 = 6;
    v8 = (ULONG_PTR)&qword_140327868;
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
    v9 = 0LL;
    v10 = &unk_140327BA0;
    if ( a3 == 1951624525 || a3 == 1816358221 )
      v5 = 0x80000000;
  }
  v13 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v13;
  v14 = (__int64)(v13 - *(_QWORD *)(v8 + 24)) >> 3;
  *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v14;
  v15 = v14 + v6 - 1;
  *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v14 + v6;
  if ( v15 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_132;
  if ( v6 > 1 )
  {
    v16 = *(_QWORD *)(v8 + 16);
    v17 = (__int64 *)(v16 + 8 * (v14 >> 6));
    v18 = (__int64 *)(v16 + 8 * (v15 >> 6));
    v19 = *v17;
    if ( v17 == v18 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v14) & v19) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v14 )
        goto LABEL_132;
      goto LABEL_22;
    }
    if ( ((-1LL << v14) & v19) != -1LL << v14 )
      goto LABEL_132;
    v20 = v17 + 1;
    if ( v20 == v18 )
    {
LABEL_21:
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v14 + v6)) & *v20) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v14 + v6) )
        goto LABEL_132;
LABEL_22:
      v13 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      goto LABEL_23;
    }
    while ( *v20 == -1 )
    {
      if ( ++v20 == v18 )
        goto LABEL_21;
    }
LABEL_132:
    KeBugCheckEx(0xC2u, 0x50uLL, BugCheckParameter2, v14, qword_1403278A8 << 12);
  }
  if ( v6 != 1 || !_bittest64(*(const signed __int64 **)(v8 + 16), v14) )
    goto LABEL_132;
LABEL_23:
  if ( !v9 && v6 == 1 && v5 >= 0 )
  {
    v21 = &qword_1403269F0[26 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v21->Alignment) < (unsigned int)dword_140326510 )
    {
      *(_QWORD *)BugCheckParameter2 = qword_1403277C0 ^ BugCheckParameter2;
      return (__int64)RtlpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)(BugCheckParameter2 + 16));
    }
  }
  MiDeleteSystemPagableVm((__int64)v10, 0LL, v13, v6, 0, (_QWORD *)(v3 + 80));
  if ( !v9 )
  {
    if ( (dword_1403A9134 & 2) != 0 )
      MiReturnResidentAvailable(*(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
    else
      MiChargeWsles(v10, -(__int64)v6);
  }
  MiReturnCommit(
    MiSystemPartition,
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68)
  - *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58));
  v27 = KeGetCurrentThread();
  v28 = v14 & 0xFFFFFFFFFFFFFE00uLL;
  *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v27;
  --v27->SpecialApcDisable;
  v29 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x192u, (ULONG_PTR)v29, v8, CurrentIrql, 0LL);
  }
  --v29->SpecialApcDisable;
  if ( !v29->AbEntrySummary )
  {
    if ( !v29->AbOrphanedEntrySummary )
    {
      v32 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v29, v8);
        _interlockedbittestandset((volatile signed __int32 *)&v29->116 + 1, 0xFu);
        goto LABEL_46;
      }
      goto LABEL_38;
    }
    AbOrphanedEntrySummary = v29->AbOrphanedEntrySummary;
    v29->AbOrphanedEntrySummary = 0;
    v29->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v29->AbEntrySummary;
  _BitScanForward((unsigned int *)&v31, AbEntrySummary);
  *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v31;
  v29->AbEntrySummary = AbEntrySummary & ~(1 << v31);
  v24 = 96 * v31;
  v32 = (char *)v29->LockEntries + v24;
  if ( !v32 )
  {
LABEL_38:
    _interlockedbittestandset((volatile signed __int32 *)&v29->116 + 1, 0xFu);
    goto LABEL_46;
  }
  if ( v8 < qword_140326950 || v8 >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(v29->ApcState.Process);
  *((_DWORD *)v32 + 10) = SessionId;
  v24 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v32 + 4) = v8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_46:
  v34 = v29->SpecialApcDisable + 1;
  v29->SpecialApcDisable = v34;
  if ( !v34 && ($2B8565053CDC740D4E4887693DD8AC9E *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
    KiCheckForKernelApcDelivery(v24, AbEntrySummary, v25, v26);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v32, v8);
  if ( v32 )
    v32[26] |= 1u;
  v35 = v6;
  v36 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) & 7LL;
  v37 = (_BYTE *)(*(_QWORD *)(v8 + 16) + (*(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) >> 3));
  if ( v36 + v6 > 8 )
  {
    if ( (_DWORD)v36 )
    {
      *v37++ &= byte_14026F6B8[v36];
      v35 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) - (unsigned int)(8 - v36);
    }
    if ( v35 > 8 )
    {
      memset(v37, 0, v35 >> 3);
      v37 += v35 >> 3;
      v35 &= 7u;
    }
    if ( !v35 )
      goto LABEL_62;
    v38 = byte_14026F6C8[v35];
  }
  else
  {
    v38 = ~(byte_14026F6B8[*(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18)] << v36);
  }
  *v37 &= v38;
LABEL_62:
  v39 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  v40 = *(_QWORD *)(v8 + 8);
  v41 = v28;
  v42 = *(_QWORD *)(v8 + 40);
  v43 = *(_QWORD *)(v8 + 16);
  if ( v28 >= v40 )
    v41 = 0LL;
  for ( i = v40 - 1; ; i = v49 - 1 )
  {
    if ( i - v41 == -1LL )
      goto LABEL_72;
    v45 = (_QWORD *)(v43 + 8 * (v41 >> 6));
    v46 = ~*v45 | ((1LL << (v41 & 0x3F)) - 1);
    if ( v46 != -1 )
      break;
    while ( (unsigned __int64)++v45 <= v43 + 8 * (i >> 6) )
    {
      v46 = ~*v45;
      if ( *v45 )
        goto LABEL_69;
    }
LABEL_72:
    if ( !v41 )
    {
      v48 = *(_QWORD *)(v8 + 8);
      v50 = (unsigned __int64 *)(v8 + 8);
LABEL_101:
      if ( !*(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
        goto LABEL_110;
      if ( v48 >= v28 )
        v61 = v48 & 0xFFFFFFFFFFFFFE00uLL;
      else
        v61 = *v50;
      v62 = v61 - v28;
      RtlSetBitsEx((__int64)v50, v28, v61 - v28);
      if ( v61 < *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) && v61 < v42
        || v42 >= v28 && v42 < v61 )
      {
        *(_QWORD *)(v8 + 40) = v61;
      }
      goto LABEL_112;
    }
    v49 = v28 + 1;
    v41 = 0LL;
    if ( v28 + 1 > v40 )
      v49 = v40;
  }
LABEL_69:
  _BitScanForward64(&v47, ~v46);
  v48 = v47 + (((__int64)v45 - v43) >> 3 << 6);
  *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = v47;
  if ( v48 > i || v48 == -1LL )
    goto LABEL_72;
  if ( v48 < v28 || (v51 = v28 + 512, v48 >= v28 + 512) )
  {
LABEL_100:
    v50 = (unsigned __int64 *)(v8 + 8);
    goto LABEL_101;
  }
  if ( *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) <= v51 )
    goto LABEL_97;
  v52 = *(_QWORD *)(v8 + 8);
  v53 = v28 + 512;
  v54 = *(_QWORD *)(v8 + 16);
  v28 += 512LL;
  if ( v51 >= v52 )
    v53 = 0LL;
  v55 = v52 - 1;
  while ( 2 )
  {
    if ( v55 - v53 == -1LL )
    {
      v48 = -1LL;
      goto LABEL_91;
    }
    v56 = (_QWORD *)(v54 + 8 * (v53 >> 6));
    v57 = ~*v56 | ((1LL << (v53 & 0x3F)) - 1);
    if ( v57 == -1 )
    {
      while ( (unsigned __int64)++v56 <= v54 + 8 * (v55 >> 6) )
      {
        v57 = ~*v56;
        if ( *v56 )
          goto LABEL_88;
      }
LABEL_89:
      v48 = -1LL;
    }
    else
    {
LABEL_88:
      _BitScanForward64(&v58, ~v57);
      v48 = v58 + (((__int64)v56 - v54) >> 3 << 6);
      *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v58;
      if ( v48 > v55 )
        goto LABEL_89;
      if ( v48 != -1LL )
        break;
    }
LABEL_91:
    if ( v53 )
    {
      v59 = v28 + 1;
      v53 = 0LL;
      if ( v28 + 1 > v52 )
        v59 = v52;
      v55 = v59 - 1;
      continue;
    }
    break;
  }
  if ( v48 < v28 || v48 >= v28 + 512 )
  {
    v60 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    if ( v60 < v42 )
    {
      v42 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      *(_QWORD *)(v8 + 40) = v60;
    }
    goto LABEL_100;
  }
LABEL_97:
  *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
LABEL_110:
  v62 = 0LL;
  v28 = 0LL;
  v63 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( v63 < v42 )
    *(_QWORD *)(v8 + 40) = v63;
LABEL_112:
  *(_QWORD *)(v8 + 48) -= v39;
  v64 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  if ( v64 )
  {
    if ( *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
      *(_DWORD *)(v64 + 7940) -= v62 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease(v8);
    result = KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 48), -v39);
    v65 = *(_DWORD *)v3;
  }
  else
  {
    v65 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 == 6 )
    {
      v66 = qword_1403278A8 - qword_140327898;
      if ( qword_1403278A8 - qword_140327898 > (unsigned __int64)qword_140326500 )
      {
        if ( qword_140323698->Header.SignalState )
          KeResetEvent(qword_140323698);
        if ( v66 >= qword_140326508 && !qword_1403236A0->Header.SignalState )
          KeSetEvent(qword_1403236A0, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease(v8);
    v70 = *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    result = (unsigned int)((__int16)(*(_WORD *)(v70 + 486))++ + 1);
    if ( !(_WORD)result )
    {
      result = v70 + 152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v70, v67, v68, v69);
    }
  }
  if ( *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
  {
    v71 = *(_QWORD *)(v8 + 24) << 25;
    *(_WORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74) = 0;
    v72 = *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 20LL;
    v73 = (__int64)((v28 << 28) + v71) >> 16;
    *(_DWORD *)(((unsigned __int64)&v75 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v72;
    MiInsertTbFlushEntry(v3 + 112, v73, v62);
    return MiReturnSystemVa(v73, v73 + (v62 << 12), v65, v3 + 112);
  }
  return result;
}
