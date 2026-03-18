/*
 * XREFs of sub_14048AB98 @ 0x14048AB98
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     ExGetLicenseTamperState @ 0x140668388 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140668914 (ExSetLicenseTamperState.c)
 *     sub_14066A178 @ 0x14066A178 (sub_14066A178.c)
 *     sub_14066A360 @ 0x14066A360 (sub_14066A360.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     sub_14048AC7C @ 0x14048AC7C (sub_14048AC7C.c)
 */

__int64 __fastcall sub_14048AB98(_OWORD *a1)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax
  int v5; // [rsp+20h] [rbp-28h]
  _OWORD *v6; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBAF8, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBAF8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBAF8, v2, (ULONG_PTR)&qword_1406FBAF8);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  if ( qword_1406FBB68 )
  {
    v6 = *(_OWORD **)qword_1406FBB68;
    v5 = sub_14048AC7C(&v6);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBAF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBAF8);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBAF8);
  return (unsigned int)v5;
}
