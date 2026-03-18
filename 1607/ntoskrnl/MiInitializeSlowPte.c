/*
 * XREFs of MiInitializeSlowPte @ 0x1401E88E0
 * Callers:
 *     MiSlowRotateCopy @ 0x1401E8A48 (MiSlowRotateCopy.c)
 * Callees:
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14010A608 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeSlowPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  int ProtectionPfnCompatible; // r9d
  __int64 v5; // r10
  int v6; // r11d
  int v7; // eax
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 *v9; // r8
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( MiIsPfnInline(a2) )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v2 - 0x58000000000LL);
  }
  else
  {
    v7 = MiPlatformCacheAttributes[v6 + 6];
    if ( v7 )
    {
      if ( v7 == 2 )
        ProtectionPfnCompatible = 28;
    }
    else
    {
      ProtectionPfnCompatible = 12;
    }
  }
  ValidKernelPte = MiMakeValidKernelPte(v5, ProtectionPfnCompatible, v3);
  *v9 = ValidKernelPte | 0x42;
  result = MiPteInShadowRange(v9, ValidKernelPte | 0x42);
  if ( (_DWORD)result )
    return MiWritePteShadow(v12, v11);
  return result;
}
