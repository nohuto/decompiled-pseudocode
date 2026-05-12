/*
 * XREFs of RaidAdapterRemoveZombieUnit @ 0x1C0022100
 * Callers:
 *     RaidUnitConvertToNormalUnit @ 0x1C0009EA0 (RaidUnitConvertToNormalUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterRemoveZombieUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 192;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  *(_BYTE *)(a2 + 144) &= ~0x20u;
  v4 = (_QWORD *)(a2 + 48);
  v5 = *v4;
  v6 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --*(_DWORD *)(v2 + 24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
