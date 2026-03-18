/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x140075D20
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1400E3EC4 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcFindBitmapRangeToClean @ 0x140076AD0 (CcFindBitmapRangeToClean.c)
 *     CcFindBcb @ 0x140076B00 (CcFindBcb.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
  __int64 v10; // r12
  _DWORD *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  int v24; // esi
  unsigned int v25; // r8d
  unsigned __int64 v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  KIRQL v30; // bl
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 *v33; // rdx
  __int64 **v34; // rcx
  __int64 **v35; // rcx
  __int64 *v36; // rax
  __int64 *v37; // rdx
  __int64 **v38; // rcx
  __int64 **v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r12
  unsigned __int8 v42; // bl
  unsigned __int32 v43; // eax
  __int64 v44; // rdx
  __int64 v46; // rbx
  __int64 v47; // r13
  __int64 *v48; // rdx
  char Bcb; // al
  __int64 v50; // rcx
  __int64 v51; // r13
  _QWORD *v52; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned __int8 v56; // di
  unsigned __int32 v57; // eax
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int32 v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned int v66; // ecx
  __int64 BitmapRangeToClean; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // r13
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int8 v73; // r13
  unsigned __int32 v74; // eax
  __int64 v75; // r9
  __int64 v76; // r13
  __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  __int64 v79; // r9
  unsigned __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // r13
  __int64 v84; // rcx
  __int64 v85; // r9
  volatile signed __int32 *BugCheckParameter2; // [rsp+50h] [rbp-C8h]
  __int64 v87; // [rsp+58h] [rbp-C0h]
  __int64 v88; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 v89; // [rsp+68h] [rbp-B0h]
  int v90; // [rsp+6Ch] [rbp-ACh]
  __int64 v91; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+80h] [rbp-98h]
  __int64 v94; // [rsp+88h] [rbp-90h]
  __int64 v95; // [rsp+90h] [rbp-88h]
  __int64 v96; // [rsp+98h] [rbp-80h]
  __int64 v97[10]; // [rsp+C8h] [rbp-50h] BYREF

  v96 = 0LL;
  v90 = 0;
  v10 = 0LL;
  v92 = 0LL;
  v11 = 0LL;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  BugCheckParameter2 = (volatile signed __int32 *)(a1 + 280);
  v13 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, (__int64)a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v15 = (ULONG_PTR)BugCheckParameter2;
  if ( !_interlockedbittestandreset(BugCheckParameter2, 0) )
  {
    ExpAcquireFastMutexContended((ULONG_PTR)BugCheckParameter2);
    v15 = a1 + 280;
  }
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v15 + 48) = CurrentIrql;
  v16 = a1;
  v17 = *(_QWORD *)(a1 + 160);
  v91 = v17;
  if ( !v17 || !*(_DWORD *)(v17 + 8) || !*(_DWORD *)(v17 + 4) && !a3 )
  {
    v87 = (__int64)a5;
    v93 = a8;
LABEL_66:
    v24 = a8;
    goto LABEL_67;
  }
  if ( a2 )
  {
    v18 = *a2 >> 12;
    v87 = v18;
    v12 = (a3 + *a2 - 1) >> 12;
    BitmapRangeToClean = CcFindBitmapRangeToClean(v17, v18);
    v10 = BitmapRangeToClean;
    v21 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v12 < v21 + *(unsigned int *)(BitmapRangeToClean + 24)
      || (v68 = *(unsigned int *)(BitmapRangeToClean + 28), v18 > (__int64)(v68 + v21)) )
    {
      v93 = a8;
      goto LABEL_66;
    }
    v22 = *(_QWORD *)(v10 + 40);
    if ( v12 < (__int64)(v68 + v21) )
    {
      v92 = v22 + 4 * ((unsigned __int64)(unsigned int)(v12 - v21) >> 5);
      goto LABEL_19;
    }
    v23 = v22 + 4 * (v68 >> 5);
  }
  else
  {
    v18 = 0LL;
    v87 = 0LL;
    if ( !a3 )
    {
      v18 = *(_QWORD *)(v17 + 32);
      v87 = v18;
    }
    v10 = CcFindBitmapRangeToClean(v17, v18);
    v20 = *(unsigned int *)(v10 + 28);
    v21 = *(_QWORD *)(v10 + 16);
    if ( v18 > (__int64)(v20 + v21) )
    {
      v18 = v21 + *(unsigned int *)(v10 + 24);
      v87 = v18;
    }
    v22 = *(_QWORD *)(v10 + 40);
    v23 = v22 + 4 * (v20 >> 5);
  }
  v92 = v23;
LABEL_19:
  if ( v18 < v21 + *(unsigned int *)(v10 + 24) )
  {
    v18 = v21 + *(unsigned int *)(v10 + 24);
    v87 = v18;
  }
  v93 = (unsigned int)(v18 - *(_DWORD *)(v10 + 16));
  v11 = (_DWORD *)(v22 + 4 * (v93 >> 5));
  v24 = -1 << (v18 % 32);
  if ( (v24 & *v11) == 0 )
  {
    v24 = -1;
    v18 &= 0xFFFFFFFFFFFFFFE0uLL;
    v72 = v92;
    do
    {
      ++v11;
      v18 += 32LL;
      v87 = v18;
      if ( (unsigned __int64)v11 > v72 )
      {
        if ( !a3 )
          *(_DWORD *)(v10 + 28) = v93 - 1;
        do
        {
          v10 = *(_QWORD *)v10;
          if ( v10 == v19 + 16 )
          {
            if ( a3 )
              goto LABEL_67;
            v10 = *(_QWORD *)v10;
          }
        }
        while ( !*(_DWORD *)(v10 + 32) );
        v78 = *(unsigned int *)(v10 + 24);
        v79 = *(_QWORD *)(v10 + 16);
        if ( v12 < (__int64)(v79 + v78) )
          goto LABEL_67;
        v80 = *(unsigned int *)(v10 + 28);
        if ( v18 > (__int64)(v80 + v79) )
          goto LABEL_67;
        v81 = *(_QWORD *)(v10 + 40);
        v11 = (_DWORD *)(v81 + 4 * (v78 >> 5));
        v72 = v81 + 4 * (v80 >> 5);
        v92 = v72;
        v18 = v79 + ((unsigned int)v78 & 0xFFFFFFE0);
        v87 = v18;
        LODWORD(v93) = v78;
        v19 = v91;
      }
    }
    while ( !*v11 );
  }
  v24 = -v24;
  if ( (*v11 & v24) == 0 )
  {
    do
    {
      v24 *= 2;
      ++v18;
    }
    while ( (*v11 & v24) == 0 );
    v87 = v18;
  }
  if ( !a2 )
  {
LABEL_24:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v85 = *a2;
      else
        v85 = 0LL;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v85,
        a3,
        (const void *)v16,
        v18,
        (const void *)v10,
        *(_DWORD *)(v10 + 32));
      v19 = v91;
    }
    if ( (v24 & *v11) != 0 )
    {
      v25 = CcMaxLazyWritePages;
      v26 = v92;
      do
      {
        if ( a2 && v18 + *a6 >= (unsigned int)((*a2 + a3 + 4095LL) >> 12) )
          break;
        if ( (unsigned __int64)v11 > *(_QWORD *)(v10 + 40) + 4 * ((unsigned __int64)*(unsigned int *)(v10 + 28) >> 5) )
          KeBugCheckEx(0x34u, 0x1121uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        if ( !a2 && *a6 >= v25 )
          break;
        *v11 -= v24;
        ++*a6;
        v24 *= 2;
        if ( !v24 )
        {
          ++v11;
          v24 = 1;
          if ( (unsigned __int64)v11 > v26 )
            break;
        }
      }
      while ( (v24 & *v11) != 0 );
    }
    v27 = *a6;
    v28 = *(_DWORD *)(v19 + 4);
    if ( *a6 < v28 )
      *(_DWORD *)(v19 + 4) = v28 - v27;
    else
      *(_DWORD *)(v19 + 4) = 0;
    v29 = *(_DWORD *)(v19 + 8);
    if ( v29 < v27 )
      KeBugCheckEx(0x34u, 0x1150uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v19 + 8) = v29 - v27;
    *(_DWORD *)(v10 + 32) -= v27;
    v30 = KeAcquireQueuedSpinLock(5uLL);
    v31 = *a6;
    CcGlobalDirtyPageStatistics -= v31;
    if ( (_DWORD)v31 == -1 )
      KeBugCheckEx(0x34u, 0x1064uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= v31;
    *(_QWORD *)(*(_QWORD *)(a1 + 504) + 32LL) -= v31;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) -= v31;
    if ( CcPagesYetToWrite <= (unsigned int)v31 )
      CcPagesYetToWrite = 0;
    else
      CcPagesYetToWrite -= v31;
    if ( !*(_DWORD *)(a1 + 112) )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) )
      {
        DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
        __debugbreak();
      }
      if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
      {
        v32 = (__int64 *)(a1 + 120);
        v33 = *(__int64 **)(a1 + 120);
        v34 = *(__int64 ***)(a1 + 128);
        if ( v33[1] != a1 + 120 || *v34 != v32 )
          __fastfail(3u);
        *v34 = v33;
        v33[1] = (__int64)v34;
        v35 = (__int64 **)qword_14034DE18;
        *v32 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
        *(_QWORD *)(a1 + 128) = v35;
        if ( *v35 != &CcCleanSharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v35 = v32;
        qword_14034DE18 = a1 + 120;
      }
      v36 = (__int64 *)(a1 + 136);
      v37 = *(__int64 **)(a1 + 136);
      v38 = *(__int64 ***)(a1 + 144);
      if ( v37[1] != a1 + 136 || *v38 != v36 )
        __fastfail(3u);
      *v38 = v37;
      v37[1] = (__int64)v38;
      v39 = (__int64 **)qword_14034DE28;
      *v36 = (__int64)&CcCleanSharedCacheMapList;
      *(_QWORD *)(a1 + 144) = v39;
      if ( *v39 != &CcCleanSharedCacheMapList )
        __fastfail(3u);
      *v39 = v36;
      qword_14034DE28 = a1 + 136;
    }
    KeReleaseQueuedSpinLock(5uLL, v30);
    if ( *(_DWORD *)(v10 + 32) )
    {
      if ( *(_DWORD *)(v10 + 24) == (_DWORD)v93 )
        *(_DWORD *)(v10 + 24) = *a6 + v87 - *(_DWORD *)(v10 + 16);
      v40 = v91;
      if ( !a3 )
      {
        v41 = v87;
        *(_QWORD *)(v91 + 32) = v87 + *a6;
        goto LABEL_55;
      }
    }
    else
    {
      *(_DWORD *)(v10 + 24) = -1;
      *(_DWORD *)(v10 + 28) = 0;
      v40 = v91;
      *(_QWORD *)(v91 + 32) = *(_QWORD *)(v10 + 16) + 0x2000LL;
    }
    v41 = v87;
LABEL_55:
    if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(v40 + 4);
    *(_QWORD *)(a1 + 288) = 0LL;
    v42 = *(_BYTE *)(a1 + 328);
    v43 = _InterlockedCompareExchange(BugCheckParameter2, 1, 0);
    if ( v43 )
      ExpReleaseFastMutexContended(BugCheckParameter2, v43);
    __writecr8(v42);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    *a6 <<= 12;
    *a5 = v41 << 12;
    *a7 = 0LL;
    goto LABEL_60;
  }
  if ( v18 < (a3 + 4095LL + *a2) >> 12 )
  {
    if ( *(_QWORD *)(v16 + 16) == v16 + 16 )
      goto LABEL_24;
    v90 = 1;
  }
LABEL_67:
  v95 = v16 + 16;
  v46 = v96;
  while ( 2 )
  {
    v47 = *(_QWORD *)(v16 + 24) - 16LL;
    v88 = v47;
    if ( (*(_DWORD *)(v16 + 152) & 0x200) != 0 )
    {
      v48 = a2 ? a2 : (__int64 *)(v16 + 200);
      if ( *v48 )
      {
        v97[0] = *v48 + 4096;
        Bcb = CcFindBcb(v16, v48, v97, &v88);
        v16 = a1;
        v15 = a1 + 280;
        if ( Bcb )
        {
          v47 = v88;
        }
        else
        {
          v47 = *(_QWORD *)(v88 + 24) - 16LL;
          v88 = v47;
        }
      }
    }
    v50 = v95;
    if ( v47 + 16 == v95 )
    {
LABEL_79:
      v52 = a5;
      goto LABEL_80;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v47 != 765 )
        goto LABEL_76;
      if ( (*(_DWORD *)(v16 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v47 + 48) > *a4 )
      {
        v47 = *(_QWORD *)(v47 + 24) - 16LL;
        ++CcDbgLsnLargerThanHint;
        goto LABEL_78;
      }
      if ( a2 && *a2 + a3 <= *(_QWORD *)(v47 + 8) )
        goto LABEL_79;
      v58 = *a6;
      if ( (_DWORD)v58 )
      {
        v52 = a5;
        if ( !*(_BYTE *)(v47 + 2) )
          goto LABEL_80;
        v59 = *(_QWORD *)(v47 + 8);
        if ( v59 != *a5 + v58 || *(_DWORD *)(v47 + 64) || (v59 & 0x1FFFFFF) == 0 )
          goto LABEL_80;
        goto LABEL_105;
      }
      if ( !*(_BYTE *)(v47 + 2) )
        goto LABEL_76;
      if ( a2 )
        break;
      if ( *(_QWORD *)(v47 + 8) >= *(_QWORD *)(v16 + 200) )
        goto LABEL_104;
LABEL_76:
      v51 = *(_QWORD *)(v47 + 24);
LABEL_77:
      v47 = v51 - 16;
LABEL_78:
      v88 = v47;
      if ( v47 + 16 == v50 )
        goto LABEL_79;
    }
    if ( *a2 >= *(_QWORD *)(v47 + 32) )
      goto LABEL_76;
LABEL_104:
    if ( v90 && v87 <= (unsigned int)(*(__int64 *)(v47 + 8) >> 12) )
      goto LABEL_191;
LABEL_105:
    ++*(_DWORD *)(v47 + 64);
    *(_QWORD *)(v15 + 8) = 0LL;
    v89 = *(_BYTE *)(v15 + 48);
    v60 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v60 )
    {
      ExpReleaseFastMutexContended(v15, v60);
      v15 = a1 + 280;
    }
    __writecr8(v89);
    KeAbPostRelease(v15);
    if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
    {
      LOBYTE(v61) = 1;
      CcUnpinFileDataEx(v88, v61, 2LL);
      v70 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, v69);
      v71 = KeGetCurrentIrql();
      v94 = v71;
      __writecr8(1uLL);
      v15 = a1 + 280;
      if ( !_interlockedbittestandreset(BugCheckParameter2, 0) )
      {
        ExpAcquireFastMutexContended((ULONG_PTR)BugCheckParameter2);
        LOBYTE(v71) = v94;
        v15 = a1 + 280;
      }
      if ( v70 )
        *(_BYTE *)(v70 + 26) |= 1u;
      *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v15 + 48) = (unsigned __int8)v71;
      v16 = a1;
      goto LABEL_150;
    }
    if ( ExAcquireResourceExclusiveLite((PERESOURCE)(v88 + 72), *a6 == 0) )
    {
      v64 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, v63);
      v96 = v64;
      v65 = KeGetCurrentIrql();
      v94 = v65;
      __writecr8(1uLL);
      v15 = a1 + 280;
      if ( !_interlockedbittestandreset(BugCheckParameter2, 0) )
      {
        ExpAcquireFastMutexContended((ULONG_PTR)BugCheckParameter2);
        v64 = v96;
        LOBYTE(v65) = v94;
        v15 = a1 + 280;
      }
      if ( v64 )
        *(_BYTE *)(v64 + 26) |= 1u;
      *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v15 + 48) = (unsigned __int8)v65;
      if ( !*(_BYTE *)(v47 + 2) )
        goto LABEL_166;
      v16 = a1;
      if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 && a4 )
      {
        v47 = v88;
        if ( *(_QWORD *)(v88 + 48) > *a4 )
        {
          ++CcDbgLsnLargerThanHint;
LABEL_166:
          *(_QWORD *)(v15 + 8) = 0LL;
          v73 = *(_BYTE *)(v15 + 48);
          v74 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
          if ( v74 )
          {
            ExpReleaseFastMutexContended(v15, v74);
            v15 = a1 + 280;
          }
          __writecr8(v73);
          KeAbPostRelease(v15);
          CcUnpinFileDataEx(v88, 0LL, 0LL);
          v76 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, v75);
          v77 = KeGetCurrentIrql();
          v94 = v77;
          __writecr8(1uLL);
          v15 = a1 + 280;
          if ( !_interlockedbittestandreset(BugCheckParameter2, 0) )
          {
            ExpAcquireFastMutexContended((ULONG_PTR)BugCheckParameter2);
            LOBYTE(v77) = v94;
            v15 = a1 + 280;
          }
          if ( v76 )
            *(_BYTE *)(v76 + 26) |= 1u;
          *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v15 + 48) = (unsigned __int8)v77;
          v16 = a1;
          if ( *a6 )
            goto LABEL_79;
          v51 = *(_QWORD *)(a1 + 24);
          v50 = v95;
          goto LABEL_77;
        }
        goto LABEL_117;
      }
LABEL_150:
      v47 = v88;
LABEL_117:
      v90 = 0;
      v66 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v47 + 8);
      *a7 = v47;
      *a6 = *(_DWORD *)(v47 + 4) + v66;
      if ( (*(_DWORD *)(v16 + 152) & 0x3000000) != 0 && *(_QWORD *)(v47 + 48) > v46 )
        v46 = *(_QWORD *)(v47 + 48);
      v50 = v95;
      goto LABEL_76;
    }
    LOBYTE(v62) = 1;
    CcUnpinFileDataEx(v88, v62, 0LL);
    v83 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, v82);
    v84 = KeGetCurrentIrql();
    v94 = v84;
    __writecr8(1uLL);
    v15 = a1 + 280;
    if ( !_interlockedbittestandreset(BugCheckParameter2, 0) )
    {
      ExpAcquireFastMutexContended((ULONG_PTR)BugCheckParameter2);
      LOBYTE(v84) = v94;
      v15 = a1 + 280;
    }
    if ( v83 )
      *(_BYTE *)(v83 + 26) |= 1u;
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 48) = (unsigned __int8)v84;
    v16 = a1;
    v52 = a5;
LABEL_80:
    if ( v90 )
    {
LABEL_191:
      v18 = v87;
      v19 = v91;
      goto LABEL_24;
    }
    if ( *a6 )
    {
      if ( !a2 )
      {
        v53 = *a6;
        *(_QWORD *)(v16 + 200) = *v52 + *a6;
        v54 = v53 >> 12;
        v55 = *(_DWORD *)(v16 + 192);
        if ( v55 <= v54 )
          *(_DWORD *)(v16 + 192) = 0;
        else
          *(_DWORD *)(v16 + 192) = v55 - v54;
      }
    }
    else if ( *(_QWORD *)(v16 + 200) && !a2 )
    {
      *(_QWORD *)(v16 + 200) = 0LL;
      continue;
    }
    break;
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  v56 = *(_BYTE *)(v15 + 48);
  v57 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  if ( v57 )
  {
    ExpReleaseFastMutexContended(v15, v57);
    v15 = a1 + 280;
  }
  __writecr8(v56);
  KeAbPostRelease(v15);
  if ( v46 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 248))(*(_QWORD *)(a1 + 240), v46);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), v46);
  }
LABEL_60:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v44) = 1;
    PsBoostThreadIoEx(KeGetCurrentThread(), v44, 0LL, 0LL);
  }
  return *a6 != 0;
}
