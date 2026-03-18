/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140006E80
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14062B9EC (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
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
