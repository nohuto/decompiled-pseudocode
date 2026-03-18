/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1400E2C20
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140208CDC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402090B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1404A6FA8 (PspQueryQuotaLimits.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  volatile LONG *v10; // rbp
  KIRQL v11; // dl

  *a6 = 0;
  v10 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v11 = ExAcquireSpinLockShared(v10);
  *a1 = *((_QWORD *)v10 + 21) << 12;
  *a2 = *((_QWORD *)v10 + 13) << 12;
  *a3 = *((_QWORD *)v10 + 14) << 12;
  *a4 = *((_QWORD *)v10 + 12) << 12;
  *a5 = *((_QWORD *)v10 + 17) << 12;
  if ( *((char *)v10 + 216) < 0 )
    *a6 |= 4u;
  if ( (v10[54] & 0x40) != 0 )
    *a6 |= 1u;
  ExReleaseSpinLockShared(v10, v11);
  return 0LL;
}
