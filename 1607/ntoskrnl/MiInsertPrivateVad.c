/*
 * XREFs of MiInsertPrivateVad @ 0x140095DF0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFC48 (MiCreatePageTablesForPhysicalRange.c)
 *     MiAweViewInserter @ 0x14065C15C (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  LONG *v7; // rbp
  KIRQL v8; // al
  KIRQL v9; // r14
  int v10; // edx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 )
    ++*(_QWORD *)(qword_140327FD0 + 276840648);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiLockVad((__int64)CurrentThread, a1);
  if ( (*(_BYTE *)(a3 + 1464) & 7) == 2 )
    v7 = &dword_140327CC0;
  else
    v7 = (LONG *)(a3 + 1472);
  v8 = ExAcquireSpinLockExclusive(v7);
  v7[1] = 0;
  v9 = v8;
  MiInsertVad(a1, a3);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiCreatePageTablesForPhysicalRange(a1, v9);
  MiUnlockWorkingSetExclusive(a3 + 1280, v9);
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
