/*
 * XREFs of MiInitializeSpecialPool @ 0x1404FF0AC
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     InitializeListHeadPte @ 0x14011F654 (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSpecialPool(char a1)
{
  unsigned __int64 v1; // rdi
  KSPIN_LOCK *v2; // rbx
  __int64 PteAddress; // rax
  __int64 v4; // r9
  __int64 result; // rax

  v1 = 0xFFFF800000000000uLL;
  if ( (a1 & 0x20) != 0 )
  {
    v2 = (KSPIN_LOCK *)qword_1402FFCA8;
    v1 = 0xFFFFF90000000000uLL;
LABEL_3:
    PteAddress = MiGetPteAddress(v1);
    InitializeListHeadPte((unsigned __int64)(v2 + 1), PteAddress);
    result = InitializeListHeadPte((unsigned __int64)(v2 + 4), v4);
    *v2 = 0LL;
    return result;
  }
  result = MiInitializeDynamicRegion(7LL, 0xFFFFCF8000000000uLL, 0x8000000000LL);
  if ( (_DWORD)result )
  {
    dword_1402FE264 = 0x4000;
    v2 = &qword_1402FF700;
    goto LABEL_3;
  }
  return result;
}
