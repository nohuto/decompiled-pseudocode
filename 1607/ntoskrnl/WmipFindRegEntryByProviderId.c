/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1400C26D8
 * Callers:
 *     IoWMISystemControl @ 0x1404A9E3C (IoWMISystemControl.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1400C2744 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
