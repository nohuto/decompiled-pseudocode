/*
 * XREFs of MiInitializeShadowPageTable @ 0x14065BA6C
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14065BCA0 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiReplicatePteChange @ 0x140148860 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x1401EF164 (MiMarkPxeAsShadowed.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401EF280 (MiReadWriteAnyLevelShadowPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiInitializeShadowPageTable(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 PteAddress; // rax
  int v9; // r11d
  unsigned __int64 v10; // r10
  int v11; // r14d
  int v12; // ebp
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  if ( !a3 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1 << 25 >> 16) )
    {
      PteAddress = v5;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v9 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfn(v10);
    }
    else
    {
      v18 = MI_READ_PTE_LOCK_FREE(v5);
      v6 = v18;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL;
    }
    v11 = 3;
    v12 = (v6 & 0x800) != 0 ? 4 : 1;
    if ( v6 >= 0 )
      v12 |= 2u;
    goto LABEL_10;
  }
  v12 = 6;
  v11 = 3;
  v13 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v13 >> 63) + (v13 >> 3);
  if ( a3 != 3 )
  {
LABEL_10:
    v14 = MiGetPteAddress(v5);
    v18 = MiReadWriteAnyLevelShadowPte(v14, v15, 0, ZeroPte);
    v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_12;
  }
  v16 = -1LL;
LABEL_12:
  v17 = MiMakeValidKernelPte(v7, v12, v5) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
  if ( a3 )
  {
    if ( a3 == 3 )
      v16 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    *(_QWORD *)(a2 + 40) ^= (v16 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
    MiInitializePfnForOtherProcess(v7, v5, -1LL, 0);
    MiMarkPageActive(a2);
  }
  MiReadWriteAnyLevelShadowPte(v5, a3, 1, v17);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v5);
    do
    {
      v5 = v5 << 25 >> 16;
      --v11;
    }
    while ( v11 );
    MiReplicatePteChange(v5, v5);
  }
}
