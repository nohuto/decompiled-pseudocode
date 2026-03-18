/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x1406BF7F4
 * Callers:
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 */

void __fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r9
  __int16 v8; // ax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (unsigned __int64 *)(a1 + 1704);
  _InterlockedOr(v9, 0);
  if ( (*(_QWORD *)(a1 + 1704) & 1) != 0 )
  {
    v6 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL, a4);
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5, v7);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    ExfReleasePushLockExclusive((volatile signed __int64 *)v5);
    if ( v6 )
      KeAbPostRelease((ULONG_PTR)v5);
  }
  v8 = *(_WORD *)(a2 + 484) + 1;
  *(_WORD *)(a2 + 484) = v8;
  if ( !v8 && *(_QWORD *)(a2 + 152) != a2 + 152 && !*(_WORD *)(a2 + 486) )
    KiCheckForKernelApcDelivery();
}
