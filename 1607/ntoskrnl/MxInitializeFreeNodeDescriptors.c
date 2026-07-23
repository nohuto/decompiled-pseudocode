/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x14078E924
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x14078E83C (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x14078EA18 (MxPageAlwaysHot.c)
 *     MiInitializeBootMemoryDescriptor @ 0x14078EA30 (MiInitializeBootMemoryDescriptor.c)
 */

void __fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 *v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13

  v2 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 24); v2; v2 -= v6 )
  {
    v6 = MiRestrictRangeToNode(i, v2);
    v7 = MiPageToNode(i, 0);
    v8 = v7;
    v9 = &MxBootFreeDescriptor[5 * v7];
    v10 = v9[1];
    if ( v6 >= v10 || v6 >= *(_QWORD *)(a2 + 8LL * v7) + 0x4000LL )
    {
      if ( (unsigned int)MxPageAlwaysHot(v6 + i - 1) == 1
        || !v10
        || (v11 = *v9 + v10, !(unsigned int)MxPageAlwaysHot(v11 - 1))
        || v11 < *(_QWORD *)(a2 + 8 * v8) + 0x4000LL )
      {
        MiInitializeBootMemoryDescriptor(v9, a1, i, v6);
        MxFreeDescriptor[v8] = (__int64)v9;
      }
    }
    i += v6;
  }
}
