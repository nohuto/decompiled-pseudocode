/*
 * XREFs of ExInitLicenseData @ 0x1407B505C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ClipInitHandles @ 0x140148508 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404CF8F8 (ExpCheckPortableOperatingSystem.c)
 *     sub_140575DE4 @ 0x140575DE4 (sub_140575DE4.c)
 *     sub_1406AF0C0 @ 0x1406AF0C0 (sub_1406AF0C0.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407B5678 @ 0x1407B5678 (sub_1407B5678.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r14
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  int v11; // esi
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  struct _KTHREAD *v19; // rax
  _BYTE *v20; // rax
  _BYTE *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v25; // rax
  _BYTE *v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v32; // rax
  _BYTE *v33; // rax
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // [rsp+20h] [rbp-50h] BYREF
  __int64 v39; // [rsp+28h] [rbp-48h] BYREF
  int v40; // [rsp+30h] [rbp-40h]
  __int64 v41; // [rsp+38h] [rbp-38h]
  __int64 v42; // [rsp+40h] [rbp-30h]
  __int64 v43; // [rsp+48h] [rbp-28h]
  char v44; // [rsp+50h] [rbp-20h]
  __int128 v45; // [rsp+58h] [rbp-18h] BYREF

  v0 = BYTE1(NlsMbCodePageTag);
  ClipInitHandles();
  sub_1407B5678();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&qword_140747B20, v2, (ULONG_PTR)&qword_140747B20);
  if ( v4 )
    v4[26] |= 1u;
  v39 = 0LL;
  v41 = 0LL;
  v40 = 0;
  v42 = 0LL;
  v43 = 10800LL;
  v44 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v44 = 0;
  ExpSetKernelDataProtection((__int64)&v39, -1, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  if ( (int)ExpCheckPortableOperatingSystem(&v38) >= 0 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    v34 = v33;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v33, (ULONG_PTR)&qword_140747B20);
    if ( v34 )
      v34[26] |= 1u;
    dword_1407471D8 = v38;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
  }
  if ( off_140747028 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    v10 = v9;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v9, (ULONG_PTR)&qword_140747B20);
    if ( v10 )
      v10[26] |= 1u;
    v11 = sub_140575DE4();
    if ( v11 == -1073741762 )
    {
      v12 = 1;
      BYTE1(NlsMbCodePageTag) = 1;
    }
    else
    {
      v12 = BYTE1(NlsMbCodePageTag);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
    if ( !v0 && v12 )
      sub_1406AF0C0(&KernelLicensingCacheCorrupt);
    if ( v11 >= 0 && !v12 )
      ExUpdateLicenseDataInternal(dword_140760124, (unsigned int *)off_140747028);
    v16 = &v45;
    v17 = 16LL;
    do
    {
      v18 = __rdtsc();
      *(_BYTE *)v16 = v18;
      v16 = (__int128 *)((char *)v16 + 1);
      --v17;
    }
    while ( v17 );
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    v21 = v20;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v20, (ULONG_PTR)&qword_140747B20);
    if ( v21 )
      v21[26] |= 1u;
    xmmword_140748480 = v45;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
    v27 = v26;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v26, (ULONG_PTR)&qword_140747B20);
    if ( v27 )
      v27[26] |= 1u;
    off_140747028 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_1407494C0, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
    KeAbPostRelease((ULONG_PTR)&qword_140747B20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
  }
  return ExpInitFastCache();
}
