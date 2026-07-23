/*
 * XREFs of MiLockSystemCacheInit @ 0x14014C384
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall MiLockSystemCacheInit(__int64 a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)qword_140326DA0, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)qword_140326DA0, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(qword_140326DA0, result, (ULONG_PTR)qword_140326DA0);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
