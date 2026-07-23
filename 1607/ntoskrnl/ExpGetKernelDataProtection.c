/*
 * XREFs of ExpGetKernelDataProtection @ 0x14049822C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1406ADD6C (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1406AE358 (ExSetLicenseTamperState.c)
 *     sub_1406AF988 @ 0x1406AF988 (sub_1406AF988.c)
 *     sub_1406AFAE0 @ 0x1406AFAE0 (sub_1406AFAE0.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     sub_140498310 @ 0x140498310 (sub_140498310.c)
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
    v5 = sub_140498310(&v6);
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
