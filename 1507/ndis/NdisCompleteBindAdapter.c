/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C00CD290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x2Eu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x2Fu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1);
}
