/*
 * XREFs of MiDemoteLargePage @ 0x140132C08
 * Callers:
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDemoteLargePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r13
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  volatile signed __int32 *v23; // r9
  int v24; // edi
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  __int64 v30[4]; // [rsp+40h] [rbp-38h] BYREF
  int v31; // [rsp+64h] [rbp-14h]
  unsigned __int8 v32; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+50h]
  unsigned __int64 v34; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+60h] BYREF

  v33 = a2;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v35 = MI_READ_PTE_LOCK_FREE(v3);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v35) >> 12) & 0xFFFFFFFFFLL;
  v30[0] = 0xFFFFFFFFFLL;
  v31 = 0;
  v30[1] = (__int64)MiSystemPartition;
  v30[2] = 0LL;
  v30[3] = 0LL;
  result = MiGetPageTablePages((__int64)v30, a1, 1uLL, 4);
  if ( (_DWORD)result )
  {
    v6 = v30[0];
    v27 = v30[0];
    v7 = *(_BYTE *)(v30[0] + 38) & 0xF;
    *(_QWORD *)v30[0] = 0LL;
    *(_BYTE *)(v6 + 38) = v7 | 0x40;
    v8 = (v6 + 0x58000000000LL) / 48;
    v34 = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v26 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
    v28 = MiMapPageInHyperSpaceWorker(v8, &v32, 0x80000000);
    v9 = (_QWORD *)v28;
    v29 = (__int64)(v3 << 25) >> 16;
    v11 = MiMakeValidKernelPte(v4, 4, v29, v10) | 0x42;
    v34 = v11;
    do
    {
      *v9 = v11;
      if ( (unsigned int)MiPteInShadowRange(v9) )
        MiWritePteShadow(v9, v11);
      ++v9;
      v11 ^= (v11 ^ ((v11 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      v34 = v11;
    }
    while ( ((unsigned __int16)v9 & 0xFFF) != 0 );
    v34 = ~qword_140381310 & 0xFFFFFFFFFFFFFEFFuLL & v11;
    MiInitializePfnForOtherProcess(v8, v3, v26, 0);
    MiLockPageAtDpcInline(v27, v12, v13);
    *(_QWORD *)(v27 + 24) ^= (*(_QWORD *)(v27 + 24) ^ (*(_QWORD *)(v27 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiMarkPageActive(v30[0]);
    v14 = v8 & 0xFFFFFFFFFLL;
    v34 = (v14 << 12) | v34 & 0xFFFF000000000FFFuLL;
    MI_INTERLOCKED_EXCHANGE_PTE(v3, v34);
    v17 = 512LL;
    v18 = 48 * v4 - 0x58000000000LL;
    do
    {
      MiLockPageAtDpcInline(v18, v15, v16);
      *(_QWORD *)(v18 + 40) = v14 | *(_QWORD *)(v18 + 40) & 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 += 48LL;
      --v17;
    }
    while ( v17 );
    MiUnmapPageInHyperSpaceWorker(v28, v32);
    v19 = v33;
    MiInsertTbFlushEntry(v33, a1 & 0xFFFFFFFFFFE00000uLL, 1LL, 1);
    if ( qword_1402FF6E8[0] )
    {
      v20 = v4 >> 9;
      LOBYTE(v21) = 1;
      v22 = v20 & 0x1F;
      v23 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v20 >> 5));
      if ( v22 + 1 > 0x20 )
      {
        if ( (v20 & 0x1F) == 0 )
          goto LABEL_16;
        v24 = v20 & 0x1F;
        _InterlockedAnd(v23, ~(((1 << (32 - v24)) - 1) << v22));
        v21 = 1LL - (unsigned int)(32 - v24);
        ++v23;
        if ( v21 >= 0x20 )
        {
          v25 = v21 >> 5;
          v21 += -32LL * (v21 >> 5);
          do
          {
            *v23++ = 0;
            --v25;
          }
          while ( v25 );
        }
        if ( v21 )
LABEL_16:
          _InterlockedAnd(v23, ~((1 << v21) - 1));
      }
      else
      {
        _InterlockedAnd(v23, ~(1 << v22));
      }
    }
    MiInsertTbFlushEntry(v19, v29, 1LL, 0);
    return 1LL;
  }
  return result;
}
