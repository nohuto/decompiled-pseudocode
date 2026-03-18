/*
 * XREFs of PnprStartMirroring @ 0x140581A04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PnprStartMirroring()
{
  SIZE_T v0; // rax

  v0 = PnprContext;
  *(_DWORD *)(PnprContext + 64) |= 4u;
  *(_BYTE *)(v0 + 208) = 0;
  return 0LL;
}
