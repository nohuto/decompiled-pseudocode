/*
 * XREFs of WmipAllocRegEntry @ 0x14012E408
 * Callers:
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x14079C638 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WmipAllocProviderId @ 0x1404D3400 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rcx

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v7 = off_1402F36D8[0];
    ++WmipInUseRegEntryCount;
    if ( *(_UNKNOWN ***)off_1402F36D8[0] != &WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v7;
    *v7 = v5;
    off_1402F36D8[0] = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v6);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
