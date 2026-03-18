/*
 * XREFs of MiInitializeSpecialPool @ 0x140535D5C
 * Callers:
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x1400B5F2C (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x1401FDFFC (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x1407A517C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSpecialPool(char a1)
{
  unsigned __int64 v1; // rbx
  __int64 PteAddress; // rax
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 SystemBase; // rax

  v1 = 0xFFFF800000000000uLL;
  if ( (a1 & 0x20) != 0 )
  {
    v1 = qword_140326910;
LABEL_3:
    PteAddress = MiGetPteAddress(v1);
    InitializeListHeadPte(v3 + 8, PteAddress);
    InitializeListHeadPte(v4 + 32, v5);
    *v6 = 0LL;
    return 1LL;
  }
  SystemBase = MiQuerySystemBase(9);
  if ( (unsigned int)MiInitializeDynamicRegion(7LL, SystemBase, 0x8000000000LL) )
  {
    dword_140326524 = 0x4000;
    goto LABEL_3;
  }
  return 0LL;
}
