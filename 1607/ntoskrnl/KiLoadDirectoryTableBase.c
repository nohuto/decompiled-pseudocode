/*
 * XREFs of KiLoadDirectoryTableBase @ 0x1400979E0
 * Callers:
 *     KiAttachProcess @ 0x1400CB390 (KiAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1401DAE10 (KiSwapDirectoryTableBaseTarget.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 * Callees:
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D8EA8 (KiSetAddressPolicy.c)
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
    KiSetAddressPolicy(*(unsigned __int8 *)(a1 + 703));
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
