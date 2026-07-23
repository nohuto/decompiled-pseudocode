/*
 * XREFs of MiInitializeProtoPfn @ 0x1401F4FAC
 * Callers:
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r11
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v6 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v7 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v12);
    if ( v7 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  MiLockPageAtDpcInline(v6);
  MiInitializePfn(v6, (__int64)a2, a3, 23);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v8 |= 0x100uLL;
  *a2 = v8 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow(v9, v10);
  ++*(_WORD *)(v6 + 32);
  MiDecrementShareCount(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v7, v12);
}
