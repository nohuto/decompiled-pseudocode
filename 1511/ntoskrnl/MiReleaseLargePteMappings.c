/*
 * XREFs of MiReleaseLargePteMappings @ 0x1401171C8
 * Callers:
 *     MiEmptyPteBins @ 0x140013B2C (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140068430 (MiInsertCachedPte.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiUnmapLargePages @ 0x1401E2648 (MiUnmapLargePages.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned __int64 i; // rbx
  unsigned int v12; // eax
  bool v13; // al
  signed __int32 v15[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h]

  v3 = (unsigned int)a2[1];
  v4 = 0LL;
  v6 = ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v7 = v6 + 8 * v3;
    v8 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v8 & 0x1E) == 2 )
      v9 = 1LL;
    else
      v9 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v7 + 8) >> 32;
    v3 = HIDWORD(v8);
    v16 = v9 + v4;
    v10 = 0;
    for ( i = v7 << 25 >> 16 << 25 >> 16; v10 < v9; v7 += 8LL )
    {
      *(_QWORD *)v7 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow(v7, 0LL);
      ++v10;
    }
    if ( a3 )
    {
      MiUnmapLargePages(i, v9 << 21, 9LL);
      if ( !v3 )
        return v16;
      _InterlockedOr(v15, 0);
      v12 = KiTbFlushTimeStamp - *a2;
      v13 = v12 <= 2 && ((*a2 & 1) != 0 || v12 < 2);
      a3 = v13;
    }
    else
    {
      MiReturnSystemVa(i, (v9 << 21) + i, 15, 0LL);
    }
    v4 = v16;
  }
  while ( v3 );
  return v16;
}
