/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x14012FD08
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DA4C (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     KiFlushRangeTb @ 0x14012FDBC (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1401D6060 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // r9
  bool IsSecureProcessFlush; // r14
  __int64 result; // rax
  __int64 v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v18[8]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-F0h] BYREF
  _DWORD v20[44]; // [rsp+40h] [rbp-E8h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( IsSecureProcessFlush || (result = KiFlushViaHypervisor(), (_DWORD)result) )
  {
    KiPrepareFlushParameters(a3, &v19, v18, v6);
    CurrentPrcb = KeGetCurrentPrcb();
    v20[0] = 1310721;
    memset(&v20[1], 0, 0xA4uLL);
    Group = CurrentPrcb->Group;
    GroupSetMember = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->Group )
      LOWORD(v20[0]) = Group + 1;
    *(_QWORD *)&v20[2 * Group + 2] |= GroupSetMember;
    LOBYTE(v14) = IsSecureProcessFlush;
    LOBYTE(v13) = v18[0];
    result = HvlFlushRangeListTb(v19, v20, v13, v14, a1, a2);
  }
  else if ( a1 )
  {
    v10 = a2;
    v11 = a1;
    do
    {
      result = KiFlushRangeTb(*v10++, a3, v9, v6);
      --v11;
    }
    while ( v11 );
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(a1, a2);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(a1, a2, a3);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
