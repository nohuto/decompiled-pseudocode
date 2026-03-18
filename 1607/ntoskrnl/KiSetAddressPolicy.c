/*
 * XREFs of KiSetAddressPolicy @ 0x1401D907C
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x1400981E0 (KiLoadDirectoryTableBase.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400CE9D0 (KiSwapProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1401DB0C4 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x14015E900 (KxSetAddressPolicy.c)
 */

__int64 __fastcall KiSetAddressPolicy(char a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+20h] [rbp-8h]

  _disable();
  KxSetAddressPolicy(a1);
  result = v2 >> 9;
  if ( (v2 & 0x200) != 0 )
    _enable();
  return result;
}
