/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1C00C6720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x30u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x31u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
}
