/*
 * XREFs of MiDescribePageRun @ 0x14013B830
 * Callers:
 *     MiCreateNodeLists @ 0x14054F9A0 (MiCreateNodeLists.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiDescribePageRun(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax

  v3 = a2 + a3;
  v4 = a2;
  if ( a2 == a2 + a3 )
    return 1LL;
  while ( 1 )
  {
    v6 = MiRestrictRangeToNode(v4, a3);
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F4E6D4Du);
    v8 = result;
    if ( !result )
      break;
    *(_QWORD *)(result + 16) = v4;
    *(_QWORD *)(result + 24) = v6;
    *(_BYTE *)(result + 33) = MiPageToChannel(v4);
    *(_BYTE *)(v8 + 32) = MiPageToNode(v9, 0);
    v10 = *(__int64 **)(a1 + 8);
    if ( *v10 != a1 )
      __fastfail(3u);
    *(_QWORD *)v8 = a1;
    v4 += v6;
    *(_QWORD *)(v8 + 8) = v10;
    *v10 = v8;
    a3 = v3 - v4;
    *(_QWORD *)(a1 + 8) = v8;
    ++*(_QWORD *)(a1 + 16);
    if ( v4 == v3 )
      return 1LL;
  }
  return result;
}
