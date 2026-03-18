/*
 * XREFs of CcFlushCachePriv @ 0x140040060
 * Callers:
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14012EC1C (CcFlushCacheToLsn.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400F1EC4 (CcReleaseByteRangeFromWrite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     CcGetVirtualAddressIfMapped @ 0x140113B48 (CcGetVirtualAddressIfMapped.c)
 *     CcPerfLogFlushCache @ 0x140126F18 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401288B4 (CcPerfLogFlushSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 *     CcSerializeWithLazyWriter @ 0x1401DD344 (CcSerializeWithLazyWriter.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, LARGE_INTEGER *a2, unsigned int a3, __int64 a4, char a5, char *a6)
{
  __int64 v7; // rsi
  int v8; // r12d
  int v9; // r14d
  __int64 v10; // rbx
  char *v11; // r13
  int v12; // ecx
  KIRQL v13; // al
  signed __int64 v14; // rdx
  signed __int64 *v15; // r8
  __int64 v16; // r15
  KIRQL v17; // di
  int v18; // eax
  __int64 v19; // r9
  int v20; // eax
  int v21; // r9d
  int v22; // r14d
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rdi
  bool v30; // di
  char v31; // al
  char v32; // al
  unsigned int v33; // r8d
  signed __int64 *v34; // rdx
  int v35; // r13d
  unsigned int v36; // esi
  unsigned int v37; // edi
  unsigned __int64 v38; // r14
  void *VirtualAddressIfMapped; // rax
  int v40; // r9d
  unsigned int v41; // ecx
  bool v42; // al
  __int64 v43; // rdx
  struct _KEVENT *v44; // rcx
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // esi
  KIRQL v48; // al
  char v49; // al
  bool v50; // cf
  unsigned int v51; // r12d
  __int64 v52; // r8
  unsigned int v53; // edi
  signed __int64 v54; // rax
  signed __int64 v55; // rtt
  int v56; // r9d
  signed __int64 v57; // rax
  int v58; // ecx
  int v59; // edi
  int v60; // eax
  unsigned int v61; // esi
  KIRQL v62; // al
  int v63; // ecx
  __int64 v64; // r8
  unsigned int v65; // edi
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  KIRQL v68; // al
  KIRQL v69; // al
  bool v70; // zf
  KIRQL v71; // bl
  int v72; // ecx
  __int64 *v73; // rdx
  __int64 *v74; // rax
  __int64 **v75; // rcx
  __int64 **v76; // rdx
  __int64 *v77; // rax
  __int64 *v78; // rdx
  __int64 **v79; // rcx
  __int64 **v80; // rdx
  char v81; // dl
  char v82; // cl
  bool v83; // r8
  __int64 *v84; // rdx
  __int64 *v85; // rax
  __int64 **v86; // rcx
  __int64 **v87; // rdx
  __int64 *v88; // rax
  __int64 *v89; // rdx
  __int64 **v90; // rcx
  __int64 **v91; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-99h]
  int v93; // [rsp+28h] [rbp-91h]
  int v94; // [rsp+28h] [rbp-91h]
  int v95; // [rsp+38h] [rbp-81h]
  char v96; // [rsp+40h] [rbp-79h]
  int v97; // [rsp+44h] [rbp-75h]
  unsigned int Length; // [rsp+48h] [rbp-71h] BYREF
  int Length_4; // [rsp+4Ch] [rbp-6Dh]
  int v100; // [rsp+50h] [rbp-69h]
  int v101; // [rsp+54h] [rbp-65h]
  unsigned int v102; // [rsp+58h] [rbp-61h] BYREF
  int v103; // [rsp+5Ch] [rbp-5Dh]
  unsigned int v104; // [rsp+60h] [rbp-59h]
  signed __int64 v105; // [rsp+68h] [rbp-51h] BYREF
  __int64 v106; // [rsp+70h] [rbp-49h]
  _QWORD v107[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v108; // [rsp+88h] [rbp-31h] BYREF
  signed __int64 v109; // [rsp+90h] [rbp-29h] BYREF
  char *v110; // [rsp+98h] [rbp-21h]
  __int64 v111; // [rsp+A0h] [rbp-19h] BYREF
  char v112; // [rsp+A8h] [rbp-11h] BYREF
  int v113; // [rsp+110h] [rbp+57h]
  unsigned __int64 v114; // [rsp+118h] [rbp+5Fh]
  int v116; // [rsp+128h] [rbp+6Fh]

  v116 = a4;
  v114 = (unsigned __int64)a2;
  v113 = a1;
  v97 = 0;
  v7 = 0LL;
  v96 = 0;
  v8 = 0;
  v104 = 0;
  v9 = 0;
  v101 = 0;
  v103 = 0;
  v100 = 0;
  Length_4 = 0;
  v108 = 0LL;
  v106 = 0LL;
  if ( a4 && a2 && a2 != (LARGE_INTEGER *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x1588uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = 0LL;
  v11 = &v112;
  if ( a6 )
    v11 = a6;
  v110 = v11;
  *(_DWORD *)v11 = 0;
  if ( a2 == (LARGE_INTEGER *)&CcNoDelay )
  {
    v8 = 1;
    a2 = 0LL;
    v106 = *((_QWORD *)v11 + 1);
    v103 = 1;
    v114 = 0LL;
    *(_DWORD *)v11 = -2147483626;
  }
  else
  {
    v12 = 1;
    if ( a5 )
      v12 = 17;
    Length_4 = v12;
  }
  if ( a2 == &CcFlushForImageSection )
  {
    v96 = 1;
    v114 = 0LL;
  }
  *((_QWORD *)v11 + 1) = 0LL;
  v13 = KeAcquireQueuedSpinLock(5uLL);
  v16 = *(_QWORD *)(a1 + 8);
  v17 = v13;
  if ( !v16 )
    goto LABEL_27;
  v18 = *(_DWORD *)(v16 + 152);
  v15 = (signed __int64 *)v114;
  if ( (v18 & 0x2000) != 0 )
  {
    if ( (v114 & 1) == 0 )
      goto LABEL_33;
    v15 = (signed __int64 *)(v114 ^ 1);
    v114 ^= 1uLL;
  }
  if ( !v8 )
  {
    if ( !v15 )
      goto LABEL_25;
    v14 = *(_QWORD *)(v16 + 32);
    if ( *v15 < v14 )
    {
      v19 = a3;
      if ( *v15 + a3 <= v14 )
      {
LABEL_26:
        ++*(_DWORD *)(v16 + 516);
        goto LABEL_28;
      }
      a3 = v14 - *(_DWORD *)v15;
LABEL_25:
      v19 = a3;
      goto LABEL_26;
    }
LABEL_33:
    KeReleaseQueuedSpinLock(5uLL, v17);
    return;
  }
  if ( (v18 & 0x10000) == 0 )
  {
LABEL_27:
    v19 = a3;
    goto LABEL_28;
  }
  v19 = a3;
  v100 = 1;
  if ( *(_DWORD *)(v16 + 516) )
    v9 = 1;
LABEL_28:
  if ( v114 && !(_DWORD)v19 )
  {
    if ( v16 )
    {
      if ( !v8 )
        --*(_DWORD *)(v16 + 516);
    }
    goto LABEL_33;
  }
  if ( v96 )
  {
    if ( !v16 )
      goto LABEL_41;
    if ( *(_DWORD *)(v16 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(v16, v14, v15, v19) )
    {
      --*(_DWORD *)(v16 + 516);
      KeReleaseQueuedSpinLock(5uLL, v17);
      v20 = -1073741740;
      goto LABEL_221;
    }
  }
  if ( v16 )
  {
    ++*(_DWORD *)(v16 + 4);
    v7 = *(_QWORD *)((*(_QWORD *)(v16 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_41:
  KeReleaseQueuedSpinLock(5uLL, v17);
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogFlushCache(v106, v16, v114, a3, v8 == 1, v100 == 1, v9 == 1);
  if ( !v8 )
  {
    if ( !v16 )
      goto LABEL_55;
    if ( (*(_DWORD *)(v16 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(v16);
  }
  if ( (!v16
     || (*(_BYTE *)(v7 + 6) & 0x10) != 0 && (*(_BYTE *)(v7 + 4) & 0x20) != 0
     || (*(_DWORD *)(v16 + 152) & 0x20000) != 0)
    && !v8
    || v9 )
  {
    goto LABEL_55;
  }
  if ( !v16 )
    return;
  if ( (*(_DWORD *)(v16 + 152) & 0x4000000) != 0 )
  {
LABEL_55:
    v22 = a3;
    if ( (xmmword_1403D1290 & 0x20000) != 0 )
      CcPerfLogFlushSection(v106, v16, v114, a3, Length_4);
    if ( v16 )
      CcUnmapVacbArray(v16, v114, a3, 0, 0);
    v23 = MmFlushSection(v113, v114, a3, v21, (__int64)v11, Length_4);
    if ( v23 >= 0 )
      goto LABEL_67;
    if ( v8 )
    {
      if ( *(_DWORD *)v11 != -2147483626 )
      {
        v24 = 0;
        if ( *(int *)v11 < 0 )
          v24 = *(_DWORD *)v11;
        v97 = v24;
        goto LABEL_71;
      }
    }
    else if ( *(_DWORD *)v11 )
    {
LABEL_67:
      v25 = 0;
      if ( *(int *)v11 < 0 )
        v25 = *(_DWORD *)v11;
      v97 = v25;
      goto LABEL_71;
    }
    *(_DWORD *)v11 = v23;
    goto LABEL_67;
  }
  v22 = a3;
LABEL_71:
  if ( !v16 )
    goto LABEL_220;
  if ( (*(_DWORD *)(v16 + 152) & 0x4000000) != 0 )
    goto LABEL_194;
  if ( v114 )
    v109 = *(_QWORD *)v114;
  v26 = 1;
  if ( v22 )
    v26 = v22;
  Length = v26;
  if ( v8 )
    v10 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  do
  {
LABEL_79:
    v27 = v100;
    if ( !*(_DWORD *)(v16 + 192) && v8 && !v100
      || !*(_QWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 152) & 4) == 0 && !*(_DWORD *)(v16 + 112)
      || v101 )
    {
      goto LABEL_191;
    }
    if ( !v8 )
      goto LABEL_96;
    v28 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v28, &CcLowPriorityWorkerThreadLock);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v30 = CcLowPriWorkerThread == KeGetCurrentThread();
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
      ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
    KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
    if ( v30 )
      v32 = 1;
    else
LABEL_96:
      v32 = 0;
    if ( !v8 || (v33 = 0, v27) )
      v33 = Length;
    if ( !v8 || v27 )
    {
      v34 = &v109;
      if ( !v114 )
        LODWORD(v34) = 0;
    }
    else
    {
      LODWORD(v34) = 0;
    }
    LOBYTE(v95) = v32;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v16,
                             (_DWORD)v34,
                             v33,
                             v116,
                             (__int64)&v105,
                             (__int64)&Length,
                             (__int64)&v111,
                             v95) )
      goto LABEL_191;
    v35 = v100;
    v36 = 0;
    v37 = Length;
    v38 = Length;
    do
    {
      VirtualAddressIfMapped = (void *)CcGetVirtualAddressIfMapped(v16, v105 + v38 - v37, &v108, &v102);
      if ( VirtualAddressIfMapped )
      {
        v41 = v102;
        if ( v102 > v37 )
          v41 = v37;
        v102 = v41;
        v42 = (MmSetAddressRangeModified(VirtualAddressIfMapped, v41) || v36)
           && (signed __int64)(v38 + v105) < *(_QWORD *)(v16 + 40)
           && (*(_DWORD *)(v16 + 268) & 0xF) != 0
           && v8
           && !v35
           && (*(_DWORD *)(v16 + 152) & 0x200) == 0
           && !CcCoalescingState;
        v36 = v42;
        v43 = *(_QWORD *)(v108 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v108 + 16)) )
        {
          v44 = *(struct _KEVENT **)(v43 + 184);
          if ( v44 )
            KeSetEvent(v44, 0, 0);
        }
      }
      else
      {
        v45 = v102;
        if ( v102 > v37 )
          v45 = v37;
        v102 = v45;
      }
      v37 -= v102;
    }
    while ( v37 );
    __addgsdword(0x5E28u, v36);
    v11 = v110;
    if ( v36 )
    {
      v68 = KeAcquireQueuedSpinLock(5uLL);
      CcPagesSkippedDueToHotSpot += v38 >> 12;
      KeReleaseQueuedSpinLock(5uLL, v68);
      goto LABEL_151;
    }
    if ( (xmmword_1403D1290 & 0x20000) != 0 )
      CcPerfLogFlushSection(v106, v16, (unsigned int)&v105, Length, Length_4);
    v93 = Length_4;
    *(_DWORD *)v11 = v8 != 0 ? 0x80000016 : 0;
    v46 = MmFlushSection(v113, (unsigned int)&v105, v38, v40, (__int64)v11, v93);
    if ( v46 >= 0 )
      goto LABEL_136;
    if ( v8 )
    {
      if ( *(_DWORD *)v11 != -2147483626 )
        goto LABEL_136;
LABEL_135:
      *(_DWORD *)v11 = v46;
      goto LABEL_136;
    }
    if ( !*(_DWORD *)v11 )
      goto LABEL_135;
LABEL_136:
    v47 = *(_DWORD *)v11;
    if ( *(int *)v11 >= 0 )
    {
      if ( (*(_DWORD *)(v16 + 152) & 0x400) == 0 )
      {
        v48 = KeAcquireQueuedSpinLock(5uLL);
        *(_DWORD *)(v16 + 152) |= 0x400u;
        KeReleaseQueuedSpinLock(5uLL, v48);
      }
      if ( v8 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (Length + 4095) >> 12);
        v49 = 0;
      }
      else
      {
LABEL_176:
        v49 = 0;
      }
      goto LABEL_152;
    }
    v50 = *(_DWORD *)(v16 + 4) == 0;
    v51 = Length;
    v107[0] = v105;
    if ( v50 )
      KeBugCheckEx(0x34u, 0x1349uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v52 = ObFastReferenceObject(v16 + 96);
    if ( !v52 )
      v52 = CcSlowReferenceSharedCacheMapFileObject(v16);
    v53 = *(_DWORD *)(*(_QWORD *)(v52 + 8) + 52LL) & 0x10;
    _m_prefetchw((const void *)(v16 + 96));
    v54 = *(_QWORD *)(v16 + 96);
    if ( (v52 ^ (unsigned __int64)v54) >= 0xF )
    {
LABEL_147:
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v52, 0x746C6644u);
    }
    else
    {
      while ( 1 )
      {
        v55 = v54;
        v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 96), v54 + 1, v54);
        if ( v55 == v54 )
          break;
        if ( (v52 ^ (unsigned __int64)v54) >= 0xF )
          goto LABEL_147;
      }
    }
    if ( !(unsigned int)MmIsWriteErrorFatal(1LL, v53, v47) )
    {
      v101 = 1;
      goto LABEL_150;
    }
    do
    {
      if ( (xmmword_1403D1290 & 0x20000) != 0 )
        CcPerfLogFlushSection(v106, v16, (unsigned int)v107, 4096, Length_4);
      v59 = v103;
      v94 = Length_4;
      *(_DWORD *)v11 = v103 != 0 ? 0x80000016 : 0;
      v60 = MmFlushSection(v113, (unsigned int)v107, 4096, v56, (__int64)v11, v94);
      if ( v60 < 0 )
      {
        if ( !v59 )
        {
          if ( *(_DWORD *)v11 )
            goto LABEL_170;
LABEL_169:
          *(_DWORD *)v11 = v60;
          goto LABEL_170;
        }
        if ( *(_DWORD *)v11 == -2147483626 )
          goto LABEL_169;
      }
LABEL_170:
      v61 = *(_DWORD *)v11;
      if ( *(int *)v11 >= 0 )
      {
        v62 = KeAcquireQueuedSpinLock(5uLL);
        *(_DWORD *)(v16 + 152) |= 0x400u;
        KeReleaseQueuedSpinLock(5uLL, v62);
LABEL_172:
        v63 = v101;
        goto LABEL_173;
      }
      if ( !*(_DWORD *)(v16 + 4) )
        KeBugCheckEx(0x34u, 0x1349uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v64 = ObFastReferenceObject(v16 + 96);
      if ( !v64 )
        v64 = CcSlowReferenceSharedCacheMapFileObject(v16);
      v65 = *(_DWORD *)(*(_QWORD *)(v64 + 8) + 52LL) & 0x10;
      _m_prefetchw((const void *)(v16 + 96));
      v66 = *(_QWORD *)(v16 + 96);
      if ( (v64 ^ (unsigned __int64)v66) >= 0xF )
      {
LABEL_183:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v64, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v67 = v66;
          v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 96), v66 + 1, v66);
          if ( v67 == v66 )
            break;
          if ( (v64 ^ (unsigned __int64)v66) >= 0xF )
            goto LABEL_183;
        }
      }
      if ( (unsigned int)MmIsWriteErrorFatal(1LL, v65, v61) )
      {
        if ( !v97 )
          v97 = *(_DWORD *)v11;
        goto LABEL_172;
      }
      v63 = 1;
      v101 = 1;
      if ( !v97 )
        v97 = *(_DWORD *)v11;
LABEL_173:
      v107[0] += 4096LL;
      v51 -= 4096;
    }
    while ( v51 );
    if ( !v63 )
    {
      v8 = v103;
      goto LABEL_176;
    }
LABEL_150:
    v8 = v103;
LABEL_151:
    v49 = 1;
LABEL_152:
    LOBYTE(BugCheckParameter4) = v49;
    CcReleaseByteRangeFromWrite(v16, &v105, Length, v111, BugCheckParameter4);
    v104 += Length;
    if ( v104 >= 0x40000 && CcDeferredWrites.Flink != &CcDeferredWrites )
    {
      CcPostDeferredWrites(&CcDeferredWrites);
      v104 = 0;
    }
    if ( v8 && !v100 && CcDeferredWrites.Flink == &CcDeferredWrites && MEMORY[0xFFFFF78000000320] > v10 )
    {
      *((_QWORD *)v11 + 1) = 35422LL;
      goto LABEL_191;
    }
  }
  while ( !v114 );
  v57 = v38 + v105;
  v105 = v57;
  if ( *(_QWORD *)v114 + a3 > v57 )
  {
    v58 = *(_DWORD *)v114 - v57;
    v109 = v57;
    Length = a3 + v58;
    goto LABEL_79;
  }
LABEL_191:
  if ( v104 && CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(&CcDeferredWrites);
LABEL_194:
  v69 = KeAcquireQueuedSpinLock(5uLL);
  v70 = (*(_DWORD *)(v16 + 4))-- == 1;
  v71 = v69;
  if ( v70 )
  {
    byte_14034E041 = 1;
    v72 = *(_DWORD *)(v16 + 152);
    if ( (v72 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(v16 + 112) )
      {
        if ( (v72 & 0x3000000) != 0 )
        {
          v73 = *(__int64 **)(v16 + 120);
          v74 = (__int64 *)(v16 + 120);
          v75 = *(__int64 ***)(v16 + 128);
          if ( v73[1] != v16 + 120 || *v75 != v74 )
            __fastfail(3u);
          *v75 = v73;
          v73[1] = (__int64)v75;
          v76 = (__int64 **)qword_14034DE38;
          *v74 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v16 + 128) = v76;
          if ( *v76 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v76 = v74;
          qword_14034DE38 = v16 + 120;
        }
        v77 = (__int64 *)(v16 + 136);
        v78 = *(__int64 **)(v16 + 136);
        v79 = *(__int64 ***)(v16 + 144);
        if ( v78[1] != v16 + 136 || *v79 != v77 )
          __fastfail(3u);
        *v79 = v78;
        v78[1] = (__int64)v79;
        v80 = (__int64 **)qword_14034DE68;
        *v77 = (__int64)&CcLazyWriterCursor;
        *(_QWORD *)(v16 + 144) = v80;
        if ( *v80 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v80 = v77;
        qword_14034DE68 = v16 + 136;
      }
      v81 = 1;
      v82 = 1;
      goto LABEL_210;
    }
    if ( !*(_DWORD *)(v16 + 112) && (v72 & 0x20) == 0 )
    {
      v83 = *(_QWORD *)(v16 + 272) != 0LL;
      if ( (v72 & 0x3000000) != 0 )
      {
        v84 = *(__int64 **)(v16 + 120);
        v85 = (__int64 *)(v16 + 120);
        v86 = *(__int64 ***)(v16 + 128);
        if ( v84[1] != v16 + 120 || *v86 != v85 )
          __fastfail(3u);
        *v86 = v84;
        v84[1] = (__int64)v86;
        v87 = (__int64 **)qword_14034DE38;
        *v85 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v16 + 128) = v87;
        if ( *v87 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v87 = v85;
        qword_14034DE38 = v16 + 120;
      }
      v88 = (__int64 *)(v16 + 136);
      v89 = *(__int64 **)(v16 + 136);
      v90 = *(__int64 ***)(v16 + 144);
      if ( v89[1] != v16 + 136 || *v90 != v88 )
        __fastfail(3u);
      *v90 = v89;
      v89[1] = (__int64)v90;
      v91 = (__int64 **)qword_14034DE68;
      *v88 = (__int64)&CcLazyWriterCursor;
      *(_QWORD *)(v16 + 144) = v91;
      if ( *v91 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v91 = v88;
      v82 = v83;
      qword_14034DE68 = v16 + 136;
      v81 = 0;
LABEL_210:
      CcScheduleLazyWriteScan(v82, v81);
    }
  }
  if ( !v8 )
    --*(_DWORD *)(v16 + 516);
  if ( v96 && *(int *)v11 >= 0 && v97 >= 0 && (*(_DWORD *)(v16 + 112) || *(_DWORD *)(v16 + 516)) )
    v97 = -1073741740;
  KeReleaseQueuedSpinLock(5uLL, v71);
LABEL_220:
  v20 = v97;
  if ( v97 < 0 )
LABEL_221:
    *(_DWORD *)v11 = v20;
}
