/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1C00CC1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x30u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x31u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, a1);
}
