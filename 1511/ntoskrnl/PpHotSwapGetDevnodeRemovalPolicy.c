/*
 * XREFs of PpHotSwapGetDevnodeRemovalPolicy @ 0x140457D6C
 * Callers:
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PiHotSwapGetDetachableNode @ 0x1404EF188 (PiHotSwapGetDetachableNode.c)
 */

__int64 __fastcall PpHotSwapGetDevnodeRemovalPolicy(__int64 a1, char a2, signed int *a3)
{
  signed int v6; // ebx
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  PpDevNodeLockTree(0LL);
  if ( a2 )
    v6 = *(unsigned __int8 *)(a1 + 466);
  else
    v6 = *(unsigned __int8 *)(a1 + 467);
  if ( v6 )
  {
    if ( v6 > 3 )
    {
      if ( v6 == 4 || (v8 = v6 == 5, v6 = 3, !v8) )
        v6 = 2;
    }
  }
  else
  {
    PiHotSwapGetDetachableNode(a1, &v9);
    if ( v9 )
      v6 = (~*(_BYTE *)(v9 + 560) & 8 | 0x10u) >> 3;
    else
      v6 = 1;
  }
  result = PpDevNodeUnlockTree(0LL);
  *a3 = v6;
  return result;
}
