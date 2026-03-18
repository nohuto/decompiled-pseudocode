/*
 * XREFs of BgpFwMarkHiberPhase @ 0x14075C564
 * Callers:
 *     BgMarkHiberPhase @ 0x14075C534 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_140323D90; (__int64 *)i != &qword_140323D90; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
