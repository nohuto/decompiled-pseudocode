/*
 * XREFs of ExpTimeRefreshWork @ 0x1403F7188
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongToULong @ 0x1400198DC (RtlULongLongToULong.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403F6BAC (ExUpdateSystemTimeFromCmos.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     ExReleaseTimeRefreshLock @ 0x140559DEC (ExReleaseTimeRefreshLock.c)
 *     sub_14055A6D8 @ 0x14055A6D8 (sub_14055A6D8.c)
 *     sub_14055D174 @ 0x14055D174 (sub_14055D174.c)
 *     ExGetExpirationDate @ 0x1405A6944 (ExGetExpirationDate.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 *     sub_1406ECE4C @ 0x1406ECE4C (sub_1406ECE4C.c)
 *     sub_1406ECE98 @ 0x1406ECE98 (sub_1406ECE98.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 *v6; // r9
  __int64 v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ecx
  int v11; // r8d
  int *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // r11
  __int64 v15; // rbx
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  int v18; // ecx
  __int64 v19; // r9
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  bool v28; // bl
  unsigned int v29; // ecx
  unsigned __int8 *v30; // r8
  unsigned __int64 v31; // rbx
  __int64 v32; // r10
  unsigned int v33; // edx
  unsigned int v34; // r9d
  int v35; // ecx
  unsigned int v36; // eax
  unsigned __int8 *v37; // r10
  __int64 v38; // r9
  unsigned int v39; // edx
  unsigned int v40; // r8d
  int v41; // ecx
  unsigned int v42; // edi
  __int64 v43; // rbx
  char v44; // bl
  __int64 v45; // r9
  __int16 v46; // ax
  LARGE_INTEGER v47; // rbx
  int ExpirationDate; // eax
  LARGE_INTEGER v49; // rax
  struct _KTHREAD *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r9
  __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rdi
  struct _KTHREAD *v57; // rcx
  __int16 v58; // ax
  __int64 v59; // r9
  struct _KTHREAD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r9
  signed __int8 v63; // cf
  __int64 v64; // rbx
  int v65; // eax
  int v66; // eax
  unsigned __int8 *v67; // rdx
  __int64 v68; // r9
  unsigned __int64 v69; // r8
  unsigned int v70; // ecx
  unsigned int v71; // r8d
  int v72; // eax
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int8 *v75; // r10
  unsigned int v76; // ecx
  unsigned int v77; // edx
  int v78; // eax
  bool v79; // bl
  _DWORD *v80; // rcx
  struct _KTHREAD *v81; // rcx
  __int16 v82; // ax
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  ULONG pulResult; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v86; // [rsp+90h] [rbp-78h]
  _QWORD v87[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-60h]
  __int128 v89; // [rsp+B8h] [rbp-50h]
  __int128 v90; // [rsp+C8h] [rbp-40h]
  __int128 v91; // [rsp+D8h] [rbp-30h]
  __int128 v92; // [rsp+E8h] [rbp-20h]
  __int128 v93; // [rsp+F8h] [rbp-10h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h] BYREF
  __int64 v95; // [rsp+110h] [rbp+8h] BYREF
  _OWORD v96[3]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v97; // [rsp+148h] [rbp+40h] BYREF
  __int128 v98; // [rsp+158h] [rbp+50h]
  __int128 v99; // [rsp+168h] [rbp+60h]
  char v100[8]; // [rsp+178h] [rbp+70h] BYREF
  int v101; // [rsp+180h] [rbp+78h]
  char v102[24]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v103; // [rsp+1C0h] [rbp+B8h]
  char v104[24]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned __int64 v105; // [rsp+1F0h] [rbp+E8h]
  __int64 v106[6]; // [rsp+208h] [rbp+100h] BYREF
  char v107[32]; // [rsp+238h] [rbp+130h] BYREF
  unsigned __int64 v108; // [rsp+258h] [rbp+150h]
  _BYTE v109[48]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v110[48]; // [rsp+298h] [rbp+190h] BYREF
  char v111[8]; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v112; // [rsp+2D0h] [rbp+1C8h]
  _QWORD v113[3]; // [rsp+2F8h] [rbp+1F0h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    _InterlockedAdd64(&qword_14077EAD0, 1uLL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, v2);
    v5 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v3, (ULONG_PTR)&ExpFastCacheUpdateLock, v4);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    if ( qword_14077ED28 || (int)sub_1405BC990(&stru_140721B40) >= 0 )
    {
      v6 = &v95;
      v7 = 8LL;
      v8 = 0;
      v9 = 0;
      v95 = qword_14077EAD0;
      do
      {
        v10 = *(unsigned __int8 *)v6;
        v6 = (__int64 *)((char *)v6 + 1);
        v10 -= 23737705;
        v8 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v8 + v10), 21), 21), 21);
        v9 += v8 + v10;
        --v7;
      }
      while ( v7 );
      v86 = __PAIR64__(v8, v9);
      v11 = 0;
      v12 = &dword_14077E480;
      do
      {
        if ( ExpFastCacheReArmed || v11 == -1 || (v13 = *((_QWORD *)v12 - 3)) == 0 || *v12 )
          v84 = 0LL;
        else
          v84 = *(_QWORD *)(v13 + 16);
        v14 = (unsigned __int8 *)&v84;
        v15 = 8LL;
        v16 = HIDWORD(v86);
        v17 = v86;
        do
        {
          v18 = *v14++;
          v18 -= 23737705;
          v16 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v16 + v18), 21), 21), 21);
          v17 += v16 + v18;
          --v15;
        }
        while ( v15 );
        v86 = __PAIR64__(v16, v17);
        ++v11;
        v12 += 18;
      }
      while ( (unsigned __int64)v11 < 5 );
      LODWORD(ClientId) = 24;
      v113[0] = qword_14077EAD0;
      v113[1] = __PAIR64__(v16, v17);
      v113[2] = 0LL;
      CmSetValueKey(qword_14077ED28, (unsigned int)&stru_140721B50, 3, (unsigned int)v113, (size_t)ClientId, 0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EA20, v23, (ULONG_PTR)&qword_14077EA20, v24);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    if ( off_14077E020 )
    {
LABEL_78:
      v44 = 0;
      goto LABEL_56;
    }
    if ( Data )
    {
      v25 = KeAbPreAcquire((ULONG_PTR)&qword_14077EAF0, 0LL, 0LL, v24);
      v27 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EAF0, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_14077EAF0, v25, (ULONG_PTR)&qword_14077EAF0, v26);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v28 = qword_14077EB68 == 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EAF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EAF0);
      KeAbPostRelease((ULONG_PTR)&qword_14077EAF0);
      if ( v28 )
      {
        dword_14077E0F0 = 5;
        v101 = 5;
        sub_14051D108(v100, 2LL);
        goto LABEL_53;
      }
      if ( !Data )
        goto LABEL_53;
      v29 = *((_DWORD *)Data + 1);
      v30 = (unsigned __int8 *)Data + 20;
      v89 = 0uLL;
      DWORD2(v88) = 4;
      *(_QWORD *)&v90 = 0LL;
      BYTE8(v90) = 1;
      if ( Data == (PVOID)-20LL )
        goto LABEL_72;
      v31 = 0LL;
      v32 = v29;
      if ( v29 )
      {
        v33 = 0;
        v34 = 0;
        do
        {
          v35 = *v30++;
          v35 -= 23737705;
          v33 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v33 + v35), 21), 21), 21);
          v34 += v33 + v35;
          --v32;
        }
        while ( v32 );
        v31 = __PAIR64__(v33, v34);
      }
      *(_QWORD *)&v88 = v31;
      if ( !(_DWORD)NumOfElements )
        goto LABEL_49;
      v36 = 16 * NumOfElements;
      if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
      {
LABEL_72:
        v31 = 0LL;
        DWORD2(v88) = 4;
      }
      else
      {
        v37 = (unsigned __int8 *)&unk_140784300;
        v38 = v36;
        if ( v36 )
        {
          v39 = HIDWORD(v31);
          v40 = v31;
          do
          {
            v41 = *v37++;
            v41 -= 23737705;
            v39 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v39 + v41), 21), 21), 21);
            v40 += v39 + v41;
            --v38;
          }
          while ( v38 );
          v31 = __PAIR64__(v39, v40);
        }
      }
      *(_QWORD *)&v88 = v31;
LABEL_49:
      v97 = v88;
      v98 = v89;
      v99 = v90;
      if ( (int)sub_14051E368(v106) >= 0 )
      {
        v42 = 4;
        if ( v106[0] != v31 )
        {
          DWORD2(v97) = 4;
          v42 = 6;
        }
        v43 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v98 = v43 * KeQueryTimeIncrement() / 10000;
        sub_14051D108(&v97, v42);
      }
    }
LABEL_53:
    if ( off_14077E020 )
      goto LABEL_78;
    v44 = 1;
    if ( (int)sub_14051E368(v109) >= 0 )
      v44 = v109[40];
LABEL_56:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    a1 = (unsigned __int64)KeGetCurrentThread();
    v46 = *(_WORD *)(a1 + 484) + 1;
    *(_WORD *)(a1 + 484) = v46;
    if ( !v46 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
      KiCheckForKernelApcDelivery();
    if ( v44 == 1 )
    {
      v51 = KeGetCurrentThread();
      --v51->KernelApcDisable;
      v52 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v45);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&qword_14077EA20, v52, (ULONG_PTR)&qword_14077EA20, v53);
      if ( v52 )
        *(_BYTE *)(v52 + 26) |= 1u;
      v54 = 0LL;
      if ( (int)sub_14051E368(v102) >= 0 )
        v54 = v103;
      v55 = v54 + 3600;
      v105 = v55;
      sub_14051D108(v104, 8LL);
      if ( off_14077E020 )
      {
        v56 = 10800LL;
      }
      else
      {
        v56 = 0LL;
        if ( (int)sub_14051E368(v107) >= 0 )
          v56 = v108;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
      KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
      v57 = KeGetCurrentThread();
      v58 = v57->KernelApcDisable + 1;
      v57->KernelApcDisable = v58;
      if ( !v58
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v57->ApcState.ApcListHead[0].Flink != &v57->152
        && !v57->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      sub_1406ECE4C();
      if ( v56 > v55 )
      {
        v79 = 0;
      }
      else
      {
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        v61 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v59);
        v63 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
        v64 = v61;
        if ( v63 )
          ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v61, (ULONG_PTR)&qword_14077EA20, v62);
        if ( v64 )
          *(_BYTE *)(v64 + 26) |= 1u;
        if ( !Data )
        {
          v65 = dword_14077E0F0;
          goto LABEL_123;
        }
        v66 = sub_14051E368(v96);
        if ( v66 >= 0 )
        {
          v65 = DWORD2(v96[0]);
          goto LABEL_123;
        }
        if ( v66 == -1073741275 && Data )
        {
          v67 = (unsigned __int8 *)Data + 20;
          v92 = 0uLL;
          DWORD2(v91) = 4;
          *(_QWORD *)&v93 = 0LL;
          BYTE8(v93) = 1;
          if ( Data == (PVOID)-20LL )
            goto LABEL_120;
          v68 = *((unsigned int *)Data + 1);
          v69 = 0LL;
          if ( *((_DWORD *)Data + 1) )
          {
            v70 = 0;
            v71 = 0;
            do
            {
              v72 = *v67++;
              v72 -= 23737705;
              v70 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v70 + v72), 21), 21), 21);
              v71 += v70 + v72;
              --v68;
            }
            while ( v68 );
            v69 = __PAIR64__(v70, v71);
          }
          *(_QWORD *)&v91 = v69;
          if ( (_DWORD)NumOfElements )
          {
            if ( !RtlULongLongToULong(16LL * (unsigned int)NumOfElements, &pulResult) )
            {
              v74 = pulResult;
              v75 = (unsigned __int8 *)&unk_140784300;
              if ( pulResult )
              {
                v76 = HIDWORD(v73);
                v77 = v73;
                do
                {
                  v78 = *v75++;
                  v78 -= 23737705;
                  v76 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v76 + v78), 21), 21), 21);
                  v77 += v76 + v78;
                  --v74;
                }
                while ( v74 );
                v73 = __PAIR64__(v76, v77);
              }
              *(_QWORD *)&v91 = v73;
              goto LABEL_121;
            }
LABEL_120:
            *(_QWORD *)&v91 = 0LL;
            DWORD2(v91) = 4;
          }
LABEL_121:
          v96[0] = v91;
          DWORD2(v96[0]) = 4;
          v96[1] = v92;
          v96[2] = v93;
          sub_14051D108(v96, 0xFFFFFFFFLL);
        }
        v65 = 4;
LABEL_123:
        dword_14077E0F0 = 2;
        v112 = 2;
        v79 = v65 == 0;
        sub_14051D108(v111, 2LL);
        v80 = Data;
        if ( off_14077E020 )
          v80 = off_14077E020;
        if ( v80 )
          v80[3] |= 1u;
        v110[40] = 0;
        sub_14051D108(v110, 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
        KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
        v81 = KeGetCurrentThread();
        v82 = v81->KernelApcDisable + 1;
        v81->KernelApcDisable = v82;
        if ( !v82
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v81->ApcState.ApcListHead[0].Flink != &v81->152
          && !v81->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        sub_14055A6D8();
        sub_1406ECE98(&KernelLicensingCacheExpired);
        sub_1406ED694(7190LL);
      }
      if ( v79 )
        sub_14055D174();
    }
    if ( !ExpSystemSetupInProgress )
    {
      v47.QuadPart = MEMORY[0xFFFFF78000000014];
      ExpirationDate = ExGetExpirationDate(&ExpNtExpirationDate);
      a1 = (unsigned int)ExpirationDate;
      if ( ExpirationDate < 0 )
      {
        v49.QuadPart = 0LL;
        ExpNtExpirationDate.QuadPart = 0LL;
      }
      else
      {
        v49 = ExpNtExpirationDate;
      }
      MEMORY[0xFFFFF780000002C8] = v49.QuadPart;
      if ( (a1 & 0x80000000) == 0LL && ExpNtExpirationDate.QuadPart && v47.QuadPart >= ExpNtExpirationDate.QuadPart )
      {
        a1 = (unsigned int)ExpTrackFatalExpiration;
        if ( ExpTrackFatalExpiration )
        {
          a1 = (unsigned int)(ExpTrackFatalExpiration - 1);
          if ( ExpTrackFatalExpiration == 1 )
          {
            ExpTrackFatalExpiration = 2;
            if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, ExpExpirationThread, (PVOID)0xC0000268LL) >= 0 )
              ZwClose(ThreadHandle);
          }
          else if ( ExpTrackFatalExpiration == 2 )
          {
            ExpTrackFatalExpiration = 0;
            PoShutdownBugCheck(0LL, 152LL, ExpNtExpirationDate.LowPart, ExpNtExpirationDate.HighPart, 0LL, 0LL);
          }
        }
        else
        {
          ExpTrackFatalExpiration = 1;
        }
      }
      else
      {
        ExpTrackFatalExpiration = 0;
      }
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v87[1] = -1LL;
  v87[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v87);
}
