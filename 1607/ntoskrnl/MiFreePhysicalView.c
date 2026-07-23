/*
 * XREFs of MiFreePhysicalView @ 0x1400296F8
 * Callers:
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdi
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // rdx

  result = *(_DWORD *)(a2 + 48) & 7;
  if ( result == 1 )
  {
    v3 = a1 + 1280;
    SharedVm = MiGetSharedVm(a1 + 1280);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v6 = qword_140327FD0;
    --*(_QWORD *)(qword_140327FD0 + 276840560);
    LOBYTE(v6) = v5;
    return MiUnlockWorkingSetExclusive(v3, v6);
  }
  return result;
}
