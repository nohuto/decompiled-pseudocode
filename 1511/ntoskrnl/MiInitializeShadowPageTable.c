/*
 * XREFs of MiInitializeShadowPageTable @ 0x1406260E8
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x140626408 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x1401DA7EC (MiVaToPfn.c)
 *     MiMarkPxeAsShadowed @ 0x1401DE870 (MiMarkPxeAsShadowed.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401DE980 (MiReadWriteAnyLevelShadowPte.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rdi
  __int64 *PteAddress; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // r15d
  int v9; // r14d
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  v4 = a1;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(8 * (((unsigned __int64)((__int64)(a1 << 25) >> 16) >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)((((unsigned __int64)((__int64)(a1 << 25) >> 16) >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
      && (*(_BYTE *)MiGetPdeAddress((__int64)(a1 << 25) >> 16) & 0x81) == 0x81 )
    {
      PteAddress = (__int64 *)MiGetPteAddress(v4);
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfn((__int64)(v4 << 25) >> 16);
    }
    else
    {
      v17 = MI_READ_PTE_LOCK_FREE((__int64 *)v4);
      v6 = v17;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL;
    }
    v8 = 3;
    v9 = (v6 & 0x800) != 0 ? 4 : 1;
    if ( v6 >= 0 )
      v9 |= 2u;
    goto LABEL_10;
  }
  v9 = 6;
  v10 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = 3;
  v7 = ((unsigned __int64)v10 >> 63) + (v10 >> 3);
  if ( a3 != 3 )
  {
LABEL_10:
    v11 = MiGetPteAddress(v4);
    v17 = MiReadWriteAnyLevelShadowPte(v11, a3 + 1, 0, ZeroPte);
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_12;
  }
  v12 = -1LL;
LABEL_12:
  v13 = qword_140381310;
  v14 = MmProtectToPteMask[v9] ^ ((v7 << 12) ^ MmProtectToPteMask[v9]) & 0xFFFFFFFFF000LL | 0x21;
  if ( v4 + 0x904C0000000LL <= 0x3FFFFFFF )
    v14 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 <= MiGetPteAddress((unsigned __int64)MmHighestUserAddress) && v4 >= MiGetPteAddress(0LL)
    || v4 >= MiGetPdeAddress(0LL) && v4 <= MiGetPdeAddress((unsigned __int64)MmHighestUserAddress)
    || v4 >= 0xFFFFF6FB7DA00000uLL
    && v4 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v4 >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v14 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4) )
    v14 |= 0x100uLL;
  v15 = ~v13 & (v14 & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  if ( a3 )
  {
    if ( a3 == 3 )
      v12 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    v16 = v18;
    *(_QWORD *)(v18 + 40) ^= (*(_QWORD *)(v18 + 40) ^ v12) & 0xFFFFFFFFFLL;
    MiInitializePfnForOtherProcess(v7, v4, -1LL, 0);
    MiMarkPageActive(v16);
  }
  MiReadWriteAnyLevelShadowPte(v4, a3, 1, v15);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v4);
    do
    {
      v4 = (__int64)(v4 << 25) >> 16;
      --v8;
    }
    while ( v8 );
    MiReplicatePteChange(v4, v4);
  }
}
