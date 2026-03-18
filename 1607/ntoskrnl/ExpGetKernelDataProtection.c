/*
 * XREFs of ExpGetKernelDataProtection @ 0x14049779C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1406ADC34 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1406AE220 (ExSetLicenseTamperState.c)
 *     sub_1406AF850 @ 0x1406AF850 (sub_1406AF850.c)
 *     sub_1406AF9A8 @ 0x1406AF9A8 (sub_1406AF9A8.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     sub_140497880 @ 0x140497880 (sub_140497880.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax
  int v5; // [rsp+20h] [rbp-28h]
  _OWORD *v6; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_140747BF0, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747BF0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747BF0, v2, (ULONG_PTR)&qword_140747BF0);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  if ( qword_140747C68 )
  {
    v6 = *(_OWORD **)qword_140747C68;
    v5 = sub_140497880(&v6);
    if ( v5 >= 0 )
    {
      v3 = v6;
      *a1 = *v6;
      a1[1] = v3[1];
      a1[2] = v3[2];
    }
  }
  else
  {
    v5 = -1073741275;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747BF0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747BF0);
  KeAbPostRelease((ULONG_PTR)&qword_140747BF0);
  return (unsigned int)v5;
}
