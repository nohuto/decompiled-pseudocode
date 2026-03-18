/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1404FF1D8
 * Callers:
 *     MiBuildDynamicRegion @ 0x140132FA0 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiInitializeSessionPool @ 0x1404FF140 (MiInitializeSessionPool.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiBuildPagedPool @ 0x140749564 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 *     MiInitializePteInfo @ 0x140771030 (MiInitializePteInfo.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     MiReturnSplitPageCharges @ 0x14013226C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x140132B4C (MiReturnPfnList.c)
 *     MiFillGapAddresses @ 0x140138348 (MiFillGapAddresses.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // r12
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v9; // rbp
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-128h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-120h]
  __int64 v27; // [rsp+30h] [rbp-118h]
  unsigned __int64 v28; // [rsp+38h] [rbp-110h]
  _BYTE v29[192]; // [rsp+40h] [rbp-108h] BYREF

  v26 = a1;
  v27 = a3;
  v28 = a2;
  v7 = a2;
  PteAddress = MiGetPteAddress(a2);
  v9 = ((unsigned __int64)(a3 + 7) >> 15)
     + (((((unsigned __int64)(a3 + 7) >> 3) & 0xFFF) + (unsigned int)(v7 & 0xFFF) + 4095) >> 12);
  if ( (a4 & 2) != 0 )
  {
LABEL_7:
    v25 = 0LL;
    MiInitializeTbFlushList((__int64)v29, 0, 20);
    if ( (a4 & 8) != 0 )
    {
      v12 = qword_1402FF250;
      v13 = qword_1402FF2B0;
    }
    else
    {
      v12 = qword_1402FF238;
      v13 = qword_1402FF2C0;
    }
    v14 = qword_140381310;
    v15 = qword_140381308 ^ (qword_140381308 ^ (v12 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( PteAddress + 0x904C0000000LL <= 0x3FFFFFFF )
      v15 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( PteAddress <= MiGetPteAddress((unsigned __int64)MmHighestUserAddress) && PteAddress >= MiGetPteAddress(0LL)
      || PteAddress >= MiGetPdeAddress(0LL) && PteAddress <= MiGetPdeAddress((unsigned __int64)MmHighestUserAddress)
      || PteAddress >= 0xFFFFF6FB7DA00000uLL
      && PteAddress <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || PteAddress >= 0xFFFFF6FB7DBED000uLL
      && PteAddress <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v15 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(PteAddress) )
      v15 |= 0x100uLL;
    v17 = ~v14 & (v15 | 0x8000000000000000uLL);
    if ( (a4 & 1) != 0 )
      v17 ^= (v17 ^ ((unsigned __int64)(unsigned __int8)word_1402FE760 << 8)) & 0x100;
    v18 = 0LL;
    if ( v9 )
    {
      v19 = 0LL;
      do
      {
        if ( (PteAddress & 0xFFF) != 0 || v9 - v18 < 0x200 || (a4 & 0x10) == 0 )
        {
          *(_QWORD *)PteAddress = v17;
          if ( MiPteInShadowRange(PteAddress) )
            MiWritePteShadow(PteAddress, v17);
          PteAddress += 8LL;
        }
        else
        {
          v20 = MiGetPteAddress(PteAddress);
          v25 = MI_READ_PTE_LOCK_FREE((__int64 *)v20);
          MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v20, v13);
          v20 <<= 25;
          MiInsertTbFlushEntry((__int64)v29, v20 >> 16, 1LL, 0);
          v21 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v25);
          v18 += 511LL;
          PteAddress = (v20 + 0x10000000) >> 16;
          *(_QWORD *)(48 * v21 - 0x58000000000LL) = v19;
          v19 = 48 * v21 - 0x58000000000LL;
        }
        ++v18;
      }
      while ( v18 < v9 );
      v25 = v19;
      v7 = v28;
    }
    v22 = v26;
    *v26 = v27;
    v22[1] = v7;
    if ( (a4 & 0x10) != 0 )
    {
      v23 = v25;
      if ( v25 )
      {
        MiFlushTbList((__int64)v29, v16);
        v24 = MiReturnPfnList(v23);
        MiReturnSplitPageCharges(v24);
      }
    }
    return 1LL;
  }
  if ( (a4 & 4) == 0 )
  {
    result = MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v9 - 1), 1, 3u);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_7;
  }
  v10 = qword_1402FF288;
  if ( (a4 & 8) == 0 )
    v10 = (__int64 *)&unk_1402FF268;
  MiFillGapAddresses(v7, (v9 << 12) + v7 - 1, (int)v10);
  *a1 = a3;
  a1[1] = v7;
  return 1LL;
}
