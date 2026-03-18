/*
 * XREFs of KiLoadDirectoryTableBase @ 0x1400E2B58
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14007C224 (KiSwapDirectoryTableBaseTarget.c)
 *     KiAttachProcess @ 0x1400C7960 (KiAttachProcess.c)
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x1401CA818 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022153C (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiLoadDirectoryTableBase(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  if ( KiKvaShadow )
  {
    v3 = a2;
    if ( (a2 & 2) != 0 )
      v3 = a2 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v3);
    KiSetAddressPolicy(*(unsigned __int8 *)(a1 + 640));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(a2);
  else
    __writecr3(a2);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v5 = __readcr4();
    if ( (v5 & 0x20080) != 0 )
    {
      result = v5 ^ 0x80;
      __writecr4(v5 ^ 0x80);
      __writecr4(v5);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  return result;
}
