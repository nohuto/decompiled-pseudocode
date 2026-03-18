/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x14011F758
 * Callers:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     KiFlushRangeTb @ 0x14011F814 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  bool IsSecureProcessFlush; // r15
  __int64 result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v16[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v17; // [rsp+38h] [rbp-91h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v19[21]; // [rsp+48h] [rbp-81h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( IsSecureProcessFlush || (result = KiFlushViaHypervisor(), (_DWORD)result) )
  {
    KiPrepareFlushParameters(a3, &v17, v16);
    CurrentPrcb = KeGetCurrentPrcb();
    v18[1] = 0;
    v18[0] = 1310721;
    memset(v19, 0, 0xA0uLL);
    Group = CurrentPrcb->Group;
    GroupSetMember = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->Group )
      LOWORD(v18[0]) = Group + 1;
    v19[Group] |= GroupSetMember;
    LOBYTE(v12) = IsSecureProcessFlush;
    LOBYTE(v11) = v16[0];
    result = HvlFlushRangeListTb(v17, v18, v11, v12, a1, a2);
  }
  else if ( a1 )
  {
    v8 = a2;
    v9 = a1;
    do
    {
      result = KiFlushRangeTb(*v8++, a3);
      --v9;
    }
    while ( v9 );
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
