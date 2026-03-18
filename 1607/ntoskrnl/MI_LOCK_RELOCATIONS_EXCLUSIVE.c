/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400215A8
 * Callers:
 *     MiRelocateImageAgain @ 0x14042C2BC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14066167C (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
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
