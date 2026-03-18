/*
 * XREFs of GetModifierBits @ 0x1C0099ACC
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228770 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228850 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     VKFromVSC @ 0x1C022A6E0 (VKFromVSC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModifierBits(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v2; // r9
  unsigned __int16 v3; // r10

  v2 = *a1;
  v3 = 0;
  while ( *v2 )
  {
    if ( ((unsigned __int8)(1 << (2 * (*v2 & 3))) & *(_BYTE *)(((unsigned __int64)*v2 >> 2) + a2)) != 0 )
      v3 |= v2[1];
    v2 += 2;
  }
  return v3;
}
