/*
 * XREFs of ExpTimeRefreshWork @ 0x1403A6F68
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlULongLongToULong @ 0x14008FB5C (RtlULongLongToULong.c)
 *     KeQueryTimeIncrement @ 0x1400C7DB0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403A6728 (ExUpdateSystemTimeFromCmos.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     sub_1404885A8 @ 0x1404885A8 (sub_1404885A8.c)
 *     sub_1404886E8 @ 0x1404886E8 (sub_1404886E8.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     ExReleaseTimeRefreshLock @ 0x1404C48E4 (ExReleaseTimeRefreshLock.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     ExGetExpirationDate @ 0x14053C16C (ExGetExpirationDate.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 *     sub_1406698B8 @ 0x1406698B8 (sub_1406698B8.c)
 *     sub_140669904 @ 0x140669904 (sub_140669904.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // r8d
  int *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 *v12; // r11
  __int64 v13; // rbx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  int v16; // ecx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  bool v21; // bl
  unsigned int v22; // ecx
  unsigned __int8 *v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // r10
  unsigned int v26; // edx
  unsigned int v27; // r9d
  int v28; // ecx
  unsigned int v29; // eax
  unsigned __int8 *v30; // r10
  __int64 v31; // r9
  unsigned int v32; // edx
  unsigned int v33; // r8d
  int v34; // ecx
  unsigned int v35; // edi
  __int64 v36; // rbx
  char v37; // bl
  LARGE_INTEGER v38; // rbx
  int ExpirationDate; // eax
  LARGE_INTEGER v40; // rax
  struct _KTHREAD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdi
  struct _KTHREAD *v47; // rax
  __int64 v48; // rax
  signed __int8 v49; // cf
  __int64 v50; // rbx
  int v51; // eax
  int v52; // eax
  unsigned __int8 *v53; // rdx
  __int64 v54; // r9
  unsigned __int64 v55; // r8
  unsigned int v56; // ecx
  unsigned int v57; // r8d
  int v58; // eax
  unsigned __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int8 *v61; // r10
  unsigned int v62; // ecx
  unsigned int v63; // edx
  int v64; // eax
  bool v65; // bl
  _DWORD *v66; // rcx
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  __int64 v68; // [rsp+78h] [rbp-90h] BYREF
  ULONG pulResult; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-78h]
  _QWORD v71[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v72; // [rsp+A8h] [rbp-60h]
  __int128 v73; // [rsp+B8h] [rbp-50h]
  __int128 v74; // [rsp+C8h] [rbp-40h]
  __int128 v75; // [rsp+D8h] [rbp-30h]
  __int128 v76; // [rsp+E8h] [rbp-20h]
  __int128 v77; // [rsp+F8h] [rbp-10h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h] BYREF
  __int64 v79; // [rsp+110h] [rbp+8h] BYREF
  _OWORD v80[3]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v81; // [rsp+148h] [rbp+40h] BYREF
  __int128 v82; // [rsp+158h] [rbp+50h]
  __int128 v83; // [rsp+168h] [rbp+60h]
  char v84[8]; // [rsp+178h] [rbp+70h] BYREF
  int v85; // [rsp+180h] [rbp+78h]
  char v86[24]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v87; // [rsp+1C0h] [rbp+B8h]
  char v88[24]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned __int64 v89; // [rsp+1F0h] [rbp+E8h]
  __int64 v90[6]; // [rsp+208h] [rbp+100h] BYREF
  char v91[32]; // [rsp+238h] [rbp+130h] BYREF
  unsigned __int64 v92; // [rsp+258h] [rbp+150h]
  _BYTE v93[48]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v94[48]; // [rsp+298h] [rbp+190h] BYREF
  char v95[8]; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v96; // [rsp+2D0h] [rbp+1C8h]
  int v97[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned __int64 v98; // [rsp+300h] [rbp+1F8h]
  __int64 v99; // [rsp+308h] [rbp+200h]

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    _InterlockedAdd64(&qword_1406FBAD8, 1uLL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
    v3 = v2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v2, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    if ( *(_QWORD *)&qword_1406FBD30 || (int)sub_14054598C(&stru_1406A1900) >= 0 )
    {
      v4 = &v79;
      v5 = 8LL;
      v6 = 0;
      v7 = 0;
      v79 = qword_1406FBAD8;
      do
      {
        v8 = *(unsigned __int8 *)v4;
        v4 = (__int64 *)((char *)v4 + 1);
        v8 -= 23737705;
        v6 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v6 + v8), 21), 21), 21);
        v7 += v6 + v8;
        --v5;
      }
      while ( v5 );
      v70 = __PAIR64__(v6, v7);
      v9 = 0;
      v10 = &dword_1406FB450;
      do
      {
        if ( ExpFastCacheReArmed || v9 == -1 || (v11 = *((_QWORD *)v10 - 3)) == 0 || *v10 )
          v68 = 0LL;
        else
          v68 = *(_QWORD *)(v11 + 16);
        v12 = (unsigned __int8 *)&v68;
        v13 = 8LL;
        v14 = HIDWORD(v70);
        v15 = v70;
        do
        {
          v16 = *v12++;
          v16 -= 23737705;
          v14 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v14 + v16), 21), 21), 21);
          v15 += v14 + v16;
          --v13;
        }
        while ( v13 );
        v70 = __PAIR64__(v14, v15);
        ++v9;
        v10 += 18;
      }
      while ( (unsigned __int64)v9 < 5 );
      LODWORD(ClientId) = 24;
      *(_QWORD *)v97 = qword_1406FBAD8;
      v98 = __PAIR64__(v14, v15);
      v99 = 0LL;
      CmSetValueKey(qword_1406FBD30, (int)&stru_1406A18F0, 3, (int)v97, (size_t)ClientId, 0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_1406FBA20, v18, (ULONG_PTR)&qword_1406FBA20);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    if ( off_1406FB020 )
    {
LABEL_72:
      v37 = 0;
      goto LABEL_54;
    }
    if ( Data )
    {
      v19 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBAF8, 0LL, 0LL);
      v20 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBAF8, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_1406FBAF8, v19, (ULONG_PTR)&qword_1406FBAF8);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      v21 = qword_1406FBB68 == 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBAF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBAF8);
      KeAbPostRelease((ULONG_PTR)&qword_1406FBAF8);
      if ( v21 )
      {
        dword_1406FB0F4 = 5;
        v85 = 5;
        sub_140489880(v84, 2LL);
        goto LABEL_51;
      }
      if ( !Data )
        goto LABEL_51;
      v22 = *((_DWORD *)Data + 1);
      v23 = (unsigned __int8 *)Data + 20;
      v73 = 0uLL;
      DWORD2(v72) = 4;
      *(_QWORD *)&v74 = 0LL;
      BYTE8(v74) = 1;
      if ( Data == (PVOID)-20LL )
        goto LABEL_66;
      v24 = 0LL;
      v25 = v22;
      if ( v22 )
      {
        v26 = 0;
        v27 = 0;
        do
        {
          v28 = *v23++;
          v28 -= 23737705;
          v26 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v26 + v28), 21), 21), 21);
          v27 += v26 + v28;
          --v25;
        }
        while ( v25 );
        v24 = __PAIR64__(v26, v27);
      }
      *(_QWORD *)&v72 = v24;
      if ( !(_DWORD)NumOfElements )
        goto LABEL_47;
      v29 = 16 * NumOfElements;
      if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
      {
LABEL_66:
        v24 = 0LL;
        DWORD2(v72) = 4;
      }
      else
      {
        v30 = (unsigned __int8 *)&unk_140701300;
        v31 = v29;
        if ( v29 )
        {
          v32 = HIDWORD(v24);
          v33 = v24;
          do
          {
            v34 = *v30++;
            v34 -= 23737705;
            v32 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v32 + v34), 21), 21), 21);
            v33 += v32 + v34;
            --v31;
          }
          while ( v31 );
          v24 = __PAIR64__(v32, v33);
        }
      }
      *(_QWORD *)&v72 = v24;
LABEL_47:
      v81 = v72;
      v82 = v73;
      v83 = v74;
      if ( (int)sub_14048AB98(v90) >= 0 )
      {
        v35 = 4;
        if ( v90[0] != v24 )
        {
          DWORD2(v81) = 4;
          v35 = 6;
        }
        v36 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v82 = v36 * KeQueryTimeIncrement() / 10000;
        sub_140489880(&v81, v35);
      }
    }
LABEL_51:
    if ( off_1406FB020 )
      goto LABEL_72;
    v37 = 1;
    if ( (int)sub_14048AB98(v93) >= 0 )
      v37 = v93[40];
LABEL_54:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v37 == 1 )
    {
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      v43 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&qword_1406FBA20, v43, (ULONG_PTR)&qword_1406FBA20);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      v44 = 0LL;
      if ( (int)sub_14048AB98(v86) >= 0 )
        v44 = v87;
      v45 = v44 + 3600;
      v89 = v45;
      sub_140489880(v88, 8LL);
      if ( off_1406FB020 )
      {
        v46 = 10800LL;
      }
      else
      {
        v46 = 0LL;
        if ( (int)sub_14048AB98(v91) >= 0 )
          v46 = v92;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
      KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      sub_1406698B8();
      if ( v46 > v45 )
      {
        v65 = 0;
      }
      else
      {
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        v48 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
        v49 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
        v50 = v48;
        if ( v49 )
          ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v48, (ULONG_PTR)&qword_1406FBA20);
        if ( v50 )
          *(_BYTE *)(v50 + 26) |= 1u;
        if ( !Data )
        {
          v51 = dword_1406FB0F4;
          goto LABEL_111;
        }
        v52 = sub_14048AB98(v80);
        if ( v52 >= 0 )
        {
          v51 = DWORD2(v80[0]);
          goto LABEL_111;
        }
        if ( v52 == -1073741275 && Data )
        {
          v53 = (unsigned __int8 *)Data + 20;
          v76 = 0uLL;
          DWORD2(v75) = 4;
          *(_QWORD *)&v77 = 0LL;
          BYTE8(v77) = 1;
          if ( Data == (PVOID)-20LL )
            goto LABEL_108;
          v54 = *((unsigned int *)Data + 1);
          v55 = 0LL;
          if ( *((_DWORD *)Data + 1) )
          {
            v56 = 0;
            v57 = 0;
            do
            {
              v58 = *v53++;
              v58 -= 23737705;
              v56 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v56 + v58), 21), 21), 21);
              v57 += v56 + v58;
              --v54;
            }
            while ( v54 );
            v55 = __PAIR64__(v56, v57);
          }
          *(_QWORD *)&v75 = v55;
          if ( (_DWORD)NumOfElements )
          {
            if ( !RtlULongLongToULong(16LL * (unsigned int)NumOfElements, &pulResult) )
            {
              v60 = pulResult;
              v61 = (unsigned __int8 *)&unk_140701300;
              if ( pulResult )
              {
                v62 = HIDWORD(v59);
                v63 = v59;
                do
                {
                  v64 = *v61++;
                  v64 -= 23737705;
                  v62 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v62 + v64), 21), 21), 21);
                  v63 += v62 + v64;
                  --v60;
                }
                while ( v60 );
                v59 = __PAIR64__(v62, v63);
              }
              *(_QWORD *)&v75 = v59;
              goto LABEL_109;
            }
LABEL_108:
            *(_QWORD *)&v75 = 0LL;
            DWORD2(v75) = 4;
          }
LABEL_109:
          v80[0] = v75;
          DWORD2(v80[0]) = 4;
          v80[1] = v76;
          v80[2] = v77;
          sub_140489880(v80, 0xFFFFFFFFLL);
        }
        v51 = 4;
LABEL_111:
        dword_1406FB0F4 = 2;
        v96 = 2;
        v65 = v51 == 0;
        sub_140489880(v95, 2LL);
        v66 = Data;
        if ( off_1406FB020 )
          v66 = off_1406FB020;
        if ( v66 )
          v66[3] |= 1u;
        v94[40] = 0;
        sub_140489880(v94, 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
        KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        sub_1404885A8();
        sub_140669904(&KernelLicensingCacheExpired);
        sub_14066A098(7190LL);
      }
      if ( v65 )
        sub_1404886E8();
    }
    if ( !ExpSystemSetupInProgress )
    {
      v38.QuadPart = MEMORY[0xFFFFF78000000014];
      ExpirationDate = ExGetExpirationDate(&ExpNtExpirationDate);
      a1 = (unsigned int)ExpirationDate;
      if ( ExpirationDate < 0 )
      {
        v40.QuadPart = 0LL;
        ExpNtExpirationDate.QuadPart = 0LL;
      }
      else
      {
        v40 = ExpNtExpirationDate;
      }
      MEMORY[0xFFFFF780000002C8] = v40.QuadPart;
      if ( (int)a1 >= 0 && ExpNtExpirationDate.QuadPart && v38.QuadPart >= ExpNtExpirationDate.QuadPart )
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
  v71[1] = -1LL;
  v71[0] = 0LL;
  return KeSetTimer2(ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v71);
}
