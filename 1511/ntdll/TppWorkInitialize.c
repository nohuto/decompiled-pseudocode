/*
 * XREFs of TppWorkInitialize @ 0x18000D374
 * Callers:
 *     TpAllocWork @ 0x18000CDC0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18000CF00 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 192) = a6;
      *(_DWORD *)(a1 + 200) = 0;
      TppGetCurrentThreadNumaNode(v8, a1 + 200, a1 + 204);
      *(_DWORD *)(a1 + 224) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      TppCleanupGroupMemberDestroy((_QWORD *)a1);
  }
  return (unsigned int)v7;
}
