/*
 * XREFs of CmpInitializeKcbStack @ 0x140404944
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpConstructNameFromKeyNodes @ 0x14002D790 (CmpConstructNameFromKeyNodes.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
