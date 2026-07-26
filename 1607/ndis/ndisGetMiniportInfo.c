/*
 * XREFs of ndisGetMiniportInfo @ 0x1C00D0B78
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_jqxb @ 0x1C005D04C (Template_jqxb.c)
 *     WPP_SF_qDDDDDD @ 0x1C005D0D8 (WPP_SF_qDDDDDD.c)
 *     ndisQueryDeviceOid @ 0x1C009BF7C (ndisQueryDeviceOid.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00A1D1C (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisQueryOidList @ 0x1C00AB9FC (ndisQueryOidList.c)
 *     ndisMDoMiniportOp @ 0x1C00AFB04 (ndisMDoMiniportOp.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00D057C (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00D66EC (ndisGetMiniportOffloadCapability.c)
 */

__int64 __fastcall ndisGetMiniportInfo(__int64 a1, __int64 a2, _DWORD *a3, char *a4, _DWORD *a5)
{
  char v5; // r12
  unsigned int v8; // r13d
  _DWORD *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  char v27; // si
  unsigned int v28; // ecx
  __int16 v29; // ax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // r14
  int v37; // eax
  int v38; // eax
  int v39; // r14d
  PVOID PoolWithTag; // rax
  PVOID v41; // r15
  NDIS_STATUS v42; // eax
  PVOID v43; // r14
  unsigned __int16 Length; // cx
  __int64 ParameterType; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h]
  __int64 v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+38h] [rbp-C8h]
  __int64 v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  int Status[2]; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v55; // [rsp+70h] [rbp-90h]
  char *v56; // [rsp+78h] [rbp-88h]
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v59[4]; // [rsp+A8h] [rbp-58h] BYREF
  struct _NDIS_PNP_CAPABILITIES v60; // [rsp+C8h] [rbp-38h] BYREF
  SIZE_T v61[32]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)Status = a5;
  v5 = 0;
  Keyword.Buffer = (wchar_t *)L"*IfType";
  ConfigurationHandle = 0LL;
  v56 = a4;
  v8 = -1073741823;
  v55 = a3;
  *(_DWORD *)&Keyword.Length = 1048590;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x94u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  *a5 = 1;
  v9 = (_DWORD *)(*(_QWORD *)(a1 + 3816) + 480LL);
  if ( !*v9 )
  {
    v10 = ndisMDoMiniportOp((void *)a1, 1, 65814, (__int64)v9, 4, 1u, 1);
    v11 = *(_QWORD *)(a1 + 3816);
    ndisWriteDriverNDISVersionToServiceKey(
      *(unsigned __int8 *)(v11 + 24),
      *(unsigned __int8 *)(v11 + 25),
      v10 == 0,
      HIWORD(*(_DWORD *)(v11 + 480)),
      (unsigned __int16)*(_DWORD *)(v11 + 480),
      v11 + 488);
  }
  v12 = *(_DWORD *)(a1 + 464);
  if ( !v12 )
  {
    *(_WORD *)(a2 + 180) = 6;
    *(_QWORD *)(a2 + 168) = 2LL;
LABEL_26:
    *(_DWORD *)(a2 + 84) = 47;
    goto LABEL_27;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    *(_WORD *)(a2 + 180) = 23;
    goto LABEL_24;
  }
  v14 = v13 - 5;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      *(_WORD *)(a2 + 180) = 1;
      *(_QWORD *)(a2 + 168) = 3LL;
      *(_DWORD *)(a2 + 176) = 3;
      *(_DWORD *)(a2 + 84) = 47;
      goto LABEL_28;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 3;
          if ( v19 )
          {
            *(_QWORD *)(a2 + 168) = 2LL;
            *(_DWORD *)(a2 + 176) = 1;
            *(_DWORD *)(a2 + 84) = 47;
            if ( v19 == 1 )
              *(_WORD *)(a2 + 180) = 71;
            else
              *(_WORD *)(a2 + 180) = 1;
            goto LABEL_28;
          }
          *(_QWORD *)(a2 + 168) = 3LL;
          *(_WORD *)(a2 + 180) = 131;
          goto LABEL_26;
        }
        *(_WORD *)(a2 + 180) = 1;
LABEL_24:
        *(_QWORD *)(a2 + 168) = 3LL;
        *(_DWORD *)(a2 + 176) = 3;
        *(_DWORD *)(a2 + 84) = 1;
        goto LABEL_28;
      }
      *(_DWORD *)(a2 + 168) = 3;
      *(_DWORD *)(a2 + 172) = 2;
    }
    else
    {
      *(_QWORD *)(a2 + 168) = 3LL;
    }
    *(_WORD *)(a2 + 180) = 1;
    *(_DWORD *)(a2 + 84) = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 168) = 4LL;
    *(_WORD *)(a2 + 180) = 37;
    *(_DWORD *)(a2 + 84) = 39;
  }
LABEL_27:
  *(_DWORD *)(a2 + 176) = 1;
LABEL_28:
  v20 = *(int *)(a1 + 464);
  if ( (int)v20 >= 0 && ((int)v20 >= 20 || (_DWORD)v20 != 3 && ndisMediaTypeCl[v20]) )
  {
    v22 = ndisMDoMiniportOp((void *)a1, 1, 65797, a2 + 64, 4, 1u, 1);
    if ( v22 )
    {
      if ( *(int *)(a1 + 464) < 20 )
      {
        if ( (unsigned __int8)byte_1C00895D4 >= 3u )
          WPP_SF_(0x95u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
          Template_jqxqqq(
            v21,
            &OidQueryFailed,
            (const GUID *)(a1 + 4064),
            a1 + 4064,
            *(_DWORD *)(a1 + 4112),
            *(_QWORD *)(a1 + 4080),
            5,
            v22,
            214);
        goto LABEL_109;
      }
      *(_DWORD *)(a2 + 64) = 0;
    }
  }
  ndisMDoMiniportOp((void *)a1, 1, 65798, a2 + 16, 4, 1u, 1);
  v23 = *(int *)(a1 + 464);
  if ( (unsigned int)v23 <= 0x13 && ndisMediaTypeCl[v23] || (_DWORD)v23 == 3 )
  {
    v22 = ndisMDoMiniportOp((void *)a1, 1, 65811, a2 + 80, 4, 3u, 1);
    if ( v22 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 3u )
        WPP_SF_q(0x96u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxqqq(
          v24,
          &OidQueryFailed,
          (const GUID *)(a1 + 4064),
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          19,
          v22,
          39);
      goto LABEL_109;
    }
  }
  if ( (*(_BYTE *)(a1 + 928) & 1) != 0 )
  {
    v51 = 16;
    v25 = ndisMDoMiniportOp((void *)a1, 1, 65813, (__int64)&v51, 4, 2u, 1);
    v27 = v25;
    if ( v25 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 3u )
        WPP_SF_q(0x97u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxqqq(
          v26,
          &OidQueryFailed,
          (const GUID *)(a1 + 4064),
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          21,
          v27,
          74);
      v28 = 16;
      v51 = 16;
    }
    else
    {
      v28 = v51;
    }
    v29 = 16;
    if ( v28 < 0x10 )
      v29 = v28;
    *(_WORD *)(a1 + 538) = v29;
  }
  v30 = *(_DWORD *)(a1 + 464);
  if ( !v30 )
  {
    v22 = ndisMDoMiniportOp((void *)a1, 1, 16843012, a2 + 88, 4, 7u, 1);
    if ( v22 )
    {
      v5 = 1;
      if ( (unsigned __int8)byte_1C00895D4 >= 3u )
        WPP_SF_q(0x98u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxqqq(
          v32,
          &OidQueryFailed,
          (const GUID *)(a1 + 4064),
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          4,
          v22,
          121);
    }
    else
    {
      *(_WORD *)(a2 + 92) = 6;
      v22 = ndisMDoMiniportOp((void *)a1, 1, 16843010, a2 + 126, 6, 9u, 1);
      if ( v22 )
      {
        if ( (unsigned __int8)byte_1C00895D4 >= 3u )
          WPP_SF_q(0x99u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
          Template_jqxqqq(
            v34,
            &OidQueryFailed,
            (const GUID *)(a1 + 4064),
            a1 + 4064,
            *(_DWORD *)(a1 + 4112),
            *(_QWORD *)(a1 + 4080),
            2,
            v22,
            149);
LABEL_77:
        v5 = 1;
        goto LABEL_92;
      }
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      {
        LODWORD(v50) = *(unsigned __int8 *)(a2 + 131);
        LODWORD(v49) = *(unsigned __int8 *)(a2 + 130);
        LODWORD(v48) = *(unsigned __int8 *)(a2 + 129);
        LODWORD(v47) = *(unsigned __int8 *)(a2 + 128);
        LODWORD(ParameterType) = *(unsigned __int8 *)(a2 + 127);
        WPP_SF_qDDDDDD(
          *(unsigned __int8 *)(a2 + 130),
          *(unsigned __int8 *)(a2 + 129),
          a1,
          *(unsigned __int8 *)(a2 + 126),
          ParameterType,
          v47,
          v48,
          v49,
          v50);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
        Template_jqxb(
          v34,
          v33,
          (const GUID *)(a1 + 4064),
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          a2 + 126);
      v5 = 1;
      v22 = ndisMDoMiniportOp((void *)a1, 1, 16843009, a2 + 94, *(unsigned __int16 *)(a2 + 92), 9u, 1);
      if ( v22 )
      {
        if ( (unsigned __int8)byte_1C00895D4 >= 3u )
          WPP_SF_q(0x9Bu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
          Template_jqxqqq(
            v35,
            &OidQueryFailed,
            (const GUID *)(a1 + 4064),
            a1 + 4064,
            *(_DWORD *)(a1 + 4112),
            *(_QWORD *)(a1 + 4080),
            1,
            v22,
            192);
      }
      else
      {
        v36 = (_DWORD *)(a2 + 12);
        v22 = ndisMDoMiniportOp((void *)a1, 1, 66050, a2 + 12, 4, 0xAu, 1);
        if ( v22 )
        {
          v22 = 0;
          *v36 = 0;
        }
        if ( *v36 == 1 )
          *(_WORD *)(a2 + 180) = 71;
        ndisGetMiniportOffloadCapability(a1);
        v5 = 0;
      }
    }
LABEL_92:
    if ( v22 )
      goto LABEL_109;
    goto LABEL_93;
  }
  if ( v30 == 3 )
  {
    *(_WORD *)(a2 + 92) = 6;
    v22 = ndisMDoMiniportOp((void *)a1, 1, 67174658, a2 + 126, 6, 0x17u, 1);
    if ( !v22 )
    {
      *(_DWORD *)(a2 + 94) = *(_DWORD *)(a2 + 126);
      v5 = 0;
      *(_WORD *)(a2 + 98) = *(_WORD *)(a2 + 130);
      goto LABEL_93;
    }
    if ( (unsigned __int8)byte_1C00895D4 >= 3u )
      WPP_SF_q(0x9Cu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
      Template_jqxqqq(
        v31,
        &OidQueryFailed,
        (const GUID *)(a1 + 4064),
        a1 + 4064,
        *(_DWORD *)(a1 + 4112),
        *(_QWORD *)(a1 + 4080),
        2,
        v22,
        249);
    goto LABEL_77;
  }
  v22 = 0;
LABEL_93:
  if ( ((*(_DWORD *)(a1 + 124) & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 3816) + 26LL) & 1) != 0)
    && *(_DWORD *)(a1 + 464) <= 0x13u )
  {
    v60.Flags = 0;
    *(_QWORD *)&v60.WakeUpCapabilities.MinMagicPacketWakeUp = 0LL;
    v60.WakeUpCapabilities.MinLinkChangeWakeUp = NdisDeviceStateUnspecified;
    v37 = ndisMDoMiniportOp((void *)a1, 1, -50265856, (__int64)&v60, 16, 0x19u, 0);
    **(_DWORD **)Status = v37;
    if ( !v37 )
      ndisConvertPnpCapabilitiesToPM(&v60, *(struct _NDIS_PM_CAPABILITIES **)(a2 + 216));
  }
  v38 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 60) = 0;
  *(_DWORD *)(a2 + 56) = 1;
  *(_BYTE *)(a2 + 182) = (v38 & 0x200000) != 0;
  *(_QWORD *)(a2 + 24) = 0x40000000LL;
  *(_QWORD *)(a2 + 32) = 0x40000000LL;
  *(_QWORD *)(a2 + 40) = 0x40000000LL;
  *(_QWORD *)(a2 + 48) = 0x40000000LL;
  memset(v59, 0, sizeof(v59));
  v59[1] = a1;
  memset(v61, 0, 0xF8uLL);
  if ( (((unsigned int)ndisQueryDeviceOid((__int64)v59, v61, 65793, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    v39 = v61[7];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(v61[7]), 0x2020444Eu);
    v41 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ndisQueryDeviceOid((__int64)v59, v61, 65793, (__int64)PoolWithTag, v39) )
      {
        *(_QWORD *)(a1 + 496) = v41;
        *(_DWORD *)(a1 + 200) = v39;
      }
    }
  }
  ndisQueryOidList((__int64)v59);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v42 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v43 = ConfigurationHandle;
  v8 = v42;
  Status[0] = v42;
  if ( !v42 )
  {
    NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v8 = Status[0];
    if ( !Status[0] )
    {
      Length = ParameterValue->ParameterData.StringData.Length;
      if ( Length != 1 )
        *(_WORD *)(a2 + 180) = Length;
      v8 = 0;
    }
  }
  if ( v43 )
    NdisCloseConfiguration(v43);
LABEL_109:
  *v55 = v22;
  *v56 = v5;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x9Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v8);
  return v8;
}
