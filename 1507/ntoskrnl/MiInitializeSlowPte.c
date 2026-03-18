/*
 * XREFs of MiInitializeSlowPte @ 0x14021957C
 * Callers:
 *     MiSlowRotateCopy @ 0x140219888 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeSlowPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  char v3; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  unsigned __int64 *v6; // r9
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( MI_IS_PFN(a2) )
    MiMakeProtectionPfnCompatible(v3, 48 * v4 - 0x58000000000LL);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v2) )
    v5 |= 0x100uLL;
  result = (__int64)(v6 + 0x12090482600LL);
  v8 = v5 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  *v6 = v8;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    return MiWritePteShadow(v6, v8);
  return result;
}
