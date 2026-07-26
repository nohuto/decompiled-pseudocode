/*
 * XREFs of ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00983E0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // esi
  struct _NDIS_IF_BLOCK *v5; // r12
  char v7; // al
  char *v8; // r14
  unsigned int v9; // edi
  int v10; // ebx
  char v11; // bp
  int v12; // eax
  const void *p_InterfaceGuid; // rdx
  int v14; // esi
  unsigned int v15; // ecx
  unsigned int v16; // edi
  char v18; // [rsp+68h] [rbp+10h]

  v3 = 0;
  v5 = a1;
  if ( a2 )
    v5 = a2;
  v7 = byte_1C008531D;
  v18 = byte_1C008531D;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_qq(0x58u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a3);
    v7 = byte_1C008531D;
    v18 = byte_1C008531D;
  }
  v8 = (char *)*((_QWORD *)a3 + 5);
  v9 = *((_DWORD *)a3 + 13);
  v10 = *((_DWORD *)a3 + 12);
  if ( v8 )
  {
    v11 = 0;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_26:
          v7 = v18;
          v3 = 0;
          break;
        }
        if ( v9 > 0x214 )
        {
          switch ( v9 )
          {
            case 0x218u:
              v12 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v14 = 552;
              break;
            case 0x228u:
              v12 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v14 = 556;
              break;
            case 0x22Cu:
              v12 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v14 = 560;
              break;
            case 0x230u:
              v12 = 4;
              p_InterfaceGuid = &v5->MediaType;
              v14 = 564;
              break;
            case 0x234u:
              v12 = 4;
              p_InterfaceGuid = &v5->PhysicalMediumType;
              v14 = 568;
              v11 = 1;
              break;
            default:
              goto LABEL_42;
          }
        }
        else if ( v9 == 532 )
        {
          v12 = 4;
          p_InterfaceGuid = &v5->ConnectionType;
          v14 = 536;
        }
        else if ( v9 )
        {
          switch ( v9 )
          {
            case 4u:
              v12 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v14 = 520;
              break;
            case 0x208u:
              v12 = 2;
              p_InterfaceGuid = &a1->ifType;
              v14 = 524;
              break;
            case 0x20Cu:
              v12 = 4;
              p_InterfaceGuid = &v5->AccessType;
              v14 = 528;
              break;
            case 0x210u:
              v12 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v14 = 532;
              break;
            default:
              goto LABEL_42;
          }
        }
        else
        {
          v12 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v14 = 4;
        }
        if ( v10 < v12 || !p_InterfaceGuid )
        {
LABEL_42:
          v11 = 1;
          goto LABEL_25;
        }
        memmove(v8, p_InterfaceGuid, (unsigned int)v12);
        v15 = v14 - v9;
        v9 = v14;
        v8 += v15;
        v10 -= v15;
LABEL_25:
        if ( v10 <= 0 )
          goto LABEL_26;
      }
    }
    v16 = v9 - *((_DWORD *)a3 + 13);
    *((_DWORD *)a3 + 12) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)a3 + 12) = 0;
  }
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qqd(0x59u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a3, v3);
  return v3;
}
