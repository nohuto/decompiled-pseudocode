/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140711CA8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140711C68 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140711D0C (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  ++dword_140307248;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  VfUtilCheckKernelAddress(a3, 24LL);
  return pXdvKeAcquireInStackQueuedSpinLockForDpc(a1, a3);
}
