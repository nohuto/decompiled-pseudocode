/*
 * XREFs of ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180003658
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180011D28 (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180012328 (-LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::QueryCommitAndAvailablePhysical(
        ExecutionModel *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-1B0h]
  _BYTE SystemInformation[44]; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v9; // [rsp+8Ch] [rbp-14Ch]
  int v10; // [rsp+90h] [rbp-148h]
  int v11; // [rsp+94h] [rbp-144h]

  if ( !RmpPageSize )
  {
    if ( NtQuerySystemInformation(SystemBasicInformation, v6, 0x40u, 0LL) < 0 )
      goto LABEL_6;
    RmpPageSize = v7;
  }
  if ( NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x158u, 0LL) >= 0 )
  {
    v5 = RmpPageSize * (unsigned int)(v11 - v10);
    *(_QWORD *)this = RmpPageSize * v9;
    *a2 = v5;
    return;
  }
LABEL_6:
  *(_QWORD *)this = 0LL;
  *a2 = 0LL;
}
