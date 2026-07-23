/*
 * XREFs of MiLockDriverMappings @ 0x1400A1250
 * Callers:
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDriverMappings(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&qword_140326888, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326888, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140326888, result, &qword_140326888);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
