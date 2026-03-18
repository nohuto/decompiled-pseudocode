/*
 * XREFs of MiTryLockVad @ 0x140126B04
 * Callers:
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rsi
  ULONG_PTR v6; // rax
  unsigned __int8 v7; // bl
  __int64 result; // rax

  if ( *(char *)(a1 + 1732) < 0 )
    return 0LL;
  v5 = (volatile signed __int32 *)(a2 + 40);
  v6 = KeAbPreAcquire(a2 + 40, 0LL, 1LL, a4);
  v7 = 0;
  if ( _interlockedbittestandset64(v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx((ULONG_PTR)v5, v6);
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = 1;
  }
  result = v7;
  if ( v7 == 1 )
    *(_BYTE *)(a1 + 1732) |= 0x80u;
  return result;
}
