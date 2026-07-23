/*
 * XREFs of MiScanLeafNonPagedPool @ 0x140063F60
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x140063BD0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x140063DF0 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140064554 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReplenishNonPagedSlists @ 0x140064E4C (MiReplenishNonPagedSlists.c)
 *     RtlFindClearBitsAndSetEx @ 0x140064FF8 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140065468 (MiAllocatingNonPagedPoolVa.c)
 *     MiCheckPoolForContiguousPages @ 0x1401672C4 (MiCheckPoolForContiguousPages.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 */

__int64 __fastcall MiScanLeafNonPagedPool(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  _SLIST_HEADER *v13; // r13
  bool v14; // zf
  __int64 v15; // r12
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r9
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rsi
  unsigned __int64 v27; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  int v29; // esi
  __int64 v30; // rdi
  unsigned int v31; // ebx
  int v32; // ebx
  unsigned int v33; // r11d
  unsigned __int64 *v34; // rbx
  __int64 v35; // rcx
  unsigned int v36; // r11d
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // edx
  unsigned __int64 *v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 i; // r14
  __int64 v51; // rcx
  unsigned __int64 NextForwardRunClearCapped; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+38h] [rbp-70h]
  unsigned __int64 v58; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+E0h] [rbp+38h]

  v7 = a5;
  v8 = a4;
  v9 = *(_QWORD *)(a4 + 32);
  v11 = 26LL * a2;
  v12 = a7 - a5;
  v13 = &qword_14034EB70[v11];
  v14 = *(_DWORD *)a4 == 2;
  v58 = a6;
  v15 = a3;
  v63 = a7 - a5;
  v16 = v13[24].Alignment + 8 * (a5 >> 6);
  v59 = v16;
  if ( v14 )
  {
    for ( i = 0LL; ; i = v53 + v54 )
    {
      v56 = i;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v58, i, v16, &v56);
      v53 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v54 = v56;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v9 + 8))(
        v9,
        v13[20].Region + ((v56 + a5) << 12),
        NextForwardRunClearCapped,
        0LL);
    }
    return -1LL;
  }
  if ( v12 >= v58 )
    v17 = 0LL;
  else
    v17 = v12;
  v18 = v58 - 1;
  if ( !a1 )
  {
    v25 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_15;
  }
  while ( 2 )
  {
    v56 = v59;
    if ( v18 - v17 + 1 < a1 )
    {
      v24 = -1LL;
      goto LABEL_13;
    }
    v19 = v18 - a1 + 1;
    v57 = v19;
    v20 = v59 + 8 * (v19 >> 6);
    v21 = (unsigned __int64 *)(v59 + 8 * (v17 >> 6));
    v22 = ((1LL << (v17 & 0x3F)) - 1) | *v21;
    if ( a1 > 0x7F )
    {
      if ( (v19 & 0x3F) != 0 )
        v20 += 8LL;
      if ( !v22 )
      {
        v42 = 0;
        goto LABEL_69;
      }
      v39 = v21[1];
      ++v21;
      if ( !v39 )
      {
        v14 = !_BitScanReverse64((unsigned __int64 *)&v51, v22);
        if ( v14 )
          v42 = 64;
        else
          v42 = 63 - v51;
        goto LABEL_69;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v21 > v20 )
            goto LABEL_59;
          v40 = v21[1];
          ++v21;
        }
        while ( v40 );
        v14 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v21 - 1));
        v42 = v14 ? 64 : 63 - v41;
LABEL_69:
        v24 = ((__int64)((__int64)v21 - v59) >> 3 << 6) - v42;
        if ( v24 > v19 )
          goto LABEL_51;
        v43 = &v21[(a1 - v42) >> 6];
        if ( ++v21 == v43 )
        {
LABEL_73:
          v44 = ((_BYTE)a1 - (_BYTE)v42) & 0x3F;
          if ( (((_BYTE)a1 - (_BYTE)v42) & 0x3F) == 0 )
            goto LABEL_11;
          v14 = !_BitScanForward64((unsigned __int64 *)&v45, *v21);
          if ( v14 )
            LODWORD(v45) = 64;
          if ( (unsigned int)v45 >= v44 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v21 )
          {
            if ( ++v21 == v43 )
              goto LABEL_73;
          }
        }
      }
    }
    if ( a1 < 0x40 )
    {
      if ( a1 > 1 )
      {
        v33 = 0;
        v34 = (unsigned __int64 *)(v59 + 8 * (v18 >> 6));
        while ( 1 )
        {
          if ( v22 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v21 > v20 )
                goto LABEL_59;
              v22 = *v21;
              if ( *v21 != -1LL )
              {
                v33 = 0;
                break;
              }
            }
          }
          v14 = !_BitScanForward64((unsigned __int64 *)&v35, v22);
          if ( v14 )
            LODWORD(v35) = 64;
          if ( v33 + (unsigned int)v35 >= a1 )
            break;
          v36 = a1;
          v37 = ~v22;
          while ( 1 )
          {
            v37 &= v37 >> (v36 >> 1);
            if ( !v37 )
              break;
            v36 -= v36 >> 1;
            if ( v36 <= 1 )
            {
              _BitScanForward64(&v37, v37);
              goto LABEL_50;
            }
          }
          if ( v21 == v34 )
            goto LABEL_59;
          v14 = !_BitScanReverse64((unsigned __int64 *)&v38, v22);
          if ( v14 )
            v33 = 64;
          else
            v33 = 63 - v38;
          v22 = v21[1];
          ++v21;
        }
        v37 = -(__int64)v33;
LABEL_50:
        v24 = ((__int64)((__int64)v21 - v56) >> 3 << 6) + v37;
        if ( v24 <= v57 )
          goto LABEL_11;
      }
      else
      {
        if ( v22 != -1 )
        {
LABEL_10:
          _BitScanForward64(&v23, ~v22);
          v24 = (unsigned int)v23 + ((__int64)((__int64)v21 - v59) >> 3 << 6);
          if ( v24 > v19 )
          {
            v24 = -1LL;
            goto LABEL_12;
          }
LABEL_11:
          if ( v24 == -1LL )
            goto LABEL_12;
          break;
        }
        while ( (unsigned __int64)++v21 <= v20 )
        {
          v22 = *v21;
          if ( *v21 != -1LL )
            goto LABEL_10;
        }
      }
LABEL_51:
      v24 = -1LL;
      goto LABEL_12;
    }
    while ( v22 >= 0 )
    {
LABEL_79:
      v14 = !_BitScanReverse64((unsigned __int64 *)&v46, v22);
      if ( v14 )
        v47 = 64;
      else
        v47 = 63 - v46;
      v24 = ((((__int64)((__int64)v21 - v59) >> 3) + 1) << 6) - v47;
      if ( v24 > v19 )
        goto LABEL_59;
      v48 = a1 - v47;
      if ( a1 == v47 )
        goto LABEL_11;
      v22 = v21[1];
      ++v21;
      if ( v48 < 0x40 )
        goto LABEL_84;
      if ( !v22 )
      {
        v48 -= 64LL;
        if ( !v48 )
          goto LABEL_11;
        v22 = v21[1];
        ++v21;
LABEL_84:
        v14 = !_BitScanForward64(&v49, v22);
        if ( v14 )
          v49 = 64LL;
        if ( v49 >= v48 )
          goto LABEL_11;
      }
    }
    while ( (unsigned __int64)++v21 <= v20 )
    {
      v22 = *v21;
      if ( (*v21 & 0x8000000000000000uLL) == 0 )
        goto LABEL_79;
    }
LABEL_59:
    v24 = -1LL;
LABEL_12:
    v12 = v63;
LABEL_13:
    if ( v17 )
    {
      v55 = a1 + v12;
      v17 = 0LL;
      if ( a1 + v12 > v58 )
        v55 = v58;
      v18 = v55 - 1;
      continue;
    }
    break;
  }
  v7 = a5;
  v25 = v24;
  v8 = a4;
  v12 = v63;
LABEL_15:
  if ( v25 == -1LL || *(_BYTE *)(v8 + 48) == 1 && v25 < v12 )
    return -1LL;
  KeAcquireInStackQueuedSpinLock(&v13[19].Region, &LockHandle);
  v27 = *(&v13[24].Region + v15);
  if ( v27 < v7 || *(_BYTE *)(v8 + 48) == 1 || v27 >= v7 + a6 )
  {
    v27 = -1LL;
  }
  else if ( v25 + v7 < v27 )
  {
    v25 = v27 - v7;
  }
  if ( *(_DWORD *)v8 == 1 )
  {
    v31 = a2;
    v30 = MiCheckPoolForContiguousPages((unsigned int)&v58, a1, v25, v8, v7, a2);
    if ( v30 == -1 )
      goto LABEL_99;
    v29 = -1;
    goto LABEL_30;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v58, a1, v25);
  v29 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
    goto LABEL_99;
  if ( *(_BYTE *)(v8 + 48) != 1 || ClearBitsAndSet >= v63 )
  {
    v30 = ClearBitsAndSet + v7;
    if ( *(_DWORD *)v8 )
    {
      v31 = a2;
    }
    else
    {
      v14 = v27 == -1LL;
      v31 = a2;
      if ( !v14 && a1 == 1 )
        *(&v13[24].Region + v15) = v30 + 1;
    }
LABEL_30:
    MiAllocatingNonPagedPoolVa(v13, (unsigned int)v15, v30, a1);
    if ( !*(_DWORD *)v8 && !(_DWORD)v15 && a1 <= 3 )
      a1 += MiReplenishNonPagedSlists((unsigned int)&v58, v31, (int)v30 - v29, v29, a1);
    v32 = MiIncreaseNonPagedPoolUsage(v13, (unsigned int)v15, v30, a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v32 == 1 )
      MiTrimSegmentCache();
    return v30;
  }
  RtlClearBitsEx((__int64)&v58, ClearBitsAndSet, a1);
LABEL_99:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return -1LL;
}
