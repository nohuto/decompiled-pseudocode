/*
 * XREFs of MiFindLargePageMemory @ 0x1406627C8
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiUpdateLargePagePfns @ 0x1401F5C84 (MiUpdateLargePagePfns.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  _QWORD *PoolWithTag; // rbx
  _QWORD *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // [rsp+90h] [rbp+8h]
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a3;
  if ( a3 <= *(_QWORD *)(a1 + 6464) - 160LL )
  {
    PoolWithTag = 0LL;
    v9 = 0LL;
    v10 = MiProtectionToCacheAttribute(a4);
    v11 = a5;
    v12 = BugCheckParameter3;
    v17 = v10;
    v13 = *(_QWORD *)(a5 + 16);
    while ( 1 )
    {
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C4C6D4Du);
        if ( !PoolWithTag )
          return;
        v10 = v17;
      }
      if ( (int)MiFindContiguousPages(a1, 0x200uLL, v12, 512LL, 512LL, v10, a2, 0x80000000, 1611661312, &v18) < 0 )
        break;
      v14 = v18;
      v5 -= 512LL;
      if ( (unsigned int)MiUpdateLargePagePfns(v13, v18) == 1 )
        *(_DWORD *)(v11 + 24) = 1;
      if ( v9 && (v15 = v9[2], v14 + 512 == v15) )
      {
        v9[3] += 512LL;
        v9[2] = v15 - 512;
      }
      else
      {
        PoolWithTag[2] = v14;
        PoolWithTag[3] = 512LL;
        v16 = *(_QWORD **)(v11 + 8);
        if ( *v16 != v11 )
          __fastfail(3u);
        *PoolWithTag = v11;
        v9 = PoolWithTag;
        PoolWithTag[1] = v16;
        *v16 = PoolWithTag;
        *(_QWORD *)(v11 + 8) = PoolWithTag;
        PoolWithTag = 0LL;
      }
      if ( !v5 )
        break;
      v12 = v14 - 1;
      if ( v12 <= 0x200 )
        break;
      v10 = v17;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
