/*
 * XREFs of IsEqualInputSource @ 0x1C00EE90C
 * Callers:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0090AE8 (CoalesceInputSourceMouseMoves.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00EE8A8 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  return a1 && a2 && *a1 == *a2 && a1[1] == a2[1];
}
