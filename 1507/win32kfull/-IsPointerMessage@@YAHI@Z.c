/*
 * XREFs of ?IsPointerMessage@@YAHI@Z @ 0x1C0001360
 * Callers:
 *     SetMiPPromotion @ 0x1C00012DC (SetMiPPromotion.c)
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 0x16;
}
