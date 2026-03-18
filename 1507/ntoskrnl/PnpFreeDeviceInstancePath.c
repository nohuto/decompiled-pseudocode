/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x140534F5C
 * Callers:
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  void *v8; // rcx
  unsigned __int8 v9; // bl
  signed __int32 v10; // eax

  v5 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceReferenceTableLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceReferenceTableLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14034B108 = (__int64)KeGetCurrentThread();
  dword_14034B130 = CurrentIrql;
  v8 = *(void **)(a1 + 48);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v9 = dword_14034B130;
  qword_14034B108 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceReferenceTableLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PnpDeviceReferenceTableLock);
}
