/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C0082548
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1[1] != 1 || *a1 != 14 )
    return 0LL;
  return result;
}
