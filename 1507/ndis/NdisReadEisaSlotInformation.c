/*
 * XREFs of NdisReadEisaSlotInformation @ 0x1C00D3D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall NdisReadEisaSlotInformation(_DWORD *a1, __int64 a2)
{
  char v4; // al

  v4 = byte_1C008530E;
  if ( (unsigned __int8)byte_1C008530E >= 4u )
  {
    WPP_SF_q(0xAu, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a2);
    v4 = byte_1C008530E;
  }
  *a1 = -1073741637;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0xBu, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a2, -1073741637);
}
