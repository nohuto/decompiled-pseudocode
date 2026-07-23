/*
 * XREFs of MxSwitchDescriptors @ 0x1407D0EB4
 * Callers:
 *     MxGetNextPage @ 0x1407976E8 (MxGetNextPage.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiInitializeBootMemoryDescriptor @ 0x14078EA30 (MiInitializeBootMemoryDescriptor.c)
 */

unsigned __int64 *__fastcall MxSwitchDescriptors(unsigned int a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // eax
  __int64 *v9; // rcx
  unsigned __int64 *result; // rax

  v1 = KeLoaderBlock_0;
  v2 = MxBootDescriptorAnyNode;
  v3 = a1;
  v4 = KeLoaderBlock_0 + 32;
  v5 = (unsigned __int64 *)&qword_1407634F0[5 * a1];
  while ( 2 )
  {
    v6 = v5[4];
    if ( !v6 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      goto LABEL_14;
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v6 + 8);
LABEL_14:
      if ( v6 == v4 )
        break;
      v7 = *(_DWORD *)(v6 + 16);
      if ( v7 == 2 || v7 == 24 )
      {
        v8 = 0;
        if ( KeNumberNodes )
        {
          v9 = qword_140762B10;
          do
          {
            if ( v6 == *v9 )
              break;
            ++v8;
            v9 += 5;
          }
          while ( v8 < (unsigned __int16)KeNumberNodes );
        }
        if ( v8 >= (unsigned __int16)KeNumberNodes )
        {
          if ( (unsigned int)MiPageToNode(*(_QWORD *)(v6 + 24), 0) == (_DWORD)v3
            || (v2 = MxBootDescriptorAnyNode, _bittest64(&v2, v3)) )
          {
            MiInitializeBootMemoryDescriptor(v5, v6, *(_QWORD *)(v6 + 24), *(_QWORD *)(v6 + 32));
            *(_DWORD *)(v6 + 16) |= 0x40000000u;
            result = v5;
            MxFreeDescriptor[v3] = (__int64)v5;
            return result;
          }
        }
      }
    }
    if ( !_bittest64(&v2, v3) )
    {
      v2 |= 1LL << v3;
      v5[4] = 0LL;
      MxBootDescriptorAnyNode = v2;
      continue;
    }
    return 0LL;
  }
}
