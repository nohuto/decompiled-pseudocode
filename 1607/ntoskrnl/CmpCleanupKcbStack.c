/*
 * XREFs of CmpCleanupKcbStack @ 0x140404934
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
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    MiDeleteSubsection(v1);
}
