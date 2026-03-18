/*
 * XREFs of KeFlushSingleCurrentTb @ 0x14014A648
 * Callers:
 *     MiDbgReleaseAddress @ 0x140223080 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402235E4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x140224FB0 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x1403EF8C8 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushSingleTb @ 0x1402708A8 (HvlFlushSingleTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, int a2)
{
  char v4; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // r8
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // [rsp+28h] [rbp-99h] BYREF
  __int128 v12; // [rsp+30h] [rbp-91h]
  __int64 v13; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v14[21]; // [rsp+50h] [rbp-71h] BYREF

  _R14D = 0;
  if ( a2 == 1 && a1 <= (unsigned __int64)MmHighestUserAddress && KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v4 = 1;
LABEL_5:
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 1310721LL;
    memset(v14, 0, 0xA0uLL);
    Group = CurrentPrcb->Group;
    GroupSetMember = CurrentPrcb->GroupSetMember;
    if ( CurrentPrcb->Group )
      LOWORD(v13) = Group + 1;
    v14[Group] |= GroupSetMember;
    LOBYTE(v6) = v4;
    result = HvlFlushSingleTb(0LL, &v13, v6, a1);
    goto LABEL_8;
  }
  v4 = 0;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_5;
  result = (unsigned int)(1 << a2);
  if ( (result & 0xA) != 0 )
  {
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
      {
        *(_QWORD *)&v12 = 1LL;
        *((_QWORD *)&v12 + 1) = a1;
        __asm { invpcid r14d, [rsp+110h+var_F0+8] }
      }
    }
  }
  __invlpg((void *)a1);
LABEL_8:
  if ( VmTbFlushEnabled )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v11);
  }
  if ( ExTbFlushActive )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v11, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
