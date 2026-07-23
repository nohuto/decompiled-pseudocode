/*
 * XREFs of MiTryLockVad @ 0x1400AB61C
 * Callers:
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rax
  unsigned __int8 v5; // bl
  __int64 result; // rax

  if ( *(char *)(a1 + 1736) < 0 )
    return 0LL;
  v3 = (volatile signed __int32 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL, 1);
  if ( _interlockedbittestandset64(v3, 0LL) )
  {
    v5 = 0;
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v3);
  }
  else
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v5 = 1;
  }
  result = v5;
  if ( v5 == 1 )
    *(_BYTE *)(a1 + 1736) |= 0x80u;
  return result;
}
