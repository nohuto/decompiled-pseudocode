/*
 * XREFs of ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x180142878
 * Callers:
 *     ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x180127D40 (-RemoveContact@CInteraction@@UEAAXK@Z.c)
 *     ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x180143D80 (-RemoveContact@CInteractionRoot@@UEAAXK@Z.c)
 * Callees:
 *     ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30 (-ConvertToInputType@-A0xe8837992@@YA-AW4InputType@@K@Z.c)
 */

void __fastcall CInteractionProcessor::RemoveContact(CInteractionProcessor *this, int a2)
{
  int v2; // eax
  __int64 v3; // r8

  v2 = `anonymous namespace'::ConvertToInputType(a2) - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      *(_BYTE *)(v3 + 264) |= 8u;
  }
  else
  {
    *(_BYTE *)(v3 + 128) |= 8u;
  }
}
