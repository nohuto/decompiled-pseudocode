/*
 * XREFs of BgpFwMarkHiberPhase @ 0x1407253AC
 * Callers:
 *     BgMarkHiberPhase @ 0x14072537C (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_1402FA050; (__int64 *)i != &qword_1402FA050; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
