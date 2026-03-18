/*
 * XREFs of ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0064EE4
 * Callers:
 *     GetWindowEffectiveCloakState @ 0x1C0064DD0 (GetWindowEffectiveCloakState.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
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
