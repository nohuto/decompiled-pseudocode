/*
 * XREFs of MiExpandNonPagedPool @ 0x1400168DC
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x1400B34D0 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x1400BD920 (MiFindContiguousMemoryInPool.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140016F80 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainDynamicVa @ 0x140018AD0 (MiObtainDynamicVa.c)
 *     MiGetLargePageChain @ 0x14001935C (MiGetLargePageChain.c)
 *     MiObtainNonPagedPoolCharges @ 0x140019B68 (MiObtainNonPagedPoolCharges.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400B3F88 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiFreeLargePageChain @ 0x1401E17A0 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiExpandNonPagedPool(
        __int16 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        unsigned __int64 a6)
{
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v9; // r8
  _SLIST_HEADER *v10; // rdi
  int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 Alignment; // rcx
  unsigned __int64 v16; // r14
  _QWORD *LargePageChain; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 v28; // r12
  _QWORD *v29; // rax
  __int64 v30; // kr00_8
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  volatile signed __int32 *v34; // r8
  unsigned int v35; // eax
  int v36; // r10d
  unsigned __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned __int64 Region; // rax
  int v41; // ebx
  unsigned int v42; // [rsp+20h] [rbp-79h]
  unsigned int v43; // [rsp+20h] [rbp-79h]
  int v44; // [rsp+24h] [rbp-75h]
  __int64 v45; // [rsp+28h] [rbp-71h]
  __int64 v46; // [rsp+28h] [rbp-71h]
  unsigned __int64 v47; // [rsp+28h] [rbp-71h]
  unsigned int v48; // [rsp+30h] [rbp-69h]
  unsigned __int64 v49; // [rsp+30h] [rbp-69h]
  unsigned __int64 v50; // [rsp+38h] [rbp-61h]
  unsigned __int64 v52; // [rsp+50h] [rbp-49h]
  __int64 v53; // [rsp+58h] [rbp-41h]
  unsigned __int64 v54; // [rsp+60h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  _SLIST_HEADER *v56; // [rsp+80h] [rbp-19h]
  _QWORD v57[3]; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v58; // [rsp+A0h] [rbp+7h]

  *((_QWORD *)&v6 + 1) = a2;
  memset(v57, 0, sizeof(v57));
  v7 = *((_QWORD *)&v6 + 1);
  v42 = 0;
  LODWORD(v6) = a3;
  v54 = *((_QWORD *)&v6 + 1);
  v58 = 0LL;
  v9 = 26LL * a3;
  *a5 = 3;
  v10 = &qword_1402FE6C0[v9];
  v11 = 0;
  v48 = v6;
  *((_QWORD *)&v6 + 1) = (unsigned int)v6;
  v45 = v9 * 16;
  v56 = &qword_1402FE6C0[v9];
  v44 = 1;
  if ( (a1 & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(1336LL * (unsigned int)v6 + qword_1402FFD68 + 1216) >> 9;
    if ( qword_140301390 >= 0x100000 )
    {
      if ( qword_140301390 < 0x400000 )
      {
        v6 = v12 * (unsigned __int128)0x47AE147AE147AE15uLL;
        v12 = *((_QWORD *)&v6 + 1) + ((v12 - *((_QWORD *)&v6 + 1)) >> 1);
      }
      v13 = v12 >> 4;
    }
    else
    {
      v13 = *(_QWORD *)(1336LL * (unsigned int)v6 + qword_1402FFD68 + 1216) >> 14;
    }
    v14 = -1LL;
    if ( qword_140301390 < 0x80000 )
      v14 = 2LL;
    if ( (v7 & 0x1FF) == 0
      || (Alignment = v10[18].Alignment, Alignment < v14)
      && (Alignment < v13 || (*((_QWORD *)&v6 + 1) = (Alignment << 12) / 0xA, v10[18].Region >= *((_QWORD *)&v6 + 1))) )
    {
      v44 = 0;
      v11 = 1;
      v42 = 2;
    }
  }
  v16 = (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v16 < v7 )
    return -1LL;
  LargePageChain = 0LL;
  v19 = v16 >> 9;
  v20 = 0LL;
  if ( v11 == 1 )
  {
    if ( a6 != -1LL )
      goto LABEL_24;
    if ( MmProtectFreedNonPagedPool != 1
      && (unsigned int)MiObtainNonPagedPoolCharges(v19 << 9, *((_QWORD *)&v6 + 1)) == 1 )
    {
      LargePageChain = (_QWORD *)MiGetLargePageChain(v48, v16 >> 9);
      if ( LargePageChain )
      {
        ++dword_1402E180C;
        goto LABEL_24;
      }
      ++dword_1402E1810;
      v58 = v19 << 9;
      v57[0] = v19 << 9;
      MiReturnNonPagedPoolCharges(v57);
    }
    v44 = 1;
    v42 = 0;
  }
  if ( a4 == 1 )
    return -1LL;
LABEL_24:
  v21 = MiObtainDynamicVa((char *)&qword_1402FE6C0[11].HeaderX64 + v45 + 8, (unsigned int)v19, 5LL);
  v49 = v21;
  v22 = v21;
  if ( !v21 )
  {
    ++dword_1402E1814;
LABEL_36:
    if ( LargePageChain )
    {
      MiFreeLargePageChain(LargePageChain);
      v58 = v19 << 9;
      v57[0] = v19 << 9;
      MiReturnNonPagedPoolCharges(v57);
    }
    if ( v22 )
      MiReturnSystemVa(v22, (__int64)((v20 << 25) + 0x10000000) >> 16, 5, 0LL);
    return -1LL;
  }
  v23 = (v21 - v10[20].Region) >> 21;
  v46 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v46 + 8 * (v16 - 1);
  KeAcquireInStackQueuedSpinLock(&v10[19].Region, &LockHandle);
  v24 = v44;
  v53 = v24 * 16;
  v52 = v23 + v19;
  if ( v23 + v19 > v10[v24 + 21].Region )
  {
    v25 = (v23 + v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v25 <= v10[11].Alignment )
      v10[v24 + 21].Region = v25;
  }
  if ( !(unsigned int)MiSplitBitmapPages(5LL, v10[v24 + 22].Alignment + (v23 >> 3), v19 + (v23 & 7)) )
  {
    ++dword_1402E1818;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v22 = v49;
    goto LABEL_36;
  }
  v22 = v49;
  if ( !(unsigned int)MiSplitBitmapPages(
                        5LL,
                        v10[24].Alignment + ((v49 - v10[20].Region) >> 15),
                        (v19 << 9) + (((v49 - v10[20].Region) >> 12) & 7)) )
  {
    ++dword_1402E1818;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_36;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !(unsigned int)MiMakeZeroedPageTables(v46, v20, v42, 5LL) )
  {
    ++dword_1402E181C;
    goto LABEL_36;
  }
  if ( LargePageChain || a6 != -1LL )
  {
    if ( v7 != v16 || a6 != -1LL )
      ++v10[18].Alignment;
    *a5 = 1;
  }
  v50 = -1LL;
  v26 = 0LL;
  v43 = 0;
  v47 = 0LL;
  v27 = ((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v16 )
  {
    v28 = -1LL;
    while ( 1 )
    {
      MI_READ_PTE_LOCK_FREE(v27);
      if ( a6 == -1LL )
      {
        if ( LargePageChain )
          break;
      }
LABEL_66:
      v27 += 8LL;
      v43 += 512;
      if ( v43 >= v16 )
      {
        v10 = v56;
        v22 = v49;
        v50 = v28;
        v7 = v54;
        goto LABEL_68;
      }
    }
    v29 = LargePageChain;
    LargePageChain = (_QWORD *)*LargePageChain;
    v30 = (__int64)(v29 + 0xB000000000LL);
    v31 = (__int64)(v29 + 0xB000000000LL) / 48;
    if ( qword_1402FF6E8[0] )
    {
      LOBYTE(v32) = 1;
      v33 = (v31 >> 9) & 0x1F;
      v34 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v31 >> 14));
      if ( (unsigned __int64)(v33 + 1) > 0x20 )
      {
        if ( v33 )
        {
          v36 = (v31 >> 9) & 0x1F;
          _InterlockedOr(v34, ((1 << (32 - v36)) - 1) << v33);
          v32 = 1LL - (unsigned int)(32 - v36);
          ++v34;
          if ( v32 >= 0x20 )
          {
            v37 = v32 >> 5;
            v32 += -32LL * (v32 >> 5);
            do
            {
              *v34++ = -1;
              --v37;
            }
            while ( v37 );
          }
          if ( !v32 )
            goto LABEL_60;
        }
        v35 = (1 << v32) - 1;
      }
      else
      {
        v35 = 1 << v33;
      }
      _InterlockedOr(v34, v35);
    }
LABEL_60:
    v38 = MiMakeValidKernelPte(v30 / 48, 4LL, 0LL) | 0xC2;
    *(_QWORD *)v27 = v38;
    if ( (unsigned int)MiPteInShadowRange(v27) )
      MiWritePteShadow(v27, v38);
    MiInitializeLargeNonPagedPoolLeafFrames(v27 << 25 >> 16, v30 / 48);
    v26 = v47;
    if ( v31 < v28 )
      v28 = v30 / 48;
    if ( v31 + 511 > v47 )
    {
      v26 = v31 | 0x1FF;
      v47 = v31 | 0x1FF;
    }
    goto LABEL_66;
  }
LABEL_68:
  v39 = (v22 - v10[20].Region) >> 12;
  KeAcquireInStackQueuedSpinLock(&v10[19].Region, &LockHandle);
  if ( v26 )
  {
    Region = v10[16].Region;
    if ( v50 < Region || !Region )
      v10[16].Region = v50;
    if ( v26 > v10[17].Alignment )
      v10[17].Alignment = v26;
  }
  if ( v16 != v7 )
  {
    RtlClearBitsEx((char *)&v10[23].HeaderX64 + 8, v7 + v39, v16 - v7);
    _bittestandreset64(*(signed __int64 **)((char *)&v10[22].Alignment + v53), v52 - 1);
    if ( v39 < *(&v10[24].Region + v44) )
      *(&v10[24].Region + v44) = v7 + v39;
  }
  if ( a6 != -1LL )
    v7 = a6;
  v41 = MiIncreaseNonPagedPoolUsage(v10, (unsigned int)v44, v39, v7);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v41 == 1 )
    MiTrimSegmentCache();
  ++dword_1402E17C4;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a5 == 1 && a6 == -1LL )
    MiLogPerfMemoryRangeEvent(v22, 0LL, 11LL, v16);
  return v39;
}
