/*
 * XREFs of ExpTimeRefreshWork @ 0x1403C9110
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     ExReleaseTimeRefreshLock @ 0x1404B4394 (ExReleaseTimeRefreshLock.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_1404D3608 @ 0x1404D3608 (sub_1404D3608.c)
 *     ExGetExpirationDate @ 0x14052DFE8 (ExGetExpirationDate.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 *     sub_1406AF074 @ 0x1406AF074 (sub_1406AF074.c)
 *     sub_1406AF0C0 @ 0x1406AF0C0 (sub_1406AF0C0.c)
 *     sub_1406AF8BC @ 0x1406AF8BC (sub_1406AF8BC.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rbx
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rax
  __int64 v12; // rbx
  _BYTE *v13; // rax
  signed __int8 v14; // cf
  _BYTE *v15; // rbx
  bool v16; // bl
  int updated; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v22; // rcx
  __int64 v23; // rdx
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  LARGE_INTEGER v28; // rbx
  int ExpirationDate; // eax
  LARGE_INTEGER v30; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _KTHREAD *v40; // rax
  _BYTE *v41; // rax
  _BYTE *v42; // rbx
  int v43; // eax
  int KernelDataProtection; // eax
  int v45; // eax
  __int64 v46; // rdx
  bool v47; // bl
  _DWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  __int64 v53; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v55; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h] BYREF
  __int128 v57; // [rsp+98h] [rbp-70h]
  __int128 v58; // [rsp+A8h] [rbp-60h]
  HANDLE ThreadHandle; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v60[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-38h] BYREF
  __m256i v62; // [rsp+E0h] [rbp-28h]
  _OWORD v63[3]; // [rsp+100h] [rbp-8h] BYREF
  char v64[8]; // [rsp+130h] [rbp+28h] BYREF
  char v65[8]; // [rsp+138h] [rbp+30h] BYREF
  char v66; // [rsp+140h] [rbp+38h] BYREF
  int v67; // [rsp+148h] [rbp+40h]
  __int64 v68[6]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v69[48]; // [rsp+1A0h] [rbp+98h] BYREF
  char v70[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v71; // [rsp+1E8h] [rbp+E0h]
  char v72[24]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 v73; // [rsp+218h] [rbp+110h]
  char v74[32]; // [rsp+230h] [rbp+128h] BYREF
  unsigned __int64 v75; // [rsp+250h] [rbp+148h]
  char v76[8]; // [rsp+260h] [rbp+158h] BYREF
  int v77; // [rsp+268h] [rbp+160h]
  _BYTE v78[48]; // [rsp+290h] [rbp+188h] BYREF
  int v79[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  __int64 v80; // [rsp+2C8h] [rbp+1C0h]
  __int64 v81; // [rsp+2D0h] [rbp+1C8h]

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    _InterlockedAdd64(&qword_140747BD8, 1uLL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
    v4 = v2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v2, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v4 )
      v4[26] |= 1u;
    if ( *(_QWORD *)&qword_140747E48 || (int)ExpObtainFastCacheKeyBody(&stru_1406E9A88) >= 0 )
    {
      v53 = 0LL;
      if ( (int)ExpLicUpdateChecksum((__int64)v64, v3, &v53) >= 0 )
      {
        v5 = 0LL;
        while ( (int)ExpLicUpdateChecksum((__int64)v65, v5, &v53) >= 0 )
        {
          v5 = (unsigned int)(v6 + 1);
          if ( (unsigned __int64)(int)v5 >= 5 )
          {
            *(_QWORD *)v79 = v7;
            v80 = v53;
            LODWORD(ClientId) = 24;
            v81 = 0LL;
            CmSetValueKey(qword_140747E48, (int)&stru_1406E9A78, 3, (int)v79, (size_t)ClientId, 0LL, 0);
            break;
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_140747B20, v12, (ULONG_PTR)&qword_140747B20);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( off_140747028 )
    {
LABEL_60:
      v24 = 0;
      goto LABEL_43;
    }
    if ( Data )
    {
      v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747BF0, 0LL, 0);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747BF0, 0LL);
      v15 = v13;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(&qword_140747BF0, v13, (ULONG_PTR)&qword_140747BF0);
      if ( v15 )
        v15[26] |= 1u;
      v16 = qword_140747C68 == 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747BF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747BF0);
      KeAbPostRelease((ULONG_PTR)&qword_140747BF0);
      if ( v16 )
      {
        dword_1407470B4 = 5;
        v22 = (__int128 *)&v66;
        v67 = 5;
        v23 = 2LL;
LABEL_39:
        ExpSetKernelDataProtection(v22, v23, 0LL);
        goto LABEL_40;
      }
      if ( Data )
      {
        *(_QWORD *)&v54 = 0LL;
        memset(&v55, 0, 24);
        DWORD2(v54) = 4;
        v55.m256i_i8[24] = 1;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v54);
        if ( updated
          || (_DWORD)v18
          && (16 * (unsigned __int64)(unsigned int)v18 > 0xFFFFFFFF
           || (updated = ExpLicUpdateChecksum((__int64)&unk_1407494C0, v18, &v54)) != 0) )
        {
          *(_QWORD *)&v54 = 0LL;
          updated = 0;
          DWORD2(v54) = 4;
        }
        v61 = v54;
        v62 = v55;
      }
      else
      {
        updated = -1073741811;
      }
      if ( !updated && (int)ExpGetKernelDataProtection(v68) >= 0 )
      {
        v19 = 4;
        if ( v68[0] != (_QWORD)v61 )
        {
          DWORD2(v61) = 4;
          v19 = 6;
        }
        v20 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v22 = &v61;
        v62.m256i_i64[0] = v20 * TimeIncrement / 10000;
        v23 = v19;
        goto LABEL_39;
      }
    }
LABEL_40:
    if ( off_140747028 )
      goto LABEL_60;
    v24 = 1;
    if ( (int)ExpGetKernelDataProtection(v69) >= 0 )
      v24 = v69[40];
LABEL_43:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
    if ( v24 == 1 )
    {
      v32 = KeGetCurrentThread();
      --v32->KernelApcDisable;
      v33 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&qword_140747B20, v33, (ULONG_PTR)&qword_140747B20);
      if ( v33 )
        *(_BYTE *)(v33 + 26) |= 1u;
      v34 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v70) >= 0 )
        v34 = v71;
      v35 = v34 + 3600;
      v73 = v35;
      ExpSetKernelDataProtection(v72, 8LL, 0LL);
      if ( off_140747028 )
      {
        v36 = 10800LL;
      }
      else
      {
        v36 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v74) >= 0 )
          v36 = v75;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
      KeAbPostRelease((ULONG_PTR)&qword_140747B20);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
      sub_1406AF074();
      if ( v36 > v35 )
      {
        v47 = 0;
      }
      else
      {
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v41 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
        v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
        v42 = v41;
        if ( v14 )
          ExfAcquirePushLockExclusiveEx(&qword_140747B20, v41, (ULONG_PTR)&qword_140747B20);
        if ( v42 )
          v42[26] |= 1u;
        if ( Data )
        {
          KernelDataProtection = ExpGetKernelDataProtection(v63);
          if ( KernelDataProtection < 0 )
          {
            if ( KernelDataProtection == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v56 = 0LL;
                v57 = 0uLL;
                DWORD2(v56) = 4;
                *(_QWORD *)&v58 = 0LL;
                BYTE8(v58) = 1;
                v45 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v56);
                if ( v45
                  || (_DWORD)v46
                  && (16 * (unsigned __int64)(unsigned int)v46 > 0xFFFFFFFF
                   || (v45 = ExpLicUpdateChecksum((__int64)&unk_1407494C0, v46, &v56)) != 0) )
                {
                  *(_QWORD *)&v56 = 0LL;
                  v45 = 0;
                  DWORD2(v56) = 4;
                }
                v63[0] = v56;
                v63[1] = v57;
                v63[2] = v58;
              }
              else
              {
                v45 = -1073741811;
              }
              if ( v45 >= 0 )
              {
                DWORD2(v63[0]) = 4;
                ExpSetKernelDataProtection(v63, 0xFFFFFFFFLL, 0LL);
              }
            }
            v43 = 4;
          }
          else
          {
            v43 = DWORD2(v63[0]);
          }
        }
        else
        {
          v43 = dword_1407470B4;
        }
        dword_1407470B4 = 2;
        v77 = 2;
        v47 = v43 == 0;
        ExpSetKernelDataProtection(v76, 2LL, 0LL);
        v48 = Data;
        if ( off_140747028 )
          v48 = off_140747028;
        if ( v48 )
          v48[3] |= 1u;
        v78[40] = 0;
        ExpSetKernelDataProtection(v78, 32LL, 0LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
        KeAbPostRelease((ULONG_PTR)&qword_140747B20);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v49, v50, v51);
        ExpPutLicenseDataIntoRegistry();
        sub_1406AF0C0(&KernelLicensingCacheExpired);
        sub_1406AF8BC(7190LL);
      }
      if ( v47 )
        sub_1404D3608();
    }
    if ( !ExpSystemSetupInProgress )
    {
      v28.QuadPart = MEMORY[0xFFFFF78000000014];
      ExpirationDate = ExGetExpirationDate(&ExpNtExpirationDate);
      a1 = (unsigned int)ExpirationDate;
      if ( ExpirationDate < 0 )
      {
        v30.QuadPart = 0LL;
        ExpNtExpirationDate.QuadPart = 0LL;
      }
      else
      {
        v30 = ExpNtExpirationDate;
      }
      MEMORY[0xFFFFF780000002C8] = v30.QuadPart;
      if ( (int)a1 >= 0 && ExpNtExpirationDate.QuadPart && v28.QuadPart >= ExpNtExpirationDate.QuadPart )
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
  v60[1] = -1LL;
  v60[0] = 0LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v60);
}
