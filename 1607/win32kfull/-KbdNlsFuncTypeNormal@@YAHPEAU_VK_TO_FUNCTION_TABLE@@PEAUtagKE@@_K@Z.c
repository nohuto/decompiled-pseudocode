/*
 * XREFs of ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228150
 * Callers:
 *     <none>
 * Callees:
 *     GetModifierBits @ 0x1C00E80D0 (GetModifierBits.c)
 *     GetModificationNumber @ 0x1C00E8270 (GetModificationNumber.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C0228014 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeNormal(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3)
{
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax

  if ( !a2 )
    return 0LL;
  ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_NLSKBD, (__int64)gafRawKeyState);
  ModificationNumber = GetModificationNumber((__int64)&Modifiers_NLSKBD, ModifierBits);
  if ( ModificationNumber == 15 )
    return 0LL;
  else
    return GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
}
