/*
 * XREFs of KiSetAddressPolicy @ 0x1401D8EA8
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x1400979E0 (KiLoadDirectoryTableBase.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400CC870 (KiSwapProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1401DAEF0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x14015EE70 (KxSetAddressPolicy.c)
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
