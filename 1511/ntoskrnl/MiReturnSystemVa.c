/*
 * XREFs of MiReturnSystemVa @ 0x140015490
 * Callers:
 *     MiReturnSystemPtes @ 0x1400153A0 (MiReturnSystemPtes.c)
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiReleaseLargePteMappings @ 0x1401171C8 (MiReleaseLargePteMappings.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401DAB40 (MiRemoveSpecialPoolRange.c)
 *     MiUnmapLargePages @ 0x1401E2648 (MiUnmapLargePages.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiFreeUnmappedPageTables @ 0x1400A1CD0 (MiFreeUnmappedPageTables.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNonPagedPoolToNode @ 0x1400B4754 (MiNonPagedPoolToNode.c)
 *     MiReleaseSessionVa @ 0x1400EF034 (MiReleaseSessionVa.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  int v13; // ecx
  _QWORD *v14; // r14
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  unsigned __int8 v21; // r8
  char v22; // al
  KIRQL v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r10
  __int64 *p_Region; // rdi
  __int64 *v31; // r13
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r11
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  _QWORD *v37; // r8
  _QWORD *v38; // r10
  bool i; // zf
  unsigned __int64 v40; // r10
  __int64 v41; // [rsp+30h] [rbp-59h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-51h]
  __int64 v43; // [rsp+40h] [rbp-49h] BYREF
  __int64 v44; // [rsp+48h] [rbp-41h]
  __int64 v45; // [rsp+50h] [rbp-39h]
  __int64 v46; // [rsp+58h] [rbp-31h]
  ULONG_PTR v47; // [rsp+60h] [rbp-29h]
  __int64 v48; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v49[2]; // [rsp+78h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF
  KIRQL v51; // [rsp+F0h] [rbp+67h]
  int v52; // [rsp+F8h] [rbp+6Fh]

  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v4 = a3;
  v43 = 0LL;
  result = 0x97FFFFFFFF9LL;
  v6 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  v7 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 >= v7 )
    return result;
  v41 = 0LL;
  v8 = (__int64)(v6 << 25) >> 16;
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((__int64)(v7 << 25) >> 16) - v8;
  BugCheckParameter2 = v8;
  v47 = v10;
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v9;
  v13 = 0;
  v14 = (_QWORD *)v9;
  if ( a3 == 1 )
    v13 = 2;
  v52 = v13;
  if ( !a4 )
    goto LABEL_25;
  MiInsertTbFlushEntry(a4, (__int64)(v9 << 25) >> 16, (unsigned int)(v10 >> 21), 0LL);
  if ( v9 >= v11 )
    goto LABEL_15;
  v15 = 0LL;
  v16 = v9;
  do
  {
    v17 = MI_READ_PTE_LOCK_FREE(v16);
    v48 = v17;
    if ( (v17 & 1) != 0 && (v17 & 0x80u) == 0LL )
    {
      v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v48) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v19 = MiLockPageInline(v18);
      v20 = *(_QWORD *)(v18 + 24);
      v21 = v19;
      if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v19);
        continue;
      }
      *(_QWORD *)v18 = v15;
      v15 = v18;
      v22 = *(_BYTE *)(v18 + 34) & 0xFD;
      *(_QWORD *)(v18 + 24) = v20 | 0x4000000000000000LL;
      *(_BYTE *)(v18 + 34) = v22 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v21);
    }
    v16 += 8LL;
    v12 += 8LL;
  }
  while ( v12 < v11 );
  v10 = v47;
  v41 = v15;
  v14 = (_QWORD *)v9;
  v4 = a3;
LABEL_15:
  v23 = ExAcquireSpinLockExclusive(&dword_1402FE9C8);
  v51 = v23;
  if ( v9 < v11 )
  {
    do
    {
      *(_QWORD *)v9 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v9) )
        MiWritePteShadow(v9, 0LL);
      if ( v52 == 2LL )
      {
        *v14 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v14) )
          MiWritePteShadow(v14, 0LL);
        ++v14;
      }
      v9 += 8LL;
    }
    while ( v9 < v11 );
    v23 = v51;
  }
  ExReleaseSpinLockExclusive(&dword_1402FE9C8, v23);
  MiFlushTbList(a4, v24, v25);
  v8 = BugCheckParameter2;
LABEL_25:
  if ( v4 == 1 )
  {
    MiReleaseSessionVa(v8, (unsigned int)(v10 >> 21));
    goto LABEL_27;
  }
  if ( v4 != 3 )
  {
    switch ( v4 )
    {
      case 8:
        p_Region = &qword_1402FE920;
        break;
      case 5:
        p_Region = (__int64 *)&qword_1402FE6C0[26 * (unsigned int)MiNonPagedPoolToNode(v8) + 11].Region;
        break;
      case 6:
        p_Region = (__int64 *)&unk_1402FE880;
        break;
      case 9:
      case 15:
        p_Region = &qword_1402FE790;
        break;
      case 12:
        p_Region = &qword_1402FE7E0;
        break;
      default:
        p_Region = (__int64 *)&unk_1402FE830;
        if ( v4 != 11 )
          p_Region = &qword_1402FE8D0;
        break;
    }
    v31 = p_Region;
    v32 = (BugCheckParameter2 - p_Region[4]) >> 21;
    v33 = v10 >> 21;
    if ( v4 == 15 )
    {
      v31 = v49;
      v49[1] = p_Region[1];
      v49[0] = p_Region[2];
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)p_Region + 8, &LockHandle);
    v34 = v32 + v33 - 1;
    if ( v34 >= *v31 )
      goto LABEL_70;
    if ( v33 <= 1 )
    {
      if ( v33 == 1 )
      {
        v35 = _bittest64((const signed __int64 *)v31[1], v32);
        goto LABEL_60;
      }
      goto LABEL_70;
    }
    v36 = v31[1];
    v37 = (_QWORD *)(v36 + 8 * (v32 >> 6));
    v38 = (_QWORD *)(v36 + 8 * (v34 >> 6));
    if ( v37 == v38 )
    {
      if ( (*v37 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v33) << v32)) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v33) << v32 )
        goto LABEL_70;
    }
    else
    {
      for ( i = (*v37 & (-1LL << v32)) == -1LL << v32; ; i = *v37 == -1LL )
      {
        if ( !i )
          goto LABEL_70;
        if ( ++v37 == v38 )
          break;
      }
      if ( (*v37 & (0xFFFFFFFFFFFFFFFFuLL >> -(char)(v32 + v33))) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v32 + v33) )
      {
        v35 = 0;
LABEL_60:
        if ( !v35 )
LABEL_70:
          KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, v10, v4);
      }
    }
    RtlClearBitsEx(v31, v32, v10 >> 21);
    if ( v4 == 15 )
    {
      v4 = 9;
    }
    else if ( v32 < p_Region[3] )
    {
      p_Region[3] = v32;
    }
    _InterlockedExchangeAdd64(&MiState[v4 + 870], -(__int64)v33);
    if ( v4 == 8 )
      qword_1402FE788 += v10;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_27:
  result = MiFreeUnmappedPageTables(v41, &v43);
  v26 = v46;
  if ( v46 && qword_140301528 )
  {
    MiReturnCommit(&MiSystemPartition, v46 - v44);
    if ( v52 == 2 )
    {
      v27 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      v28 = -v46;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 40), -v46);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 48), v28);
      result = MiReturnResidentAvailable(v46);
      _InterlockedExchangeAdd64(&qword_1402FF3F8, v29);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_1402FF828, -v26);
      result = MiReturnResidentAvailable(v46);
      _InterlockedExchangeAdd64(&qword_1402FF3F0, v40);
    }
  }
  return result;
}
