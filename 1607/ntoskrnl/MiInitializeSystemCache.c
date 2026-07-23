/*
 * XREFs of MiInitializeSystemCache @ 0x14055453C
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x1400B3D54 (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x1401FDE28 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x1407A517C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(int *a1)
{
  __int64 PteAddress; // rax
  __int64 SystemBase; // rax
  unsigned __int64 v4; // rbx

  if ( a1 != MiSystemPartition )
  {
    v4 = 0LL;
    return MiInitializeSystemWorkingSetList((__int64)a1, (__int64)(a1 + 1648), 2, v4);
  }
  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  InitializeListHeadPte((unsigned __int64)&qword_140326D80, PteAddress);
  qword_140326D98 = 0LL;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v4 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList((__int64)a1, (__int64)(a1 + 1648), 2, v4);
  }
  return 0LL;
}
