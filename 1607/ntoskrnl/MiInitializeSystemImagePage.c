/*
 * XREFs of MiInitializeSystemImagePage @ 0x1407A5EBC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeSystemImagePage(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 result; // rax

  *a2 = MiMakeDemandZeroPte(a3);
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow(v7, v6);
  MiInitializePfn(v8, (__int64)a2, a3, 0);
  result = MiMakeValidKernelPte(a1, a3, (unsigned __int64)a2);
  if ( (a3 & 4) != 0 )
    result |= 0x42uLL;
  return result;
}
