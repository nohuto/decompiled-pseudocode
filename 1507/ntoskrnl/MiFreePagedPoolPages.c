/*
 * XREFs of MiFreePagedPoolPages @ 0x14003E5F0
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v6; // r12
  ULONG_PTR *v7; // r15
  unsigned __int64 v8; // r14
  signed __int32 *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r11
  ULONG_PTR v14; // rcx
  __int64 *v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rax
  __int64 *v18; // r8
  _SLIST_HEADER *v19; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // rdi
  struct _KTHREAD *v22; // rax
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r10
  ULONG_PTR v28; // rsi
  unsigned __int64 i; // r8
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r10
  ULONG_PTR v39; // rsi
  unsigned __int64 v40; // r8
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  unsigned int v50; // r12d
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // eax
  ULONG_PTR v58; // rbx
  __int64 v59; // rbx
  int v60; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  v6 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  *(_DWORD *)(v3 + 24) = 0;
  if ( BugCheckParameter2 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
      KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, 0LL, 0LL);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)v3 = 1;
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 2;
    v8 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v8;
    v7 = (ULONG_PTR *)(v8 + 2912);
    v9 = (signed __int32 *)(v8 + 2968);
  }
  else
  {
    v7 = &qword_14034FC28;
    *(_DWORD *)v3 = 6;
    v8 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
    v9 = dword_14034FE40;
  }
  v11 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v11;
  v12 = (__int64)(v11 - v7[3]) >> 3;
  v13 = v6 + v12 - 1;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v6 + v12;
  if ( v13 >= v7[1] )
    goto LABEL_107;
  if ( v6 <= 1 )
  {
    if ( v6 != 1 || !_bittest64((const signed __int64 *)v7[2], v12) )
      goto LABEL_107;
    goto LABEL_19;
  }
  v14 = v7[2];
  v15 = (__int64 *)(v14 + 8 * (v12 >> 6));
  v16 = (__int64 *)(v14 + 8 * (v13 >> 6));
  v17 = *v15;
  if ( v15 == v16 )
  {
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v12) & v17) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v12 )
      goto LABEL_107;
    goto LABEL_18;
  }
  if ( ((-1LL << v12) & v17) != -1LL << v12 )
    goto LABEL_107;
  v18 = v15 + 1;
  if ( v18 != v16 )
  {
    while ( *v18 == -1 )
    {
      if ( ++v18 == v16 )
        goto LABEL_17;
    }
LABEL_107:
    KeBugCheckEx(0xC2u, 0x50uLL, BugCheckParameter2, v12, qword_14034FC68 << 12);
  }
LABEL_17:
  if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + v12)) & *v18) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + v12) )
    goto LABEL_107;
LABEL_18:
  v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_19:
  if ( !v8 && v6 == 1 && a3 != 1951624525 && a3 != 1816358221 )
  {
    v19 = &qword_14034EB70[26 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v19->Alignment) < (unsigned int)dword_14034E6C8 )
    {
      *(_QWORD *)BugCheckParameter2 = qword_14034FB80 ^ BugCheckParameter2;
      return (__int64)RtlpInterlockedPushEntrySList(v19, (PSLIST_ENTRY)(BugCheckParameter2 + 16));
    }
  }
  MiDeleteSystemPagableVm(v9, 0LL, v11, v6, 0, v3 + 64);
  if ( !v8 )
  {
    if ( (dword_1403D00D8 & 2) != 0 )
    {
      v21 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      MiReturnResidentAvailable(v21);
      _InterlockedExchangeAdd64(&qword_14034F8D8, v21);
    }
    else
    {
      MiChargeWsles(dword_14034FE40, -(__int64)v6);
    }
  }
  MiReturnCommit(
    MiSystemPartition,
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58)
  - *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48));
  v22 = KeGetCurrentThread();
  v23 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v22;
  --v22->SpecialApcDisable;
  v24 = KeAbPreAcquire((ULONG_PTR)v7);
  v25 = v24;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v24, v7);
  if ( v25 )
    *(_BYTE *)(v25 + 26) |= 1u;
  RtlClearBitsEx(v7 + 1, v12, v6);
  v26 = v7[1];
  v27 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  v28 = v7[2];
  if ( v23 >= v26 )
    v27 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v7[5];
  for ( i = v26 - 1; ; i = v34 - 1 )
  {
    if ( i - v27 == -1LL )
      goto LABEL_44;
    v30 = (_QWORD *)(v28 + 8 * (v27 >> 6));
    v31 = ~*v30 | ((1LL << (v27 & 0x3F)) - 1);
    if ( v31 != -1 )
      break;
    while ( (unsigned __int64)++v30 <= v28 + 8 * (i >> 6) )
    {
      v31 = ~*v30;
      if ( *v30 )
        goto LABEL_41;
    }
LABEL_44:
    if ( !v27 )
    {
      v33 = v7[1];
      v35 = v7 + 1;
LABEL_84:
      if ( !*(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
        goto LABEL_70;
      if ( v33 >= v23 )
        v51 = v33 & 0xFFFFFFFFFFFFFE00uLL;
      else
        v51 = *v35;
      v45 = v51 - v23;
      RtlSetBitsEx(v35, v23, v51 - v23);
      v52 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( v51 < *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) && v51 < v52
        || v52 >= v23 && v52 < v51 )
      {
        v7[5] = v51;
      }
      goto LABEL_72;
    }
    v34 = v23 + 1;
    v27 = 0LL;
    if ( v23 + 1 > v26 )
      v34 = v26;
  }
LABEL_41:
  _BitScanForward64(&v32, ~v31);
  v33 = v32 + ((__int64)((__int64)v30 - v28) >> 3 << 6);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v32;
  if ( v33 > i || v33 == -1LL )
    goto LABEL_44;
  if ( v33 < v23 || (v36 = v23 + 512, v33 >= v23 + 512) )
  {
    v35 = v7 + 1;
    goto LABEL_84;
  }
  if ( v6 + v12 <= v36 )
    goto LABEL_69;
  v37 = v7[1];
  v38 = v23 + 512;
  v39 = v7[2];
  v23 += 512LL;
  if ( v36 >= v37 )
    v38 = 0LL;
  v40 = v37 - 1;
  while ( 2 )
  {
    if ( v40 - v38 == -1LL )
    {
      v33 = -1LL;
      goto LABEL_63;
    }
    v41 = (_QWORD *)(v39 + 8 * (v38 >> 6));
    v42 = ~*v41 | ((1LL << (v38 & 0x3F)) - 1);
    if ( v42 == -1 )
    {
      while ( (unsigned __int64)++v41 <= v39 + 8 * (v40 >> 6) )
      {
        v42 = ~*v41;
        if ( *v41 )
          goto LABEL_60;
      }
LABEL_61:
      v33 = -1LL;
    }
    else
    {
LABEL_60:
      _BitScanForward64(&v43, ~v42);
      v33 = v43 + ((__int64)((__int64)v41 - v39) >> 3 << 6);
      *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v43;
      if ( v33 > v40 )
        goto LABEL_61;
      if ( v33 != -1LL )
        break;
    }
LABEL_63:
    if ( v38 )
    {
      v44 = v23 + 1;
      v38 = 0LL;
      if ( v23 + 1 > v37 )
        v44 = v37;
      v40 = v44 - 1;
      continue;
    }
    break;
  }
  if ( v33 < v23 || v33 >= v23 + 512 )
  {
    v35 = v7 + 1;
    if ( v12 < *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    {
      *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v12;
      v7[5] = v12;
    }
    goto LABEL_84;
  }
LABEL_69:
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
LABEL_70:
  v45 = 0LL;
  v23 = 0LL;
  if ( v12 < *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    v7[5] = v12;
LABEL_72:
  v7[6] -= v6;
  v46 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( v46 )
  {
    if ( *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
      *(_DWORD *)(v46 + 7812) -= v45 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v49 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    result = (unsigned int)((__int16)(*(_WORD *)(v49 + 486))++ + 1);
    if ( !(_WORD)result )
    {
      result = v49 + 152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v49, v47, v48);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 48), -(__int64)v6);
    v50 = *(_DWORD *)v3;
  }
  else
  {
    v50 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 == 6 )
    {
      v53 = qword_14034FC68 - qword_14034FC58;
      if ( qword_14034FC68 - qword_14034FC58 > (unsigned __int64)qword_14034E6B8 )
      {
        if ( qword_140353E20->Header.SignalState )
          KeResetEvent(qword_140353E20);
        if ( v53 >= qword_14034E6C0 && !qword_140353E28->Header.SignalState )
          KeSetEvent(qword_140353E28, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v56 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    result = (unsigned int)((__int16)(*(_WORD *)(v56 + 486))++ + 1);
    if ( !(_WORD)result )
    {
      result = v56 + 152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v56, v54, v55);
    }
  }
  if ( *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
  {
    v57 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    v58 = v7[3] << 25;
    *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74) = 0;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 20LL;
    v59 = (__int64)((v23 << 28) + v58) >> 16;
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v57;
    MiInsertTbFlushEntry(v3 + 112, v59, v45, 0LL);
    return MiReturnSystemVa(v59, v59 + (v45 << 12), v50, v3 + 112);
  }
  return result;
}
