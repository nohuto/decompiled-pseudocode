/*
 * XREFs of ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0078DDC
 * Callers:
 *     GetWindowEffectiveCloakState @ 0x1C0078CC8 (GetWindowEffectiveCloakState.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCloakFlags(const struct WINDOWCOMPOSITIONINFO *a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)a1 & 0x400) != 0;
  if ( (*(_DWORD *)a1 & 0x800) != 0 )
    return (unsigned int)result | 2;
  return result;
}
