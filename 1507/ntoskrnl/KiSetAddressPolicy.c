/*
 * XREFs of KiSetAddressPolicy @ 0x14020A1B8
 * Callers:
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14010C4D0 (KiAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14010EDCC (KiSwapDirectoryTableBaseTarget.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14020A5D0 (KiSynchronizeAddressPolicyTarget.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x140183720 (KxSetAddressPolicy.c)
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
