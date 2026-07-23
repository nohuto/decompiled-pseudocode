/*
 * XREFs of MiExpandNonPagedPool @ 0x1400FF5A4
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x140017940 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x14009AAEC (MiFindContiguousMemoryInPool.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetLargePageChain @ 0x140089B54 (MiGetLargePageChain.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140094FC0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     MiObtainDynamicVa @ 0x1400A19B0 (MiObtainDynamicVa.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400FFE04 (MiObtainNonPagedPoolCharges.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x14010137C (MiIncreaseNonPagedPoolUsage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeLargePageChain @ 0x1401FB558 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiExpandNonPagedPool(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r12
  __int64 v9; // r8
  _SLIST_HEADER *v10; // rbx
  int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 Alignment; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // r12
  unsigned int i; // ebx
  __int64 v30; // r9
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int64 Region; // rax
  int v38; // ebx
  int v39; // [rsp+30h] [rbp-89h]
  _QWORD *LargePageChain; // [rsp+38h] [rbp-81h]
  unsigned __int64 v41; // [rsp+38h] [rbp-81h]
  unsigned int v42; // [rsp+40h] [rbp-79h]
  int v43; // [rsp+44h] [rbp-75h]
  __int64 v45; // [rsp+50h] [rbp-69h]
  __int64 v46; // [rsp+50h] [rbp-69h]
  _SLIST_HEADER *v47; // [rsp+60h] [rbp-59h]
  unsigned __int64 v49; // [rsp+70h] [rbp-49h]
  unsigned __int64 v50; // [rsp+78h] [rbp-41h]
  __int64 v51; // [rsp+80h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-31h] BYREF
  unsigned __int64 v53[3]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v54; // [rsp+B8h] [rbp-1h]

  memset(v53, 0, sizeof(v53));
  v6 = a2;
  v42 = 0;
  v54 = 0LL;
  v9 = 26LL * a3;
  *a6 = 3;
  v10 = &qword_1403269F0[v9];
  v11 = 0;
  v43 = a3;
  v45 = v9 * 16;
  v47 = &qword_1403269F0[v9];
  v39 = 1;
  if ( (a1 & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(2184LL * a3 + qword_1403235B0 + 2056) >> 9;
    if ( qword_140324E10 >= 0x100000 )
    {
      if ( qword_140324E10 < 0x400000 )
        v12 = ((v12 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
            + ((unsigned __int64)(v12 - ((v12 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      v13 = v12 >> 4;
    }
    else
    {
      v13 = *(_QWORD *)(2184LL * a3 + qword_1403235B0 + 2056) >> 14;
    }
    if ( qword_140324E10 > 0x20000 )
    {
      v14 = -1LL;
      if ( qword_140324E10 < 0x80000 )
        v14 = 2LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( (a2 & 0x1FF) == 0
      || (Alignment = v10[18].Alignment, Alignment < v14)
      && (Alignment < v13 || v10[18].Region >= (Alignment << 12) / 0xA) )
    {
      v39 = 0;
      v11 = 1;
      v42 = 2;
    }
  }
  v16 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v16 < a2 )
    return -1LL;
  LargePageChain = 0LL;
  v17 = v16 >> 9;
  v18 = 0LL;
  if ( v11 == 1 )
  {
    if ( a4 != -1LL )
      goto LABEL_25;
    if ( MmProtectFreedNonPagedPool != 1 && (unsigned int)MiObtainNonPagedPoolCharges(v17 << 9) == 1 )
    {
      LargePageChain = MiGetLargePageChain(v43, v17 << 9);
      if ( LargePageChain )
        goto LABEL_25;
      v54 = v17 << 9;
      v53[0] = v17 << 9;
      MiReturnNonPagedPoolCharges(v53);
    }
    v39 = 1;
    v42 = 0;
  }
  if ( a5 == 1 )
    return -1LL;
LABEL_25:
  v19 = MiObtainDynamicVa((__int64 *)((char *)&qword_1403269F0[11].Region + v45), v17, 5, 0);
  v49 = v19;
  v20 = v19;
  if ( !v19 )
  {
LABEL_31:
    if ( LargePageChain )
    {
      MiFreeLargePageChain(LargePageChain);
      v54 = v17 << 9;
      v53[0] = v17 << 9;
      MiReturnNonPagedPoolCharges(v53);
    }
    if ( v20 )
      MiReturnSystemVa(v20, (__int64)((v18 << 25) + 0x10000000) >> 16, 5, 0LL);
    return -1LL;
  }
  v46 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = (v19 - v10[20].Region) >> 21;
  v18 = v46 + 8 * (v16 - 1);
  KeAcquireInStackQueuedSpinLock(&v10[19].Region, &LockHandle);
  v22 = v39;
  v51 = v22 * 16;
  v50 = v17 + v21;
  if ( v17 + v21 > v10[v22 + 21].Region )
  {
    v23 = (v17 + v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v23 <= v10[11].Alignment )
      v10[v22 + 21].Region = v23;
  }
  if ( !(unsigned int)MiSplitBitmapPages(5LL, v10[v22 + 22].Alignment + (v21 >> 3), v17 + (v21 & 7))
    || !(unsigned int)MiSplitBitmapPages(
                        5LL,
                        v10[24].Alignment + ((v20 - v10[20].Region) >> 15),
                        (v17 << 9) + (((v20 - v10[20].Region) >> 12) & 7)) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_31;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !(unsigned int)MiMakeZeroedPageTables(v46, v18, v42, 5LL) )
    goto LABEL_31;
  if ( LargePageChain || a4 != -1LL )
  {
    if ( v6 != v16 || a4 != -1LL )
      ++v10[18].Alignment;
    *a6 = 1;
  }
  v25 = -1LL;
  v26 = 0LL;
  v27 = ((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v16 )
  {
    v28 = LargePageChain;
    for ( i = 0; i < v16; i += 512 )
    {
      MI_READ_PTE_LOCK_FREE(v27);
      if ( v30 == -1 && v28 )
      {
        v31 = v28;
        v28 = (_QWORD *)*v28;
        v32 = (__int64)((unsigned __int128)((__int64)(v31 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
        v41 = (v32 >> 63) + v32;
        MiUpdateLargePageBitMap((__int64)MiSystemPartition, v41, 0x200uLL, 1, 1);
        ValidKernelPte = MiMakeValidKernelPte(v41, 4, 0LL);
        *(_QWORD *)v27 = ValidKernelPte | 0xC2;
        if ( (unsigned int)MiPteInShadowRange(v27, ValidKernelPte | 0xC2) )
          MiWritePteShadow(v35, v34);
        MiInitializeLargeNonPagedPoolLeafFrames(v27 << 25 >> 16, v41);
        if ( v41 < v25 )
          v25 = v41;
        if ( v41 + 511 > v26 )
          v26 = v41 | 0x1FF;
      }
      v27 += 8LL;
    }
    v10 = v47;
    v6 = a2;
    v20 = v49;
  }
  v36 = (v20 - v10[20].Region) >> 12;
  KeAcquireInStackQueuedSpinLock(&v10[19].Region, &LockHandle);
  if ( v26 )
  {
    Region = v10[16].Region;
    if ( v25 < Region || !Region )
      v10[16].Region = v25;
    if ( v26 > v10[17].Alignment )
      v10[17].Alignment = v26;
  }
  if ( v16 != v6 )
  {
    RtlClearBitsEx((__int64)&v10[23].Region, v6 + v36, v16 - v6);
    _bittestandreset64(*(signed __int64 **)((char *)&v10[22].Alignment + v51), v50 - 1);
    if ( v36 < *(&v10[24].Region + v39) )
      *(&v10[24].Region + v39) = v6 + v36;
  }
  if ( a4 != -1LL )
    v6 = a4;
  v38 = MiIncreaseNonPagedPoolUsage(v10, (unsigned int)v39, v36, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v38 == 1 )
    MiFreeExcessSegments();
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a6 == 1 && a4 == -1LL )
    MiLogPerfMemoryRangeEvent(v20, 0LL, 11LL, v16);
  return v36;
}
