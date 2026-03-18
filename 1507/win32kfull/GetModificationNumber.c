/*
 * XREFs of GetModificationNumber @ 0x1C00DAB78
 * Callers:
 *     xxxInternalToUnicode @ 0x1C00DA574 (xxxInternalToUnicode.c)
 *     InternalVkKeyScanEx @ 0x1C00DAA04 (InternalVkKeyScanEx.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228470 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228550 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     VKFromVSC @ 0x1C022A3E0 (VKFromVSC.c)
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
