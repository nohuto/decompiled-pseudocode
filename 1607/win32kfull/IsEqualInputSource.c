/*
 * XREFs of IsEqualInputSource @ 0x1C0112E64
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C005873C (CoalesceInputSourceMouseMoves.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0112E00 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  return a1 && a2 && *a1 == *a2 && a1[1] == a2[1];
}
