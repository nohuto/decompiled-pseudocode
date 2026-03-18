/*
 * XREFs of KiSetAddressPolicy @ 0x1401CA818
 * Callers:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x1400E2B58 (KiLoadDirectoryTableBase.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1401CB510 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x140154B30 (KxSetAddressPolicy.c)
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
