/*
 * XREFs of ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180005DA0 (-SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801427F8 (-GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x180142878 (-RemoveContact@CInteractionProcessor@@QEAAXK@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x1801448E0 (-SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall `anonymous namespace'::ConvertToInputType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
