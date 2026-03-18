/*
 * XREFs of MiInitializeSlowPte @ 0x1401D6C10
 * Callers:
 *     MiSlowRotateCopy @ 0x1401D6D90 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 ProtectionPfnCompatible; // r9
  __int64 v4; // r10
  int v5; // r11d
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 result; // rax

  if ( MI_IS_PFN(a2) )
  {
    ProtectionPfnCompatible = (unsigned int)MiMakeProtectionPfnCompatible(
                                              ProtectionPfnCompatible,
                                              48 * v4 - 0x58000000000LL);
  }
  else
  {
    v6 = MiPlatformCacheAttributes[v5 + 6];
    if ( v6 )
    {
      if ( v6 == 2 )
        ProtectionPfnCompatible = 28LL;
    }
    else
    {
      ProtectionPfnCompatible = 12LL;
    }
  }
  v7 = MiMakeValidKernelPte(v4, ProtectionPfnCompatible, (unsigned __int64)a1, ProtectionPfnCompatible) | 0x42;
  *a1 = v7;
  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
    return MiWritePteShadow(a1, v7);
  return result;
}
