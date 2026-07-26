/*
 * XREFs of ndisReadOffloadRegistry @ 0x1C00A9A08
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00A90AC (ndisInitializeConfiguration.c)
 * Callees:
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00142D4 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _TlgProvider_t *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rsi
  unsigned int v4; // edi
  unsigned int IntegerData; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int KeywordAny; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __int64 ParameterType; // [rsp+20h] [rbp-30h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+88h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+40h] BYREF

  ConfigurationHandle = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x37u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v3 = ConfigurationHandle;
  v4 = v2;
  Status = v2;
  if ( !v2 )
  {
    LODWORD(a1[58].KeywordAny) |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_5;
    IntegerData = ParameterValue->ParameterData.IntegerData;
    if ( IntegerData )
    {
      v7 = IntegerData - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          LODWORD(a1[58].KeywordAny) &= 0xFFFFFFFC;
          goto LABEL_5;
        }
        v16 = a1[58].KeywordAny & 0xFFFFFFFC | 1;
      }
      else
      {
        v16 = a1[58].KeywordAny & 0xFFFFFFFC | 2;
      }
      LODWORD(a1[58].KeywordAny) = v16;
    }
    else
    {
      LODWORD(a1[58].KeywordAny) |= 3u;
    }
LABEL_5:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_6;
    v8 = ParameterValue->ParameterData.IntegerData;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          LODWORD(a1[58].KeywordAny) &= 0xFFFFFFF3;
          goto LABEL_6;
        }
        v17 = a1[58].KeywordAny & 0xFFFFFFF3 | 4;
      }
      else
      {
        v17 = a1[58].KeywordAny & 0xFFFFFFF3 | 8;
      }
      LODWORD(a1[58].KeywordAny) = v17;
    }
    else
    {
      LODWORD(a1[58].KeywordAny) |= 0xCu;
    }
LABEL_6:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_7;
    v10 = ParameterValue->ParameterData.IntegerData;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          LODWORD(a1[58].KeywordAny) &= 0xFFFFFFCF;
          goto LABEL_7;
        }
        v18 = a1[58].KeywordAny & 0xFFFFFFCF | 0x10;
      }
      else
      {
        v18 = a1[58].KeywordAny & 0xFFFFFFCF | 0x20;
      }
      LODWORD(a1[58].KeywordAny) = v18;
    }
    else
    {
      LODWORD(a1[58].KeywordAny) |= 0x30u;
    }
LABEL_7:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_8;
    v12 = ParameterValue->ParameterData.IntegerData;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          LODWORD(a1[58].KeywordAny) &= 0xFFFFFF3F;
          goto LABEL_8;
        }
        v19 = a1[58].KeywordAny & 0xFFFFFF3F | 0x40;
      }
      else
      {
        v19 = a1[58].KeywordAny & 0xFFFFFF3F | 0x80;
      }
      LODWORD(a1[58].KeywordAny) = v19;
    }
    else
    {
      LODWORD(a1[58].KeywordAny) |= 0xC0u;
    }
LABEL_8:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( Status )
    {
LABEL_9:
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
      if ( !Status && !ParameterValue->ParameterData.IntegerData )
        LODWORD(a1[58].KeywordAny) |= 0x3Fu;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
      if ( !Status && !ParameterValue->ParameterData.IntegerData )
        LODWORD(a1[58].KeywordAny) |= 0x3C0u;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData )
          LODWORD(a1[58].KeywordAny) &= ~0x1000u;
        else
          LODWORD(a1[58].KeywordAny) |= 0x1000u;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData )
          LODWORD(a1[58].KeywordAny) &= ~0x800u;
        else
          LODWORD(a1[58].KeywordAny) |= 0x800u;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData )
          LODWORD(a1[58].KeywordAny) &= ~0x400u;
        else
          LODWORD(a1[58].KeywordAny) |= 0x400u;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v21 = ParameterValue->ParameterData.IntegerData;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
            {
              LODWORD(a1[58].KeywordAny) &= 0xFFFF9FFF;
              goto LABEL_15;
            }
            v23 = a1[58].KeywordAny & 0xFFFF9FFF | 0x2000;
          }
          else
          {
            v23 = a1[58].KeywordAny & 0xFFFF9FFF | 0x4000;
          }
          LODWORD(a1[58].KeywordAny) = v23;
        }
        else
        {
          LODWORD(a1[58].KeywordAny) |= 0x6000u;
        }
      }
LABEL_15:
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData )
          LODWORD(a1[58].KeywordAny) &= ~0x8000u;
        else
          LODWORD(a1[58].KeywordAny) |= 0x8000u;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData )
          LODWORD(a1[58].KeywordAny) &= ~0x10000u;
        else
          LODWORD(a1[58].KeywordAny) |= 0x10000u;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
      if ( Status )
      {
        NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
        if ( !Status )
        {
          LODWORD(a1[58].KeywordAny) |= 0x400000u;
          KeywordAny = a1[58].KeywordAny;
          v28 = ParameterValue->ParameterData.IntegerData;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
                v30 = KeywordAny & 0xFFCFFFFF | 0x100000;
              else
                v30 = KeywordAny & 0xFFCFFFFF;
            }
            else
            {
              v30 = KeywordAny & 0xFFCFFFFF | 0x200000;
            }
          }
          else
          {
            v30 = KeywordAny | 0x300000;
          }
          LODWORD(a1[58].KeywordAny) = v30;
        }
        goto LABEL_19;
      }
      v24 = ParameterValue->ParameterData.IntegerData;
      if ( !v24 )
      {
        LODWORD(a1[58].KeywordAny) |= 0xC0000u;
        goto LABEL_19;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          LODWORD(a1[58].KeywordAny) &= 0xFFF3FFFF;
LABEL_19:
          NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
          if ( !Status )
          {
            if ( ParameterValue->ParameterData.IntegerData )
              LODWORD(a1[58].KeywordAny) &= ~0x800000u;
            else
              LODWORD(a1[58].KeywordAny) |= 0x800000u;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
          if ( !Status )
          {
            if ( ParameterValue->ParameterData.IntegerData )
              LODWORD(a1[58].KeywordAny) &= ~0x1000000u;
            else
              LODWORD(a1[58].KeywordAny) |= 0x1000000u;
          }
          NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
          if ( !Status )
          {
            if ( ParameterValue->ParameterData.IntegerData )
              LODWORD(a1[58].KeywordAny) &= ~0x2000000u;
            else
              LODWORD(a1[58].KeywordAny) |= 0x2000000u;
          }
          NdisReadConfiguration(
            &Status,
            &ParameterValue,
            v3,
            &EncapsulatedPacketTaskOffloadNvgreStr,
            NdisParameterInteger);
          if ( !Status )
          {
            if ( ParameterValue->ParameterData.IntegerData )
              LODWORD(a1[58].KeywordAny) &= ~0x4000000u;
            else
              LODWORD(a1[58].KeywordAny) |= 0x4000000u;
          }
          NdisReadConfiguration(
            &Status,
            &ParameterValue,
            v3,
            &EncapsulatedPacketTaskOffloadVxlanStr,
            NdisParameterInteger);
          v4 = Status;
          if ( !Status )
          {
            if ( ParameterValue->ParameterData.IntegerData )
              LODWORD(a1[58].KeywordAny) &= ~0x8000000u;
            else
              LODWORD(a1[58].KeywordAny) |= 0x8000000u;
          }
          goto LABEL_24;
        }
        v26 = a1[58].KeywordAny & 0xFFF3FFFF | 0x40000;
      }
      else
      {
        v26 = a1[58].KeywordAny & 0xFFF3FFFF | 0x80000;
      }
      LODWORD(a1[58].KeywordAny) = v26;
      goto LABEL_19;
    }
    v14 = ParameterValue->ParameterData.IntegerData;
    if ( !v14 )
    {
      LODWORD(a1[58].KeywordAny) |= 0x300u;
      goto LABEL_9;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
      {
        LODWORD(a1[58].KeywordAny) &= 0xFFFFFCFF;
        goto LABEL_9;
      }
      v20 = a1[58].KeywordAny & 0xFFFFFCFF | 0x100;
    }
    else
    {
      v20 = a1[58].KeywordAny & 0xFFFFFCFF | 0x200;
    }
    LODWORD(a1[58].KeywordAny) = v20;
    goto LABEL_9;
  }
LABEL_24:
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ParameterType) = a1[58].KeywordAny;
    WPP_SF_qdD(0x38u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)a1, v4, ParameterType);
  }
  if ( (a1[58].KeywordAny & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
