/*
 * XREFs of MiExpandNonPagedPool @ 0x14006B0B4
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x140063964 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x140115220 (MiFindContiguousMemoryInPool.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140064554 (MiIncreaseNonPagedPoolUsage.c)
 *     MiObtainDynamicVa @ 0x140066E20 (MiObtainDynamicVa.c)
 *     MiSplitBitmapPages @ 0x1400688D0 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetLargePageChain @ 0x1401021A8 (MiGetLargePageChain.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14010E740 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiFreeLargePageChain @ 0x14022D01C (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiExpandNonPagedPool(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  _SLIST_HEADER *v11; // rbx
  int v12; // r9d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 Alignment; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r12
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rdi
  unsigned __int64 v31; // r12
  _QWORD *v32; // r15
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // kr00_8
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  __int64 v39; // r9
  volatile signed __int32 *v40; // r8
  unsigned int v41; // eax
  int v42; // r10d
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rdi
  unsigned __int64 Region; // rax
  int v48; // ebx
  int v49; // [rsp+20h] [rbp-79h]
  unsigned int v50; // [rsp+20h] [rbp-79h]
  int v51; // [rsp+24h] [rbp-75h]
  unsigned __int64 v52; // [rsp+28h] [rbp-71h]
  __int64 LargePageChain; // [rsp+30h] [rbp-69h]
  __int64 v55; // [rsp+40h] [rbp-59h]
  unsigned __int64 v56; // [rsp+40h] [rbp-59h]
  unsigned __int64 v57; // [rsp+48h] [rbp-51h]
  __int64 v58; // [rsp+58h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-21h]
  _QWORD v61[3]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v62; // [rsp+98h] [rbp-1h]

  memset(v61, 0, sizeof(v61));
  v49 = 0;
  v62 = 0LL;
  v9 = a3;
  v10 = 26LL * a3;
  *a6 = 3;
  v11 = &qword_14034EB70[v10];
  v12 = 0;
  v55 = v10 * 16;
  v51 = 1;
  if ( (a1 & 0x200) != 0 )
  {
    v13 = *(_QWORD *)(1336 * v9 + qword_140353D28 + 1216) >> 9;
    if ( qword_1403551D0 >= 0x100000 )
    {
      if ( qword_1403551D0 < 0x400000 )
        v13 = ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
            + ((unsigned __int64)(v13 - ((v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      v14 = v13 >> 4;
    }
    else
    {
      v14 = *(_QWORD *)(1336 * v9 + qword_140353D28 + 1216) >> 14;
    }
    v15 = -1LL;
    if ( qword_1403551D0 < 0x80000 )
      v15 = 2LL;
    if ( (a2 & 0x1FF) == 0
      || (Alignment = v11[18].Alignment, Alignment < v15)
      && (Alignment < v14 || v11[18].Region >= (Alignment << 12) / 0xA) )
    {
      v51 = 0;
      v12 = 1;
      v49 = 2;
    }
  }
  v17 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v17 < a2 )
    return -1LL;
  LargePageChain = 0LL;
  v18 = v17 >> 9;
  v19 = 0LL;
  if ( v12 == 1 )
  {
    if ( a4 != -1LL )
      goto LABEL_23;
    if ( MmProtectFreedNonPagedPool != 1 && (unsigned int)MiObtainNonPagedPoolCharges(v18 << 9) == 1 )
    {
      LargePageChain = MiGetLargePageChain(a3, v18);
      if ( LargePageChain )
        goto LABEL_23;
      v62 = v18 << 9;
      v61[0] = v18 << 9;
      MiReturnNonPagedPoolCharges(v61);
    }
    v51 = 1;
    v49 = 0;
  }
  if ( a5 == 1 )
    return -1LL;
LABEL_23:
  v20 = MiObtainDynamicVa((__int64 *)((char *)&qword_14034EB70[11].Region + v55), v18, 5);
  v57 = v20;
  v21 = v20;
  if ( !v20 )
  {
LABEL_29:
    if ( LargePageChain )
    {
      MiFreeLargePageChain(LargePageChain);
      v62 = v18 << 9;
      v61[0] = v18 << 9;
      MiReturnNonPagedPoolCharges(v61);
    }
    if ( v21 )
      MiReturnSystemVa(v21, (__int64)((v19 << 25) + 0x10000000) >> 16, 5LL, 0LL);
    return -1LL;
  }
  v22 = (v20 - v11[20].Region) >> 21;
  v23 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = v23 + 8 * (v17 - 1);
  KeAcquireInStackQueuedSpinLock(&v11[19].Region, &LockHandle);
  v24 = v51;
  v58 = v24 * 16;
  v60 = v22 + v18;
  if ( v22 + v18 > v11[v24 + 21].Region )
  {
    v25 = (v22 + v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v25 <= v11[11].Alignment )
      v11[v24 + 21].Region = v25;
  }
  if ( !(unsigned int)MiSplitBitmapPages(5u, v11[v24 + 22].Alignment + (v22 >> 3), v18 + (v22 & 7)) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v21 = v57;
    goto LABEL_29;
  }
  v21 = v57;
  if ( !(unsigned int)MiSplitBitmapPages(
                        5u,
                        v11[24].Alignment + ((v57 - v11[20].Region) >> 15),
                        (v18 << 9) + (((v57 - v11[20].Region) >> 12) & 7)) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_29;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !(unsigned int)MiMakeZeroedPageTables(v23, v23 + 8 * (v17 - 1), v49, 5) )
    goto LABEL_29;
  v27 = a4;
  if ( LargePageChain || a4 != -1LL )
  {
    if ( a2 != v17 || a4 != -1LL )
      ++v11[18].Alignment;
    *a6 = 1;
  }
  v28 = -1LL;
  v29 = 0;
  v56 = -1LL;
  v50 = 0;
  v30 = ((v57 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v31 = 0LL;
  if ( v17 )
  {
    v32 = (_QWORD *)LargePageChain;
    v33 = v30 + 0x90482413000LL;
    v52 = v30 + 0x90482413000LL;
    while ( 1 )
    {
      if ( v33 <= 0x7F8 )
      {
        MiReadPteShadow(v30, *(_QWORD *)v30);
        v33 = v52;
        v29 = v50;
      }
      if ( v27 != -1LL || !v32 )
        goto LABEL_67;
      v34 = v32;
      v32 = (_QWORD *)*v32;
      v35 = qword_14034FBA8[0];
      v36 = (__int64)(v34 + 0xB000000000LL);
      v37 = (__int64)(v34 + 0xB000000000LL) / 48;
      if ( qword_14034FBA8[0] )
      {
        LOBYTE(v38) = 1;
        v39 = (v37 >> 9) & 0x1F;
        v40 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v37 >> 14));
        if ( (unsigned __int64)(v39 + 1) > 0x20 )
        {
          if ( v39 )
          {
            v42 = (v37 >> 9) & 0x1F;
            v35 = (unsigned int)(32 - v42);
            _InterlockedOr(v40, ((1 << (32 - v42)) - 1) << v39);
            v38 = 1 - v35;
            ++v40;
            if ( (unsigned __int64)(1 - v35) >= 0x20 )
            {
              v35 = v38 >> 5;
              v38 += -32LL * (v38 >> 5);
              do
              {
                *v40++ = -1;
                --v35;
              }
              while ( v35 );
            }
            if ( !v38 )
              goto LABEL_59;
          }
          v41 = (1 << v38) - 1;
        }
        else
        {
          v41 = 1 << v39;
        }
        _InterlockedOr(v40, v41);
      }
LABEL_59:
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                           0LL,
                           v35,
                           qword_1403D0230 ^ (qword_1403D0230 ^ (v37 << 12)) & 0xFFFFFFFFF000LL | 0x21) )
        v43 |= 0x100uLL;
      v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int8)word_14034EC18 << 8)) & 0x100 | 0xC2;
      *(_QWORD *)v30 = v44;
      if ( v52 <= 0x7F8 )
        MiWritePteShadow(v30, v44);
      MiInitializeLargeNonPagedPoolLeafFrames(v30 << 25 >> 16, v36 / 48);
      v45 = v56;
      v27 = a4;
      v29 = v50;
      if ( v37 < v56 )
        v45 = v36 / 48;
      v56 = v45;
      v33 = v52;
      if ( v37 + 511 > v31 )
        v31 = v37 | 0x1FF;
LABEL_67:
      v29 += 512;
      v33 += 8LL;
      v30 += 8LL;
      v50 = v29;
      v52 = v33;
      if ( v29 >= v17 )
      {
        v21 = v57;
        v28 = v56;
        break;
      }
    }
  }
  v46 = (v21 - v11[20].Region) >> 12;
  KeAcquireInStackQueuedSpinLock(&v11[19].Region, &LockHandle);
  if ( v31 )
  {
    Region = v11[16].Region;
    if ( v28 < Region || !Region )
      v11[16].Region = v28;
    if ( v31 > v11[17].Alignment )
      v11[17].Alignment = v31;
  }
  if ( v17 != a2 )
  {
    RtlClearBitsEx((__int64)&v11[23].Region, v46 + a2, v17 - a2);
    _bittestandreset64(*(signed __int64 **)((char *)&v11[22].Alignment + v58), v60 - 1);
    if ( v46 < *(&v11[24].Region + v51) )
      *(&v11[24].Region + v51) = v46 + a2;
  }
  if ( a4 != -1LL )
    a2 = a4;
  v48 = MiIncreaseNonPagedPoolUsage((__int64)v11, v51, v46, a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v48 == 1 )
    MiTrimSegmentCache();
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a6 == 1 && a4 == -1LL )
    MiLogPerfMemoryRangeEvent(v21, 0LL, 11LL, v17);
  return v46;
}
