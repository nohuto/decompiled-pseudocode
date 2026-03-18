/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x1407C56C0
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x1407C558C (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14015F6F4 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x1407C6170 (MxPageAlwaysHot.c)
 */

void __fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  __int64 *v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 24); v2; v2 -= v5 )
  {
    v5 = MiRestrictRangeToNode(i, v2);
    v6 = (unsigned int)MiPageToNode(i, 0);
    v7 = &MxFreeDescriptor[4 * v6];
    v8 = v7[1];
    if ( v5 >= v8 || v5 >= *(_QWORD *)(a2 + 8 * v6) + 0x4000LL )
    {
      v9 = i + v5 - 1;
      if ( (unsigned int)MxPageAlwaysHot(v9) == 1
        || !v8
        || (v10 = *v7 + v8, !(unsigned int)MxPageAlwaysHot(v10 - 1))
        || v10 < *(_QWORD *)(a2 + 8 * v6) + 0x4000LL )
      {
        v7[2] = v9;
        v11 = v9 & 0xFFFFFFFFFFFFFE00uLL;
        *v7 = i;
        v7[1] = v5;
        v7[3] = v11;
        if ( v11 < i || v11 - i < 0x200 )
          v7[3] = -1LL;
        else
          v7[3] = v11 - 512;
      }
    }
    i += v5;
  }
}
