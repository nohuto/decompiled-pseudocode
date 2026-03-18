/*
 * XREFs of IopAcquireFastLock @ 0x14007BAB4
 * Callers:
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall IopAcquireFastLock(volatile __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned int)_InterlockedExchange(a1 + 29, 1);
  if ( (_DWORD)v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, a3, a4);
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
