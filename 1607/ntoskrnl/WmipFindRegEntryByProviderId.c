/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1400C4838
 * Callers:
 *     IoWMISystemControl @ 0x1404BE10C (IoWMISystemControl.c)
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1400C48A4 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 RegEntryByProviderId; // rax
  KIRQL v6; // r9
  __int64 v7; // rbx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1, v3, v4, v2);
  v7 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v6);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v7;
}
