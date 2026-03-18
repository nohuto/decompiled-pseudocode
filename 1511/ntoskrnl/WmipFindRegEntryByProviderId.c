/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x14001AF58
 * Callers:
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x1404845DC (IoWMISystemControl.c)
 * Callees:
 *     WmipDoFindRegEntryByProviderId @ 0x14001AFC4 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
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
