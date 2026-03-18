/*
 * XREFs of MiInsertPrivateVad @ 0x1400965F0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiUnlockVad @ 0x1400144A0 (MiUnlockVad.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiInsertVad @ 0x140042950 (MiInsertVad.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFE1C (MiCreatePageTablesForPhysicalRange.c)
 *     MiAweViewInserter @ 0x14065C078 (MiAweViewInserter.c)
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
    ++*(_QWORD *)(qword_140327F90 + 276840648);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiLockVad((__int64)CurrentThread, a1);
  if ( (*(_BYTE *)(a3 + 1464) & 7) == 2 )
    v7 = &dword_140327C80;
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
