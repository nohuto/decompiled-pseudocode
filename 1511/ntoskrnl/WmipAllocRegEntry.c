/*
 * XREFs of WmipAllocRegEntry @ 0x140123DB8
 * Callers:
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140752FF4 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WmipAllocProviderId @ 0x1404C57AC (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _UNKNOWN ***v7; // rcx

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
    v7 = (_UNKNOWN ***)off_1402D1970;
    ++WmipInUseRegEntryCount;
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v7;
    if ( *v7 != &WmipInUseRegEntryHead )
      __fastfail(3u);
    *v7 = (_UNKNOWN **)v5;
    off_1402D1970 = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v6);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
