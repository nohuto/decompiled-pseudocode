/*
 * XREFs of MiInitializeShadowPageTable @ 0x1406A7E80
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1406A8274 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReplicatePteChange @ 0x14016D0F4 (MiReplicatePteChange.c)
 *     MiVaToPfn @ 0x14021F070 (MiVaToPfn.c)
 *     MiMarkPxeAsShadowed @ 0x1402254C8 (MiMarkPxeAsShadowed.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402255D8 (MiReadWriteAnyLevelShadowPte.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 PteShadow; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  int v11; // r15d
  int v12; // r14d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  if ( a3 )
  {
    v12 = 6;
    v11 = 3;
    v9 = (a2 + 0x58000000000LL) / 48;
    if ( a3 == 3 )
    {
      v14 = -1LL;
      goto LABEL_20;
    }
  }
  else
  {
    v6 = (__int64)(a1 << 25) >> 16;
    if ( (*(_BYTE *)(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
      && (*(_BYTE *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
    {
      v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v7;
      if ( MiPteInShadowRange((__int64)v7) )
        PteShadow = MiReadPteShadow((__int64)v7, PteShadow);
      v9 = MiVaToPfn((__int64)(v5 << 25) >> 16);
    }
    else
    {
      PteShadow = *(_QWORD *)a1;
      if ( MiPteInShadowRange(a1) )
        PteShadow = MiReadPteShadow(v5, PteShadow);
      v18 = PteShadow;
      v10 = PteShadow;
      if ( MiPteInShadowRange((__int64)&v18) )
        v10 = MiReadPteShadow((__int64)&v18, PteShadow);
      v9 = (v10 >> 12) & 0xFFFFFFFFFLL;
    }
    v11 = 3;
    v12 = (PteShadow & 0x800) != 0 ? 4 : 1;
    if ( PteShadow >= 0 )
      v12 |= 2u;
  }
  v18 = MiReadWriteAnyLevelShadowPte(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a3 + 1, 0, ZeroPte);
  v13 = v18;
  if ( MiPteInShadowRange((__int64)&v18) )
    v13 = MiReadPteShadow((__int64)&v18, v13);
  v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
LABEL_20:
  v15 = MmProtectToPteMask[v12] ^ ((v9 << 12) ^ MmProtectToPteMask[v12]) & 0xFFFFFFFFF000LL | 0x21;
  if ( v5 + 0x904C0000000LL <= 0x3FFFFFFF )
    v15 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v5 >= 0xFFFFF68000000000uLL
    || v5 >= 0xFFFFF6FB40000000uLL
    && v5 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v5 >= 0xFFFFF6FB7DA00000uLL
    && v5 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v15 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v15 |= 0x100uLL;
  v17 = ~v16 & (v15 & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  if ( a3 )
  {
    if ( a3 == 3 )
      v14 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    *(_QWORD *)(a2 + 40) ^= (v14 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
    MiInitializePfnForOtherProcess(v9, v5, -1LL, 0);
    MiMarkPageActive(a2);
  }
  MiReadWriteAnyLevelShadowPte(v5, a3, 1, v17);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v5);
    do
    {
      v5 = (__int64)(v5 << 25) >> 16;
      --v11;
    }
    while ( v11 );
    MiReplicatePteChange(v5, v5);
  }
}
