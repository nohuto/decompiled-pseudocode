/*
 * XREFs of ndisInitializeConfiguration @ 0x1C009FC68
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisReadBindPaths @ 0x1C009F06C (ndisReadBindPaths.c)
 *     ndisReadPMRegistry @ 0x1C009FB20 (ndisReadPMRegistry.c)
 *     ndisReadOffloadRegistry @ 0x1C00A022C (ndisReadOffloadRegistry.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     ndisQueryBusInterface @ 0x1C00B25C4 (ndisQueryBusInterface.c)
 */

__int64 __fastcall ndisInitializeConfiguration(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned int IntegerData; // edi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // rdx
  NTSTATUS DeviceProperty; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  unsigned int v20; // ecx
  void *v21; // rcx
  PNDIS_CONFIGURATION_PARAMETER v23; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD ConfigurationHandle[5]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v33; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v34; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v35; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 PropertyBuffer; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-18h]
  _RTL_QUERY_REGISTRY_TABLE v39[3]; // [rsp+F0h] [rbp-10h] BYREF

  memset(ConfigurationHandle, 0, sizeof(ConfigurationHandle));
  v27 = -1;
  v32.Buffer = L"BusNumber";
  *(_DWORD *)&v32.Length = 1310738;
  v33.Buffer = L"SlotNumber";
  IntegerData = 18;
  *(_DWORD *)&v33.Length = 1441812;
  v30.Buffer = L"BusType";
  *(_DWORD *)&v30.Length = 1048590;
  Keyword.Buffer = L"PnPCapabilities";
  *(_DWORD *)&Keyword.Length = 2097182;
  v34.Buffer = L"RemoteBootCard";
  LOWORD(v7) = 20;
  *(_DWORD *)&v34.Length = 1966108;
  v36.Buffer = L"NdisDriverVerifyFlags";
  *(_DWORD *)&v36.Length = 2883626;
  v35.Buffer = L"SGMapRegistersNeeded";
  *(_DWORD *)&v35.Length = 2752552;
  v25 = 1;
  memset(v39, 0, sizeof(v39));
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xAu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a2);
  *(_DWORD *)a1 = 8913162;
  ConfigurationHandle[4] = a3;
  ConfigurationHandle[1] = a2;
  ConfigurationHandle[2] = a1;
  ConfigurationHandle[3] = 0LL;
  if ( !*(_QWORD *)(a2 + 56) )
  {
    Status = ndisReadBindPaths(a2, v39, a3);
    v8 = Status;
    if ( Status )
      goto LABEL_54;
  }
  *(_DWORD *)(a1 + 32) = 20;
  *(_QWORD *)(a1 + 24) = &ndisSaveParameters;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  DeviceProperty = IoGetDeviceProperty(
                     *(PDEVICE_OBJECT *)(a2 + 3888),
                     DevicePropertyBusTypeGuid,
                     0x10u,
                     &PropertyBuffer,
                     &ResultLength);
  if ( DeviceProperty < 0 )
  {
    IntegerData = v25;
LABEL_31:
    if ( IntegerData == 1 )
    {
      v19 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3888), DevicePropertyLegacyBusType, 4u, &v25, &ResultLength);
      IntegerData = v25;
      DeviceProperty = v19;
    }
    goto LABEL_33;
  }
  v9 = v38;
  v11 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v11 = v38 - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v11 )
  {
    IntegerData = 0;
    v25 = 0;
    goto LABEL_33;
  }
  v12 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v12 = v38 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v12 )
  {
    IntegerData = 8;
    goto LABEL_65;
  }
  v13 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v13 = v38 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v13 )
  {
    IntegerData = 5;
LABEL_65:
    v25 = IntegerData;
    goto LABEL_33;
  }
  v14 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
    v14 = v38 - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
  if ( v14 )
  {
    v15 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v15 = v38 - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( v15 )
    {
      v16 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
      if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
        v16 = v38 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
      if ( v16 )
      {
        v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
        if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
          v17 = v38 - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
        if ( v17 )
        {
          v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
          if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
            v18 = v38 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
          if ( v18 )
          {
            IntegerData = 1;
            v25 = 1;
            goto LABEL_31;
          }
          IntegerData = 2;
        }
      }
      else
      {
        IntegerData = 14;
      }
    }
    else
    {
      IntegerData = 17;
    }
    goto LABEL_65;
  }
  IntegerData = 16;
  v25 = 16;
LABEL_33:
  if ( DeviceProperty < 0 || IntegerData == 1 || IntegerData == 8 )
  {
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v30, NdisParameterInteger);
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) &= ~1u;
    if ( Status )
    {
      IntegerData = v25;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v25 = IntegerData;
    }
  }
  if ( IntegerData == 5 || IntegerData == 8 )
  {
    Status = ndisQueryBusInterface(a2, v9);
    v8 = Status;
    if ( Status )
      goto LABEL_54;
    IntegerData = v25;
  }
  if ( IntegerData - 2 <= 1 )
  {
    v8 = -1073741637;
  }
  else
  {
    *(_DWORD *)(a2 + 3768) = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
      if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 )
      {
        *(_DWORD *)(a2 + 3920) = ndisDefaultPnPCapabilities;
        *(_DWORD *)(a2 + 3920) |= 0x10000000u;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 3920) = ParameterValue->ParameterData.IntegerData;
    }
    if ( IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3888), DevicePropertyBusNumber, 4u, &v27, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v32, NdisParameterInteger), Status) )
    {
      v20 = v27;
    }
    else
    {
      v20 = ParameterValue->ParameterData.IntegerData;
      v27 = v20;
    }
    *(_DWORD *)(a2 + 3772) = v20;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v33, NdisParameterInteger);
    if ( Status )
      *(_DWORD *)(a2 + 3776) = -1;
    else
      *(_DWORD *)(a2 + 3776) = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v34, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a2 + 120) |= 0x40000000u;
      *(_DWORD *)(a2 + 1872) |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      if ( v7 )
      {
        if ( v7 > 0xFFFF )
          LOWORD(v7) = -1;
      }
      else
      {
        LOWORD(v7) = 1;
      }
    }
    *(_WORD *)(a2 + 3732) = v7;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a2 + 2688) |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(ConfigurationHandle, a2);
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v35, NdisParameterInteger);
    if ( Status )
    {
      *(_WORD *)(a2 + 3734) = 16;
    }
    else
    {
      v23 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v23 = ParameterValue;
      }
      *(_WORD *)(a2 + 3734) = v23->ParameterData.StringData.Length;
    }
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v36, NdisParameterHexInteger);
    if ( !Status )
      *(_DWORD *)(a2 + 3736) = ParameterValue->ParameterData.IntegerData;
    *(_DWORD *)(a1 + 16) = 0;
    ndisReadOffloadRegistry((struct _NDIS_MINIPORT_BLOCK *)a2);
    v8 = 0;
  }
LABEL_54:
  while ( 1 )
  {
    v21 = (void *)ConfigurationHandle[3];
    if ( !ConfigurationHandle[3] )
      break;
    ConfigurationHandle[3] = *(_QWORD *)ConfigurationHandle[3];
    ExFreePoolWithTag(v21, 0);
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xBu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a2);
  return v8;
}
