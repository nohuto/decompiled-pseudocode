/*
 * XREFs of MiInitializeSystemImagePage @ 0x1407CCC64
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeSystemImagePage(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 DemandZeroPte; // rax
  __int64 *v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(a3);
  *v7 = DemandZeroPte;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)a2, DemandZeroPte);
  MiInitializePfn(v4, a2, a3, 0);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)a2) )
    v8 |= 0x100uLL;
  result = v8 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( (a3 & 4) != 0 )
    result |= 0x42uLL;
  return result;
}
