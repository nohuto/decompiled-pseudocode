/*
 * XREFs of CmpBuildHashStackAndLookupCache @ 0x140408290
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     CmpFindKeyNameAtIndex @ 0x140041F60 (CmpFindKeyNameAtIndex.c)
 *     CmpGetConvKeyAtIndex @ 0x140041F90 (CmpGetConvKeyAtIndex.c)
 *     CmpSetConvKeyAtIndex @ 0x140041FB0 (CmpSetConvKeyAtIndex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     CmpAllocateExtraHashInfo @ 0x1400E320C (CmpAllocateExtraHashInfo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpLockTwoKcbsExclusive @ 0x1403DB140 (CmpLockTwoKcbsExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpBuildHashStackAndLookupCache(
        __int64 a1,
        ULONG_PTR *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 *a5,
        ULONG_PTR *a6,
        unsigned int *a7,
        unsigned int *a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 *a12,
        _BYTE *a13,
        _BYTE *a14)
{
  char v14; // r13
  ULONG_PTR v15; // r14
  __int64 v16; // r15
  __int16 *v17; // rsi
  __int128 v18; // xmm0
  char v19; // r11
  unsigned int v20; // ebp
  int v21; // r12d
  int v22; // r15d
  __int16 v23; // si
  unsigned int v24; // r14d
  int v25; // edi
  unsigned __int16 *i; // rbx
  __int16 v27; // bp
  unsigned __int16 v28; // ax
  __int64 *v29; // r10
  _WORD *v30; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rsi
  __int64 *v33; // r12
  __int64 v34; // rdi
  WCHAR *v35; // rbx
  int *v36; // r12
  unsigned __int16 v37; // r14
  WCHAR *v38; // r13
  __int64 v39; // rbp
  WCHAR *v40; // r15
  int v41; // esi
  WCHAR *v42; // rdi
  WCHAR v43; // ax
  int v44; // ecx
  __int64 v45; // rbx
  struct _KTHREAD *v46; // rax
  unsigned __int64 v47; // rtt
  __int64 v48; // r9
  unsigned int v49; // r10d
  unsigned int v50; // r11d
  unsigned int *v51; // r8
  unsigned int v52; // edx
  __int64 *v53; // r13
  BOOLEAN v54; // di
  int v55; // ebx
  ULONG_PTR v56; // r15
  __int64 *v57; // r10
  __int64 *v58; // r10
  _WORD *KeyNameAtIndex; // rax
  WCHAR *v60; // rsi
  char v61; // r15
  char v62; // bp
  char v63; // cl
  WCHAR *v64; // r14
  WCHAR *v65; // r12
  WCHAR *v66; // rax
  WCHAR v67; // bx
  int v68; // edi
  WCHAR v69; // ax
  int v70; // ecx
  __int64 v71; // rcx
  int v72; // edx
  __int64 v73; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // edx
  signed __int32 v76; // ett
  signed __int64 v77; // rcx
  ULONG_PTR v78; // rtt
  unsigned __int64 v79; // rtt
  __int16 v80; // ax
  ULONG_PTR *v81; // rax
  ULONG_PTR v82; // rax
  _DWORD *v83; // r15
  unsigned int v85; // eax
  ULONG_PTR v86; // rbp
  unsigned int v87; // eax
  ULONG_PTR v88; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  unsigned __int64 *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdi
  ULONG_PTR v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdi
  unsigned int ConvKeyAtIndex; // eax
  PSLIST_ENTRY ExtraHashInfo; // rax
  __int64 v98; // rax
  char v99; // al
  char v100; // [rsp+70h] [rbp-1E8h]
  BOOLEAN v101; // [rsp+71h] [rbp-1E7h]
  unsigned int v102; // [rsp+74h] [rbp-1E4h]
  unsigned int v103; // [rsp+78h] [rbp-1E0h]
  signed int v104; // [rsp+7Ch] [rbp-1DCh]
  unsigned __int16 *v105; // [rsp+80h] [rbp-1D8h]
  ULONG_PTR v106; // [rsp+88h] [rbp-1D0h]
  unsigned int v107; // [rsp+90h] [rbp-1C8h]
  ULONG_PTR *v108; // [rsp+98h] [rbp-1C0h]
  unsigned int v109; // [rsp+A0h] [rbp-1B8h]
  __int64 v110; // [rsp+A8h] [rbp-1B0h]
  ULONG_PTR v111; // [rsp+B8h] [rbp-1A0h]
  WCHAR *v112; // [rsp+C8h] [rbp-190h]
  unsigned int *v113; // [rsp+D0h] [rbp-188h]
  __int64 v114; // [rsp+F8h] [rbp-160h]
  int v115; // [rsp+100h] [rbp-158h]
  __int64 v116; // [rsp+108h] [rbp-150h]
  __int64 *v117; // [rsp+110h] [rbp-148h]
  __int128 v118; // [rsp+138h] [rbp-120h]
  _BYTE v119[24]; // [rsp+168h] [rbp-F0h] BYREF
  _QWORD v120[16]; // [rsp+180h] [rbp-D8h] BYREF

  v14 = 0;
  v15 = *a2;
  v16 = a1;
  v17 = (__int16 *)a4;
  v117 = a3;
  v108 = a2;
  v114 = a1;
  v105 = (unsigned __int16 *)a4;
  memset(v120, 0, sizeof(v120));
  v18 = *(_OWORD *)a4;
  v19 = 0;
  v102 = 0;
  v100 = 0;
  v20 = 0;
  v104 = 0;
  v106 = 0LL;
  v111 = v15;
  *a14 = 0;
  if ( !a9 || (a1 = *(_QWORD *)(a9 + 80), (v116 = a1) == 0) )
  {
    v116 = *(_QWORD *)(v16 + 56);
    goto LABEL_4;
  }
  v98 = *(_QWORD *)(v16 + 56);
  if ( v98 && a1 != v98 )
  {
    v55 = -1072103422;
    goto LABEL_186;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_4:
      v21 = *(_DWORD *)(v15 + 16);
      v22 = 0;
      v23 = *v17;
      v24 = 0;
      v25 = v21;
      if ( v23 )
      {
        for ( i = (unsigned __int16 *)*((_QWORD *)v105 + 1); *i == 92; v23 -= 2 )
          ++i;
        v120[1] = i;
        v27 = 0;
        if ( !v23 )
          goto LABEL_14;
        do
        {
          v28 = *i;
          if ( *i == 92 )
          {
            v57 = a12;
            if ( v24 < 0x20 )
            {
              CmpSetConvKeyAtIndex(a11, *a12, v24, v25);
              KeyNameAtIndex = (_WORD *)CmpFindKeyNameAtIndex((__int64)v120, *v58, v24++);
              *KeyNameAtIndex = v27;
              v27 = 0;
            }
            ++v22;
            if ( v24 == 8 && !*v57 )
            {
              ExtraHashInfo = CmpAllocateExtraHashInfo();
              v57 = a12;
              *a12 = (__int64)ExtraHashInfo;
              if ( !ExtraHashInfo )
              {
                v55 = -1073741801;
                goto LABEL_111;
              }
            }
            for ( ; *i == 92; v23 -= 2 )
              ++i;
            if ( v24 < 0x20 )
              *(_QWORD *)(CmpFindKeyNameAtIndex((__int64)v120, *v57, v24) + 8) = i;
          }
          else
          {
            if ( v28 < 0x61u )
            {
              a1 = v28;
            }
            else if ( v28 > 0x7Au )
            {
              a3 = *(__int64 **)((char *)&NlsMbCodePageTag + 7);
              a4 = v28 & 0xF;
              a2 = (ULONG_PTR *)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (unsigned int)a4 + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v28 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v28 >> 8)]]];
              LOWORD(a2) = v28 + (_WORD)a2;
              a1 = (unsigned __int16)a2;
            }
            else
            {
              a1 = (unsigned int)v28 - 32;
            }
            ++i;
            v23 -= 2;
            v25 = a1 + 37 * v25;
            v27 += 2;
          }
        }
        while ( v23 );
        v19 = v100;
        if ( v24 < 0x20 )
        {
LABEL_14:
          CmpSetConvKeyAtIndex(a11, *a12, v24, v25);
          v30 = (_WORD *)CmpFindKeyNameAtIndex((__int64)v120, *v29, v24++);
          *v30 = v27;
        }
        v20 = v22 + 1;
        v102 = v22 + 1;
      }
      *a7 = v24;
      if ( !v19 )
      {
        if ( !CmpPuntBoot )
        {
          PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
        }
        v19 = 1;
        v100 = 1;
      }
      if ( v20 > 0x20 )
      {
        v55 = -1073741562;
        goto LABEL_111;
      }
      v15 = v111;
      if ( *(_DWORD *)(v111 + 16) == v21 )
        break;
      v17 = (__int16 *)v105;
    }
    v32 = v114;
    if ( (*(_DWORD *)(*(_QWORD *)(v114 + 8) + 4LL) & 0x20000) != 0 )
    {
      v55 = -1073741444;
      if ( (*(_BYTE *)(v114 + 48) & 1) != 0 )
        v55 = -1073740763;
LABEL_111:
      if ( !v100 )
        goto LABEL_186;
      return (unsigned int)v55;
    }
    v33 = a5;
    a2 = a6;
    v34 = (__int64)v105;
    *a5 = *(_QWORD *)(v111 + 32);
    *(_DWORD *)a6 = *(_DWORD *)(v111 + 40);
    if ( *(_QWORD *)(v111 + 32) != CmpMasterHive )
      goto LABEL_124;
    v35 = (WCHAR *)*((_QWORD *)v105 + 1);
    v36 = (int *)v119;
    v37 = 0;
    v38 = v35;
    LODWORD(v39) = 0;
    v115 = *(_DWORD *)(v111 + 40);
    a1 = 0LL;
    v103 = 0;
    v40 = &v35[(unsigned __int64)*v105 >> 1];
    while ( v40 > v35 )
    {
      do
      {
        if ( *v35 != 92 )
          break;
        ++v35;
        v37 += 2;
      }
      while ( v35 < v40 );
      if ( v35 == v40 )
      {
        if ( !(_DWORD)a1 )
        {
          v56 = v106;
          v55 = -1073741811;
          v14 = 0;
          goto LABEL_101;
        }
        break;
      }
      for ( ; v35 < v40; v37 += 2 )
      {
        if ( *v35 == 92 )
          break;
        ++v35;
      }
      v41 = v39;
      v42 = v38;
      if ( (unsigned __int16)v39 < v37 )
      {
        v39 = (unsigned __int16)(((unsigned __int16)(v37 - 1) >> 1) + 1);
        do
        {
          v43 = *v42;
          if ( *v42 != 92 )
          {
            if ( v43 >= 0x61u )
            {
              if ( v43 > 0x7Au )
                v44 = RtlUpcaseUnicodeChar(v43);
              else
                v44 = v43 - 32;
            }
            else
            {
              v44 = v43;
            }
            v41 = v44 + 37 * v41;
          }
          ++v42;
          --v39;
        }
        while ( v39 );
        LODWORD(a1) = v103;
      }
      a1 = (unsigned int)(a1 + 1);
      *v36++ = v41;
      v103 = a1;
      if ( (unsigned int)a1 >= 3 )
        break;
    }
    v45 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpParseCacheLock, v45, (ULONG_PTR)&CmpParseCacheLock);
    if ( v45 )
      *(_BYTE *)(v45 + 26) |= 1u;
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v47 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v47 == _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      v101 = 1;
    }
    else
    {
      v101 = ExfAcquireRundownProtection(&CmpShutdownRundown);
      v54 = v101;
      if ( !v101 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v55 = -1073741431;
        goto LABEL_54;
      }
    }
    v48 = CmpParseCacheTable;
    v49 = v39;
    v50 = v103;
    v110 = CmpParseCacheTable;
    v107 = v39;
    if ( !v103 )
    {
LABEL_53:
      v54 = v101;
      v55 = -1073741772;
LABEL_54:
      v56 = v106;
      goto LABEL_93;
    }
    v51 = (unsigned int *)v119;
    v113 = (unsigned int *)v119;
    while ( 1 )
    {
      v52 = *v51;
      v109 = *v51;
      v53 = *(__int64 **)(v48
                        + 8LL
                        * (((unsigned __int8)((101027 * (v52 ^ (*v51 >> 9))) >> 9) ^ (unsigned __int8)(-93 * (v52 ^ (*v51 >> 9)))) & 0x1F)
                        + 8);
      if ( v53 )
        break;
LABEL_52:
      ++v49;
      ++v51;
      v107 = v49;
      v113 = v51;
      if ( v49 >= v50 )
        goto LABEL_53;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v53 + 10) != v52 || *((_DWORD *)v53 + 11) != v115 )
        goto LABEL_50;
      v60 = (WCHAR *)v53[4];
      v61 = 1;
      v62 = 0;
      v63 = 1;
      v64 = (WCHAR *)*((_QWORD *)v105 + 1);
      v104 = 0;
      v65 = &v60[(unsigned __int64)*((unsigned __int16 *)v53 + 12) >> 1];
      v66 = &v64[(unsigned __int64)*v105 >> 1];
      v112 = v66;
      if ( v60 < v65 )
      {
        while ( 1 )
        {
          if ( v64 >= v66 )
          {
LABEL_82:
            v63 = 1;
            break;
          }
          if ( v61 )
          {
            for ( ; v60 < v65; ++v60 )
            {
              if ( *v60 != 92 )
                break;
            }
            do
            {
              if ( *v64 != 92 )
                break;
              ++v64;
            }
            while ( v64 < v66 );
            v62 = 1;
            v61 = 0;
          }
          else
          {
            v67 = *v60;
            if ( *v60 >= 0x61u )
            {
              if ( v67 > 0x7Au )
                v68 = RtlUpcaseUnicodeChar(v67);
              else
                v68 = v67 - 32;
            }
            else
            {
              v68 = v67;
            }
            v69 = *v64;
            if ( *v64 >= 0x61u )
            {
              if ( v69 > 0x7Au )
                v70 = RtlUpcaseUnicodeChar(v69);
              else
                v70 = v69 - 32;
            }
            else
            {
              v70 = v69;
            }
            if ( v68 != v70 )
            {
              v66 = v112;
              v63 = 0;
              break;
            }
            if ( v67 == 92 )
            {
              v61 = 1;
            }
            else
            {
              ++v60;
              ++v64;
              if ( v62 )
              {
                ++v104;
                v62 = 0;
              }
            }
            v66 = v112;
          }
          if ( v60 >= v65 )
            goto LABEL_82;
        }
      }
      *((_QWORD *)&v118 + 1) = v64;
      LOWORD(v118) = 2 * (v66 - v64);
      WORD1(v118) = v118;
      if ( v63 )
      {
        if ( v60 == v65 )
          break;
      }
      v52 = v109;
LABEL_50:
      v53 = (__int64 *)*v53;
      if ( !v53 )
      {
        v50 = v103;
        v49 = v107;
        v48 = v110;
        v51 = v113;
        goto LABEL_52;
      }
    }
    v71 = v53[6];
    v72 = *(_DWORD *)(v71 + 4);
    if ( (v72 & 0x20000) != 0 )
    {
      v55 = -1073741444;
LABEL_193:
      v56 = v106;
      goto LABEL_92;
    }
    v73 = *(_QWORD *)(v71 + 32);
    if ( (*(_DWORD *)(v73 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(v73 + 5416) != KeGetCurrentThread() )
    {
      v55 = -1073741772;
      goto LABEL_193;
    }
    if ( (v72 & 0x40000) != 0 )
    {
      v55 = -1073740763;
      goto LABEL_193;
    }
    v74 = *(_DWORD *)v71;
    v55 = 0;
    v75 = *(_DWORD *)v71 + 1;
    if ( *(_DWORD *)v71 == -1 )
    {
LABEL_192:
      v55 = -1073741670;
      goto LABEL_193;
    }
    while ( 1 )
    {
      if ( v75 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v76 = v74;
      v74 = _InterlockedCompareExchange((volatile signed __int32 *)v71, v75, v74);
      if ( v76 == v74 )
        break;
      v75 = v74 + 1;
      if ( v74 == -1 )
        goto LABEL_192;
    }
    v56 = v53[6];
    v106 = v56;
LABEL_92:
    v54 = v101;
LABEL_93:
    _m_prefetchw(&CmpParseCacheLock);
    v14 = 0;
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v77 = CmpParseCacheLock - 16;
    else
      v77 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v78 = CmpParseCacheLock,
          v78 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v77, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    if ( v54 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v79 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v79 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      a1 = (__int64)KeGetCurrentThread();
      v80 = *(_WORD *)(a1 + 484) + 1;
      *(_WORD *)(a1 + 484) = v80;
      if ( !v80 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
        KiCheckForKernelApcDelivery(a1);
    }
LABEL_101:
    if ( v55 >= 0 )
      break;
    if ( v55 != -1073741772 )
      goto LABEL_111;
    if ( CmpLoadingSystemHivesActive )
    {
      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
      {
        v17 = (__int16 *)v105;
        LOBYTE(a3) = 1;
        v99 = CmpWaitForHiveMount(v105, (*(_DWORD *)(*v108 + 4) >> 21) & 0x3FF, a3, 0LL);
        v20 = v102;
        v15 = v111;
        v19 = v100;
        if ( v99 )
          continue;
      }
    }
    v20 = v102;
    v85 = v102 + ((*(_DWORD *)(*v108 + 4) >> 21) & 0x3FF);
    if ( v85 != 3 )
    {
      if ( v85 > 3 )
        goto LABEL_111;
      goto LABEL_123;
    }
    a1 = a9;
    if ( (*(_DWORD *)a9 & 2) != 0 || CmpNoMasterCreates != 1 )
    {
LABEL_123:
      v34 = (__int64)v105;
      v15 = v111;
      v32 = v114;
      v33 = a5;
      v106 = 0LL;
LABEL_124:
      v81 = v108;
      goto LABEL_104;
    }
    if ( (*(_DWORD *)a9 & 1) == 0 )
      goto LABEL_111;
LABEL_159:
    v55 = -1073741811;
    goto LABEL_111;
  }
  *v117 = v56;
  a1 = *(_QWORD *)(v56 + 32);
  if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread() )
  {
    v55 = -1073741772;
    goto LABEL_111;
  }
  v33 = a5;
  v34 = (__int64)v105;
  v20 = v102;
  v15 = v111;
  v32 = v114;
  *a5 = a1;
  a1 = (__int64)a6;
  *(_DWORD *)a6 = *(_DWORD *)(v56 + 40);
  v81 = v108;
  *v108 = v56;
  *(_OWORD *)v105 = v118;
LABEL_104:
  v82 = *v81;
  a2 = *(ULONG_PTR **)(v82 + 32);
  if ( a2 != (ULONG_PTR *)CmpMasterHive || !*(_QWORD *)(v32 + 64) && !v116 )
  {
    v83 = (_DWORD *)a9;
    goto LABEL_106;
  }
  if ( (*(_BYTE *)(v82 + 186) & 0x10) == 0 )
    goto LABEL_159;
  v83 = (_DWORD *)a9;
  if ( (*(_DWORD *)a9 & 0x200) != 0 )
    goto LABEL_159;
LABEL_106:
  if ( (int)CmpSearchAddTrans(0LL, (_QWORD *)a2[675], 0LL, v116, *(__int128 **)(v32 + 64), 0, (char **)a10) >= 0 )
  {
    if ( (*v83 & 1) != 0 )
      v14 = 1;
    v55 = CmpKcbCacheLookup(a11, (__int64)v120, *a12, v104, v20, a8, v108, v34, v33, a6, a13, *a10, v14, a14);
    if ( v55 >= 0 && *a13 != 1 )
    {
      v86 = *v108;
      if ( (*(_DWORD *)(*v108 + 4) & 0x10) != 0 )
      {
        if ( (*v83 & 1) != 0 )
        {
          a3 = (__int64 *)*a8;
          if ( (_DWORD)a3 == v102 )
          {
            ConvKeyAtIndex = CmpGetConvKeyAtIndex(a11, *a12, (int)a3 - 1);
            CmpLockHashEntryExclusive(*(_QWORD *)(v86 + 32), ConvKeyAtIndex);
            CmpLockTwoKcbsExclusive(*v108, *(_QWORD *)(*v108 + 72));
          }
        }
      }
      else
      {
        v87 = CmpGetConvKeyAtIndex(a11, *a12, *a8);
        v88 = *(_QWORD *)(v86 + 32);
        BugCheckParameter4 = v87;
        v90 = (unsigned __int64 *)(*(_QWORD *)(v88 + 2800)
                                 + 24LL
                                 * (((101027 * (v87 ^ (v87 >> 9))) ^ ((101027 * (v87 ^ (v87 >> 9))) >> 9)) & (*(_DWORD *)(v88 + 2808) - 1)));
        v91 = KeAbPreAcquire((ULONG_PTR)v90, 0LL, 0LL);
        v92 = v91;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v90, 0LL) )
          ExfAcquirePushLockExclusiveEx(v90, v91, (ULONG_PTR)v90);
        if ( v92 )
          *(_BYTE *)(v92 + 26) |= 1u;
        v90[1] = (unsigned __int64)KeGetCurrentThread();
        if ( !CmpReferenceHive(v88) )
          KeBugCheckEx(0x51u, 0x17uLL, v88, 0xCuLL, BugCheckParameter4);
        v93 = *v108;
        if ( (*(_DWORD *)(*v108 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v93 + 64) = CmpLockTableAdd(*v108, 1);
        v94 = KeAbPreAcquire(v93 + 48, 0LL, 0LL);
        v95 = v94;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v93 + 48), v94, v93 + 48);
        if ( v95 )
          *(_BYTE *)(v95 + 26) |= 1u;
        *(_QWORD *)(v93 + 56) = KeGetCurrentThread();
      }
    }
    goto LABEL_111;
  }
  CmpUnlockRegistry();
  v55 = CmpSearchAddTrans(
          0LL,
          *(_QWORD **)(*(_QWORD *)(*v108 + 32) + 5400LL),
          0LL,
          v116,
          *(__int128 **)(v32 + 64),
          1,
          (char **)a10);
  if ( v55 >= 0 )
  {
    CmpLockRegistry(a1, a2, a3, a4);
    v19 = 1;
    v100 = 1;
    a1 = *v117;
    if ( *v117 )
    {
      CmpDereferenceKeyControlBlock(a1);
      v19 = 1;
      *v117 = 0LL;
    }
    v17 = (__int16 *)v105;
    *v108 = v15;
    *(_OWORD *)v105 = v18;
    goto LABEL_4;
  }
LABEL_186:
  CmpLockRegistry(a1, a2, a3, a4);
  return (unsigned int)v55;
}
