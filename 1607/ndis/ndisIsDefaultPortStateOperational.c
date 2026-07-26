/*
 * XREFs of ndisIsDefaultPortStateOperational @ 0x1C0017E28
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(_DWORD *a1)
{
  char v2; // di
  char v3; // cl

  v2 = 0;
  v3 = byte_1C00895DE;
  if ( (unsigned __int8)byte_1C00895DE >= 4u )
  {
    WPP_SF_q(44LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1);
    v3 = byte_1C00895DE;
  }
  if ( (a1[30] & 0x10000) != 0
    && (a1[842] != 1 || ((a1[844] - 1) & 0xFFFFFFFD) == 0)
    && (a1[843] != 1 || ((a1[845] - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_q(45LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1);
  return v2;
}
