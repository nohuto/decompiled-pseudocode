/*
 * XREFs of ndisUpdateMiniportPortStates @ 0x1C003FCA0
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisFindPortByPortNumber @ 0x1C003F0E8 (ndisFindPortByPortNumber.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisUpdateMiniportPortStates(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char v7; // r11
  __int64 *PortByPortNumber; // rax

  v2 = *(_DWORD *)(a2 + 56);
  v4 = *(_QWORD *)(a2 + 48);
  v5 = -1073741811;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = byte_1C00895DE;
  if ( (unsigned __int8)byte_1C00895DE >= 4u )
  {
    WPP_SF_q(0x2Au, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
    v7 = byte_1C00895DE;
  }
  if ( v4 && v2 >= 0x30 && *(_BYTE *)(v4 + 1) && *(_BYTE *)v4 == 0x80 && *(_WORD *)(v4 + 2) >= 0x30u )
  {
    if ( v6 )
    {
      PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v6);
      if ( PortByPortNumber && *((_DWORD *)PortByPortNumber + 4) == 4 )
      {
        v5 = 0;
        *((_DWORD *)PortByPortNumber + 10) = *(_DWORD *)(v4 + 4);
        PortByPortNumber[6] = *(_QWORD *)(v4 + 8);
        PortByPortNumber[7] = *(_QWORD *)(v4 + 16);
        *((_DWORD *)PortByPortNumber + 16) = *(_DWORD *)(v4 + 24);
        *((_DWORD *)PortByPortNumber + 17) = *(_DWORD *)(v4 + 28);
        *((_DWORD *)PortByPortNumber + 18) = *(_DWORD *)(v4 + 32);
        *((_DWORD *)PortByPortNumber + 19) = *(_DWORD *)(v4 + 36);
        *((_DWORD *)PortByPortNumber + 20) = *(_DWORD *)(v4 + 40);
      }
    }
    else
    {
      v5 = 0;
      if ( (a1[31] & 0x80u) != 0 )
      {
        a1[842] = *(_DWORD *)(v4 + 28);
        a1[843] = *(_DWORD *)(v4 + 32);
        a1[844] = *(_DWORD *)(v4 + 36);
        a1[845] = *(_DWORD *)(v4 + 40);
      }
    }
  }
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qD(43LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1, v5);
  return v5;
}
