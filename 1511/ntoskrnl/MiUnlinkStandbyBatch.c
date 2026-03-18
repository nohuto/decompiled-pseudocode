/*
 * XREFs of MiUnlinkStandbyBatch @ 0x1400A9C40
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, ULONG_PTR *a6)
{
  int v7; // edi
  __int64 v9; // rax
  __int64 v10; // r12
  int *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r9
  ULONG_PTR v16; // rsi
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  int *v19; // rax
  char v20; // al
  char v21; // cl
  int v22; // eax
  int v23; // r8d
  _QWORD *v24; // r14
  char v25; // al
  unsigned __int8 v26; // al
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  __int64 v32; // [rsp+60h] [rbp+8h]

  v7 = a3;
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v10 = a5;
  v11 = (int *)v9;
  v32 = v9;
  v12 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v13 = MI_READ_PTE_LOCK_FREE(a2);
          a5 = v13;
          v14 = v13;
          if ( (v13 & 1) != 0 )
          {
            v14 = MI_READ_PTE_LOCK_FREE(&a5);
          }
          else if ( (v13 & 0x400) != 0 || (v13 & 0x800) == 0 )
          {
            return v12 - v10;
          }
        }
        while ( !MI_IS_PFN((v14 >> 12) & 0xFFFFFFFFFLL) );
        v16 = 48 * v15 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          return v12 - v10;
        v17 = MI_READ_PTE_LOCK_FREE(a2);
        if ( v17 == a5 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v16 )
        return v12 - v10;
      v18 = ((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF;
      v19 = v18 == 1023 ? MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v18);
      if ( v19 != v11 )
        break;
      if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0 )
        break;
      v20 = *(_BYTE *)(v16 + 34);
      if ( (v20 & 0x20) != 0 )
        break;
      v21 = *(_BYTE *)(v16 + 35);
      if ( (v21 & 0x40) != 0 || (v20 & 7) != 2 )
        break;
      v22 = (v21 & 8) != 0 ? 5 : v21 & 7;
      if ( v22 != v7 )
        break;
      if ( !(unsigned int)MiUnlinkPageFromList(v16, 1) )
      {
        *a6 = v16;
        return v12 - v10;
      }
      v23 = *(_DWORD *)(v16 + 16);
      v24 = (_QWORD *)(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
      v25 = *(_BYTE *)(v16 + 34);
      a4 += 8LL;
      ++*(_WORD *)(v16 + 32);
      v26 = v25 & 0xF8 | 6;
      a2 += 8LL;
      *(_BYTE *)(v16 + 34) = v26;
      v27 = (unsigned __int8)v23 >> 5;
      v28 = v26 >> 6;
      if ( v28 != 1 )
      {
        if ( v28 )
        {
          if ( v28 == 2 )
            v27 = (unsigned int)v27 | 0x18;
        }
        else
        {
          v27 = (unsigned int)v27 | 8;
        }
      }
      v29 = MmProtectToPteMask[v27] ^ (MmProtectToPteMask[v27] ^ (((__int64)(v16 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
      if ( a4 + 0x904C0000000LL <= 0x3FFFFFFF )
        v29 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
      if ( a4 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && a4 >= 0xFFFFF68000000000uLL
        || a4 >= 0xFFFFF6FB40000000uLL
        && a4 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || a4 >= 0xFFFFF6FB7DA00000uLL
        && a4 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || a4 >= 0xFFFFF6FB7DBED000uLL
        && a4 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v29 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a4) )
        v29 |= 0x100uLL;
      v30 = v29 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_1402FE760 & 1) << 8);
      *v24 = v30;
      if ( (unsigned int)MiPteInShadowRange(v24) )
        MiWritePteShadow(v24, v30);
      *(_QWORD *)(v16 + 24) = *(_QWORD *)(v16 + 24) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v10 )
        return v12 - v10;
      v11 = (int *)v32;
      v7 = a3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v12 - v10;
}
