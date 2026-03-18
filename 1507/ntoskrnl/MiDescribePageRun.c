/*
 * XREFs of MiDescribePageRun @ 0x14015F634
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiCreateNodeLists @ 0x140596AF8 (MiCreateNodeLists.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x14015F6F4 (MiRestrictRangeToNode.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
    *(_QWORD *)v8 = a1;
    *(_QWORD *)(v8 + 8) = v10;
    if ( *v10 != a1 )
      __fastfail(3u);
    *v10 = v8;
    v4 += v6;
    *(_QWORD *)(a1 + 8) = v8;
    ++*(_QWORD *)(a1 + 16);
    a3 = v3 - v4;
    if ( v4 == v3 )
      return 1LL;
  }
  return result;
}
