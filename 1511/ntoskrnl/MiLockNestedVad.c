/*
 * XREFs of MiLockNestedVad @ 0x1403F4C48
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     MiUpControlAreaRefs @ 0x14009A908 (MiUpControlAreaRefs.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = KeAbPreAcquire(a1 + 40, 0LL, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (ULONG_PTR)v1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
