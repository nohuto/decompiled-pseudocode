/*
 * XREFs of WmipAllocRegEntry @ 0x14012DE98
 * Callers:
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x14079C638 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     WmipAllocProviderId @ 0x1404F130C (WmipAllocProviderId.c)
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
