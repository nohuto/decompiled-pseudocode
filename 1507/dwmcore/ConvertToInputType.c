/*
 * XREFs of ConvertToInputType @ 0x18012E290
 * Callers:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18012E32C (-GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18012E408 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z.c)
 *     ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18012E4AC (-RemoveContact@CInteractionProcessor@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToInputType(int a1)
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
