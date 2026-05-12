/*
 * XREFs of RaidAdapterRemoveUnit @ 0x1C000E64C
 * Callers:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C000E604 (RaidBusEnumeratorReleaseUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C0034200 (RaidUnitConvertToZombieUnit.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A2C (RaidAdapterAcquireInterruptLock.c)
 *     StorRemoveDictionary @ 0x1C000E700 (StorRemoveDictionary.c)
 */

void __fastcall RaidAdapterRemoveUnit(__int64 a1, __int64 a2)
{
  KIRQL v4; // bl
  __int64 **v5; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = RaidAdapterAcquireInterruptLock(a1);
  StorRemoveDictionary(
    a1 + 144,
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a2 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 88))) << 8));
  RaidAdapterReleaseInterruptLock(a1, v4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v5 = *(__int64 ***)(a2 + 56);
  v6 = (__int64 *)(a2 + 48);
  v7 = (__int64 *)*v6;
  if ( *(__int64 **)(*v6 + 8) != v6 || *v5 != v6 )
    __fastfail(3u);
  *v5 = v7;
  v7[1] = (__int64)v5;
  --*(_DWORD *)(a1 + 136);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
