/*
 * XREFs of ndisRollbackPortDeactivation @ 0x1C003FC00
 * Callers:
 *     ndisPnPPortDeactivation @ 0x1C003F694 (ndisPnPPortDeactivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisFindPortByPortNumber @ 0x1C003F0E8 (ndisFindPortByPortNumber.c)
 */

void __fastcall ndisRollbackPortDeactivation(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rsi
  char v6; // r10
  unsigned int *v7; // r11
  __int64 *PortByPortNumber; // rax
  __int64 v9; // r11

  v3 = a3;
  v6 = byte_1C00895DE;
  if ( (unsigned __int8)byte_1C00895DE >= 4u )
  {
    WPP_SF_qq(0x28u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1, a2);
    v6 = byte_1C00895DE;
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
    WPP_SF_qq(0x29u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1, a2);
}
