/*
 * XREFs of WmipAllocRegEntry @ 0x140157134
 * Callers:
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x1407BA17C (WmipInitializeDataStructs.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     WmipAllocProviderId @ 0x14055BDA0 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  _UNKNOWN ***v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&WmipRegistrationSpinLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&WmipRegistrationSpinLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WmipRegistrationSpinLock);
    }
    v7 = (_UNKNOWN ***)off_140320B10;
    ++WmipInUseRegEntryCount;
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v7;
    if ( *v7 != &WmipInUseRegEntryHead )
      __fastfail(3u);
    *v7 = (_UNKNOWN **)v5;
    off_140320B10 = (_UNKNOWN **)v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
    else
      _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
    __writecr8(CurrentIrql);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
