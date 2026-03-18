/*
 * XREFs of MiInitializeSystemImagePage @ 0x14074B5A8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiInitializeSystemImagePage(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 result; // rax

  v4 = 32LL * (a3 & 0x1F);
  *a2 = v4;
  v7 = 48 * a1 - 0x58000000000LL;
  if ( MiPteInShadowRange((__int64)a2) )
    MiWritePteShadow((__int64)a2, v4);
  MiInitializePfn(v7, (unsigned __int64)a2, a3, 0);
  result = MiMakeValidKernelPte(a1, a3, (unsigned __int64)a2, v8);
  if ( (a3 & 4) != 0 )
    result |= 0x42uLL;
  return result;
}
