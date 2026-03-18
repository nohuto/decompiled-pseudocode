/*
 * XREFs of IsEqualInputSource @ 0x1C00F3F04
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0066AD8 (CoalesceInputSourceMouseMoves.c)
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F3EA0 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  return a1 && a2 && *a1 == *a2 && a1[1] == a2[1];
}
