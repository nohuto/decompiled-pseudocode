/*
 * XREFs of MiSplitDriverPage @ 0x1401E184C
 * Callers:
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140014584 (MmUnlockLoadedModuleListShared.c)
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14001F120 (MmLockLoadedModuleListShared.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(unsigned __int64 a1, KIRQL a2)
{
  PVOID *v4; // rdi
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  MmLockLoadedModuleListShared(&v6);
  v4 = MiLookupDataTableEntry((__int64)(a1 << 25) >> 16, 1);
  MmUnlockLoadedModuleListShared(v6);
  if ( v4 )
    return MiMakeDriverPagesPrivate((__int64)v4, a1, a1, a2, 0);
  else
    return 3221225497LL;
}
