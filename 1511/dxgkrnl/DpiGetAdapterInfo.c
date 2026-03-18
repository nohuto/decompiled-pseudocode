/*
 * XREFs of DpiGetAdapterInfo @ 0x1C00D4D80
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C005D7E0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00D5820 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFreeAdapterInfo @ 0x1C016B0B0 (DpiFreeAdapterInfo.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v21; // al
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v72[36]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v72, 0, 280);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v6 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x290uLL);
    v8 = 1;
    *a3 = *(_QWORD *)(v6 + 48);
    if ( *(_DWORD *)(v6 + 504) )
      v8 = *(_DWORD *)(v6 + 504);
    *((_DWORD *)a3 + 2) = v8;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v6 + 1440);
    *(_QWORD *)((char *)a3 + 28) = *(_QWORD *)(v6 + 1456);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v6 + 1060);
    *((_DWORD *)a3 + 10) = *(_DWORD *)(v6 + 1064);
    *((_DWORD *)a3 + 11) = *(_DWORD *)(v6 + 1068);
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v6 + 1072);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 1076);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 1056);
    *((_DWORD *)a3 + 15) ^= ((*(_BYTE *)(v6 + 1088) != 0) ^ (unsigned __int8)*((_DWORD *)a3 + 15)) & 1;
    v9 = *((_DWORD *)a3 + 15) ^ (*((_DWORD *)a3 + 15) ^ (2 * (*(_BYTE *)(v6 + 1089) != 0))) & 2;
    *((_DWORD *)a3 + 15) = v9;
    v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(4 * (*(_BYTE *)(v6 + 480) != 0))) & 4;
    *((_DWORD *)a3 + 15) = v10;
    v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * (*(_BYTE *)(v6 + 1476) != 0))) & 8;
    *((_DWORD *)a3 + 15) = v11;
    v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * (*(_BYTE *)(v6 + 1477) != 0))) & 0x10;
    *((_DWORD *)a3 + 15) = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(32 * (*(_BYTE *)(v6 + 1091) != 0))) & 0x20;
    *((_DWORD *)a3 + 15) = v13;
    v14 = v13 ^ ((unsigned __int16)v13 ^ ((*(_BYTE *)(v6 + 2168) != 0) << 12)) & 0x1000;
    *((_DWORD *)a3 + 15) = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ ((*(_DWORD *)(v6 + 1888) != -1) << 6)) & 0x40;
    *((_DWORD *)a3 + 15) = v15;
    v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((*(_BYTE *)(v6 + 1524) != 0) << 7)) & 0x80;
    *((_DWORD *)a3 + 15) = v16;
    v17 = v16 ^ ((unsigned __int16)v16 ^ ((*(_BYTE *)(v6 + 1095) != 0) << 8)) & 0x100;
    *((_DWORD *)a3 + 15) = v17;
    v18 = v17 ^ ((unsigned __int16)v17 ^ ((*(_BYTE *)(v6 + 1479) != 0) << 9)) & 0x200;
    *((_DWORD *)a3 + 15) = v18;
    v19 = v18 ^ ((unsigned __int16)v18 ^ ((*(_BYTE *)(v6 + 1478) != 0) << 13)) & 0x2000;
    *((_DWORD *)a3 + 15) = v19;
    v20 = v19 ^ ((unsigned __int16)v19 ^ ((*(_BYTE *)(v6 + 1481) != 0) << 10)) & 0x400;
    *((_DWORD *)a3 + 15) = v20;
    *((_DWORD *)a3 + 15) = v20 ^ ((unsigned __int16)v20 ^ ((*(_BYTE *)(v6 + 1482) != 0) << 11)) & 0x800;
    if ( !*(_QWORD *)(v7 + 184) || (v21 = 1, !*(_QWORD *)(v7 + 192)) )
      v21 = 0;
    *((_BYTE *)a3 + 64) = v21;
    a3[9] = *(_QWORD *)(v7 + 272);
    a3[10] = *(_QWORD *)(v7 + 280);
    a3[11] = *(_QWORD *)(v7 + 288);
    a3[12] = *(_QWORD *)(v7 + 296);
    a3[13] = *(_QWORD *)(v7 + 304);
    a3[14] = *(_QWORD *)(v7 + 312);
    a3[15] = *(_QWORD *)(v7 + 320);
    a3[16] = *(_QWORD *)(v7 + 328);
    a3[17] = *(_QWORD *)(v7 + 336);
    a3[18] = *(_QWORD *)(v7 + 344);
    a3[19] = *(_QWORD *)(v7 + 352);
    a3[20] = *(_QWORD *)(v7 + 360);
    a3[21] = *(_QWORD *)(v7 + 368);
    a3[22] = *(_QWORD *)(v7 + 376);
    a3[23] = *(_QWORD *)(v7 + 384);
    a3[24] = *(_QWORD *)(v7 + 392);
    a3[25] = *(_QWORD *)(v7 + 400);
    a3[26] = *(_QWORD *)(v7 + 408);
    a3[27] = *(_QWORD *)(v7 + 416);
    a3[28] = *(_QWORD *)(v7 + 424);
    a3[29] = *(_QWORD *)(v7 + 432);
    a3[30] = *(_QWORD *)(v7 + 440);
    a3[31] = *(_QWORD *)(v7 + 448);
    a3[32] = *(_QWORD *)(v7 + 456);
    a3[33] = *(_QWORD *)(v7 + 464);
    a3[34] = *(_QWORD *)(v7 + 472);
    a3[35] = *(_QWORD *)(v7 + 480);
    a3[36] = *(_QWORD *)(v7 + 488);
    a3[37] = *(_QWORD *)(v7 + 496);
    a3[38] = *(_QWORD *)(v7 + 504);
    a3[39] = *(_QWORD *)(v7 + 512);
    a3[40] = *(_QWORD *)(v7 + 520);
    a3[41] = *(_QWORD *)(v7 + 528);
    a3[42] = *(_QWORD *)(v7 + 536);
    a3[43] = *(_QWORD *)(v7 + 544);
    a3[44] = *(_QWORD *)(v7 + 552);
    a3[45] = *(_QWORD *)(v7 + 560);
    a3[46] = *(_QWORD *)(v7 + 568);
    a3[47] = *(_QWORD *)(v7 + 576);
    a3[48] = *(_QWORD *)(v7 + 584);
    a3[49] = *(_QWORD *)(v7 + 592);
    a3[50] = *(_QWORD *)(v7 + 600);
    a3[51] = *(_QWORD *)(v7 + 608);
    a3[52] = *(_QWORD *)(v7 + 624);
    if ( *(_DWORD *)(v7 + 28) >= 0x2002u )
      a3[53] = *(_QWORD *)(v7 + 680);
    if ( *(_DWORD *)(v7 + 28) >= 0x2003u )
      a3[54] = *(_QWORD *)(v7 + 696);
    if ( *(_DWORD *)(v7 + 28) >= 0x3001u )
    {
      a3[55] = *(_QWORD *)(v7 + 712);
      a3[56] = *(_QWORD *)(v7 + 720);
      a3[57] = *(_QWORD *)(v7 + 728);
    }
    if ( *(_DWORD *)(v7 + 28) >= 0x3004u )
      a3[62] = *(_QWORD *)(v7 + 760);
    if ( *(_DWORD *)(v7 + 28) >= 0x3005u )
    {
      a3[59] = *(_QWORD *)(v7 + 704);
      a3[60] = *(_QWORD *)(v7 + 776);
    }
    if ( *(_DWORD *)(v7 + 28) >= 0x3000u )
      a3[58] = *(_QWORD *)(v7 + 968);
    if ( *(_DWORD *)(v7 + 28) >= 0x4000u )
    {
      a3[65] = *(_QWORD *)(v7 + 808);
      a3[66] = *(_QWORD *)(v7 + 816);
    }
    if ( *(_DWORD *)(v7 + 28) >= 0x300Bu )
      a3[63] = *(_QWORD *)(v7 + 784);
    if ( *(_DWORD *)(v7 + 28) >= 0x4001u )
      a3[67] = *(_QWORD *)(v7 + 824);
    if ( *(_DWORD *)(v7 + 28) >= 0x4000u )
      a3[64] = *(_QWORD *)(v7 + 800);
    if ( *(_DWORD *)(v7 + 28) >= 0x4002u )
    {
      a3[68] = *(_QWORD *)(v7 + 832);
      a3[69] = *(_QWORD *)(v7 + 840);
    }
    if ( *(_DWORD *)(v7 + 28) >= 0x5001u )
    {
      a3[70] = *(_QWORD *)(v7 + 848);
      a3[71] = *(_QWORD *)(v7 + 856);
      a3[72] = *(_QWORD *)(v7 + 864);
      a3[73] = *(_QWORD *)(v7 + 872);
      a3[74] = *(_QWORD *)(v7 + 880);
      a3[75] = *(_QWORD *)(v7 + 888);
      a3[76] = *(_QWORD *)(v7 + 904);
      a3[77] = *(_QWORD *)(v7 + 912);
      a3[78] = *(_QWORD *)(v7 + 896);
      a3[79] = *(_QWORD *)(v7 + 920);
    }
    if ( *(_DWORD *)(v7 + 28) >= 0x5006u )
      a3[61] = *(_QWORD *)(v7 + 944);
    if ( *(_DWORD *)(v7 + 28) >= 0x5008u )
    {
      a3[80] = *(_QWORD *)(v7 + 952);
      a3[81] = *(_QWORD *)(v7 + 960);
    }
  }
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(v6 + 1477) )
  {
    *(_DWORD *)(a2 + 8) = 7471218;
    *(_QWORD *)(a2 + 16) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 32) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 120) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 136) = L"d3d10warp.dll";
    *(_DWORD *)(a2 + 24) = 7471218;
    *(_DWORD *)(a2 + 112) = 1966110;
    *(_DWORD *)(a2 + 128) = 1966110;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v6 + 1479) )
  {
    *(_DWORD *)(a2 + 8) = 6684774;
    *(_QWORD *)(a2 + 16) = L"DX9NotSupported.dll";
    *(_QWORD *)(a2 + 32) = L"DX9NotSupported.dll";
    *(_DWORD *)(a2 + 24) = 6684774;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 40) + 133LL) )
  {
LABEL_56:
    LODWORD(v24) = 0;
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(v6 + 3312);
    *(_QWORD *)(a2 + 104) = v6 + 1528;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(v6 + 1468);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(v6 + 2136);
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(v6 + 3320);
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(v6 + 3328);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(v6 + 3336);
    goto LABEL_57;
  }
  *(_BYTE *)a2 = 1;
  v22 = DpiOpenPnpRegistryKey(a1, 2, 0x20019u, &Handle);
  v24 = v22;
  if ( v22 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v64[4] = DpiOpenPnpRegistryKey;
    v64[3] = &DpiGetAdapterInfo;
    v64[5] = v24;
    WdLogEvent5_WdError(v64);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v25 = DxgkRetrieveStringFromRegistry(Handle, &DestinationString);
    v24 = v25;
    if ( v25 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v66 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
        *(_QWORD *)(v66 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v66 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v66);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v35 = WdLogNewEntry5_WdEvent(v32, v31, v33, v34);
        *(_QWORD *)(v35 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v35 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v35);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v40 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
        *(_QWORD *)(v40 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v40 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v40);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v67 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
        *(_QWORD *)(v67 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v67 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v67);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v68 = WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
        *(_QWORD *)(v68 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v68 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v68);
      }
      RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v53 = WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
        *(_QWORD *)(v53 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v53 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v53);
      }
      RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v58 = WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
        *(_QWORD *)(v58 + 24) = &DpiGetAdapterInfo;
        *(_QWORD *)(v58 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v58);
      }
      ZwClose(Handle);
      if ( *(_QWORD *)(a2 + 56) )
      {
        v72[5] = 0LL;
        LODWORD(v72[4]) = 0x4000000;
        LODWORD(v72[11]) = 0x4000000;
        v72[2] = L"OpenGLVersion";
        LODWORD(v72[18]) = 0x4000000;
        v72[3] = a2 + 64;
        LODWORD(v72[25]) = 0x4000000;
        v72[9] = L"OpenGLFlags";
        LODWORD(v72[1]) = 288;
        v72[10] = a2 + 68;
        v72[16] = L"OpenGLVersionWow";
        v72[17] = a2 + 88;
        v72[23] = L"OpenGLFlagsWow";
        v72[24] = a2 + 92;
        LODWORD(v72[6]) = 0;
        LODWORD(v72[8]) = 288;
        v72[12] = 0LL;
        LODWORD(v72[13]) = 0;
        LODWORD(v72[15]) = 288;
        v72[19] = 0LL;
        LODWORD(v72[20]) = 0;
        LODWORD(v72[22]) = 288;
        v72[26] = 0LL;
        LODWORD(v72[27]) = 0;
        if ( (int)RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v6 + 536), v72, 0LL, 0LL) < 0 )
        {
          v69 = WdLogNewEntry5_WdEvent(v60, v59, v61, v62);
          *(_QWORD *)(v69 + 32) = RtlQueryRegistryValuesEx;
          *(_QWORD *)(v69 + 24) = &DpiGetAdapterInfo;
          WdLogEvent5_WdEvent(v69);
        }
      }
      goto LABEL_56;
    }
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v65[3] = &DpiGetAdapterInfo;
    v65[4] = DxgkRetrieveStringFromRegistry;
    v65[5] = v24;
    WdLogEvent5_WdError(v65);
    ZwClose(Handle);
  }
LABEL_57:
  if ( (int)v24 < 0 )
  {
    DpiFreeAdapterInfo(a2);
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 176) = 0LL;
  }
  return (unsigned int)v24;
}
