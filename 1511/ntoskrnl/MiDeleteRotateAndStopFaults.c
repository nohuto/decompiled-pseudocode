/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140103598
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rbx
  KIRQL v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiDeleteVirtualAddresses(a1, a2, 0, v7, (__int64)v11);
  LOBYTE(v8) = v7;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v9);
}
