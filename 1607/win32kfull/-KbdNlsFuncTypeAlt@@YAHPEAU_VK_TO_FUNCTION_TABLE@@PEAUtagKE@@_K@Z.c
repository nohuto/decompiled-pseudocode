/*
 * XREFs of ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C0228070
 * Callers:
 *     <none>
 * Callees:
 *     GetModifierBits @ 0x1C00E80D0 (GetModifierBits.c)
 *     GetModificationNumber @ 0x1C00E8270 (GetModificationNumber.c)
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C0227FBC (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C0228014 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeAlt(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax
  char v9; // bp
  unsigned int NlsVkKey; // eax
  unsigned int NlsVkAltKey; // eax

  v3 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_NLSKBD, (__int64)gafRawKeyState);
  ModificationNumber = GetModificationNumber((__int64)&Modifiers_NLSKBD, ModifierBits);
  v9 = ModificationNumber;
  if ( ModificationNumber != 15 )
  {
    if ( *((__int16 *)a2 + 1) < 0 )
    {
      if ( *((_BYTE *)a1 + 2) == 2 )
      {
        NlsVkAltKey = GenerateNlsVkAltKey(a1, ModificationNumber, a2, a3);
        *((_BYTE *)a1 + 2) = 1;
      }
      else
      {
        return (unsigned int)GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
      }
      return NlsVkAltKey;
    }
    else
    {
      if ( *((_BYTE *)a1 + 2) == 2 )
        NlsVkKey = GenerateNlsVkAltKey(a1, ModificationNumber, a2, a3);
      else
        NlsVkKey = GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
      v3 = NlsVkKey;
      if ( ((unsigned __int8)(1 << v9) & *((_BYTE *)a1 + 3)) != 0 )
        *((_BYTE *)a1 + 2) = 2;
    }
  }
  return v3;
}
