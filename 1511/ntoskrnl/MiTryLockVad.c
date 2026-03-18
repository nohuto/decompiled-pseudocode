/*
 * XREFs of MiTryLockVad @ 0x1400ED7E0
 * Callers:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  ULONG_PTR v4; // rax
  unsigned __int8 v5; // bl
  __int64 result; // rax

  if ( *(char *)(a1 + 1732) < 0 )
    return 0LL;
  v3 = (volatile signed __int32 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL, 1LL);
  v5 = 0;
  if ( _interlockedbittestandset64(v3, 0LL) )
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)v3, v4);
  }
  else
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v5 = 1;
  }
  result = v5;
  if ( v5 == 1 )
    *(_BYTE *)(a1 + 1732) |= 0x80u;
  return result;
}
