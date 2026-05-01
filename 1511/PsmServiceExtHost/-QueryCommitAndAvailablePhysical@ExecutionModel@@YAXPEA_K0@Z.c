/*
 * XREFs of ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180004260
 * Callers:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180003D00 (-LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003E1C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004557C (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004567C (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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
