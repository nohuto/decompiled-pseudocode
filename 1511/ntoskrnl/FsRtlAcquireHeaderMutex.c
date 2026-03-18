/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x140042D20
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall FsRtlAcquireHeaderMutex(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v2 = KeAbPreAcquire(v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v1, 0) )
    ExpAcquireFastMutexContended(v1, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
  result = CurrentIrql;
  *(_DWORD *)(v1 + 48) = CurrentIrql;
  return result;
}
