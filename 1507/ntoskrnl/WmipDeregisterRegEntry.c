/*
 * XREFs of WmipDeregisterRegEntry @ 0x14012785C
 * Callers:
 *     WmipDeregisterDevice @ 0x140546074 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     WmipRemoveDS @ 0x140546110 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v3; // esi
  unsigned __int8 v4; // bp
  char **v5; // rcx
  PVOID *v6; // rax
  void *v7; // rcx
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+32h] [rbp-26h]
  int v10; // [rsp+34h] [rbp-24h]
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0;
  Object = 1;
  v9 = 6;
  v11[1] = v11;
  v11[0] = v11;
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
  *((_QWORD *)Entry + 5) = &Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceRegEntry((__int64)Entry);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&WmipRegistrationSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&WmipRegistrationSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WmipRegistrationSpinLock);
  }
  v5 = *(char ***)Entry;
  --WmipInUseRegEntryCount;
  v6 = (PVOID *)*((_QWORD *)Entry + 1);
  if ( v5[1] != Entry || *v6 != Entry )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(v4);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v7 = (void *)*((_QWORD *)Entry + 3);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
