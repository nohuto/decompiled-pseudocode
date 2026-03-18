/*
 * XREFs of CmpBuildHashStackAndLookupCache @ 0x14049A140
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpGetConvKeyAtIndex @ 0x140050170 (CmpGetConvKeyAtIndex.c)
 *     CmpFindKeyNameAtIndex @ 0x140050190 (CmpFindKeyNameAtIndex.c)
 *     CmpSetConvKeyAtIndex @ 0x1400501C0 (CmpSetConvKeyAtIndex.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpAllocateExtraHashInfo @ 0x14011A5CC (CmpAllocateExtraHashInfo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockTwoKcbsExclusive @ 0x140447040 (CmpLockTwoKcbsExclusive.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpBuildHashStackAndLookupCache(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int16 *a5,
        _QWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        int *a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 *a13,
        _BYTE *a14,
        _BYTE *a15)
{
  char v15; // r13
  __int64 v16; // r14
  __int16 *v18; // rsi
  __int128 v19; // xmm0
  char v20; // r11
  unsigned int v21; // ebp
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // r15d
  __int16 v25; // si
  unsigned int v26; // r14d
  int v27; // edi
  unsigned __int16 *i; // rbx
  __int16 v29; // bp
  unsigned __int16 v30; // ax
  int v31; // ecx
  __int64 *v32; // r10
  _WORD *v33; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // r15
  _QWORD *v36; // r12
  __int64 v37; // rdi
  WCHAR *v38; // rbx
  int *v39; // r12
  __int16 v40; // r14
  WCHAR *v41; // r13
  WCHAR *v42; // r15
  unsigned int v43; // ecx
  int v44; // esi
  WCHAR *v45; // rdi
  __int64 v46; // rbp
  WCHAR v47; // ax
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // r9
  struct _KTHREAD *v52; // rax
  unsigned __int64 v53; // rtt
  __int64 v54; // r9
  unsigned int v55; // r11d
  unsigned int v56; // r10d
  unsigned int *v57; // r8
  __int64 *v58; // rax
  BOOLEAN v59; // di
  int v60; // ebx
  __int64 v61; // rsi
  __int64 *v62; // r10
  __int64 *v63; // r10
  _WORD *KeyNameAtIndex; // rax
  WCHAR *v65; // rsi
  char v66; // r15
  char v67; // bp
  char v68; // cl
  WCHAR *v69; // r14
  WCHAR *v70; // r12
  WCHAR *v71; // r13
  WCHAR v72; // bx
  int v73; // edi
  WCHAR v74; // ax
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // r8
  signed __int32 v78; // eax
  signed __int32 v79; // ett
  signed __int64 v80; // rcx
  ULONG_PTR v81; // rtt
  unsigned __int64 v82; // rtt
  struct _KTHREAD *v83; // rcx
  __int16 v84; // ax
  __int64 v85; // rcx
  __int64 *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  _DWORD *v89; // rsi
  unsigned int v91; // eax
  __int64 v92; // rbp
  unsigned int v93; // eax
  ULONG_PTR v94; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  unsigned __int64 *v96; // rsi
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // r9
  __int64 v100; // rdi
  __int64 v101; // r9
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r9
  __int64 v105; // rdi
  unsigned int ConvKeyAtIndex; // eax
  PSLIST_ENTRY ExtraHashInfo; // rax
  __int64 v108; // rax
  char v109; // al
  __int16 v110; // cx
  char v111; // [rsp+80h] [rbp-1E8h]
  BOOLEAN v112; // [rsp+81h] [rbp-1E7h]
  unsigned int v113; // [rsp+84h] [rbp-1E4h]
  unsigned int v114; // [rsp+88h] [rbp-1E0h]
  unsigned int v115; // [rsp+8Ch] [rbp-1DCh]
  __int64 v116; // [rsp+98h] [rbp-1D0h]
  unsigned int v117; // [rsp+A0h] [rbp-1C8h]
  __int64 *v118; // [rsp+A8h] [rbp-1C0h]
  unsigned int v119; // [rsp+B0h] [rbp-1B8h]
  __int64 v120; // [rsp+B8h] [rbp-1B0h]
  __int64 v121; // [rsp+C8h] [rbp-1A0h]
  __int64 *v122; // [rsp+D8h] [rbp-190h]
  int v124; // [rsp+108h] [rbp-160h]
  unsigned int *v125; // [rsp+110h] [rbp-158h]
  __int64 v126; // [rsp+118h] [rbp-150h]
  _QWORD *v127; // [rsp+120h] [rbp-148h]
  __int128 v128; // [rsp+148h] [rbp-120h]
  _BYTE v130[16]; // [rsp+180h] [rbp-E8h] BYREF
  _QWORD v131[16]; // [rsp+190h] [rbp-D8h] BYREF

  v15 = 0;
  v16 = *a3;
  v18 = (__int16 *)a5;
  v118 = a3;
  v127 = (_QWORD *)a4;
  memset(v131, 0, sizeof(v131));
  v19 = *(_OWORD *)a5;
  v20 = 0;
  v113 = 0;
  v111 = 0;
  v21 = 0;
  v115 = 0;
  v116 = 0LL;
  v121 = v16;
  *a15 = 0;
  if ( !a10 || (v22 = *(_QWORD *)(a10 + 80), (v126 = v22) == 0) )
  {
    v126 = *(_QWORD *)(a1 + 56);
    goto LABEL_4;
  }
  v108 = *(_QWORD *)(a1 + 56);
  if ( v108 && v22 != v108 )
  {
    v60 = -1072103422;
    goto LABEL_185;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_4:
      v23 = *(_DWORD *)(v16 + 16);
      v24 = 0;
      v25 = *v18;
      v26 = 0;
      v27 = v23;
      if ( v25 )
      {
        for ( i = (unsigned __int16 *)*((_QWORD *)a5 + 1); *i == 92; v25 -= 2 )
          ++i;
        v131[1] = i;
        v29 = 0;
        if ( !v25 )
          goto LABEL_14;
        do
        {
          v30 = *i;
          if ( *i == 92 )
          {
            v62 = a13;
            if ( v26 < 0x20 )
            {
              CmpSetConvKeyAtIndex(a12, *a13, v26, v27);
              KeyNameAtIndex = (_WORD *)CmpFindKeyNameAtIndex((__int64)v131, *v63, v26++);
              *KeyNameAtIndex = v29;
              v29 = 0;
            }
            ++v24;
            if ( v26 == 8 && !*v62 )
            {
              ExtraHashInfo = CmpAllocateExtraHashInfo();
              v62 = a13;
              *a13 = (__int64)ExtraHashInfo;
              if ( !ExtraHashInfo )
              {
                v60 = -1073741801;
                goto LABEL_110;
              }
            }
            for ( ; *i == 92; v25 -= 2 )
              ++i;
            if ( v26 < 0x20 )
              *(_QWORD *)(CmpFindKeyNameAtIndex((__int64)v131, *v62, v26) + 8) = i;
          }
          else
          {
            if ( v30 < 0x61u )
            {
              v31 = v30;
            }
            else if ( v30 > 0x7Au )
            {
              a3 = *(__int64 **)((char *)&NlsMbCodePageTag + 7);
              a4 = v30 & 0xF;
              v31 = (unsigned __int16)(v30
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (unsigned int)a4
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v30 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v30 >> 8)]]]);
            }
            else
            {
              v31 = v30 - 32;
            }
            ++i;
            v25 -= 2;
            v27 = v31 + 37 * v27;
            v29 += 2;
          }
        }
        while ( v25 );
        v20 = v111;
        if ( v26 < 0x20 )
        {
LABEL_14:
          CmpSetConvKeyAtIndex(a12, *a13, v26, v27);
          v33 = (_WORD *)CmpFindKeyNameAtIndex((__int64)v131, *v32, v26++);
          *v33 = v29;
        }
        v21 = v24 + 1;
        v113 = v24 + 1;
      }
      *a8 = v26;
      if ( !v20 )
      {
        if ( !CmpPuntBoot )
        {
          PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
        }
        v20 = 1;
        v111 = 1;
      }
      if ( v21 > 0x20 )
      {
        v60 = -1073741562;
        goto LABEL_110;
      }
      v16 = v121;
      if ( *(_DWORD *)(v121 + 16) == v23 )
        break;
      v18 = (__int16 *)a5;
    }
    v35 = a1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) & 0x20000) != 0 )
    {
      v60 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v60 = -1073740763;
LABEL_110:
      if ( !v111 )
        goto LABEL_185;
      return (unsigned int)v60;
    }
    v36 = a6;
    v37 = (__int64)a5;
    *a6 = *(_QWORD *)(v121 + 32);
    *a7 = *(_DWORD *)(v121 + 40);
    if ( *(_QWORD *)(v121 + 32) != CmpMasterHive )
      goto LABEL_123;
    v38 = (WCHAR *)*((_QWORD *)a5 + 1);
    v39 = (int *)v130;
    v40 = 0;
    v41 = v38;
    v124 = *(_DWORD *)(v121 + 40);
    v42 = &v38[(unsigned __int64)*a5 >> 1];
    v43 = 0;
    v114 = 0;
    while ( v42 > v38 )
    {
      do
      {
        if ( *v38 != 92 )
          break;
        ++v38;
        v40 += 2;
      }
      while ( v38 < v42 );
      if ( v38 == v42 )
      {
        if ( !v43 )
        {
          v61 = v116;
          v60 = -1073741811;
          v15 = 0;
          goto LABEL_100;
        }
        break;
      }
      for ( ; v38 < v42; v40 += 2 )
      {
        if ( *v38 == 92 )
          break;
        ++v38;
      }
      v44 = 0;
      v45 = v41;
      if ( v40 )
      {
        v46 = (unsigned __int16)(((unsigned __int16)(v40 - 1) >> 1) + 1);
        do
        {
          v47 = *v45;
          if ( *v45 != 92 )
          {
            if ( v47 >= 0x61u )
            {
              if ( v47 > 0x7Au )
                v48 = RtlUpcaseUnicodeChar(v47);
              else
                v48 = v47 - 32;
            }
            else
            {
              v48 = v47;
            }
            v44 = v48 + 37 * v44;
          }
          ++v45;
          --v46;
        }
        while ( v46 );
        v43 = v114;
      }
      ++v43;
      *v39++ = v44;
      v114 = v43;
      if ( v43 >= 3 )
        break;
    }
    v50 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpParseCacheLock, v50, (ULONG_PTR)&CmpParseCacheLock, v51);
    if ( v50 )
      *(_BYTE *)(v50 + 26) |= 1u;
    v52 = KeGetCurrentThread();
    --v52->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v53 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v53 == _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      v112 = 1;
    }
    else
    {
      v112 = ExfAcquireRundownProtection(&CmpShutdownRundown);
      v59 = v112;
      if ( !v112 )
      {
        v49 = (__int64)KeGetCurrentThread();
        v110 = *(_WORD *)(v49 + 484) + 1;
        *(_WORD *)(v49 + 484) = v110;
        if ( !v110 && *(_QWORD *)(v49 + 152) != v49 + 152 && !*(_WORD *)(v49 + 486) )
          KiCheckForKernelApcDelivery();
        v60 = -1073741431;
        v15 = 0;
        goto LABEL_54;
      }
    }
    v54 = CmpParseCacheTable;
    v15 = 0;
    v55 = v114;
    v56 = 0;
    v120 = CmpParseCacheTable;
    v117 = 0;
    if ( !v114 )
    {
LABEL_53:
      v59 = v112;
      v60 = -1073741772;
LABEL_54:
      v61 = v116;
      goto LABEL_92;
    }
    v57 = (unsigned int *)v130;
    v125 = (unsigned int *)v130;
    while ( 1 )
    {
      v49 = *v57;
      v119 = *v57;
      v58 = *(__int64 **)(v54
                        + 8LL
                        * (((unsigned __int8)((101027 * ((unsigned int)v49 ^ (*v57 >> 9))) >> 9) ^ (unsigned __int8)(-93 * (v49 ^ (*v57 >> 9)))) & 0x1F)
                        + 8);
      v122 = v58;
      if ( v58 )
        break;
LABEL_52:
      ++v56;
      ++v57;
      v117 = v56;
      v125 = v57;
      if ( v56 >= v55 )
        goto LABEL_53;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v58 + 10) != (_DWORD)v49 || *((_DWORD *)v58 + 11) != v124 )
        goto LABEL_50;
      v65 = (WCHAR *)v58[4];
      v66 = 1;
      v67 = 0;
      v68 = 1;
      v115 = 0;
      v69 = (WCHAR *)*((_QWORD *)a5 + 1);
      v70 = &v65[(unsigned __int64)*((unsigned __int16 *)v58 + 12) >> 1];
      v71 = &v69[(unsigned __int64)*a5 >> 1];
      if ( v65 < v70 )
      {
        while ( 1 )
        {
          if ( v69 >= v71 )
          {
LABEL_81:
            v68 = 1;
            break;
          }
          if ( v66 )
          {
            for ( ; v65 < v70; ++v65 )
            {
              if ( *v65 != 92 )
                break;
            }
            do
            {
              if ( *v69 != 92 )
                break;
              ++v69;
            }
            while ( v69 < v71 );
            v67 = 1;
            v66 = 0;
          }
          else
          {
            v72 = *v65;
            if ( *v65 >= 0x61u )
            {
              if ( v72 > 0x7Au )
                v73 = RtlUpcaseUnicodeChar(v72);
              else
                v73 = v72 - 32;
            }
            else
            {
              v73 = v72;
            }
            v74 = *v69;
            if ( *v69 >= 0x61u )
            {
              if ( v74 > 0x7Au )
                v75 = RtlUpcaseUnicodeChar(v74);
              else
                v75 = v74 - 32;
            }
            else
            {
              v75 = v74;
            }
            if ( v73 != v75 )
            {
              v68 = 0;
              break;
            }
            if ( v72 == 92 )
            {
              v66 = 1;
            }
            else
            {
              ++v65;
              ++v69;
              if ( v67 )
              {
                ++v115;
                v67 = 0;
              }
            }
          }
          if ( v65 >= v70 )
            goto LABEL_81;
        }
      }
      *((_QWORD *)&v128 + 1) = v69;
      LOWORD(v128) = 2 * (v71 - v69);
      WORD1(v128) = v128;
      if ( v68 )
      {
        if ( v65 == v70 )
          break;
      }
      v49 = v119;
      v15 = 0;
      v58 = v122;
LABEL_50:
      v58 = (__int64 *)*v58;
      v122 = v58;
      if ( !v58 )
      {
        v55 = v114;
        v56 = v117;
        v54 = v120;
        v57 = v125;
        goto LABEL_52;
      }
    }
    v76 = v122[6];
    v49 = *(unsigned int *)(v76 + 4);
    if ( (v49 & 0x20000) != 0 )
    {
      v60 = -1073741444;
      v15 = 0;
LABEL_197:
      v61 = v116;
      goto LABEL_91;
    }
    v77 = *(_QWORD *)(v76 + 32);
    if ( (*(_DWORD *)(v77 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(v77 + 5416) != KeGetCurrentThread() )
    {
      v60 = -1073741772;
      v15 = 0;
      goto LABEL_197;
    }
    v15 = 0;
    if ( (v49 & 0x40000) != 0 )
    {
      v60 = -1073740763;
      goto LABEL_197;
    }
    v78 = *(_DWORD *)v76;
    v60 = 0;
    v49 = (unsigned int)(*(_DWORD *)v76 + 1);
    if ( *(_DWORD *)v76 == -1 )
    {
LABEL_196:
      v60 = -1073741670;
      goto LABEL_197;
    }
    while ( 1 )
    {
      if ( (_DWORD)v49 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v79 = v78;
      v78 = _InterlockedCompareExchange((volatile signed __int32 *)v76, v49, v78);
      if ( v79 == v78 )
        break;
      v49 = (unsigned int)(v78 + 1);
      if ( v78 == -1 )
        goto LABEL_196;
    }
    v61 = v122[6];
    v116 = v61;
LABEL_91:
    v59 = v112;
LABEL_92:
    _m_prefetchw(&CmpParseCacheLock);
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v80 = CmpParseCacheLock - 16;
    else
      v80 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v81 = CmpParseCacheLock,
          v81 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v80, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock, v49);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    if ( v59 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v82 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v82 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v83 = KeGetCurrentThread();
      v84 = v83->KernelApcDisable + 1;
      v83->KernelApcDisable = v84;
      if ( !v84
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v83->ApcState.ApcListHead[0].Flink != &v83->152
        && !v83->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
LABEL_100:
    if ( v60 >= 0 )
      break;
    if ( v60 != -1073741772 )
      goto LABEL_110;
    if ( CmpLoadingSystemHivesActive )
    {
      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
      {
        v18 = (__int16 *)a5;
        LOBYTE(a3) = 1;
        v109 = CmpWaitForHiveMount(a5, (*(_DWORD *)(*v118 + 4) >> 21) & 0x3FF, a3, 0LL);
        v21 = v113;
        v16 = v121;
        v20 = v111;
        if ( v109 )
          continue;
      }
    }
    v21 = v113;
    v91 = v113 + ((*(_DWORD *)(*v118 + 4) >> 21) & 0x3FF);
    if ( v91 != 3 )
    {
      if ( v91 > 3 )
        goto LABEL_110;
      goto LABEL_122;
    }
    if ( (*(_DWORD *)a10 & 2) != 0 || CmpNoMasterCreates != 1 )
    {
LABEL_122:
      v37 = (__int64)a5;
      v16 = v121;
      v35 = a1;
      v36 = a6;
      v116 = 0LL;
LABEL_123:
      v86 = v118;
      goto LABEL_103;
    }
    if ( (*(_DWORD *)a10 & 1) == 0 )
      goto LABEL_110;
LABEL_158:
    v60 = -1073741811;
    goto LABEL_110;
  }
  *v127 = v61;
  v85 = *(_QWORD *)(v61 + 32);
  if ( (*(_DWORD *)(v85 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(v85 + 5416) != KeGetCurrentThread() )
  {
    v60 = -1073741772;
    goto LABEL_110;
  }
  v36 = a6;
  v37 = (__int64)a5;
  v21 = v113;
  v16 = v121;
  v35 = a1;
  *a6 = v85;
  *a7 = *(_DWORD *)(v61 + 40);
  v86 = v118;
  *v118 = v61;
  *(_OWORD *)a5 = v128;
LABEL_103:
  v87 = *v86;
  v88 = *(_QWORD *)(v87 + 32);
  if ( v88 != CmpMasterHive || !*(_QWORD *)(v35 + 64) && !v126 )
  {
    v89 = (_DWORD *)a10;
    goto LABEL_105;
  }
  if ( (*(_BYTE *)(v87 + 186) & 0x10) == 0 )
    goto LABEL_158;
  v89 = (_DWORD *)a10;
  if ( (*(_DWORD *)a10 & 0x200) != 0 )
    goto LABEL_158;
LABEL_105:
  if ( (int)CmpSearchAddTrans(0, *(_QWORD *)(v88 + 5400), 0, v126, *(_QWORD *)(v35 + 64), 0, (__int64)a11) >= 0 )
  {
    if ( (*v89 & 1) != 0 )
      v15 = 1;
    v60 = CmpKcbCacheLookup(
            a12,
            (__int64)v131,
            *a13,
            v115,
            v21,
            a9,
            v118,
            v37,
            v36,
            a7,
            a14,
            *a11,
            v15,
            a15,
            (__int64)v89,
            a2);
    if ( v60 >= 0 && *a14 != 1 )
    {
      v92 = *v118;
      if ( (*(_DWORD *)(*v118 + 4) & 0x10) != 0 )
      {
        if ( (*v89 & 1) != 0 && *a9 == v113 )
        {
          ConvKeyAtIndex = CmpGetConvKeyAtIndex(a12, *a13, *a9 - 1);
          CmpLockHashEntryExclusive(*(_QWORD *)(v92 + 32), ConvKeyAtIndex);
          CmpLockTwoKcbsExclusive(*v118, *(_QWORD *)(*v118 + 72));
        }
      }
      else
      {
        v93 = CmpGetConvKeyAtIndex(a12, *a13, *a9);
        v94 = *(_QWORD *)(v92 + 32);
        BugCheckParameter4 = v93;
        v96 = (unsigned __int64 *)(*(_QWORD *)(v94 + 2800)
                                 + 24LL
                                 * (((101027 * (v93 ^ (v93 >> 9))) ^ ((101027 * (v93 ^ (v93 >> 9))) >> 9)) & (*(_DWORD *)(v94 + 2808) - 1)));
        v98 = KeAbPreAcquire((ULONG_PTR)v96, 0LL, 0LL, v97);
        v100 = v98;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v96, 0LL) )
          ExfAcquirePushLockExclusiveEx(v96, v98, (ULONG_PTR)v96, v99);
        if ( v100 )
          *(_BYTE *)(v100 + 26) |= 1u;
        v96[1] = (unsigned __int64)KeGetCurrentThread();
        if ( !CmpReferenceHive(v94) )
          KeBugCheckEx(0x51u, 0x17uLL, v94, 0xCuLL, BugCheckParameter4);
        v102 = *v118;
        if ( (*(_DWORD *)(*v118 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v102 + 64) = CmpLockTableAdd(*v118, 1);
        v103 = KeAbPreAcquire(v102 + 48, 0LL, 0LL, v101);
        v105 = v103;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v102 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v102 + 48), v103, v102 + 48, v104);
        if ( v105 )
          *(_BYTE *)(v105 + 26) |= 1u;
        *(_QWORD *)(v102 + 56) = KeGetCurrentThread();
      }
    }
    goto LABEL_110;
  }
  CmpUnlockRegistry();
  v60 = CmpSearchAddTrans(
          0,
          *(_QWORD *)(*(_QWORD *)(*v118 + 32) + 5400LL),
          0,
          v126,
          *(_QWORD *)(v35 + 64),
          1,
          (__int64)a11);
  if ( v60 >= 0 )
  {
    CmpLockRegistry();
    v20 = 1;
    v111 = 1;
    if ( *v127 )
    {
      CmpDereferenceKeyControlBlock(*v127);
      v20 = 1;
      *v127 = 0LL;
    }
    v18 = (__int16 *)a5;
    *v118 = v16;
    *(_OWORD *)a5 = v19;
    goto LABEL_4;
  }
LABEL_185:
  CmpLockRegistry();
  return (unsigned int)v60;
}
