/*
 * XREFs of ndisRollbackPortDeactivation @ 0x1C003BC84
 * Callers:
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisFindPortByPortNumber @ 0x1C003B16C (ndisFindPortByPortNumber.c)
 */

void __fastcall ndisRollbackPortDeactivation(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rsi
  char v6; // r10
  unsigned int *v7; // r11
  __int64 *PortByPortNumber; // rax
  __int64 v9; // r11

  v3 = a3;
  v6 = byte_1C008371E;
  if ( (unsigned __int8)byte_1C008371E >= 4u )
  {
    WPP_SF_qq(0x28u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, a2);
    v6 = byte_1C008371E;
  }
  if ( (_DWORD)v3 )
  {
    v7 = a2;
    do
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, *v7);
      if ( PortByPortNumber )
      {
        *((_DWORD *)PortByPortNumber + 4) = *((_DWORD *)PortByPortNumber + 5);
        ++*(_DWORD *)(a1 + 2792);
      }
      v7 = (unsigned int *)(v9 + 4);
      --v3;
    }
    while ( v3 );
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qq(0x29u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, a2);
}
