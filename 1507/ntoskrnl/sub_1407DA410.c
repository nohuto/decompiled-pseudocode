/*
 * XREFs of sub_1407DA410 @ 0x1407DA410
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     ClipSpInitialize_0 @ 0x1400012F8 (ClipSpInitialize_0.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_1405A9B50 @ 0x1405A9B50 (sub_1405A9B50.c)
 *     sub_1406ECE98 @ 0x1406ECE98 (sub_1406ECE98.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 */

__int64 sub_1407DA410()
{
  char v0; // r14
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  __int64 v10; // r9
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // esi
  char v16; // di
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int128 *v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  struct _KTHREAD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // r9
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  struct _KTHREAD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  struct _KTHREAD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rdi
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  int v44; // [rsp+20h] [rbp-50h] BYREF
  __int64 v45; // [rsp+28h] [rbp-48h] BYREF
  int v46; // [rsp+30h] [rbp-40h]
  __int64 v47; // [rsp+38h] [rbp-38h]
  __int64 v48; // [rsp+40h] [rbp-30h]
  __int64 v49; // [rsp+48h] [rbp-28h]
  char v50; // [rsp+50h] [rbp-20h]
  __int128 v51; // [rsp+58h] [rbp-18h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  qword_14077E328 = (__int64)ExIsAppLicensed;
  qword_14077E330 = (__int64)ExIsAppLicensedProduct;
  qword_14077E340 = (__int64)sub_140261F50;
  qword_14077E348 = (__int64)ExQueryFastCacheDevLicense;
  qword_14077E338 = (__int64)ExIsWindowsToGo;
  qword_14077E350 = (__int64)sub_1404DABD0;
  KiInitializeMutant((__int64)&Mutex, 0, 0);
  stru_140324640.Header.Size = 6;
  stru_140324640.Header.WaitListHead.Blink = &stru_140324640.Header.WaitListHead;
  stru_140324640.Header.WaitListHead.Flink = &stru_140324640.Header.WaitListHead;
  LOWORD(stru_140324640.Header.Lock) = 0;
  stru_140324640.Header.SignalState = 0;
  v1 = MEMORY[0xFFFFF78000000320];
  qword_14077E1F8 = v1 * KeQueryTimeIncrement() / 10000;
  ClipSpInitialize_0();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v4, (ULONG_PTR)&qword_14077EA20, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v45 = 0LL;
  v47 = 0LL;
  v46 = 0;
  v48 = 0LL;
  v49 = 10800LL;
  v50 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v50 = 0;
  sub_14051D108((__int64)&v45, -1, 1, v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (int)sub_1404A8518(&v44) >= 0 )
  {
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    v39 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v10);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
    v41 = v39;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v39, (ULONG_PTR)&qword_14077EA20, v40);
    if ( v41 )
      *(_BYTE *)(v41 + 26) |= 1u;
    dword_14077E1D4 = v44;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v42 = KeGetCurrentThread();
    v43 = v42->KernelApcDisable + 1;
    v42->KernelApcDisable = v43;
    if ( !v43
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
      && !v42->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( off_14077E020 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v10);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
    v14 = v12;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v12, (ULONG_PTR)&qword_14077EA20, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = sub_1405A9B50();
    if ( v15 == -1073741762 )
    {
      v16 = 1;
      BYTE1(NlsMbCodePageTag) = 1;
    }
    else
    {
      v16 = BYTE1(NlsMbCodePageTag);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v0 && v16 )
      sub_1406ECE98(&KernelLicensingCacheCorrupt);
    if ( v15 >= 0 && !v16 )
      ExUpdateLicenseData_0(dword_14080B174, (unsigned int *)off_14077E020, v17, v18);
    v21 = &v51;
    v22 = 16LL;
    do
    {
      v23 = __rdtsc();
      *(_BYTE *)v21 = v23;
      v21 = (__int128 *)((char *)v21 + 1);
      --v22;
    }
    while ( v22 );
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v18);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
    v27 = v25;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v25, (ULONG_PTR)&qword_14077EA20, v26);
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    xmmword_14077F338 = v51;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v28);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL);
    v34 = v32;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v32, (ULONG_PTR)&qword_14077EA20, v33);
    if ( v34 )
      *(_BYTE *)(v34 + 26) |= 1u;
    off_14077E020 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_140784300, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return sub_1407DA854();
}
