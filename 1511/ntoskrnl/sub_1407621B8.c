/*
 * XREFs of sub_1407621B8 @ 0x1407621B8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ClipSpInitialize_0 @ 0x1400012F8 (ClipSpInitialize_0.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeQueryTimeIncrement @ 0x1400C7DB0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_1404C80E8 @ 0x1404C80E8 (sub_1404C80E8.c)
 *     sub_14052ECEC @ 0x14052ECEC (sub_14052ECEC.c)
 *     sub_140669904 @ 0x140669904 (sub_140669904.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 */

__int64 sub_1407621B8()
{
  char v0; // r14
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  char v10; // di
  __int128 *v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  int v26; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+38h] [rbp-38h]
  __int64 v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h]
  char v30; // [rsp+50h] [rbp-20h]
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  qword_1406FB348 = (__int64)ExIsAppLicensed;
  qword_1406FB350 = (__int64)ExIsAppLicensedProduct;
  qword_1406FB358 = (__int64)ExIsWindowsToGo;
  qword_1406FB360 = (__int64)sub_14045751C;
  KiInitializeMutant((__int64)&stru_1402D54C0, 0LL, 0LL);
  stru_1402D5500.Header.Size = 6;
  stru_1402D5500.Header.WaitListHead.Blink = &stru_1402D5500.Header.WaitListHead;
  stru_1402D5500.Header.WaitListHead.Flink = &stru_1402D5500.Header.WaitListHead;
  LOWORD(stru_1402D5500.Header.Lock) = 0;
  stru_1402D5500.Header.SignalState = 0;
  v1 = MEMORY[0xFFFFF78000000320];
  qword_1406FB208 = v1 * KeQueryTimeIncrement() / 10000;
  ClipSpInitialize_0();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v3, (ULONG_PTR)&qword_1406FBA20);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0;
  v28 = 0LL;
  v29 = 10800LL;
  v30 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v30 = 0;
  sub_140489880((__int64)&v25, -1, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)sub_1404C80E8(&v24) >= 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
    v23 = v22;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v22, (ULONG_PTR)&qword_1406FBA20);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    dword_1406FB1E0 = v24;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( off_1406FB020 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
    v8 = v7;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v7, (ULONG_PTR)&qword_1406FBA20);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = sub_14052ECEC();
    if ( v9 == -1073741762 )
    {
      v10 = 1;
      BYTE1(NlsMbCodePageTag) = 1;
    }
    else
    {
      v10 = BYTE1(NlsMbCodePageTag);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 && v10 )
      sub_140669904(&KernelLicensingCacheCorrupt);
    if ( v9 >= 0 && !v10 )
      ExUpdateLicenseData_0(dword_140717124, (unsigned int *)off_1406FB020);
    v11 = &v31;
    v12 = 16LL;
    do
    {
      v13 = __rdtsc();
      *(_BYTE *)v11 = v13;
      v11 = (__int128 *)((char *)v11 + 1);
      --v12;
    }
    while ( v12 );
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
    v16 = v15;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v15, (ULONG_PTR)&qword_1406FBA20);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    xmmword_1406FC308 = v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL);
    v19 = v18;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v18, (ULONG_PTR)&qword_1406FBA20);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    off_1406FB020 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_140701300, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return sub_14076255C();
}
