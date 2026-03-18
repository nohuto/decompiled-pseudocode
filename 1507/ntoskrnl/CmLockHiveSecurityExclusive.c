/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14065D89C
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmLockHiveSecurityExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  v4 = (unsigned __int64 *)(a1 + 2952);
  result = KeAbPreAcquire(a1 + 2952, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, (ULONG_PTR)v4, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
