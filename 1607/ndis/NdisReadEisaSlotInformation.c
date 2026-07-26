/*
 * XREFs of NdisReadEisaSlotInformation @ 0x1C00D3200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall NdisReadEisaSlotInformation(_DWORD *a1, __int64 a2)
{
  char v4; // al

  v4 = byte_1C00895CE;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
  {
    WPP_SF_q(0xAu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a2);
    v4 = byte_1C00895CE;
  }
  *a1 = -1073741637;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0xBu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a2, -1073741637);
}
