/*
 * XREFs of ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099A90
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00C3BE4 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // esi
  struct _NDIS_IF_BLOCK *v4; // rax
  struct _NM_REQUEST_GET_PARAMETER *v5; // r13
  char *v7; // r14
  unsigned int v8; // edi
  int v9; // ebx
  char v10; // r15
  const void *p_ifType; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // eax
  int v14; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // edi
  struct _NDIS_IF_BLOCK *v18; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v4 = a1;
  if ( a2 )
    v4 = a2;
  v5 = a3;
  v18 = v4;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a3);
  v7 = (char *)*((_QWORD *)v5 + 5);
  v8 = *((_DWORD *)v5 + 13);
  v9 = *((_DWORD *)v5 + 12);
  if ( v7 )
  {
    v10 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_22:
          v5 = a3;
          break;
        }
        p_ifType = 0LL;
        v12 = 0;
        if ( v8 <= 0x208 )
        {
          if ( v8 == 520 )
          {
            v13 = 2;
            p_ifType = &a1->ifType;
            v14 = 524;
          }
          else if ( v8 )
          {
            if ( v8 != 4 )
            {
LABEL_43:
              v10 = 1;
              goto LABEL_21;
            }
            v13 = 516;
            p_ifType = &a1->ifDescr;
            v14 = 520;
          }
          else
          {
            v13 = 4;
            p_ifType = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v14 = 4;
          }
        }
        else
        {
          switch ( v8 )
          {
            case 0x20Cu:
              p_ifType = &v18->AccessType;
              v14 = 528;
              break;
            case 0x210u:
              p_ifType = &a1->DirectionType;
              v14 = 532;
              break;
            case 0x214u:
              p_ifType = &v18->ConnectionType;
              v14 = 536;
              break;
            case 0x218u:
              v13 = 16;
              p_ifType = &a1->InterfaceGuid;
              v14 = 552;
              goto LABEL_16;
            case 0x228u:
              v13 = 1;
              p_ifType = &a1->ifConnectorPresent;
              v14 = 554;
              goto LABEL_16;
            case 0x22Au:
              v13 = 34;
              if ( a1->bNdisIsProvider )
                p_ifType = &v18->PermanentPhysAddress;
              else
                v12 = 16843009;
              v14 = 588;
              goto LABEL_16;
            case 0x24Cu:
              p_ifType = &a1->ifFlags;
              v14 = 592;
              break;
            case 0x250u:
              p_ifType = &v18->MediaType;
              v14 = 596;
              break;
            case 0x254u:
              p_ifType = &v18->PhysicalMediumType;
              v10 = 1;
              v14 = v8 + 4;
              break;
            default:
              goto LABEL_43;
          }
          v13 = 4;
        }
LABEL_16:
        if ( v9 < (int)v13 )
          goto LABEL_43;
        if ( v12 )
        {
          ndisIfQueryProvider(v18, v12, v13, v7);
        }
        else
        {
          if ( !p_ifType )
            goto LABEL_43;
          memmove(v7, p_ifType, v13);
        }
        v15 = v14 - v8;
        v8 = v14;
        v7 += v15;
        v9 -= v15;
LABEL_21:
        if ( v9 <= 0 )
          goto LABEL_22;
      }
    }
    v16 = v8 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qqd(0x4Fu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v5, v3);
  return v3;
}
