/*
 * XREFs of MiSplitDriverPage @ 0x1401CEF98
 * Callers:
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x140032BA0 (MmLockLoadedModuleListShared.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MmUnlockLoadedModuleListShared @ 0x140035BB8 (MmUnlockLoadedModuleListShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
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
