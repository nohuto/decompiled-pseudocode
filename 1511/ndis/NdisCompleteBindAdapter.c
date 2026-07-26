/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C00C66B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x2Eu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x2Fu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
}
