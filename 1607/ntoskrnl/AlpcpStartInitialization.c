/*
 * XREFs of AlpcpStartInitialization @ 0x14040A68C
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall AlpcpStartInitialization(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = (_BYTE *)KeAbPreAcquire(a1 - 16, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v1, result, (ULONG_PTR)v1);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  *(_BYTE *)(a1 - 32) |= 4u;
  return result;
}
