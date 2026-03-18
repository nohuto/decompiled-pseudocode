/*
 * XREFs of GetModificationNumber @ 0x1C0099B1C
 * Callers:
 *     InternalVkKeyScanEx @ 0x1C0099234 (InternalVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228770 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228850 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     VKFromVSC @ 0x1C022A6E0 (VKFromVSC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModificationNumber(__int64 a1, unsigned __int16 a2)
{
  if ( a2 > *(_WORD *)(a1 + 8) )
    return 15LL;
  else
    return *(unsigned __int8 *)(a2 + a1 + 10);
}
