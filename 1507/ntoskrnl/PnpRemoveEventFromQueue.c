/*
 * XREFs of PnpRemoveEventFromQueue @ 0x14068E4C4
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveEventFromQueue(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  PVOID *v10; // rax
  PVOID *v11; // rcx
  __int64 v12; // rbx
  unsigned __int8 v13; // di
  signed __int32 v14; // eax

  v4 = PnpDeviceEventList;
  v6 = 0;
  v7 = KeAbPreAcquire(PnpDeviceEventList + 64, 0LL, 0LL, a4);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 64), 0) )
    ExpAcquireFastMutexContended(v4 + 64, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v4 + 72) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 112) = CurrentIrql;
  v10 = *(PVOID **)P;
  if ( *(PVOID *)P != P )
  {
    v11 = (PVOID *)*((_QWORD *)P + 1);
    if ( v10[1] != P || *v11 != P )
      __fastfail(3u);
    *v11 = v10;
    v6 = 1;
    v10[1] = v11;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(P, 0x4B706E50u);
  }
  v12 = PnpDeviceEventList;
  *(_QWORD *)(PnpDeviceEventList + 72) = 0LL;
  v13 = *(_BYTE *)(v12 + 112);
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 64), 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v12 + 64), v14);
  __writecr8(v13);
  KeAbPostRelease(v12 + 64);
  return v6;
}
