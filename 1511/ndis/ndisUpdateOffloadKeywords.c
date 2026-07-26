/*
 * XREFs of ndisUpdateOffloadKeywords @ 0x1C00C2318
 * Callers:
 *     ndisPreOffloadAdminSettings @ 0x1C00C13B0 (ndisPreOffloadAdminSettings.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     ndisConvertOffloadValueToString @ 0x1C00C00AC (ndisConvertOffloadValueToString.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C00C712C (ndisWriteConfigurationIfPresent.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(__int64 a1, __int64 a2, int a3)
{
  PVOID v3; // r15
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // r10
  __int64 v6; // rsi
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r11
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  char v13; // r14
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  NDIS_STATUS v19; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v20; // xmm6
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // eax
  unsigned int v25; // eax
  unsigned __int8 v26; // al
  int v27; // eax
  unsigned int v28; // eax
  unsigned __int8 v29; // al
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int8 v32; // al
  int v33; // eax
  unsigned int v34; // eax
  unsigned __int8 v35; // al
  int v36; // eax
  unsigned int v37; // eax
  unsigned __int8 v38; // al
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  unsigned __int8 v47; // al
  unsigned __int8 v48; // al
  int Status; // [rsp+38h] [rbp-59h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER v51; // [rsp+40h] [rbp-51h] BYREF
  int v52; // [rsp+58h] [rbp-39h]
  int v53; // [rsp+5Ch] [rbp-35h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-31h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-29h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v56; // [rsp+80h] [rbp-11h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue[11]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v58; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v59; // [rsp+100h] [rbp+6Fh]
  unsigned __int8 v60; // [rsp+108h] [rbp+77h]
  unsigned __int8 v61; // [rsp+110h] [rbp+7Fh]

  v3 = 0LL;
  v4 = 0;
  ConfigurationHandle = 0LL;
  v5 = 0;
  v56.IntegerData = 262146;
  LOBYTE(a3) = 0;
  v59 = 0;
  v6 = a2;
  v61 = 0;
  LOBYTE(a2) = 0;
  v60 = 0;
  v7 = 0;
  v52 = a2;
  v8 = 0;
  v53 = a3;
  v9 = 0;
  v58 = 0;
  v56.StringData.Buffer = (wchar_t *)L"0";
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_q(0xD7u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
    LOBYTE(a2) = v52;
    LOBYTE(a3) = v53;
    v5 = 0;
    v9 = 0;
  }
  v11 = *(_BYTE *)(v6 + 1);
  if ( v11 >= 2u && *(_WORD *)(v6 + 2) >= 0x16u )
  {
    v5 = *(_BYTE *)(v6 + 21);
    v7 = *(_BYTE *)(v6 + 20);
    v59 = v5;
  }
  if ( v11 >= 3u && *(_WORD *)(v6 + 2) >= 0x1Au )
  {
    v4 = *(_BYTE *)(v6 + 22);
    v9 = *(_BYTE *)(v6 + 25);
    v8 = *(_BYTE *)(v6 + 24);
    v61 = v4;
    v60 = *(_BYTE *)(v6 + 23);
    v58 = v9;
  }
  if ( v11 >= 4u && *(_WORD *)(v6 + 2) >= 0x20u )
  {
    LODWORD(a2) = (unsigned __int8)a2;
    a3 = (unsigned __int8)a3;
    if ( (v9 & 1) != 0 )
      LODWORD(a2) = v8;
    if ( (v9 & 2) != 0 )
      a3 = v8;
    v52 = a2;
    v53 = a3;
  }
  v12 = *(_BYTE *)(v6 + 4);
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 4152) + 656LL) & 1;
  if ( v12 > 4u )
    goto LABEL_188;
  v14 = *(_BYTE *)(v6 + 5);
  if ( v14 > 4u )
    goto LABEL_188;
  v15 = *(_BYTE *)(v6 + 7);
  if ( v15 > 4u )
    goto LABEL_188;
  v16 = *(_BYTE *)(v6 + 6);
  if ( v16 > 4u )
    goto LABEL_188;
  v17 = *(_BYTE *)(v6 + 8);
  if ( v17 > 4u
    || *(_BYTE *)(v6 + 9) > 2u
    || *(_BYTE *)(v6 + 11) > 2u
    || *(_BYTE *)(v6 + 12) > 2u
    || *(_BYTE *)(v6 + 10) > 4u
    || *(_BYTE *)(v6 + 13) > 2u
    || v7 > 4u
    || v5 > 4u
    || v4 > 2u
    || v60 > 2u
    || v8 > 2u
    || v9 > 3u
    || v8 && !v9 )
  {
    goto LABEL_188;
  }
  if ( v7 && v5 )
    return (unsigned int)-1073676267;
  if ( v13 && (v12 != v14 || v12 != v16 || v15 != v17) )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 3728) |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v19 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v3 = ConfigurationHandle;
  v18 = v19;
  Status = v19;
  if ( v19 )
    goto LABEL_189;
  v20 = v56;
  if ( v13 )
  {
    v21 = *(_BYTE *)(v6 + 4);
    if ( v21 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v56;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v21 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &TCPUDPChecksumOffloadIPv4Str, &v51);
    }
    v22 = *(_BYTE *)(v6 + 7);
    if ( v22 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v22 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &TCPUDPChecksumOffloadIPv6Str, &v51);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v23 = *(_BYTE *)(v6 + 4);
  if ( v23 )
  {
    if ( !v13 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v23 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &IPXsumIPv4Str, &v51);
    }
    v24 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 4) )
    {
      case 1:
        v25 = v24 | 3;
        break;
      case 2:
        v25 = v24 & 0xFFFFFFFC | 2;
        break;
      case 3:
        v25 = v24 & 0xFFFFFFFC | 1;
        break;
      default:
        v25 = v24 & 0xFFFFFFFC;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v25;
  }
  v26 = *(_BYTE *)(v6 + 5);
  if ( v26 )
  {
    if ( !v13 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v26 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &TCPXsumIPv4Str, &v51);
    }
    v27 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 5) )
    {
      case 1:
        v28 = v27 | 0xC;
        break;
      case 2:
        v28 = v27 & 0xFFFFFFF3 | 8;
        break;
      case 3:
        v28 = v27 & 0xFFFFFFF3 | 4;
        break;
      default:
        v28 = v27 & 0xFFFFFFF3;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v28;
  }
  v29 = *(_BYTE *)(v6 + 7);
  if ( v29 )
  {
    if ( !v13 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v29 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &TCPXsumIPv6Str, &v51);
    }
    v30 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 7) )
    {
      case 1:
        v31 = v30 | 0xC0;
        break;
      case 2:
        v31 = v30 & 0xFFFFFF3F | 0x80;
        break;
      case 3:
        v31 = v30 & 0xFFFFFF3F | 0x40;
        break;
      default:
        v31 = v30 & 0xFFFFFF3F;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v31;
  }
  v32 = *(_BYTE *)(v6 + 6);
  if ( v32 )
  {
    if ( !v13 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v32 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &UDPXsumIPv4Str, &v51);
    }
    v33 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 6) )
    {
      case 1:
        v34 = v33 | 0x30;
        break;
      case 2:
        v34 = v33 & 0xFFFFFFCF | 0x20;
        break;
      case 3:
        v34 = v33 & 0xFFFFFFCF | 0x10;
        break;
      default:
        v34 = v33 & 0xFFFFFFCF;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v34;
  }
  v35 = *(_BYTE *)(v6 + 8);
  if ( v35 )
  {
    if ( !v13 )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v35 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &UDPXsumIPv6Str, &v51);
    }
    v36 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 8) )
    {
      case 1:
        v37 = v36 | 0x300;
        break;
      case 2:
        v37 = v36 & 0xFFFFFCFF | 0x200;
        break;
      case 3:
        v37 = v36 & 0xFFFFFCFF | 0x100;
        break;
      default:
        v37 = v36 & 0xFFFFFCFF;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v37;
  }
  v38 = *(_BYTE *)(v6 + 9);
  if ( v38 )
  {
    if ( v38 > 2u )
      goto LABEL_188;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v38 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &LsoV1IPv4Str, &v51);
    if ( *(_BYTE *)(v6 + 9) == 1 )
      *(_DWORD *)(a1 + 3728) |= 0x400u;
    else
      *(_DWORD *)(a1 + 3728) &= ~0x400u;
  }
  v39 = *(_BYTE *)(v6 + 11);
  if ( v39 )
  {
    if ( v39 > 2u )
      goto LABEL_188;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v39 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &LsoV2IPv4Str, &v51);
    if ( *(_BYTE *)(v6 + 11) == 1 )
      *(_DWORD *)(a1 + 3728) |= 0x800u;
    else
      *(_DWORD *)(a1 + 3728) &= ~0x800u;
  }
  v40 = *(_BYTE *)(v6 + 12);
  if ( v40 )
  {
    if ( v40 > 2u )
      goto LABEL_188;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v40 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &LsoV2IPv6Str, &v51);
    if ( *(_BYTE *)(v6 + 12) == 1 )
      *(_DWORD *)(a1 + 3728) |= 0x1000u;
    else
      *(_DWORD *)(a1 + 3728) &= ~0x1000u;
  }
  v41 = *(_BYTE *)(v6 + 10);
  if ( v41 )
  {
    if ( v41 > 4u )
      goto LABEL_188;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v41 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &IPsecIPv4Str, &v51);
    v42 = *(_DWORD *)(a1 + 3728);
    switch ( *(_BYTE *)(v6 + 10) )
    {
      case 1:
        v43 = v42 | 0x6000;
        break;
      case 2:
        v43 = v42 & 0xFFFF9FFF | 0x4000;
        break;
      case 3:
        v43 = v42 & 0xFFFF9FFF | 0x2000;
        break;
      default:
        v43 = v42 & 0xFFFF9FFF;
        break;
    }
    *(_DWORD *)(a1 + 3728) = v43;
  }
  if ( v7 )
  {
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v7 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &IPsecV2Str, &v51);
    v44 = *(_DWORD *)(a1 + 3728);
    switch ( v7 )
    {
      case 1u:
        v45 = v44 | 0xC0000;
        break;
      case 2u:
        v45 = v44 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v45 = v44 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v45 = v44 & 0xFFF3FFFF;
        break;
    }
  }
  else
  {
    if ( !v59 )
      goto LABEL_159;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v59 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &IPsecV2IPv4Str, &v51);
    v46 = *(_DWORD *)(a1 + 3728);
    switch ( v59 )
    {
      case 1u:
        v45 = v46 | 0x300000;
        break;
      case 2u:
        v45 = v46 & 0xFFCFFFFF | 0x200000;
        break;
      case 3u:
        v45 = v46 & 0xFFCFFFFF | 0x100000;
        break;
      default:
        v45 = v46 & 0xFFCFFFFF;
        break;
    }
  }
  *(_DWORD *)(a1 + 3728) = v45;
LABEL_159:
  v47 = *(_BYTE *)(v6 + 13);
  if ( v47 )
  {
    if ( v47 > 2u )
      goto LABEL_188;
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v47 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &TCPConnectionOffloadIPv4Str, &v51);
    if ( *(_BYTE *)(v6 + 13) == 1 )
      *(_DWORD *)(a1 + 3728) |= 0x8000u;
    else
      *(_DWORD *)(a1 + 3728) &= ~0x8000u;
  }
  v48 = *(_BYTE *)(v6 + 14);
  if ( v48 )
  {
    if ( v48 <= 2u )
    {
      v51.ParameterType = NdisParameterString;
      v51.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v48 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_189;
      ndisWriteConfigurationIfPresent(&Status, v3, &TCPConnectionOffloadIPv6Str, &v51);
      if ( *(_BYTE *)(v6 + 14) == 1 )
        *(_DWORD *)(a1 + 3728) |= 0x10000u;
      else
        *(_DWORD *)(a1 + 3728) &= ~0x10000u;
      goto LABEL_171;
    }
LABEL_188:
    v18 = -1073676267;
    goto LABEL_189;
  }
LABEL_171:
  if ( v61 )
  {
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v61 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &RscIPv4Str, &v51);
    *(_DWORD *)(a1 + 3728) ^= (*(_DWORD *)(a1 + 3728) ^ ((v61 == 1) << 23)) & 0x800000;
  }
  if ( v60 )
  {
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, (unsigned int)v60 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    ndisWriteConfigurationIfPresent(&Status, v3, &RscIPv6Str, &v51);
    *(_DWORD *)(a1 + 3728) ^= (*(_DWORD *)(a1 + 3728) ^ ((v60 == 1) << 24)) & 0x1000000;
  }
  if ( v8 )
  {
    v51.ParameterType = NdisParameterString;
    v51.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v51.ParameterData, v8 == 1);
    v18 = Status;
    if ( Status )
      goto LABEL_189;
    if ( v8 == 2 && v58 == 3 || v8 == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v3, &EncapsulatedPacketTaskOffloadStr, &v51);
      *(_DWORD *)(a1 + 3728) ^= (*(_DWORD *)(a1 + 3728) ^ ((v8 == 2) << 25)) & 0x2000000;
    }
    if ( (v58 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v3, &EncapsulatedPacketTaskOffloadNvgreStr, &v51);
      *(_DWORD *)(a1 + 3728) ^= (*(_DWORD *)(a1 + 3728) ^ (((_BYTE)v52 == 2) << 26)) & 0x4000000;
    }
    if ( (v58 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v3, &EncapsulatedPacketTaskOffloadVxlanStr, &v51);
      *(_DWORD *)(a1 + 3728) ^= (*(_DWORD *)(a1 + 3728) ^ (((_BYTE)v53 == 2) << 27)) & 0x8000000;
    }
  }
  v18 = 0;
LABEL_189:
  if ( v3 )
    NdisCloseConfiguration(v3);
  return v18;
}
