/*
 * XREFs of ndisIsDefaultPortStateOperational @ 0x1C002489C
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(_DWORD *a1)
{
  char v2; // di
  char v3; // cl

  v2 = 0;
  v3 = byte_1C008371E;
  if ( (unsigned __int8)byte_1C008371E >= 4u )
  {
    WPP_SF_q(44LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1);
    v3 = byte_1C008371E;
  }
  if ( (a1[30] & 0x10000) != 0
    && (a1[842] != 1 || ((a1[844] - 1) & 0xFFFFFFFD) == 0)
    && (a1[843] != 1 || ((a1[845] - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_q(45LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1);
  return v2;
}
