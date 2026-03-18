/*
 * XREFs of ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18012E4AC
 * Callers:
 *     ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x18010D2C0 (-RemoveContact@CInteraction@@UEAAXK@Z.c)
 *     ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x180130D30 (-RemoveContact@CInteractionRoot@@UEAAXK@Z.c)
 * Callees:
 *     ConvertToInputType @ 0x18012E290 (ConvertToInputType.c)
 */

void __fastcall CInteractionProcessor::RemoveContact(CInteractionProcessor *this, int a2)
{
  int v2; // eax
  __int64 v3; // r8

  v2 = ConvertToInputType(a2) - 1;
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
