/*
 * XREFs of NdisSetOptionalHandlers @ 0x1C00AFE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisFSetRestartAttributes @ 0x1C00B0028 (ndisFSetRestartAttributes.c)
 *     ndisSetMiniportReenumerateHandlers @ 0x1C00D4F94 (ndisSetMiniportReenumerateHandlers.c)
 *     ndisSetSystemPowerNotificationHandlers @ 0x1C00D5330 (ndisSetSystemPowerNotificationHandlers.c)
 *     ndisSetSSHandlers @ 0x1C00DD1E4 (ndisSetSSHandlers.c)
 *     ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C00E0FE4 (-ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisSetOptionalHandlers(NDIS_HANDLE NdisHandle, PNDIS_DRIVER_OPTIONAL_HANDLERS OptionalHandlers)
{
  int v4; // ebx
  _QWORD *v5; // rbp
  unsigned int Type; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int restarted; // eax
  unsigned int v16; // ecx
  _OWORD *v17; // rax
  UCHAR Revision; // al

  v4 = 0;
  v5 = NdisHandle;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x6Au, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)NdisHandle);
  Type = OptionalHandlers->Header.Type;
  if ( Type > 0xA6 )
  {
    switch ( Type )
    {
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
            goto LABEL_36;
        }
        goto LABEL_16;
      case 0xB2u:
        if ( *(_BYTE *)NdisHandle != 2 )
          goto LABEL_36;
        if ( OptionalHandlers->Header.Revision == 1
          && OptionalHandlers->Header.Size >= 0x18u
          && !*(_DWORD *)&OptionalHandlers[1] )
        {
          *((_QWORD *)NdisHandle + 103) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
          *((_QWORD *)NdisHandle + 104) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
          goto LABEL_16;
        }
        break;
      case 0xB4u:
        restarted = ndisSetSSHandlers(NdisHandle, OptionalHandlers);
        goto LABEL_21;
      case 0xB8u:
        Revision = OptionalHandlers->Header.Revision;
        if ( (Revision != 2 || OptionalHandlers->Header.Size >= 0xF0u)
          && (Revision != 1 || OptionalHandlers->Header.Size >= 0x70u) )
        {
          if ( *(_BYTE *)NdisHandle != 2 )
            goto LABEL_36;
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
          goto LABEL_16;
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
          case 0xBDu:
            if ( OptionalHandlers->Header.Size >= 0x48u && OptionalHandlers->Header.Revision == 1 )
            {
              if ( *(_BYTE *)NdisHandle != 2 )
              {
                if ( *(_BYTE *)NdisHandle != 17 )
                  goto LABEL_36;
                v5 = (_QWORD *)*((_QWORD *)NdisHandle + 477);
              }
              v5[143] = *(_QWORD *)&OptionalHandlers[2].Header.Type;
              v5[144] = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              v5[145] = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              v5[146] = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              v5[147] = *(_QWORD *)&OptionalHandlers[10].Header.Type;
              v5[148] = *(_QWORD *)&OptionalHandlers[12].Header.Type;
              v5[149] = *(_QWORD *)&OptionalHandlers[14].Header.Type;
              v5[150] = *(_QWORD *)&OptionalHandlers[16].Header.Type;
            }
            else
            {
              v4 = -1073676284;
            }
            goto LABEL_16;
          case 0xC4u:
            restarted = ndisPDSetBufferManagerHandlers(NdisHandle, OptionalHandlers);
            break;
          default:
            goto LABEL_36;
        }
LABEL_21:
        v4 = restarted;
        goto LABEL_16;
    }
LABEL_62:
    v4 = -1073741811;
    goto LABEL_16;
  }
  if ( Type == 166 )
  {
    if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0xA0u )
    {
      if ( *(_BYTE *)NdisHandle != 3 )
        goto LABEL_36;
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
      goto LABEL_16;
    }
    goto LABEL_62;
  }
  v7 = Type - 140;
  if ( !v7 )
  {
    if ( *(_BYTE *)NdisHandle != 5 )
      goto LABEL_36;
    restarted = ndisFSetRestartAttributes(NdisHandle, OptionalHandlers);
    goto LABEL_21;
  }
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            if ( *(_BYTE *)NdisHandle == 2 )
            {
              *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
              *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 101) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              goto LABEL_16;
            }
            goto LABEL_36;
          }
          v13 = v12 - 1;
          if ( !v13 )
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
                goto LABEL_16;
              }
              goto LABEL_36;
            }
            if ( *(_DWORD *)&OptionalHandlers[2] == 1 )
            {
              *((_QWORD *)NdisHandle + 103) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 104) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 105) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              *((_QWORD *)NdisHandle + 106) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
              *((_QWORD *)NdisHandle + 107) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
              *((_QWORD *)NdisHandle + 108) = *(_QWORD *)&OptionalHandlers[14].Header.Type;
              goto LABEL_16;
            }
LABEL_36:
            v4 = -1073741637;
            goto LABEL_16;
          }
          v16 = v13 - 1;
          if ( !v16 )
          {
            if ( *(_BYTE *)NdisHandle == 2 && *(_DWORD *)&OptionalHandlers[2] == 1 )
            {
              *((_QWORD *)NdisHandle + 75) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
              *((_QWORD *)NdisHandle + 76) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
              *((_QWORD *)NdisHandle + 77) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
              *((_QWORD *)NdisHandle + 78) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
              *((_QWORD *)NdisHandle + 79) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
              goto LABEL_16;
            }
            goto LABEL_36;
          }
          if ( v16 != 17 )
            goto LABEL_36;
          if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0x88u )
          {
            if ( *(_BYTE *)NdisHandle == 2 )
            {
              v17 = (char *)NdisHandle + 640;
            }
            else
            {
              if ( *(_BYTE *)NdisHandle != 3 )
                goto LABEL_36;
              v17 = (char *)NdisHandle + 632;
            }
            *v17 = *(_OWORD *)&OptionalHandlers->Header.Type;
            v17[1] = *(_OWORD *)&OptionalHandlers[4].Header.Type;
            v17[2] = *(_OWORD *)&OptionalHandlers[8].Header.Type;
            v17[3] = *(_OWORD *)&OptionalHandlers[12].Header.Type;
            v17[4] = *(_OWORD *)&OptionalHandlers[16].Header.Type;
            v17[5] = *(_OWORD *)&OptionalHandlers[20].Header.Type;
            v17[6] = *(_OWORD *)&OptionalHandlers[24].Header.Type;
            v17[7] = *(_OWORD *)&OptionalHandlers[28].Header.Type;
            v17[8] = *(_OWORD *)&OptionalHandlers[32].Header.Type;
            goto LABEL_16;
          }
          goto LABEL_62;
        }
        if ( *(_BYTE *)NdisHandle != 2 )
          goto LABEL_36;
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
          goto LABEL_36;
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
          goto LABEL_36;
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
        goto LABEL_36;
    }
  }
LABEL_16:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x6Bu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)NdisHandle, v4);
  return v4;
}
