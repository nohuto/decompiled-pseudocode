/*
 * XREFs of MiReleaseLargePteMappings @ 0x1401264F4
 * Callers:
 *     MiEmptyPteBins @ 0x140017698 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUnmapLargePages @ 0x1401F5770 (MiUnmapLargePages.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 PteTimeStamp; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // r10
  __int64 v18; // r9
  unsigned __int64 i; // r11
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // r10
  unsigned int v23; // eax
  bool v24; // al
  signed __int32 v26[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (unsigned int)a2[1];
  v6 = 0LL;
  v7 = ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE(v7 + 8 * v3);
    if ( (v10 & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v13 = MI_READ_PTE_LOCK_FREE(v11 + 8);
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v13, v14, v15);
    }
    v3 = (unsigned int)MiGetPteTimeStamp(v10, v8, v9);
    v6 += PteTimeStamp;
    v18 = 0LL;
    for ( i = (__int64)((_QWORD)v17 << 25) >> 16 << 25 >> 16; (unsigned int)v18 < PteTimeStamp; v17 = (_QWORD *)(v22 + 8) )
    {
      *v17 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v17, v16) )
        MiWritePteShadow(v20, 0LL);
      v18 = (unsigned int)(v21 + 1);
    }
    if ( a3 )
    {
      MiUnmapLargePages(i, PteTimeStamp << 21, 9LL, v18);
      if ( !v3 )
        return v6;
      _InterlockedOr(v26, 0);
      v23 = KiTbFlushTimeStamp - *a2;
      v24 = v23 <= 2 && ((*a2 & 1) != 0 || v23 < 2);
      a3 = v24;
    }
    else
    {
      MiReturnSystemVa(i, (PteTimeStamp << 21) + i, 15, 0LL);
    }
  }
  while ( v3 );
  return v6;
}
