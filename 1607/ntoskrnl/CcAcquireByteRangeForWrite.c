/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x1400C9C60
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     CcFindBcb @ 0x1400C8FFC (CcFindBcb.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400C9B88 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x1400CA6D4 (CcFindBitmapRangeToClean.c)
 *     CcDeductDirtyPages @ 0x1400CA704 (CcDeductDirtyPages.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        unsigned int a8)
{
  __int64 BitmapRangeToClean; // r12
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned int v15; // r8d
  int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 *v19; // rdx
  char Bcb; // al
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // ecx
  struct _FAST_MUTEX *v29; // r13
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // r8d
  unsigned __int64 v35; // r10
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  KIRQL v39; // bl
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v43; // r11
  __int64 v44; // r9
  __int64 v45; // r11
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // r9
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // [rsp+50h] [rbp-C8h]
  int v58; // [rsp+58h] [rbp-C0h]
  __int64 v59; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-B0h]
  PKGUARDED_MUTEX Mutex; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v62; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v63; // [rsp+80h] [rbp-98h]
  __int64 v64; // [rsp+88h] [rbp-90h]
  __int64 v65; // [rsp+B0h] [rbp-68h]
  __int64 v66[11]; // [rsp+C0h] [rbp-58h] BYREF

  v65 = 0LL;
  v58 = 0;
  BitmapRangeToClean = 0LL;
  v62 = 0LL;
  v11 = 0LL;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  v60 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (PKGUARDED_MUTEX)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v13 = a1;
  v14 = *(_QWORD *)(a1 + 160);
  v60 = v14;
  if ( !v14 || !*(_DWORD *)(v14 + 8) )
  {
    v15 = a3;
LABEL_12:
    v57 = (__int64)a5;
    v63 = a8;
LABEL_13:
    v16 = a8;
    goto LABEL_14;
  }
  if ( !*(_DWORD *)(v14 + 4) )
  {
    v15 = a3;
    if ( !a3 )
      goto LABEL_12;
  }
  if ( !a2 )
  {
    v43 = 0LL;
    v57 = 0LL;
    if ( !a3 )
    {
      v43 = *(_QWORD *)(v14 + 32);
      v57 = v43;
    }
    BitmapRangeToClean = CcFindBitmapRangeToClean(v14, v43);
    v46 = *(unsigned int *)(BitmapRangeToClean + 28);
    v47 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v45 > (__int64)(v46 + v47) )
    {
      v45 = v47 + *(unsigned int *)(BitmapRangeToClean + 24);
      v57 = v45;
    }
    v48 = *(_QWORD *)(BitmapRangeToClean + 40);
    goto LABEL_99;
  }
  v57 = *a2 >> 12;
  v12 = (*a2 + a3 - 1LL) >> 12;
  v49 = CcFindBitmapRangeToClean(v14, v57);
  BitmapRangeToClean = v49;
  v47 = *(_QWORD *)(v49 + 16);
  if ( v12 < v47 + *(unsigned int *)(v49 + 24) || (v50 = *(unsigned int *)(v49 + 28), v45 > (__int64)(v50 + v47)) )
  {
    v63 = a8;
    v15 = a3;
    goto LABEL_13;
  }
  v48 = *(_QWORD *)(BitmapRangeToClean + 40);
  if ( v12 >= (__int64)(v50 + v47) )
  {
    v62 = v48 + 4 * (v50 >> 5);
    goto LABEL_100;
  }
  v46 = (unsigned int)(v12 - v47);
LABEL_99:
  v62 = v48 + 4 * (v46 >> 5);
LABEL_100:
  if ( v45 < v47 + *(unsigned int *)(BitmapRangeToClean + 24) )
  {
    v45 = v47 + *(unsigned int *)(BitmapRangeToClean + 24);
    v57 = v45;
  }
  v63 = (unsigned int)(v45 - *(_DWORD *)(BitmapRangeToClean + 16));
  v11 = (_DWORD *)(v48 + 4 * (v63 >> 5));
  v16 = -1 << (v45 % 32);
  if ( (v16 & *v11) == 0 )
  {
    v16 = -1;
    v45 &= 0xFFFFFFFFFFFFFFE0uLL;
    v51 = v62;
    do
    {
      ++v11;
      v45 += 32LL;
      v57 = v45;
      if ( (unsigned __int64)v11 > v51 )
      {
        v15 = a3;
        if ( !a3 )
          *(_DWORD *)(BitmapRangeToClean + 28) = v63 - 1;
        do
        {
          BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
          if ( BitmapRangeToClean == v44 + 16 )
          {
            if ( a3 )
              goto LABEL_14;
            BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
          }
        }
        while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
        v52 = *(unsigned int *)(BitmapRangeToClean + 24);
        v53 = *(_QWORD *)(BitmapRangeToClean + 16);
        if ( v12 < (__int64)(v53 + v52) )
          goto LABEL_14;
        v54 = *(unsigned int *)(BitmapRangeToClean + 28);
        if ( v45 > (__int64)(v54 + v53) )
        {
          v15 = a3;
          goto LABEL_14;
        }
        v55 = *(_QWORD *)(BitmapRangeToClean + 40);
        v11 = (_DWORD *)(v55 + 4 * (v52 >> 5));
        v51 = v55 + 4 * (v54 >> 5);
        v62 = v51;
        v45 = v53 + ((unsigned int)v52 & 0xFFFFFFE0);
        v57 = v45;
        LODWORD(v63) = v52;
        v44 = v60;
      }
    }
    while ( !*v11 );
  }
  v16 = -v16;
  if ( (*v11 & v16) == 0 )
  {
    do
    {
      v16 *= 2;
      ++v45;
    }
    while ( (*v11 & v16) == 0 );
    v57 = v45;
  }
  if ( !a2 )
  {
LABEL_64:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v56 = *a2;
      else
        v56 = 0LL;
      v33 = a3;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v56,
        a3,
        (const void *)v13,
        v45,
        (const void *)BitmapRangeToClean,
        *(_DWORD *)(BitmapRangeToClean + 32));
      v45 = v57;
      v44 = v60;
    }
    else
    {
      v33 = a3;
    }
    if ( (v16 & *v11) != 0 )
    {
      v34 = CcMaxLazyWritePages;
      v35 = v62;
      do
      {
        if ( a2 && v45 + *a6 >= (unsigned int)((*a2 + 4095 + v33) >> 12) )
          break;
        if ( (unsigned __int64)v11 > *(_QWORD *)(BitmapRangeToClean + 40)
                                   + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
          KeBugCheckEx(0x34u, 0x1192uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        if ( !a2 && *a6 >= v34 )
          break;
        *v11 -= v16;
        ++*a6;
        v16 *= 2;
        if ( !v16 )
        {
          ++v11;
          v16 = 1;
          if ( (unsigned __int64)v11 > v35 )
            break;
        }
      }
      while ( (v16 & *v11) != 0 );
    }
    v36 = *a6;
    v37 = *(_DWORD *)(v44 + 4);
    if ( *a6 < v37 )
      *(_DWORD *)(v44 + 4) = v37 - v36;
    else
      *(_DWORD *)(v44 + 4) = 0;
    v38 = *(_DWORD *)(v44 + 8);
    if ( v38 < v36 )
      KeBugCheckEx(0x34u, 0x11C1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v44 + 8) = v38 - v36;
    *(_DWORD *)(BitmapRangeToClean + 32) -= v36;
    v39 = KeAcquireQueuedSpinLock(5uLL);
    CcDeductDirtyPages(a1, *a6);
    if ( CcPagesYetToWrite <= *a6 )
      CcPagesYetToWrite = 0;
    else
      CcPagesYetToWrite -= *a6;
    if ( !*(_DWORD *)(a1 + 112) )
      CcInsertIntoCleanSharedCacheMapList(a1);
    KeReleaseQueuedSpinLock(5uLL, v39);
    if ( *(_DWORD *)(BitmapRangeToClean + 32) )
    {
      if ( *(_DWORD *)(BitmapRangeToClean + 24) == (_DWORD)v63 )
        *(_DWORD *)(BitmapRangeToClean + 24) = v57 + *a6 - *(_DWORD *)(BitmapRangeToClean + 16);
      v41 = v60;
      if ( a3 )
        goto LABEL_84;
      v40 = v57 + *a6;
    }
    else
    {
      *(_DWORD *)(BitmapRangeToClean + 24) = -1;
      *(_DWORD *)(BitmapRangeToClean + 28) = 0;
      v40 = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
      v41 = v60;
    }
    *(_QWORD *)(v41 + 32) = v40;
LABEL_84:
    if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(v41 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    *a6 <<= 12;
    *a5 = v57 << 12;
    *a7 = 0LL;
    goto LABEL_87;
  }
  v15 = a3;
  if ( v45 < (a3 + 4095LL + *a2) >> 12 )
  {
    if ( *(_QWORD *)(v13 + 16) == v13 + 16 )
      goto LABEL_64;
    v58 = 1;
  }
LABEL_14:
  v64 = v13 + 16;
  v17 = v65;
  while ( 2 )
  {
    v18 = *(_QWORD *)(v13 + 24) - 16LL;
    v59 = v18;
    if ( (*(_DWORD *)(v13 + 152) & 0x200) != 0 )
    {
      v19 = a2 ? a2 : (__int64 *)(v13 + 200);
      if ( *v19 )
      {
        v66[0] = *v19 + 4096;
        Bcb = CcFindBcb(v13, (__int64)v19, v66, &v59);
        v13 = a1;
        v15 = a3;
        if ( Bcb )
        {
          v18 = v59;
        }
        else
        {
          v18 = *(_QWORD *)(v59 + 24) - 16LL;
          v59 = v18;
        }
      }
    }
    v21 = v64;
    if ( v18 + 16 == v64 )
    {
      v24 = a5;
LABEL_54:
      v29 = (struct _FAST_MUTEX *)(v13 + 280);
      goto LABEL_55;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v18 != 765 )
        goto LABEL_23;
      if ( (*(_DWORD *)(v13 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v18 + 48) <= *a4 )
        break;
      v18 = *(_QWORD *)(v18 + 24) - 16LL;
      ++CcDbgLsnLargerThanHint;
LABEL_25:
      v59 = v18;
      if ( v18 + 16 == v21 )
        goto LABEL_115;
      v15 = a3;
    }
    if ( a2 && *a2 + v15 <= *(_QWORD *)(v18 + 8) )
    {
LABEL_115:
      v29 = (struct _FAST_MUTEX *)(v13 + 280);
      goto LABEL_116;
    }
    v23 = *a6;
    if ( (_DWORD)v23 )
    {
      v24 = a5;
      if ( !*(_BYTE *)(v18 + 2) )
        goto LABEL_54;
      v25 = *(_QWORD *)(v18 + 8);
      if ( v25 != *a5 + v23 || *(_DWORD *)(v18 + 64) || (v25 & 0x1FFFFFF) == 0 )
        goto LABEL_54;
      goto LABEL_41;
    }
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_23;
    if ( a2 )
    {
      if ( *a2 < *(_QWORD *)(v18 + 32) )
        goto LABEL_40;
LABEL_23:
      v22 = *(_QWORD *)(v18 + 24);
LABEL_24:
      v18 = v22 - 16;
      goto LABEL_25;
    }
    if ( *(_QWORD *)(v18 + 8) < *(_QWORD *)(v13 + 200) )
      goto LABEL_23;
LABEL_40:
    if ( v58 )
    {
      v45 = v57;
      if ( v57 <= (unsigned int)(*(__int64 *)(v18 + 8) >> 12) )
        goto LABEL_159;
    }
LABEL_41:
    ++*(_DWORD *)(v18 + 64);
    KeReleaseGuardedMutex(Mutex);
    if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
    {
      LOBYTE(v26) = 1;
      CcUnpinFileDataEx(v18, v26, 2LL);
      ExAcquireFastMutex(Mutex);
      v13 = a1;
LABEL_47:
      v58 = 0;
      v28 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v18 + 8);
      *a7 = v18;
      *a6 = *(_DWORD *)(v18 + 4) + v28;
      if ( (*(_DWORD *)(v13 + 152) & 0x3000000) != 0 && *(_QWORD *)(v18 + 48) > v17 )
        v17 = *(_QWORD *)(v18 + 48);
      v21 = v64;
      goto LABEL_23;
    }
    if ( ExAcquireResourceExclusiveLite((PERESOURCE)(v18 + 72), *a6 == 0) )
    {
      ExAcquireFastMutex(Mutex);
      if ( *(_BYTE *)(v18 + 2) )
      {
        v13 = a1;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v18 + 48) <= *a4 )
          goto LABEL_47;
        ++CcDbgLsnLargerThanHint;
      }
      KeReleaseGuardedMutex(Mutex);
      CcUnpinFileDataEx(v18, 0LL, 0LL);
      v29 = Mutex;
      ExAcquireFastMutex(Mutex);
      v13 = a1;
      if ( *a6 )
        goto LABEL_116;
      v22 = *(_QWORD *)(a1 + 24);
      v21 = v64;
      goto LABEL_24;
    }
    LOBYTE(v27) = 1;
    CcUnpinFileDataEx(v18, v27, 0LL);
    v29 = Mutex;
    ExAcquireFastMutex(Mutex);
    v13 = a1;
LABEL_116:
    v24 = a5;
LABEL_55:
    if ( v58 )
    {
      v45 = v57;
LABEL_159:
      v44 = v60;
      goto LABEL_64;
    }
    if ( *a6 )
    {
      if ( !a2 )
      {
        v30 = *a6;
        *(_QWORD *)(v13 + 200) = *v24 + *a6;
        v31 = v30 >> 12;
        v32 = *(_DWORD *)(v13 + 192);
        if ( v32 <= v31 )
          *(_DWORD *)(v13 + 192) = 0;
        else
          *(_DWORD *)(v13 + 192) = v32 - v31;
      }
    }
    else if ( *(_QWORD *)(v13 + 200) && !a2 )
    {
      *(_QWORD *)(v13 + 200) = 0LL;
      v15 = a3;
      continue;
    }
    break;
  }
  KeReleaseGuardedMutex(v29);
  if ( v17 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 248))(*(_QWORD *)(a1 + 240), v17);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), v17);
  }
LABEL_87:
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
  return *a6 != 0;
}
