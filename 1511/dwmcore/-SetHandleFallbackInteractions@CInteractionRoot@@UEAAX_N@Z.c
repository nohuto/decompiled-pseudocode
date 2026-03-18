/*
 * XREFs of ?SetHandleFallbackInteractions@CInteractionRoot@@UEAAX_N@Z @ 0x1800BDB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandleFallbackInteractions(CInteractionRoot *this, char a2)
{
  *((_BYTE *)this + 672) &= ~2u;
  *((_BYTE *)this + 672) |= 2 * (a2 & 1);
}
