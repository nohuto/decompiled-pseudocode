/*
 * XREFs of MiSplitDriverPage @ 0x14020E560
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x140010828 (MmLockLoadedModuleListShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MmUnlockLoadedModuleListShared @ 0x14020EA9C (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiSplitDriverPage(unsigned __int64 a1, unsigned __int8 a2)
{
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  MmLockLoadedModuleListShared(&v8);
  v4 = MiLookupDataTableEntry((__int64)(a1 << 25) >> 16, 1);
  LOBYTE(v5) = v8;
  v6 = (__int64)v4;
  MmUnlockLoadedModuleListShared(v5);
  if ( v6 )
    return MiMakeDriverPagesPrivate(v6, (ULONG_PTR *)a1, a1, a2, 0);
  else
    return 3221225497LL;
}
