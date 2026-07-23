/*
 * XREFs of MiScanLeafNonPagedPool @ 0x1400B3980
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x1400B35F0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400B3810 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400B3F88 (MiIncreaseNonPagedPoolUsage.c)
 *     MiAllocatingNonPagedPoolVa @ 0x1400B479C (MiAllocatingNonPagedPoolVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     MiReplenishNonPagedSlists @ 0x1400E3284 (MiReplenishNonPagedSlists.c)
 *     MiCheckPoolForContiguousPages @ 0x140137FA4 (MiCheckPoolForContiguousPages.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 */

__int64 __fastcall MiScanLeafNonPagedPool(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  _SLIST_HEADER *v12; // r13
  bool v13; // zf
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  int v28; // edi
  __int64 v29; // r15
  unsigned int v30; // esi
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // r11d
  unsigned __int64 *v36; // rbx
  __int64 v37; // rcx
  unsigned int v38; // r11d
  unsigned __int64 v39; // r10
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // edx
  unsigned __int64 *v45; // r8
  unsigned int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // [rsp+30h] [rbp-68h] BYREF
  __int64 v59; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp+20h]

  v7 = a5;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = a7 - a5;
  v12 = &qword_1402FE6C0[26 * a2];
  v13 = *(_DWORD *)a4 == 2;
  v58 = a6;
  v14 = v12[24].Alignment + 8 * (a5 >> 6);
  v59 = v14;
  if ( v13 )
  {
    for ( i = 0LL; ; i = v55 + v56 )
    {
      a7 = i;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v58, i, v14, (unsigned __int64 *)&a7);
      v55 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v56 = a7;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v9 + 8))(
        v9,
        v12[20].Region + ((a7 + a5) << 12),
        NextForwardRunClearCapped,
        0LL);
    }
    return -1LL;
  }
  if ( v10 >= v58 )
    v15 = 0LL;
  else
    v15 = a7 - a5;
  v16 = v58 - 1;
  if ( !a1 )
  {
    v23 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_14;
  }
  while ( 2 )
  {
    a7 = v59;
    if ( v16 - v15 + 1 < a1 )
    {
      v22 = -1LL;
      goto LABEL_12;
    }
    v17 = v16 - a1 + 1;
    v63 = v17;
    v18 = v59 + 8 * (v17 >> 6);
    v19 = (unsigned __int64 *)(v59 + 8 * (v15 >> 6));
    v20 = ((1LL << (v15 & 0x3F)) - 1) | *v19;
    if ( a1 > 0x7F )
    {
      if ( (v17 & 0x3F) != 0 )
        v18 += 8LL;
      if ( !v20 )
      {
        v44 = 0;
        goto LABEL_70;
      }
      v41 = v19[1];
      ++v19;
      if ( !v41 )
      {
        v13 = !_BitScanReverse64((unsigned __int64 *)&v52, v20);
        if ( v13 )
          v44 = 64;
        else
          v44 = 63 - v52;
        goto LABEL_70;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v19 > v18 )
            goto LABEL_59;
          v42 = v19[1];
          ++v19;
        }
        while ( v42 );
        v13 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v19 - 1));
        v44 = v13 ? 64 : 63 - v43;
LABEL_70:
        v22 = (((__int64)v19 - v59) >> 3 << 6) - v44;
        if ( v22 > v17 )
          goto LABEL_51;
        v45 = &v19[(a1 - v44) >> 6];
        if ( ++v19 == v45 )
        {
LABEL_74:
          v46 = ((_BYTE)a1 - (_BYTE)v44) & 0x3F;
          if ( (((_BYTE)a1 - (_BYTE)v44) & 0x3F) == 0 )
            goto LABEL_11;
          v13 = !_BitScanForward64((unsigned __int64 *)&v47, *v19);
          if ( v13 )
            LODWORD(v47) = 64;
          if ( (unsigned int)v47 >= v46 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v19 )
          {
            if ( ++v19 == v45 )
              goto LABEL_74;
          }
        }
      }
    }
    if ( a1 < 0x40 )
    {
      if ( a1 > 1 )
      {
        v35 = 0;
        v36 = (unsigned __int64 *)(v59 + 8 * (v16 >> 6));
        while ( 1 )
        {
          if ( v20 == -1 )
          {
            while ( (unsigned __int64)++v19 <= v18 )
            {
              v20 = *v19;
              if ( *v19 != -1LL )
              {
                v35 = 0;
                goto LABEL_43;
              }
            }
            v22 = -1LL;
            goto LABEL_12;
          }
LABEL_43:
          v13 = !_BitScanForward64((unsigned __int64 *)&v37, v20);
          if ( v13 )
            LODWORD(v37) = 64;
          if ( v35 + (unsigned int)v37 >= a1 )
            break;
          v38 = a1;
          v39 = ~v20;
          while ( 1 )
          {
            v39 &= v39 >> (v38 >> 1);
            if ( !v39 )
              break;
            v38 -= v38 >> 1;
            if ( v38 <= 1 )
            {
              _BitScanForward64(&v39, v39);
              goto LABEL_50;
            }
          }
          if ( v19 == v36 )
            goto LABEL_59;
          v13 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
          if ( v13 )
            v35 = 64;
          else
            v35 = 63 - v40;
          v20 = v19[1];
          ++v19;
        }
        v39 = -(__int64)v35;
LABEL_50:
        v22 = (((__int64)v19 - a7) >> 3 << 6) + v39;
        if ( v22 <= v63 )
          goto LABEL_11;
      }
      else
      {
        if ( v20 != -1 )
        {
LABEL_10:
          _BitScanForward64(&v21, ~v20);
          v22 = (unsigned int)v21 + (((__int64)v19 - v59) >> 3 << 6);
          if ( v22 > v17 )
          {
            v22 = -1LL;
            goto LABEL_12;
          }
LABEL_11:
          if ( v22 == -1LL )
            goto LABEL_12;
          break;
        }
        while ( (unsigned __int64)++v19 <= v18 )
        {
          v20 = *v19;
          if ( *v19 != -1LL )
            goto LABEL_10;
        }
      }
LABEL_51:
      v22 = -1LL;
      goto LABEL_12;
    }
    while ( v20 >= 0 )
    {
LABEL_80:
      v13 = !_BitScanReverse64((unsigned __int64 *)&v48, v20);
      if ( v13 )
        v49 = 64;
      else
        v49 = 63 - v48;
      v22 = (((((__int64)v19 - v59) >> 3) + 1) << 6) - v49;
      if ( v22 > v17 )
        goto LABEL_59;
      v50 = a1 - v49;
      if ( a1 == v49 )
        goto LABEL_11;
      v20 = v19[1];
      ++v19;
      if ( v50 < 0x40 )
        goto LABEL_85;
      if ( !v20 )
      {
        v50 -= 64LL;
        if ( !v50 )
          goto LABEL_11;
        v20 = v19[1];
        ++v19;
LABEL_85:
        v13 = !_BitScanForward64(&v51, v20);
        if ( v13 )
          v51 = 64LL;
        if ( v51 >= v50 )
          goto LABEL_11;
      }
    }
    while ( (unsigned __int64)++v19 <= v18 )
    {
      v20 = *v19;
      if ( (*v19 & 0x8000000000000000uLL) == 0 )
        goto LABEL_80;
    }
LABEL_59:
    v22 = -1LL;
LABEL_12:
    if ( v15 )
    {
      v57 = a1 + v10;
      v15 = 0LL;
      if ( a1 + v10 > v58 )
        v57 = v58;
      v16 = v57 - 1;
      continue;
    }
    break;
  }
  v7 = a5;
  v23 = v22;
LABEL_14:
  if ( v23 == -1LL || *(_BYTE *)(a4 + 48) == 1 && v23 < v10 )
    return -1LL;
  KeAcquireInStackQueuedSpinLock(&v12[19].Region, &LockHandle);
  v25 = 8LL * (int)a3;
  v26 = *(unsigned __int64 *)((char *)&v12[24].Region + v25);
  if ( v26 < v7 || *(_BYTE *)(a4 + 48) == 1 || v26 >= v7 + a6 )
  {
    v26 = -1LL;
  }
  else if ( v23 + v7 < v26 )
  {
    v23 = v26 - v7;
  }
  if ( *(_DWORD *)a4 == 1 )
  {
    v30 = a2;
    v29 = MiCheckPoolForContiguousPages((unsigned int)&v58, a1, v23, a4, v7, a2);
    if ( v29 == -1 )
      goto LABEL_100;
    v28 = -1;
    goto LABEL_24;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v58, a1, v23);
  v28 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
    goto LABEL_100;
  if ( *(_BYTE *)(a4 + 48) != 1 || ClearBitsAndSet >= v10 )
  {
    v29 = ClearBitsAndSet + v7;
    if ( v26 != -1LL && a1 == 1 && !*(_DWORD *)a4 )
      *(unsigned __int64 *)((char *)&v12[24].Region + v25) = v29 + 1;
    v30 = a2;
LABEL_24:
    MiAllocatingNonPagedPoolVa(v12, a3, v29, a1);
    if ( !*(_DWORD *)a4 && !a3 && a1 <= 3 )
      a1 += MiReplenishNonPagedSlists((unsigned int)&v58, v30, (int)v29 - v28, v28, a1);
    v31 = MiIncreaseNonPagedPoolUsage(v12, a3, v29, a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v31 == 1 )
      MiTrimSegmentCache(v33, v32, v34);
    return v29;
  }
  RtlClearBitsEx((__int64)&v58, ClearBitsAndSet, a1);
LABEL_100:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return -1LL;
}
