/*
 * XREFs of MiDeleteLargePfnBitMap @ 0x140664984
 * Callers:
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiCreateLargePfnBitMaps @ 0x1405764F0 (MiCreateLargePfnBitMaps.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiReturnPfnList @ 0x14013F0CC (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x14014BF00 (MiReturnSplitPageCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeleteLargePfnBitMap(__int64 a1)
{
  __int64 *v1; // r12
  unsigned __int64 v2; // rsi
  unsigned __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 PteAddress; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h]
  __int64 v20; // [rsp+78h] [rbp+20h]

  v1 = MiLargePageSizes;
  v2 = qword_140326AD0 + 1;
  v3 = (unsigned __int64 *)(a1 + 5600);
  v4 = 0LL;
  v20 = qword_140326AD0 + 1;
  v5 = 2LL;
  do
  {
    if ( *v3 )
    {
      PteAddress = MiGetPteAddress(*v3);
      v8 = qword_1403A9348 ^ (qword_1403A9348 ^ (qword_1403276E0 << 12)) & 0xFFFFFFFFF000LL | 0x21;
      if ( PteAddress >= 0xFFFFF6FB40000000uLL && PteAddress <= 0xFFFFF6FB7FFFFFFFuLL )
        v8 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
      if ( PteAddress <= MiGetPteAddress(v6) && PteAddress >= MiGetPteAddress(0LL)
        || PteAddress >= MiGetPdeAddress(0LL) && PteAddress <= MiGetPdeAddress(v9)
        || PteAddress >= 0xFFFFF6FB7DA00000uLL && PteAddress <= 0xFFFFF6FB7DAFFFF8uLL
        || PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v8 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(PteAddress) )
        v8 |= 0x100uLL;
      v11 = ~v10 & (v8 | 0x8000000000000000uLL);
      v12 = ((((v2 % *v1 != 0) + v2 / *v1 + 7) >> 3) + 4095) >> 12;
      v13 = (unsigned int)v12;
      v19 = (unsigned int)v12;
      if ( (_DWORD)v12 )
      {
        v14 = (unsigned int)v12;
        do
        {
          v18 = MI_READ_PTE_LOCK_FREE(PteAddress);
          if ( v18 != v11 )
          {
            v15 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v18) - 0x58000000000LL);
            v16 = v15[5];
            *v15 = v4;
            v4 = (__int64)v15;
            MiLockAndDecrementShareCount(48 * (v16 & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
          }
          PteAddress += 8LL;
          --v14;
        }
        while ( v14 );
        v13 = v19;
        v2 = v20;
      }
      MiReleasePtes((__int64)&qword_1403278B0, PteAddress - 8 * v13, v13);
    }
    v3 += 2;
    ++v1;
    --v5;
  }
  while ( v5 );
  if ( v4 )
  {
    v17 = MiReturnPfnList(v4);
    MiReturnSplitPageCharges(v17);
  }
}
