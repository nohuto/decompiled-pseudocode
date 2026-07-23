/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x140403EA8
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140402E14 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAF6C (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x14043EFE0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
