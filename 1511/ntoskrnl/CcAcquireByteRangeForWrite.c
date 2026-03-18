/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14000DA70
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 * Callees:
 *     CcFindBitmapRangeToClean @ 0x14000E4B0 (CcFindBitmapRangeToClean.c)
 *     CcDeductDirtyPages @ 0x14000E4E0 (CcDeductDirtyPages.c)
 *     CcFindBcb @ 0x14000E528 (CcFindBcb.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B0CB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
  __int64 BitmapRangeToClean; // r13
  _DWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned int v15; // r8d
  int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 *v20; // rdx
  char Bcb; // al
  __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rdx
  struct _FAST_MUTEX *v26; // r15
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r11
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // ebx
  unsigned int v44; // r8d
  unsigned __int64 v45; // r10
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  KIRQL v49; // bl
  __int64 v50; // r11
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // r9
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // [rsp+50h] [rbp-C8h]
  int v59; // [rsp+58h] [rbp-C0h]
  __int64 v60; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-B0h]
  __int64 v62; // [rsp+70h] [rbp-A8h]
  PKGUARDED_MUTEX Mutex; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+80h] [rbp-98h]
  unsigned __int64 v65; // [rsp+88h] [rbp-90h]
  __int64 v66; // [rsp+A8h] [rbp-70h]
  __int64 v67[12]; // [rsp+B8h] [rbp-60h] BYREF

  v66 = 0LL;
  v59 = 0;
  BitmapRangeToClean = 0LL;
  v64 = 0LL;
  v11 = 0LL;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  v61 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (PKGUARDED_MUTEX)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v13 = a1;
  v14 = *(_QWORD *)(a1 + 160);
  v62 = v14;
  if ( !v14 || !*(_DWORD *)(v14 + 8) )
  {
    v15 = a3;
LABEL_12:
    v58 = (__int64)a5;
    v65 = a8;
    goto LABEL_13;
  }
  if ( !*(_DWORD *)(v14 + 4) )
  {
    v15 = a3;
    if ( !a3 )
      goto LABEL_12;
  }
  if ( !a2 )
  {
    v50 = 0LL;
    v58 = 0LL;
    if ( !a3 )
    {
      v50 = *(_QWORD *)(v14 + 32);
      v58 = v50;
    }
    BitmapRangeToClean = CcFindBitmapRangeToClean(v14, v50);
    v51 = *(unsigned int *)(BitmapRangeToClean + 28);
    v40 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v39 > (__int64)(v51 + v40) )
    {
      v39 = v40 + *(unsigned int *)(BitmapRangeToClean + 24);
      v58 = v39;
    }
    v42 = *(_QWORD *)(BitmapRangeToClean + 40);
    v64 = v42 + 4 * (v51 >> 5);
    goto LABEL_79;
  }
  v58 = *a2 >> 12;
  v12 = (*a2 + a3 - 1LL) >> 12;
  v37 = CcFindBitmapRangeToClean(v14, v58);
  BitmapRangeToClean = v37;
  v40 = *(_QWORD *)(v37 + 16);
  if ( v12 >= v40 + *(unsigned int *)(v37 + 24) )
  {
    v41 = *(unsigned int *)(v37 + 28);
    if ( v39 <= (__int64)(v41 + v40) )
    {
      v42 = *(_QWORD *)(v37 + 40);
      if ( v12 < (__int64)(v41 + v40) )
        v41 = (unsigned int)(v12 - v40);
      v64 = v42 + 4 * (v41 >> 5);
LABEL_79:
      if ( v39 < v40 + *(unsigned int *)(BitmapRangeToClean + 24) )
      {
        v39 = v40 + *(unsigned int *)(BitmapRangeToClean + 24);
        v58 = v39;
      }
      v65 = (unsigned int)(v39 - *(_DWORD *)(BitmapRangeToClean + 16));
      v11 = (_DWORD *)(v42 + 4 * (v65 >> 5));
      v16 = -1 << (v39 % 32);
      if ( (v16 & *v11) == 0 )
      {
        v16 = -1;
        v39 &= 0xFFFFFFFFFFFFFFE0uLL;
        v52 = v64;
        do
        {
          ++v11;
          v39 += 32LL;
          v58 = v39;
          if ( (unsigned __int64)v11 > v52 )
          {
            v15 = a3;
            if ( !a3 )
              *(_DWORD *)(BitmapRangeToClean + 28) = v65 - 1;
            do
            {
              BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
              if ( BitmapRangeToClean == v38 + 16 )
              {
                if ( a3 )
                  goto LABEL_14;
                BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
              }
            }
            while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
            v53 = *(unsigned int *)(BitmapRangeToClean + 24);
            v54 = *(_QWORD *)(BitmapRangeToClean + 16);
            if ( v12 < (__int64)(v54 + v53) )
              goto LABEL_14;
            v55 = *(unsigned int *)(BitmapRangeToClean + 28);
            if ( v39 > (__int64)(v55 + v54) )
            {
              v15 = a3;
              goto LABEL_14;
            }
            v56 = *(_QWORD *)(BitmapRangeToClean + 40);
            v11 = (_DWORD *)(v56 + 4 * (v53 >> 5));
            v52 = v56 + 4 * (v55 >> 5);
            v64 = v52;
            v39 = v54 + ((unsigned int)v53 & 0xFFFFFFE0);
            v58 = v39;
            LODWORD(v65) = v53;
            v38 = v62;
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
          ++v39;
        }
        while ( (*v11 & v16) == 0 );
        v58 = v39;
      }
      if ( !a2 )
      {
LABEL_86:
        if ( (gCcTrace & 1) != 0 )
        {
          if ( a2 )
            v57 = *a2;
          else
            v57 = 0LL;
          v43 = a3;
          DbgPrintEx(
            0x7Fu,
            0,
            "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
            v57,
            a3,
            (const void *)v13,
            v39,
            (const void *)BitmapRangeToClean,
            *(_DWORD *)(BitmapRangeToClean + 32));
          v39 = v58;
          v38 = v62;
        }
        else
        {
          v43 = a3;
        }
        if ( (v16 & *v11) != 0 )
        {
          v44 = CcMaxLazyWritePages;
          v45 = v64;
          do
          {
            if ( a2 && v39 + *a6 >= (unsigned int)((*a2 + 4095 + v43) >> 12) )
              break;
            if ( (unsigned __int64)v11 > *(_QWORD *)(BitmapRangeToClean + 40)
                                       + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
              KeBugCheckEx(0x34u, 0x111CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            if ( !a2 && *a6 >= v44 )
              break;
            *v11 -= v16;
            ++*a6;
            v16 *= 2;
            if ( !v16 )
            {
              ++v11;
              v16 = 1;
              if ( (unsigned __int64)v11 > v45 )
                break;
            }
          }
          while ( (v16 & *v11) != 0 );
        }
        v46 = *a6;
        v47 = *(_DWORD *)(v38 + 4);
        if ( *a6 < v47 )
          *(_DWORD *)(v38 + 4) = v47 - v46;
        else
          *(_DWORD *)(v38 + 4) = 0;
        v48 = *(_DWORD *)(v38 + 8);
        if ( v48 < v46 )
          KeBugCheckEx(0x34u, 0x114BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *(_DWORD *)(v38 + 8) = v48 - v46;
        *(_DWORD *)(BitmapRangeToClean + 32) -= v46;
        v49 = KeAcquireQueuedSpinLock(5uLL);
        CcDeductDirtyPages(a1, *a6);
        if ( CcPagesYetToWrite > *a6 )
          CcPagesYetToWrite -= *a6;
        else
          CcPagesYetToWrite = 0;
        if ( !*(_DWORD *)(a1 + 112) )
          CcInsertIntoCleanSharedCacheMapList(a1);
        KeReleaseQueuedSpinLock(5uLL, v49);
        if ( *(_DWORD *)(BitmapRangeToClean + 32) )
        {
          if ( *(_DWORD *)(BitmapRangeToClean + 24) == (_DWORD)v65 )
            *(_DWORD *)(BitmapRangeToClean + 24) = v58 + *a6 - *(_DWORD *)(BitmapRangeToClean + 16);
          v32 = v62;
          if ( a3 )
            goto LABEL_52;
          v31 = v58 + *a6;
        }
        else
        {
          *(_DWORD *)(BitmapRangeToClean + 24) = -1;
          *(_DWORD *)(BitmapRangeToClean + 28) = 0;
          v31 = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
          v32 = v62;
        }
        *(_QWORD *)(v32 + 32) = v31;
LABEL_52:
        if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
          *(_DWORD *)(a1 + 192) = *(_DWORD *)(v32 + 4);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
        *a6 <<= 12;
        *a5 = v58 << 12;
        *a7 = 0LL;
        goto LABEL_55;
      }
      v15 = a3;
      if ( v39 < (a3 + 4095LL + *a2) >> 12 )
      {
        if ( *(_QWORD *)(v13 + 16) != v13 + 16 )
        {
          v59 = 1;
          goto LABEL_14;
        }
        goto LABEL_86;
      }
      goto LABEL_14;
    }
  }
  v65 = a8;
  v15 = a3;
LABEL_13:
  v16 = a8;
LABEL_14:
  v61 = v13 + 16;
  v17 = v66;
  v18 = v13 + 16;
  while ( 2 )
  {
    v19 = *(_QWORD *)(v13 + 24) - 16LL;
    v60 = v19;
    if ( (*(_DWORD *)(v13 + 152) & 0x200) != 0 )
    {
      v20 = a2 ? a2 : (__int64 *)(v13 + 200);
      if ( *v20 )
      {
        v67[0] = *v20 + 4096;
        Bcb = CcFindBcb(v13, v20, v67, &v60);
        v18 = v61;
        v13 = a1;
        v15 = a3;
        if ( Bcb )
        {
          v19 = v60;
        }
        else
        {
          v19 = *(_QWORD *)(v60 + 24) - 16LL;
          v60 = v19;
        }
      }
    }
    if ( v19 + 16 == v18 )
    {
LABEL_35:
      v24 = a5;
LABEL_36:
      v26 = (struct _FAST_MUTEX *)(v13 + 280);
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v19 != 765 )
        goto LABEL_23;
      if ( (*(_DWORD *)(v13 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v19 + 48) <= *a4 )
        break;
      v19 = *(_QWORD *)(v19 + 24) - 16LL;
      ++CcDbgLsnLargerThanHint;
LABEL_25:
      v60 = v19;
      if ( v19 + 16 == v18 )
        goto LABEL_35;
      v15 = a3;
    }
    if ( a2 && *a2 + v15 <= *(_QWORD *)(v19 + 8) )
      goto LABEL_35;
    v23 = *a6;
    if ( (_DWORD)v23 )
    {
      v24 = a5;
      if ( !*(_BYTE *)(v19 + 2) )
        goto LABEL_36;
      v25 = *(_QWORD *)(v19 + 8);
      if ( v25 != *a5 + v23 || *(_DWORD *)(v19 + 64) || (v25 & 0x1FFFFFF) == 0 )
        goto LABEL_36;
      goto LABEL_62;
    }
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_23;
    if ( a2 )
    {
      if ( *a2 < *(_QWORD *)(v19 + 32) )
        goto LABEL_61;
LABEL_23:
      v22 = *(_QWORD *)(v19 + 24);
LABEL_24:
      v19 = v22 - 16;
      goto LABEL_25;
    }
    if ( *(_QWORD *)(v19 + 8) < *(_QWORD *)(v13 + 200) )
      goto LABEL_23;
LABEL_61:
    if ( v59 )
    {
      v39 = v58;
      if ( v58 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
        goto LABEL_158;
    }
LABEL_62:
    ++*(_DWORD *)(v19 + 64);
    KeReleaseGuardedMutex(Mutex);
    if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
    {
      LOBYTE(v34) = 1;
      CcUnpinFileDataEx(v19, v34, 2LL);
      ExAcquireFastMutex(Mutex);
      v13 = a1;
LABEL_68:
      v59 = 0;
      v36 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v19 + 8);
      *a7 = v19;
      *a6 = *(_DWORD *)(v19 + 4) + v36;
      if ( (*(_DWORD *)(v13 + 152) & 0x3000000) != 0 && *(_QWORD *)(v19 + 48) > v17 )
        v17 = *(_QWORD *)(v19 + 48);
      v18 = v61;
      goto LABEL_23;
    }
    if ( ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 72), *a6 == 0) )
    {
      ExAcquireFastMutex(Mutex);
      if ( *(_BYTE *)(v19 + 2) )
      {
        v13 = a1;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v19 + 48) <= *a4 )
          goto LABEL_68;
        ++CcDbgLsnLargerThanHint;
      }
      KeReleaseGuardedMutex(Mutex);
      CcUnpinFileDataEx(v19, 0LL, 0LL);
      v26 = Mutex;
      ExAcquireFastMutex(Mutex);
      v13 = a1;
      v18 = v61;
      if ( *a6 )
        goto LABEL_156;
      v22 = *(_QWORD *)(a1 + 24);
      goto LABEL_24;
    }
    LOBYTE(v35) = 1;
    CcUnpinFileDataEx(v19, v35, 0LL);
    v26 = Mutex;
    ExAcquireFastMutex(Mutex);
    v18 = v61;
    v13 = a1;
LABEL_156:
    v24 = a5;
LABEL_37:
    if ( v59 )
    {
      v39 = v58;
LABEL_158:
      v38 = v62;
      goto LABEL_86;
    }
    if ( *a6 )
    {
      if ( !a2 )
      {
        v27 = *a6;
        *(_QWORD *)(v13 + 200) = *v24 + *a6;
        v28 = v27 >> 12;
        v29 = *(_DWORD *)(v13 + 192);
        if ( v29 <= v28 )
          *(_DWORD *)(v13 + 192) = 0;
        else
          *(_DWORD *)(v13 + 192) = v29 - v28;
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
  KeReleaseGuardedMutex(v26);
  if ( v17 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 248))(*(_QWORD *)(a1 + 240), v17);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), v17);
  }
LABEL_55:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v30) = 1;
    PsBoostThreadIoEx(KeGetCurrentThread(), v30, 0LL, 0LL);
  }
  return *a6 != 0;
}
