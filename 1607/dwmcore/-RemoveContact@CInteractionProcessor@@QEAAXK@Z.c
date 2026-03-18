/*
 * XREFs of ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18016EFE4
 * Callers:
 *     ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x180145590 (-RemoveContact@CInteraction@@UEAAXK@Z.c)
 *     ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x1801714C0 (-RemoveContact@CInteractionRoot@@UEAAXK@Z.c)
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x18000DE7C (_anonymous_namespace_--ConvertToInputType.c)
 */

void __fastcall CInteractionProcessor::RemoveContact(CInteractionProcessor *this, int a2)
{
  int v2; // eax
  __int64 v3; // r8

  v2 = anonymous_namespace_::ConvertToInputType(a2) - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      *(_BYTE *)(v3 + 296) |= 4u;
  }
  else
  {
    *(_BYTE *)(v3 + 144) |= 4u;
  }
}
