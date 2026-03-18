/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x1801448E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30 (-ConvertToInputType@-A0xe8837992@@YA-AW4InputType@@K@Z.c)
 */

char __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r10
  int v4; // r8d
  unsigned int v5; // r9d

  v2 = `anonymous namespace'::ConvertToInputType(a2);
  return CInteractionProcessor::SupportsPointerType(v3 + 32, v2, v4, v5);
}
