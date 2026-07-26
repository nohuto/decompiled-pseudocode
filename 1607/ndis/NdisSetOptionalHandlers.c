/*
 * XREFs of NdisSetOptionalHandlers @ 0x1C00AA0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisFSetRestartAttributes @ 0x1C00AA2A4 (ndisFSetRestartAttributes.c)
 *     ndisSetMiniportReenumerateHandlers @ 0x1C00D46E4 (ndisSetMiniportReenumerateHandlers.c)
 *     ndisSetSystemPowerNotificationHandlers @ 0x1C00D4B40 (ndisSetSystemPowerNotificationHandlers.c)
 *     ndisSetSSHandlers @ 0x1C00DCA74 (ndisSetSSHandlers.c)
 *     ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C00E09A8 (-ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisSetOptionalHandlers(NDIS_HANDLE NdisHandle, PNDIS_DRIVER_OPTIONAL_HANDLERS OptionalHandlers)
{
  int v4; // ebx
  unsigned int Type; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int restarted; // eax
  _OWORD *v15; // rax
  UCHAR Revision; // al

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x6Au, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)NdisHandle);
  Type = OptionalHandlers->Header.Type;
  if ( Type > 0xA5 )
  {
    switch ( Type )
    {
      case 0xA6u:
        if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0xA0u )
        {
          if ( *(_BYTE *)NdisHandle != 3 )
            goto LABEL_28;
          *(_OWORD *)((char *)NdisHandle + 472) = *(_OWORD *)&OptionalHandlers->Header.Type;
          *(_OWORD *)((char *)NdisHandle + 488) = *(_OWORD *)&OptionalHandlers[4].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 504) = *(_OWORD *)&OptionalHandlers[8].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 520) = *(_OWORD *)&OptionalHandlers[12].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 536) = *(_OWORD *)&OptionalHandlers[16].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 552) = *(_OWORD *)&OptionalHandlers[20].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 568) = *(_OWORD *)&OptionalHandlers[24].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 584) = *(_OWORD *)&OptionalHandlers[28].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 600) = *(_OWORD *)&OptionalHandlers[32].Header.Type;
          *(_OWORD *)((char *)NdisHandle + 616) = *(_OWORD *)&OptionalHandlers[36].Header.Type;
          goto LABEL_19;
        }
        break;
      case 0xB0u:
        switch ( *(_BYTE *)NdisHandle )
        {
          case 3:
            *((_QWORD *)NdisHandle + 110) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 111) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 112) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          case 0x11:
            *((_QWORD *)NdisHandle + 456) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 457) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 458) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          case 0x12:
            *((_QWORD *)NdisHandle + 109) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 110) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 111) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_19;
      case 0xB2u:
        if ( *(_BYTE *)NdisHandle != 2 )
          goto LABEL_28;
        if ( OptionalHandlers->Header.Revision == 1
          && OptionalHandlers->Header.Size >= 0x18u
          && !*(_DWORD *)&OptionalHandlers[1] )
        {
          *((_QWORD *)NdisHandle + 103) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 104) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          goto LABEL_19;
        }
        break;
      case 0xB4u:
        restarted = ndisSetSSHandlers(NdisHandle, OptionalHandlers);
        goto LABEL_18;
      case 0xB8u:
        Revision = OptionalHandlers->Header.Revision;
        if ( (Revision != 2 || OptionalHandlers->Header.Size >= 0xF0u)
          && (Revision != 1 || OptionalHandlers->Header.Size >= 0x70u) )
        {
          if ( *(_BYTE *)NdisHandle != 2 )
            goto LABEL_28;
          *((_QWORD *)NdisHandle + 114) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 115) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          *((_QWORD *)NdisHandle + 117) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
          *((_QWORD *)NdisHandle + 116) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
          *((_QWORD *)NdisHandle + 118) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
          *((_QWORD *)NdisHandle + 119) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
          *((_QWORD *)NdisHandle + 120) = *(_QWORD *)&OptionalHandlers[14].Header.Type;
          *((_QWORD *)NdisHandle + 121) = *(_QWORD *)&OptionalHandlers[16].Header.Type;
          *((_QWORD *)NdisHandle + 122) = *(_QWORD *)&OptionalHandlers[18].Header.Type;
          *((_QWORD *)NdisHandle + 123) = *(_QWORD *)&OptionalHandlers[20].Header.Type;
          *((_QWORD *)NdisHandle + 124) = *(_QWORD *)&OptionalHandlers[22].Header.Type;
          *((_QWORD *)NdisHandle + 125) = *(_QWORD *)&OptionalHandlers[24].Header.Type;
          *((_QWORD *)NdisHandle + 126) = *(_QWORD *)&OptionalHandlers[26].Header.Type;
          *((_QWORD *)NdisHandle + 127) = *(_QWORD *)&OptionalHandlers[28].Header.Type;
          *((_QWORD *)NdisHandle + 128) = *(_QWORD *)&OptionalHandlers[30].Header.Type;
          if ( OptionalHandlers->Header.Revision >= 2u )
          {
            *((_QWORD *)NdisHandle + 129) = *(_QWORD *)&OptionalHandlers[32].Header.Type;
            *((_QWORD *)NdisHandle + 130) = *(_QWORD *)&OptionalHandlers[34].Header.Type;
            *((_QWORD *)NdisHandle + 131) = *(_QWORD *)&OptionalHandlers[36].Header.Type;
            *((_QWORD *)NdisHandle + 132) = *(_QWORD *)&OptionalHandlers[38].Header.Type;
            *((_QWORD *)NdisHandle + 133) = *(_QWORD *)&OptionalHandlers[40].Header.Type;
            *((_QWORD *)NdisHandle + 134) = *(_QWORD *)&OptionalHandlers[42].Header.Type;
            *((_QWORD *)NdisHandle + 135) = *(_QWORD *)&OptionalHandlers[44].Header.Type;
            *((_QWORD *)NdisHandle + 136) = *(_QWORD *)&OptionalHandlers[46].Header.Type;
            *((_QWORD *)NdisHandle + 137) = *(_QWORD *)&OptionalHandlers[48].Header.Type;
            *((_QWORD *)NdisHandle + 138) = *(_QWORD *)&OptionalHandlers[50].Header.Type;
            *((_QWORD *)NdisHandle + 139) = *(_QWORD *)&OptionalHandlers[52].Header.Type;
            *((_QWORD *)NdisHandle + 140) = *(_QWORD *)&OptionalHandlers[54].Header.Type;
            *((_QWORD *)NdisHandle + 141) = *(_QWORD *)&OptionalHandlers[56].Header.Type;
            *((_QWORD *)NdisHandle + 142) = *(_QWORD *)&OptionalHandlers[58].Header.Type;
          }
          goto LABEL_19;
        }
        break;
      default:
        switch ( Type )
        {
          case 0xBBu:
            restarted = ndisSetSystemPowerNotificationHandlers(NdisHandle, OptionalHandlers);
            break;
          case 0xBCu:
            restarted = ndisSetMiniportReenumerateHandlers(NdisHandle, OptionalHandlers);
            break;
          case 0xC4u:
            restarted = ndisPDSetBufferManagerHandlers(NdisHandle, OptionalHandlers);
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_18;
    }
LABEL_91:
    v4 = -1073741811;
    goto LABEL_19;
  }
  if ( Type == 165 )
  {
    if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0x88u )
    {
      if ( *(_BYTE *)NdisHandle == 2 )
      {
        v15 = (char *)NdisHandle + 640;
      }
      else
      {
        if ( *(_BYTE *)NdisHandle != 3 )
          goto LABEL_28;
        v15 = (char *)NdisHandle + 632;
      }
      *v15 = *(_OWORD *)&OptionalHandlers->Header.Type;
      v15[1] = *(_OWORD *)&OptionalHandlers[4].Header.Type;
      v15[2] = *(_OWORD *)&OptionalHandlers[8].Header.Type;
      v15[3] = *(_OWORD *)&OptionalHandlers[12].Header.Type;
      v15[4] = *(_OWORD *)&OptionalHandlers[16].Header.Type;
      v15[5] = *(_OWORD *)&OptionalHandlers[20].Header.Type;
      v15[6] = *(_OWORD *)&OptionalHandlers[24].Header.Type;
      v15[7] = *(_OWORD *)&OptionalHandlers[28].Header.Type;
      v15[8] = *(_OWORD *)&OptionalHandlers[32].Header.Type;
      goto LABEL_19;
    }
    goto LABEL_91;
  }
  v6 = Type - 140;
  if ( !v6 )
  {
    if ( *(_BYTE *)NdisHandle != 5 )
      goto LABEL_28;
    restarted = ndisFSetRestartAttributes(NdisHandle, OptionalHandlers);
LABEL_18:
    v4 = restarted;
    goto LABEL_19;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
            if ( *(_BYTE *)NdisHandle == 2 )
            {
              *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
              *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 101) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              goto LABEL_19;
            }
            goto LABEL_28;
          }
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 && *(_BYTE *)NdisHandle == 2 && *(_DWORD *)&OptionalHandlers[2] == 1 )
            {
              *((_QWORD *)NdisHandle + 75) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 76) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 77) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              *((_QWORD *)NdisHandle + 78) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
              *((_QWORD *)NdisHandle + 79) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
              goto LABEL_19;
            }
          }
          else
          {
            if ( *(_BYTE *)NdisHandle != 3 )
            {
              if ( *(_BYTE *)NdisHandle == 18 && *(_DWORD *)&OptionalHandlers[2] == 1 )
              {
                *((_QWORD *)NdisHandle + 79) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
                *((_QWORD *)NdisHandle + 80) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
                *((_QWORD *)NdisHandle + 81) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
                *((_QWORD *)NdisHandle + 82) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
                *((_QWORD *)NdisHandle + 83) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
                *((_QWORD *)NdisHandle + 84) = *(_QWORD *)&OptionalHandlers[14].Header.Type;
                goto LABEL_19;
              }
              goto LABEL_28;
            }
            if ( *(_DWORD *)&OptionalHandlers[2] == 1 )
            {
              *((_QWORD *)NdisHandle + 103) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 104) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 105) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              *((_QWORD *)NdisHandle + 106) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
              *((_QWORD *)NdisHandle + 107) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
              *((_QWORD *)NdisHandle + 108) = *(_QWORD *)&OptionalHandlers[14].Header.Type;
              goto LABEL_19;
            }
          }
LABEL_28:
          v4 = -1073741637;
          goto LABEL_19;
        }
        if ( *(_BYTE *)NdisHandle != 2 )
          goto LABEL_28;
        *((_QWORD *)NdisHandle + 63) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 64) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 65) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 66) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 67) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 69) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
      }
      else
      {
        if ( *(_BYTE *)NdisHandle != 3 )
          goto LABEL_28;
        *((_QWORD *)NdisHandle + 24) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 25) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 26) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 27) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
      }
    }
    else
    {
      switch ( *(_BYTE *)NdisHandle )
      {
        case 2:
          *((_QWORD *)NdisHandle + 70) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 71) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          *((_QWORD *)NdisHandle + 72) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
          *((_QWORD *)NdisHandle + 73) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
          *((_QWORD *)NdisHandle + 74) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
          break;
        case 4:
          *((_QWORD *)NdisHandle + 52) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 53) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          *((_QWORD *)NdisHandle + 54) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
          *((_QWORD *)NdisHandle + 55) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
          *((_QWORD *)NdisHandle + 56) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
          break;
        case 5:
          *((_QWORD *)NdisHandle + 93) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 94) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          *((_QWORD *)NdisHandle + 95) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
          *((_QWORD *)NdisHandle + 96) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
          *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
          break;
        default:
          goto LABEL_28;
      }
    }
  }
  else
  {
    switch ( *(_BYTE *)NdisHandle )
    {
      case 3:
        *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 101) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 102) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
        break;
      case 4:
        *((_QWORD *)NdisHandle + 40) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 41) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 42) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 43) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 44) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 45) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
        break;
      case 5:
        *((_QWORD *)NdisHandle + 81) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 82) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 83) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 84) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 85) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 86) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
        break;
      case 0x12:
        *((_QWORD *)NdisHandle + 73) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 74) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 75) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 76) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 77) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 78) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
        break;
      default:
        goto LABEL_28;
    }
  }
LABEL_19:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x6Bu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)NdisHandle, v4);
  return v4;
}
