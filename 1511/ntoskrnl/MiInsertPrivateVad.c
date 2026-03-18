/*
 * XREFs of MiInsertPrivateVad @ 0x1400BC014
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MiInsertVad @ 0x14004AD80 (MiInsertVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401DF0D8 (MiCreatePageTablesForPhysicalRange.c)
 *     MiAweViewInserter @ 0x1406268B8 (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  KIRQL v7; // bp
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiLockVad((__int64)CurrentThread, a1);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 1280));
  MiInsertVad(a1, a3);
  v9 = *(_DWORD *)(a1 + 48) & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    LOBYTE(v9) = v7;
    MiCreatePageTablesForPhysicalRange(a1, v9);
  }
  LOBYTE(v9) = v7;
  MiUnlockWorkingSetExclusive(a3 + 1280, v9, v8);
  v10 = *(_DWORD *)(a1 + 48);
  result = v10 & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (v10 & 0x40000) == 0 )
      MiAweViewInserter(a3, a2);
    return MiUnlockVad((__int64)CurrentThread, a1);
  }
  return result;
}
