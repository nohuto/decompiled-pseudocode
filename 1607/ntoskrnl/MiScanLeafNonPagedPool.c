/*
 * XREFs of MiScanLeafNonPagedPool @ 0x14001A960
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x14001A5E0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     MiReplenishNonPagedSlists @ 0x140017040 (MiReplenishNonPagedSlists.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400171EC (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140017628 (MiAllocatingNonPagedPoolVa.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14001A800 (RtlFindNextForwardRunClearCappedEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCheckPoolForContiguousPages @ 0x14009C0C8 (MiCheckPoolForContiguousPages.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x14010137C (MiIncreaseNonPagedPoolUsage.c)
 */

__int64 __fastcall MiScanLeafNonPagedPool(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  _SLIST_HEADER *v12; // r13
  bool v13; // zf
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v28; // rdi
  __int64 v29; // r15
  unsigned int v30; // esi
  int v31; // ebx
  __int64 v32; // r10
  __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned int v35; // r11d
  unsigned __int64 v36; // r10
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r11
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
  __int64 v50; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 NextForwardRunClearCapped; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int128 v56; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF

  v7 = a5;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = a7 - a5;
  v12 = &qword_1403269F0[26 * a2];
  v13 = *(_DWORD *)a4 == 2;
  *(_QWORD *)&v56 = a6;
  v14 = v12[24].Alignment + 8 * (a5 >> 6);
  *((_QWORD *)&v56 + 1) = v14;
  if ( v13 )
  {
    for ( i = 0LL; ; i = v53 + v54 )
    {
      a7 = i;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v56, i, v14, &a7);
      v53 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v54 = a7;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v9 + 8))(
        v9,
        v12[20].Region + ((a7 + a5) << 12),
        NextForwardRunClearCapped,
        0LL);
    }
    return -1LL;
  }
  if ( v10 >= (unsigned __int64)v56 )
    v15 = 0LL;
  else
    v15 = a7 - a5;
  v16 = v56 - 1;
  if ( !a1 )
  {
    v23 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_14;
  }
  while ( 2 )
  {
    if ( v16 - v15 + 1 < a1 )
    {
      v22 = -1LL;
      goto LABEL_12;
    }
    v17 = v16 - a1 + 1;
    a7 = v17;
    v18 = *((_QWORD *)&v56 + 1) + 8 * (v17 >> 6);
    v19 = (unsigned __int64 *)(*((_QWORD *)&v56 + 1) + 8 * (v15 >> 6));
    v20 = ((1LL << (v15 & 0x3F)) - 1) | *v19;
    if ( a1 > 0x7F )
    {
      if ( (v17 & 0x3F) != 0 )
        v18 += 8LL;
      if ( !v20 )
      {
        v39 = a7;
        v42 = 0;
        goto LABEL_71;
      }
      v38 = v19[1];
      ++v19;
      if ( !v38 )
      {
        v13 = !_BitScanReverse64((unsigned __int64 *)&v50, v20);
        if ( v13 )
          v42 = 64;
        else
          v42 = 63 - v50;
        v39 = a7;
        goto LABEL_71;
      }
      v39 = a7;
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v19 > v18 )
            goto LABEL_57;
          v40 = v19[1];
          ++v19;
        }
        while ( v40 );
        v13 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v19 - 1));
        v42 = v13 ? 64 : 63 - v41;
LABEL_71:
        v22 = (((__int64)v19 - *((_QWORD *)&v56 + 1)) >> 3 << 6) - v42;
        if ( v22 > v39 )
          goto LABEL_53;
        v43 = &v19[(a1 - v42) >> 6];
        if ( ++v19 == v43 )
        {
LABEL_75:
          v44 = ((_BYTE)a1 - (_BYTE)v42) & 0x3F;
          if ( (((_BYTE)a1 - (_BYTE)v42) & 0x3F) == 0 )
            goto LABEL_11;
          v13 = !_BitScanForward64((unsigned __int64 *)&v45, *v19);
          if ( v13 )
            LODWORD(v45) = 64;
          if ( (unsigned int)v45 >= v44 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v19 )
          {
            if ( ++v19 == v43 )
              goto LABEL_75;
          }
        }
      }
    }
    if ( a1 < 0x40 )
    {
      if ( a1 > 1 )
      {
        v32 = 0LL;
        v33 = *((_QWORD *)&v56 + 1) + 8 * (v16 >> 6);
        while ( 1 )
        {
          if ( v20 == -1 )
          {
            while ( (unsigned __int64)++v19 <= v18 )
            {
              v20 = *v19;
              if ( *v19 != -1LL )
              {
                v32 = 0LL;
                goto LABEL_41;
              }
            }
            v22 = -1LL;
            goto LABEL_12;
          }
LABEL_41:
          v13 = !_BitScanForward64((unsigned __int64 *)&v34, v20);
          if ( v13 )
            LODWORD(v34) = 64;
          if ( (unsigned int)(v32 + v34) >= a1 )
            break;
          v35 = a1;
          v36 = ~v20;
          while ( 1 )
          {
            v36 &= v36 >> (v35 >> 1);
            if ( !v36 )
              break;
            v35 -= v35 >> 1;
            if ( v35 <= 1 )
            {
              _BitScanForward64(&v36, v36);
              goto LABEL_52;
            }
          }
          if ( v19 == (unsigned __int64 *)v33 )
            goto LABEL_57;
          v13 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
          if ( v13 )
            v32 = 64LL;
          else
            v32 = (unsigned int)(63 - v37);
          v20 = v19[1];
          ++v19;
        }
        v36 = -v32;
LABEL_52:
        v22 = (((__int64)v19 - *((_QWORD *)&v56 + 1)) >> 3 << 6) + v36;
        if ( v22 <= a7 )
          goto LABEL_11;
      }
      else
      {
        if ( v20 != -1 )
        {
LABEL_10:
          _BitScanForward64(&v21, ~v20);
          v22 = (unsigned int)v21 + (((__int64)v19 - *((_QWORD *)&v56 + 1)) >> 3 << 6);
          if ( v22 > a7 )
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
LABEL_53:
      v22 = -1LL;
      goto LABEL_12;
    }
    while ( v20 >= 0 )
    {
LABEL_86:
      v13 = !_BitScanReverse64((unsigned __int64 *)&v46, v20);
      if ( v13 )
        v47 = 64;
      else
        v47 = 63 - v46;
      v22 = (((((__int64)v19 - *((_QWORD *)&v56 + 1)) >> 3) + 1) << 6) - v47;
      if ( v22 > a7 )
        goto LABEL_57;
      v48 = a1 - v47;
      if ( a1 == v47 )
        goto LABEL_11;
      v20 = v19[1];
      ++v19;
      if ( v48 < 0x40 )
        goto LABEL_94;
      if ( !v20 )
      {
        v48 -= 64LL;
        if ( !v48 )
          goto LABEL_11;
        v20 = v19[1];
        ++v19;
LABEL_94:
        v13 = !_BitScanForward64(&v49, v20);
        if ( v13 )
          v49 = 64LL;
        if ( v49 >= v48 )
          goto LABEL_11;
      }
    }
    while ( (unsigned __int64)++v19 <= v18 )
    {
      v20 = *v19;
      if ( (*v19 & 0x8000000000000000uLL) == 0 )
        goto LABEL_86;
    }
LABEL_57:
    v22 = -1LL;
LABEL_12:
    if ( v15 )
    {
      v55 = a1 + v10;
      v15 = 0LL;
      if ( a1 + v10 > (unsigned __int64)v56 )
        v55 = v56;
      v16 = v55 - 1;
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
  v25 = 8LL * a3;
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
    v29 = MiCheckPoolForContiguousPages((unsigned int)&v56, a1, v23, a4, v7, a2);
    if ( v29 == -1 )
      goto LABEL_81;
    v28 = -1LL;
    goto LABEL_25;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)&v56, a1, v23);
  v28 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
    goto LABEL_81;
  if ( *(_BYTE *)(a4 + 48) != 1 || ClearBitsAndSet >= v10 )
  {
    v29 = ClearBitsAndSet + v7;
    if ( v26 != -1LL && a1 == 1 && !*(_DWORD *)a4 )
      *(unsigned __int64 *)((char *)&v12[24].Region + v25) = v29 + 1;
    v30 = a2;
LABEL_25:
    MiAllocatingNonPagedPoolVa((__int64)v12, a3, v29, a1);
    if ( !*(_DWORD *)a4 && !a3 && a1 <= 3 )
      a1 += MiReplenishNonPagedSlists(&v56, v30, v29 - v28, v28, a1);
    v31 = MiIncreaseNonPagedPoolUsage(v12, (unsigned int)a3, v29, a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v31 == 1 )
      MiFreeExcessSegments();
    return v29;
  }
  RtlClearBitsEx((__int64)&v56, ClearBitsAndSet, a1);
LABEL_81:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return -1LL;
}
