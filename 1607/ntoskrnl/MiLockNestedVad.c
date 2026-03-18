/*
 * XREFs of MiLockNestedVad @ 0x140527FE0
 * Callers:
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E9AA0 (MiMarkSharedImageCfgBits.c)
 *     MiUpControlAreaRefs @ 0x14010C9E8 (MiUpControlAreaRefs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _BYTE *result; // rax
  _BYTE *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = (_BYTE *)KeAbPreAcquire(a1 + 40, 0LL, 0);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v1, result, (ULONG_PTR)v1);
  if ( v3 )
  {
    result = (_BYTE *)*((_QWORD *)v3 + 4);
    v3[26] |= 1u;
  }
  return result;
}
