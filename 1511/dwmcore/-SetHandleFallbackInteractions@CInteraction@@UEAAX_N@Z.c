/*
 * XREFs of ?SetHandleFallbackInteractions@CInteraction@@UEAAX_N@Z @ 0x1800BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandleFallbackInteractions(CInteraction *this, char a2)
{
  *((_BYTE *)this + 864) &= ~2u;
  *((_BYTE *)this + 864) |= 2 * (a2 & 1);
}
