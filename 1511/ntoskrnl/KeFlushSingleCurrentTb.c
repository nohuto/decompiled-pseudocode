/*
 * XREFs of KeFlushSingleCurrentTb @ 0x140115120
 * Callers:
 *     MiDbgReleaseAddress @ 0x1401DDCD4 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401DE068 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x1401DE458 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x14039D45C (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushSingleTb @ 0x1402214D4 (HvlFlushSingleTb.c)
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
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v15[21]; // [rsp+50h] [rbp-71h] BYREF

  _R15D = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  if ( IsSecureProcessFlush || (HvlEnlightenments & 2) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 1310721LL;
    memset(v15, 0, 0xA0uLL);
    Group = CurrentPrcb->Group;
    GroupSetMember = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->Group )
      LOWORD(v14) = Group + 1;
    v15[Group] |= GroupSetMember;
    LOBYTE(v8) = IsSecureProcessFlush;
    result = HvlFlushSingleTb(0LL, &v14, v8, a1);
  }
  else
  {
    result = (unsigned int)(1 << v4);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
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
