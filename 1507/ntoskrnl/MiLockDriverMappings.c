/*
 * XREFs of MiLockDriverMappings @ 0x140107DF8
 * Callers:
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDriverMappings(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&qword_14034EA38, 0LL, 0LL, a4);
  v6 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EA38, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_14034EA38, result, (ULONG_PTR)&qword_14034EA38, v5);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
