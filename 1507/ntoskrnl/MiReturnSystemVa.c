/*
 * XREFs of MiReturnSystemVa @ 0x140108060
 * Callers:
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandPtes @ 0x140068530 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MiReturnSystemPtes @ 0x140107F70 (MiReturnSystemPtes.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiReleaseLargePteMappings @ 0x14014C0D4 (MiReleaseLargePteMappings.c)
 *     MiMapWithLargePages @ 0x140158140 (MiMapWithLargePages.c)
 *     MiUnmapLargePages @ 0x14015D84C (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x1407C8220 (MiMapBBTMemory.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiFreeUnmappedPageTables @ 0x140039270 (MiFreeUnmappedPageTables.c)
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiNonPagedPoolToNode @ 0x140064E04 (MiNonPagedPoolToNode.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleaseSessionVa @ 0x14010876C (MiReleaseSessionVa.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r9
  volatile signed __int32 *v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v21; // r14d
  __int64 v22; // rcx
  char v23; // al
  unsigned __int8 v24; // r12
  unsigned int v25; // edi
  signed __int32 i; // edx
  _QWORD *v27; // r15
  unsigned __int64 v28; // rdi
  signed __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 *p_Region; // rdi
  __int64 *v34; // r13
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r11
  unsigned __int8 v38; // al
  __int64 v39; // rcx
  __int64 *v40; // r8
  __int64 *v41; // r10
  __int64 v42; // rax
  bool j; // zf
  unsigned __int64 v44; // rbx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h]
  volatile signed __int32 *v47; // [rsp+40h] [rbp-59h]
  unsigned __int64 v48; // [rsp+48h] [rbp-51h] BYREF
  __int64 v49; // [rsp+50h] [rbp-49h] BYREF
  __int64 v50; // [rsp+58h] [rbp-41h]
  __int64 v51; // [rsp+60h] [rbp-39h]
  signed __int64 v52; // [rsp+68h] [rbp-31h]
  unsigned __int64 v53; // [rsp+70h] [rbp-29h]
  _QWORD *v54; // [rsp+78h] [rbp-21h]
  _QWORD v55[2]; // [rsp+80h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v58; // [rsp+100h] [rbp+67h]
  _QWORD *v59; // [rsp+108h] [rbp+6Fh]

  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v4 = a3;
  v49 = 0LL;
  v5 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  v6 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 >= v6 )
    return;
  v47 = 0LL;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((__int64)(v6 << 25) >> 16) - v7;
  BugCheckParameter2 = v7;
  BugCheckParameter3 = v9;
  v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = v8;
  v59 = (_QWORD *)v8;
  v11 = 0;
  v54 = (_QWORD *)v8;
  if ( a3 == 1 )
    v11 = 2;
  v12 = v8;
  v58 = v11;
  v13 = v8;
  if ( !a4 )
    goto LABEL_61;
  MiInsertTbFlushEntry(a4, (__int64)(v8 << 25) >> 16, (unsigned int)(v9 >> 21), 0);
  if ( v8 >= v10 )
    goto LABEL_35;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v15 = 0LL;
  do
  {
    v16 = *(_QWORD *)v13;
    if ( v13 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v16)
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * ((v13 >> 3) & 0x1FF));
        if ( (v18 & 0x20) != 0 )
          v16 |= 0x20uLL;
        if ( (v18 & 0x42) != 0 )
          v16 |= 0x42uLL;
      }
    }
    v48 = v16;
    if ( (v16 & 1) != 0 && (v16 & 0x80u) == 0LL )
    {
      if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
        v16 = MiReadPteShadow(&v48, v16);
      v19 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v21 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v21);
        }
        while ( *(__int64 *)(v19 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
        v14 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = *(_QWORD *)(v19 + 24);
      if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), v14);
        __writecr8(CurrentIrql);
        v13 = (unsigned __int64)v59;
        continue;
      }
      *(_QWORD *)v19 = v15;
      v15 = (volatile signed __int32 *)v19;
      v23 = *(_BYTE *)(v19 + 34) & 0xFD;
      *(_QWORD *)(v19 + 24) = v22 | 0x4000000000000000LL;
      *(_BYTE *)(v19 + 34) = v23 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), v14);
      __writecr8(CurrentIrql);
      v13 = (unsigned __int64)v59;
    }
    v13 += 8LL;
    v59 = (_QWORD *)v13;
    v12 += 8LL;
  }
  while ( v12 < v10 );
  v8 = v53;
  v47 = v15;
  v4 = a3;
LABEL_35:
  v24 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034EE88);
  }
  else
  {
    v25 = 0;
    if ( _interlockedbittestandset(&dword_14034EE88, 0x1Fu) )
      v25 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034EE88);
    for ( i = dword_14034EE88; (dword_14034EE88 & 0xBFFFFFFF) != 0x80000000; i = dword_14034EE88 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034EE88, i | 0x40000000, i);
      if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v25);
    }
  }
  if ( v8 < v10 )
  {
    v27 = v54;
    v28 = v8 + 0x90482413000LL;
    do
    {
      *(_QWORD *)v8 = 0LL;
      if ( v28 <= 0x7F8 )
        MiWritePteShadow(v8, 0LL);
      if ( v58 == 2LL )
      {
        *v27 = 0LL;
        if ( (unsigned __int64)(v27 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(v27, 0LL);
        ++v27;
      }
      v8 += 8LL;
      v28 += 8LL;
    }
    while ( v8 < v10 );
    v4 = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
  else
    dword_14034EE88 = 0;
  __writecr8(v24);
  MiFlushTbList(a4);
  v7 = BugCheckParameter2;
  v9 = BugCheckParameter3;
LABEL_61:
  if ( v4 == 1 )
  {
    MiReleaseSessionVa(v7, (unsigned int)(v9 >> 21));
    goto LABEL_63;
  }
  if ( v4 != 3 )
  {
    switch ( v4 )
    {
      case 8:
        p_Region = &qword_14034EDE0;
        break;
      case 5:
        p_Region = (__int64 *)&qword_14034EB70[26 * (unsigned int)MiNonPagedPoolToNode(v7) + 11].Region;
        break;
      case 6:
        p_Region = (__int64 *)&unk_14034ED40;
        break;
      case 9:
      case 15:
        p_Region = &qword_14034EC50;
        break;
      case 12:
        p_Region = &qword_14034ECA0;
        break;
      default:
        p_Region = (__int64 *)&unk_14034ECF0;
        if ( v4 != 11 )
          p_Region = &qword_14034ED90;
        break;
    }
    v34 = p_Region;
    v35 = v9 >> 21;
    v36 = (BugCheckParameter2 - p_Region[4]) >> 21;
    if ( v4 == 15 )
    {
      v34 = v55;
      v55[1] = p_Region[1];
      v55[0] = p_Region[2];
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)p_Region + 8, &LockHandle);
    v37 = v36 + v35 - 1;
    if ( v37 >= *v34 )
      goto LABEL_106;
    if ( v35 <= 1 )
    {
      if ( v35 == 1 )
      {
        v38 = _bittest64((const signed __int64 *)v34[1], v36);
        goto LABEL_96;
      }
      goto LABEL_106;
    }
    v39 = v34[1];
    v40 = (__int64 *)(v39 + 8 * (v36 >> 6));
    v41 = (__int64 *)(v39 + 8 * (v37 >> 6));
    v42 = *v40;
    if ( v40 == v41 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v35) << v36) & v42) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v35) << v36 )
        goto LABEL_106;
    }
    else
    {
      for ( j = ((-1LL << v36) & v42) == -1LL << v36; ; j = *v40 == -1 )
      {
        if ( !j )
          goto LABEL_106;
        if ( ++v40 == v41 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v36 + v35)) & *v40) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v36 + v35) )
      {
        v38 = 0;
LABEL_96:
        if ( !v38 )
LABEL_106:
          KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, v4);
      }
    }
    RtlClearBitsEx((__int64)v34, v36, v35);
    if ( v4 == 15 )
    {
      v4 = 9;
    }
    else if ( v36 < p_Region[3] )
    {
      p_Region[3] = v36;
    }
    _InterlockedExchangeAdd64(&MiState[v4 + 871], -(__int64)v35);
    if ( v4 == 8 )
      qword_14034EC48 += BugCheckParameter3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_63:
  MiFreeUnmappedPageTables(v47, &v49);
  v29 = v52;
  if ( v52 && qword_140355368 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v52 - v50);
    if ( v58 == 2 )
    {
      v30 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      v31 = -v52;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 40), -v52);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 48), v31);
      v32 = v52;
      MiReturnResidentAvailable(v52);
      _InterlockedExchangeAdd64(&qword_14034F878, v32);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_14034FCE8, -v29);
      v44 = v52;
      MiReturnResidentAvailable(v52);
      _InterlockedExchangeAdd64(&qword_14034F870, v44);
    }
  }
}
