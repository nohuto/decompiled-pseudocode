/*
 * XREFs of KiSwapProcess @ 0x1400CC870
 * Callers:
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 * Callees:
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D8EA8 (KiSetAddressPolicy.c)
 */

unsigned __int64 __fastcall KiSwapProcess(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 GroupIndex; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  GroupIndex = CurrentPrcb->GroupIndex;
  v5 = 8LL * CurrentPrcb->Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v5 + a1), GroupIndex);
  v6 = *(_QWORD *)(a1 + 40);
  if ( KiKvaShadow )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( (v6 & 2) != 0 )
      v7 = v6 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v7);
    KiSetAddressPolicy(*(unsigned __int8 *)(a1 + 703));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v6);
  else
    __writecr3(v6);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v9 = __readcr4();
    if ( (v9 & 0x20080) != 0 )
    {
      result = v9 ^ 0x80;
      __writecr4(v9 ^ 0x80);
      __writecr4(v9);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v5 + a2), GroupIndex);
  return result;
}
