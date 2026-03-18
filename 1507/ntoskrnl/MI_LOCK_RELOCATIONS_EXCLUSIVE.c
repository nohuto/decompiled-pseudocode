/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D414
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (volatile signed __int32 *)(a2 + 24);
  result = KeAbPreAcquire(a2 + 24);
  v6 = result;
  if ( _interlockedbittestandset64(v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, v4);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
