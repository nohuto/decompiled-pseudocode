/*
 * XREFs of KeFlushSingleCurrentTb @ 0x14012CDD0
 * Callers:
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012CD4C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140148D38 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiStackTheftIsr @ 0x1401E6498 (MiStackTheftIsr.c)
 *     MmReadProcessPageTables @ 0x1401EED54 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x1403CB944 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DA4C (KiIsSecureProcessFlush.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlFlushSingleTb @ 0x1401C1404 (HvlFlushSingleTb.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, int a2)
{
  char v4; // r9
  bool IsSecureProcessFlush; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r8
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v12; // [rsp+28h] [rbp-99h] BYREF
  __int128 v13; // [rsp+30h] [rbp-91h]
  _DWORD v14[44]; // [rsp+48h] [rbp-79h] BYREF

  _R15D = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  if ( IsSecureProcessFlush || (HvlEnlightenments & 2) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14[0] = 1310721;
    memset(&v14[1], 0, 0xA4uLL);
    Group = CurrentPrcb->Group;
    GroupSetMember = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->Group )
      LOWORD(v14[0]) = Group + 1;
    *(_QWORD *)&v14[2 * Group + 2] |= GroupSetMember;
    LOBYTE(v8) = IsSecureProcessFlush;
    result = HvlFlushSingleTb(0LL, v14, v8, a1);
  }
  else
  {
    result = (unsigned int)(1 << v4);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 703LL) )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          __asm { invpcid r15d, [rsp+110h+var_F0+8] }
        }
      }
    }
    __invlpg((void *)a1);
  }
  if ( VmTbFlushEnabled )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v12);
  }
  if ( ExTbFlushActive )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v12, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
