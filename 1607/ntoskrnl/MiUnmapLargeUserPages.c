/*
 * XREFs of MiUnmapLargeUserPages @ 0x1401F590C
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiInsertLargeTbFlushEntry @ 0x14008B0B4 (MiInsertLargeTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnmapLargeUserPages(__int64 a1)
{
  __int64 v1; // r8
  _KPROCESS *v2; // rdx
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-A9h]
  __int64 v25; // [rsp+28h] [rbp-A1h] BYREF
  int v26; // [rsp+30h] [rbp-99h] BYREF
  __int16 v27; // [rsp+34h] [rbp-95h]
  int v28; // [rsp+38h] [rbp-91h]
  int v29; // [rsp+3Ch] [rbp-8Dh]
  __int64 v30; // [rsp+40h] [rbp-89h]
  __int64 v31; // [rsp+48h] [rbp-81h]

  v1 = 1073741816LL;
  v2 = (_KPROCESS *)0xFFFFF6FB40000000LL;
  v4 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v5 = (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v6 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      v3 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
      MiLogPerfMemoryRangeEvent(
        v3,
        (__int64)KeGetCurrentThread()->ApcState.Process,
        0x1Au,
        (((v4 - v3 + 1) & 0xFFF) != 0) + ((__int64)(v4 - v3 + 1) >> 12));
    }
  }
  v7 = 0LL;
  v26 = 1;
  v29 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v27 = 0;
  v28 = 20;
  while ( v5 <= v6 )
  {
    v8 = MI_IS_PHYSICAL_ADDRESS((__int64)(v5 << 25) >> 16 << 25 >> 16);
    v11 = v8;
    if ( v8 )
    {
      if ( v8 > 1 )
      {
        v12 = v8 - 1;
        do
        {
          v5 = v9 + (v10 & (v5 >> 9));
          --v12;
        }
        while ( v12 );
      }
      v25 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v25 )
      {
        v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
        *(_QWORD *)v5 = 0LL;
        v15 = (v14 >> 12) & 0xFFFFFFFFFLL;
        if ( MiPteInShadowRange(v5) )
          MiWritePteShadow(v16, 0LL);
        MiInsertLargeTbFlushEntry((__int64)&v26, v11, v5);
        if ( v24 == 1 )
        {
          v17 = 48 * v15 - 0x58000000000LL;
          *(_QWORD *)v17 = v7;
          MiLockPageAtDpcInline(v17);
          v18 = *(_QWORD *)(v17 + 40);
          if ( v11 == 1 )
          {
            v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
            v20 = 0xFFFFFFFFELL;
          }
          else
          {
            v19 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
            v20 = 0xFFFFFFFFBLL;
          }
          *(_QWORD *)(v17 + 40) = v20 | v19;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = v17;
        }
        if ( v11 != 3 )
        {
          v21 = MI_GET_PFN_FROM_PTE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MiLockPageAtDpcInline(v21);
          *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiDecreaseUsedPtesCount(v21, 1u);
          if ( (*(_DWORD *)(v21 + 16) & 0x3FF0000) == 0 )
            MiDeletePageTableHierarchy(&v26, v5);
        }
        v5 += 8LL;
        if ( v11 > 1 )
        {
          v22 = v11 - 1;
          do
          {
            v5 = (__int64)(v5 << 25) >> 16;
            --v22;
          }
          while ( v22 );
        }
      }
      else
      {
        v5 += 8LL;
        if ( v11 > 1 )
        {
          v13 = v11 - 1;
          do
          {
            v5 = (__int64)(v5 << 25) >> 16;
            --v13;
          }
          while ( v13 );
        }
      }
    }
    else
    {
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
    }
  }
  MiFlushTbList((__int64)&v26, v2, v1, v4);
  return v7;
}
