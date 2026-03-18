/*
 * XREFs of sub_14051E368 @ 0x14051E368
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_14051DFA0 @ 0x14051DFA0 (sub_14051DFA0.c)
 *     ExGetLicenseTamperState @ 0x1406EB74C (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1406EBE90 (ExSetLicenseTamperState.c)
 *     sub_1406ED774 @ 0x1406ED774 (sub_1406ED774.c)
 *     sub_1406ED95C @ 0x1406ED95C (sub_1406ED95C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     sub_14051E44C @ 0x14051E44C (sub_14051E44C.c)
 */

__int64 __fastcall sub_14051E368(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  _OWORD *v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  _OWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_14077EAF0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EAF0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EAF0, v5, (ULONG_PTR)&qword_14077EAF0, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( qword_14077EB68 )
  {
    v10 = *(_OWORD **)qword_14077EB68;
    v9 = sub_14051E44C(&v10);
    if ( v9 >= 0 )
    {
      v7 = v10;
      *a1 = *v10;
      a1[1] = v7[1];
      a1[2] = v7[2];
    }
  }
  else
  {
    v9 = -1073741275;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EAF0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EAF0);
  KeAbPostRelease((ULONG_PTR)&qword_14077EAF0);
  return (unsigned int)v9;
}
