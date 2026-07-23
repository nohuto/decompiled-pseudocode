/*
 * XREFs of MiFreePagedPoolPages @ 0x14003B820
 * Callers:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     RtlSetBitsEx @ 0x1400B4BC4 (RtlSetBitsEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rsi
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // r15
  LONG *v8; // r10
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // r13
  unsigned __int64 v11; // r9
  _SLIST_HEADER *v12; // rcx
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v16; // rcx
  __int64 v17; // rbp
  int SessionId; // eax
  __int16 v19; // ax
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // rcx
  _BYTE *v22; // rbp
  char v23; // al
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r10
  unsigned __int64 *v26; // rbp
  unsigned __int64 v27; // r11
  __int64 v28; // r12
  unsigned __int64 v29; // r9
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rbp
  int v37; // esi
  unsigned __int64 v38; // rdi
  __int64 result; // rax
  __int64 v40; // rcx
  __int64 *v41; // r11
  __int64 *v42; // rdi
  __int64 v43; // rax
  __int64 *v44; // r11
  unsigned __int64 v45; // r9
  __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r11
  unsigned __int64 v50; // r10
  __int64 v51; // r15
  unsigned __int64 v52; // r9
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // r10
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v59; // [rsp+30h] [rbp-188h]
  ULONG_PTR v60; // [rsp+38h] [rbp-180h]
  ULONG_PTR v61; // [rsp+40h] [rbp-178h]
  int v62; // [rsp+48h] [rbp-170h]
  unsigned __int64 v63; // [rsp+50h] [rbp-168h]
  unsigned __int64 v64; // [rsp+58h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-158h]
  __int64 v66; // [rsp+80h] [rbp-138h] BYREF
  __int64 v67; // [rsp+88h] [rbp-130h]
  __int64 v68; // [rsp+90h] [rbp-128h]
  __int64 v69; // [rsp+98h] [rbp-120h]
  int v70; // [rsp+A0h] [rbp-118h]
  int v71; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v72; // [rsp+B4h] [rbp-104h]
  __int64 v73; // [rsp+B8h] [rbp-100h]
  __int64 v74; // [rsp+C0h] [rbp-F8h]
  __int64 v75; // [rsp+C8h] [rbp-F0h]

  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v66 = 0LL;
  v5 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v62 = 0;
  if ( BugCheckParameter2 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
      KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, 0LL, 0LL);
    v59 = 1;
    v62 = 2;
    v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v64 = v7;
    v6 = v7 + 2912;
    v8 = (LONG *)(v7 + 2968);
  }
  else
  {
    v6 = (ULONG_PTR)&qword_1402FF768;
    v59 = 6;
    v7 = 0LL;
    v64 = 0LL;
    v8 = &dword_1402FF980;
  }
  v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = v9;
  v10 = (__int64)(v9 - *(_QWORD *)(v6 + 24)) >> 3;
  v11 = v5 + v10 - 1;
  if ( v11 >= *(_QWORD *)(v6 + 8) )
    goto LABEL_136;
  if ( v5 > 1 )
  {
    v40 = *(_QWORD *)(v6 + 16);
    v41 = (__int64 *)(v40 + 8 * (v10 >> 6));
    v42 = (__int64 *)(v40 + 8 * (v11 >> 6));
    v43 = *v41;
    if ( v41 == v42 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v43) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10 )
        goto LABEL_7;
    }
    else if ( ((-1LL << v10) & v43) == -1LL << v10 )
    {
      v44 = v41 + 1;
      if ( v44 == v42 )
      {
LABEL_80:
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v5 + v10)) & *v44) == 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v5 + v10) )
          goto LABEL_7;
      }
      else
      {
        while ( *v44 == -1 )
        {
          if ( ++v44 == v42 )
            goto LABEL_80;
        }
      }
    }
LABEL_136:
    KeBugCheckEx(0xC2u, 0x50uLL, BugCheckParameter2, v10, qword_1402FF7A8 << 12);
  }
  if ( v5 != 1 || !_bittest64(*(const signed __int64 **)(v6 + 16), v10) )
    goto LABEL_136;
LABEL_7:
  if ( !v7 && v5 == 1 && a3 != 1951624525 && a3 != 1816358221 )
  {
    v12 = &qword_1402FE6C0[26 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v12->Alignment) < (unsigned int)dword_1402FE210 )
    {
      *(_QWORD *)BugCheckParameter2 = qword_1402FF6C0 ^ BugCheckParameter2;
      return (__int64)RtlpInterlockedPushEntrySList(v12, (PSLIST_ENTRY)(BugCheckParameter2 + 16));
    }
  }
  MiDeleteSystemPagableVm(v8, 0LL, v9, v5, 0, &v66);
  if ( !v7 )
  {
    if ( (dword_1403810E8 & 2) != 0 )
    {
      MiReturnResidentAvailable(v66);
      _InterlockedExchangeAdd64(&qword_1402FF458, v57);
    }
    else
    {
      MiChargeWsles((ULONG_PTR)&dword_1402FF980);
    }
  }
  MiReturnCommit(&MiSystemPartition, v69 - v67);
  CurrentThread = KeGetCurrentThread();
  v63 = v10 & 0xFFFFFFFFFFFFFE00uLL;
  --CurrentThread->SpecialApcDisable;
  if ( !KiAbEnabled )
  {
    v17 = 0LL;
    goto LABEL_23;
  }
  v14 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v14, v6, KeGetCurrentIrql(), 0LL);
  --v14->SpecialApcDisable;
  if ( !v14->AbEntrySummary )
  {
    if ( !v14->AbOrphanedEntrySummary )
    {
      v17 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v14, v6);
      goto LABEL_128;
    }
    AbOrphanedEntrySummary = v14->AbOrphanedEntrySummary;
    v14->AbOrphanedEntrySummary = 0;
    v14->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v14->AbEntrySummary;
  _BitScanForward((unsigned int *)&v16, AbEntrySummary);
  v14->AbEntrySummary = AbEntrySummary & ~(1 << v16);
  v13 = 96 * v16;
  v17 = (__int64)v14->LockEntries + v13;
  if ( !v17 )
  {
LABEL_128:
    _interlockedbittestandset((volatile signed __int32 *)&v14->116 + 1, 0xFu);
    goto LABEL_22;
  }
  if ( v6 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v17 + 40) = SessionId;
  v13 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v17 + 32) = v6 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_22:
  v19 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v19;
  if ( !v19 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v13);
LABEL_23:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v17, v6);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  v20 = v5;
  v21 = v10 & 7;
  v22 = (_BYTE *)(*(_QWORD *)(v6 + 16) + (v10 >> 3));
  if ( v21 + v5 > 8 )
  {
    if ( (v10 & 7) != 0 )
    {
      *v22++ &= byte_140247340[v21];
      v20 = v5 - (unsigned int)(8 - v21);
    }
    if ( v20 > 8 )
    {
      memset(v22, 0, v20 >> 3);
      v22 += v20 >> 3;
      v20 &= 7u;
    }
    if ( !v20 )
      goto LABEL_30;
    v23 = byte_1402453A0[v20];
  }
  else
  {
    v23 = ~(byte_140247340[v5] << v21);
  }
  *v22 &= v23;
LABEL_30:
  v24 = v10 & 0xFFFFFFFFFFFFFE00uLL;
  v25 = *(_QWORD *)(v6 + 8);
  v61 = *(_QWORD *)(v6 + 40);
  v26 = (unsigned __int64 *)(v6 + 8);
  if ( v63 >= v25 )
    v27 = 0LL;
  else
    v27 = v10 & 0xFFFFFFFFFFFFFE00uLL;
  v28 = *(_QWORD *)(v6 + 16);
  v29 = v25 - 1;
  while ( 1 )
  {
    if ( v29 - v27 == -1LL )
      goto LABEL_82;
    v30 = (_QWORD *)(v28 + 8 * (v27 >> 6));
    v31 = ~*v30 | ((1LL << (v27 & 0x3F)) - 1);
    if ( v31 != -1 )
      break;
    while ( (unsigned __int64)++v30 <= v28 + 8 * (v29 >> 6) )
    {
      v31 = ~*v30;
      if ( *v30 )
        goto LABEL_35;
    }
LABEL_82:
    if ( !v27 )
    {
      v33 = *v26;
LABEL_86:
      v35 = v61;
      goto LABEL_87;
    }
    v45 = v63 + 1;
    if ( v63 + 1 > v25 )
      v45 = v25;
    v29 = v45 - 1;
    v27 = 0LL;
  }
LABEL_35:
  _BitScanForward64(&v32, ~v31);
  v33 = v32 + (((__int64)v30 - v28) >> 3 << 6);
  v70 = v32;
  if ( v33 > v29 || v33 == -1LL )
    goto LABEL_82;
  if ( v33 < v63 )
    goto LABEL_86;
  v34 = v63 + 512;
  if ( v33 >= v63 + 512 )
    goto LABEL_86;
  if ( v5 + v10 <= v34 )
    goto LABEL_40;
  v49 = *(_QWORD *)(v6 + 8);
  if ( v34 >= v49 )
    v50 = 0LL;
  else
    v50 = v63 + 512;
  v51 = *(_QWORD *)(v6 + 16);
  v52 = v49 - 1;
  while ( 2 )
  {
    if ( v52 - v50 == -1LL )
      goto LABEL_114;
    v53 = (_QWORD *)(v51 + 8 * (v50 >> 6));
    v54 = ~*v53 | ((1LL << (v50 & 0x3F)) - 1);
    if ( v54 == -1 )
    {
      while ( (unsigned __int64)++v53 <= v51 + 8 * (v52 >> 6) )
      {
        v54 = ~*v53;
        if ( *v53 )
          goto LABEL_99;
      }
LABEL_114:
      v33 = -1LL;
      goto LABEL_115;
    }
LABEL_99:
    _BitScanForward64(&v55, ~v54);
    v33 = v55 + (((__int64)v53 - v51) >> 3 << 6);
    if ( v33 > v52 )
    {
      v33 = -1LL;
    }
    else if ( v33 != -1LL )
    {
      break;
    }
LABEL_115:
    if ( v50 )
    {
      v56 = v63 + 513;
      if ( v63 + 513 > v49 )
        v56 = *(_QWORD *)(v6 + 8);
      v52 = v56 - 1;
      v50 = 0LL;
      continue;
    }
    break;
  }
  v24 = v63 + 512;
  if ( v33 >= v63 + 512 && v33 < v63 + 1024 )
  {
LABEL_40:
    v35 = v61;
    v60 = 0LL;
LABEL_41:
    v36 = 0LL;
    v24 = 0LL;
    if ( v10 < v35 )
      *(_QWORD *)(v6 + 40) = v10;
    goto LABEL_43;
  }
  v35 = v61;
  v26 = (unsigned __int64 *)(v6 + 8);
  if ( v10 < v61 )
  {
    v35 = v10;
    *(_QWORD *)(v6 + 40) = v10;
  }
LABEL_87:
  if ( !v60 )
    goto LABEL_41;
  if ( v33 < v24 )
    v48 = *v26;
  else
    v48 = v33 & 0xFFFFFFFFFFFFFE00uLL;
  v36 = v48 - v24;
  RtlSetBitsEx(v6 + 8, v24, v48 - v24);
  if ( v48 < v5 + v10 && v48 < v35 || v35 >= v24 && v35 < v48 )
    *(_QWORD *)(v6 + 40) = v48;
LABEL_43:
  *(_QWORD *)(v6 + 48) -= v5;
  if ( v64 )
  {
    if ( v60 )
      *(_DWORD *)(v64 + 7812) -= v36 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease(v6);
    result = KiLeaveGuardedRegionUnsafe(CurrentThread);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 48), -(__int64)v5);
    v37 = v59;
  }
  else
  {
    v37 = v59;
    if ( v59 == 6 )
    {
      v38 = qword_1402FF7A8 - qword_1402FF798;
      if ( qword_1402FF7A8 - qword_1402FF798 > (unsigned __int64)qword_1402FE200 )
      {
        if ( qword_1402FFE50->Header.SignalState )
          KeResetEvent(qword_1402FFE50);
        if ( v38 >= qword_1402FE208 && !qword_1402FFE58->Header.SignalState )
          KeSetEvent(qword_1402FFE58, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease(v6);
    result = (unsigned int)++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
  }
  if ( v60 )
  {
    v46 = *(_QWORD *)(v6 + 24) << 25;
    v72 = 0;
    v74 = 0LL;
    v75 = 0LL;
    v73 = 20LL;
    v47 = (__int64)((v24 << 28) + v46) >> 16;
    v71 = v62;
    MiInsertTbFlushEntry(&v71, v47, v36, 0LL);
    return MiReturnSystemVa(v47, v47 + (v36 << 12), v37, (__int64)&v71);
  }
  return result;
}
