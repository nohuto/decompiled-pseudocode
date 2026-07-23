/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14009EE10
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140220F04 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14022119C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1404AF824 (PspQueryQuotaLimits.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int16 *v10; // rbx
  LONG *SharedVm; // rsi
  LONG *v12; // rax
  KIRQL v13; // dl

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)v10);
  ExAcquireSpinLockShared(SharedVm);
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  *a1 = *((_QWORD *)v10 + 19) << 12;
  *a2 = *((_QWORD *)v10 + 14) << 12;
  *a3 = *((_QWORD *)v10 + 15) << 12;
  *a4 = *((_QWORD *)v10 + 13) << 12;
  *a5 = *((_QWORD *)v10 + 18) << 12;
  if ( *((char *)v10 + 184) < 0 )
    *a6 |= 4u;
  if ( (v10[92] & 0x40) != 0 )
    *a6 |= 1u;
  v12 = MiGetSharedVm((__int64)v10);
  ExReleaseSpinLockShared(v12, v13);
  return 0LL;
}
