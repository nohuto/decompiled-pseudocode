/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1405363C0
 * Callers:
 *     MiBuildDynamicRegion @ 0x14013CEB0 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiInitializeSessionPool @ 0x140536328 (MiInitializeSessionPool.c)
 *     MiCreateLargePfnBitMaps @ 0x1405764F0 (MiCreateLargePfnBitMaps.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiFillGapAddresses @ 0x1400B3218 (MiFillGapAddresses.c)
 *     MiInitializeTbFlushList @ 0x1400B3858 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiReturnPfnList @ 0x14013F0CC (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x14014BF00 (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v11; // rbp
  char v12; // r9
  PVOID *v13; // r8
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  _KPROCESS *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  signed __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-120h]
  __int64 v33; // [rsp+30h] [rbp-118h]
  _BYTE v34[192]; // [rsp+40h] [rbp-108h] BYREF

  v32 = a2;
  v33 = a3;
  v7 = a2;
  PteAddress = MiGetPteAddress(a2);
  v11 = ((unsigned __int64)(v8 + 7) >> 15)
      + (((((unsigned __int64)(v8 + 7) >> 3) & 0xFFF) + (unsigned int)(v9 & 0xFFF) + 4095) >> 12);
  if ( (v12 & 2) != 0 )
  {
LABEL_7:
    v31 = 0LL;
    MiInitializeTbFlushList((__int64)v34, 0, 20);
    if ( (a4 & 8) != 0 )
    {
      v15 = qword_1403276E0;
      v16 = qword_140327750;
    }
    else
    {
      v15 = qword_1403276C8;
      v16 = qword_140327760;
    }
    v17 = qword_1403A9348 ^ (qword_1403A9348 ^ (v15 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( PteAddress >= 0xFFFFF6FB40000000uLL && PteAddress <= 0xFFFFF6FB7FFFFFFFuLL )
      v17 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
    if ( PteAddress <= MiGetPteAddress(0x7FFFFFFEFFFFuLL) && PteAddress >= MiGetPteAddress(0LL)
      || PteAddress >= MiGetPdeAddress(0LL) && PteAddress <= MiGetPdeAddress(v18)
      || PteAddress >= 0xFFFFF6FB7DA00000uLL && PteAddress <= 0xFFFFF6FB7DAFFFF8uLL
      || PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v17 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(PteAddress) )
      v17 |= 0x100uLL;
    v23 = ~v22 & (v17 | 0x8000000000000000uLL);
    if ( (a4 & 1) != 0 )
      v23 ^= (v23 ^ ((unsigned __int64)(unsigned __int8)word_140326AE8 << 8)) & 0x100;
    v24 = 0LL;
    if ( v11 )
    {
      v25 = v31;
      do
      {
        if ( (PteAddress & 0xFFF) != 0 || v11 - v24 < 0x200 || (a4 & 0x10) == 0 )
        {
          *(_QWORD *)PteAddress = v23;
          if ( MiPteInShadowRange(PteAddress) )
            MiWritePteShadow(v28, v23);
          PteAddress += 8LL;
        }
        else
        {
          v26 = MiGetPteAddress(PteAddress);
          v31 = MI_READ_PTE_LOCK_FREE(v26);
          MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v26, v16);
          v26 <<= 25;
          MiInsertTbFlushEntry((__int64)v34, v26 >> 16, 1LL, 0);
          v27 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v31);
          v24 += 511LL;
          PteAddress = (v26 + 0x10000000) >> 16;
          *(_QWORD *)(48 * v27 - 0x58000000000LL) = v25;
          v25 = 48 * v27 - 0x58000000000LL;
        }
        ++v24;
      }
      while ( v24 < v11 );
      v31 = v25;
      v7 = v32;
    }
    *a1 = v33;
    a1[1] = v7;
    if ( (a4 & 0x10) != 0 )
    {
      v29 = v31;
      if ( v31 )
      {
        MiFlushTbList((__int64)v34, v19, v20, v21);
        v30 = MiReturnPfnList(v29);
        MiReturnSplitPageCharges(v30);
      }
    }
    return 1LL;
  }
  if ( (a4 & 4) == 0 )
  {
    result = MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v11 - 1), 1, 3u);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_7;
  }
  v13 = &qword_140327728;
  if ( (a4 & 8) == 0 )
    v13 = (PVOID *)&unk_140327708;
  MiFillGapAddresses(v7, (v11 << 12) + v9 - 1, (int)v13);
  *a1 = a3;
  a1[1] = v7;
  return 1LL;
}
