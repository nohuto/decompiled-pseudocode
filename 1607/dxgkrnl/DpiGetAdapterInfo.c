/*
 * XREFs of DpiGetAdapterInfo @ 0x1C00E7F68
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00D91F0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00E8AD0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFreeAdapterInfo @ 0x1C0192DA4 (DpiFreeAdapterInfo.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, __int64 a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  char v23; // al
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v50[36]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v50, 0, 0x118uLL);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x2D8uLL);
    v10 = 1;
    *a3 = *(_QWORD *)(v8 + 48);
    if ( *(_DWORD *)(v8 + 504) )
      v10 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v10;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v8 + 2520);
    *(_QWORD *)((char *)a3 + 28) = *(_QWORD *)(v8 + 2536);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v8 + 1108);
    *((_DWORD *)a3 + 10) = *(_DWORD *)(v8 + 1112);
    *((_DWORD *)a3 + 11) = *(_DWORD *)(v8 + 1116);
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v8 + 1120);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v8 + 1104);
    *((_DWORD *)a3 + 15) ^= ((*(_BYTE *)(v8 + 1136) != 0) ^ (unsigned __int8)*((_DWORD *)a3 + 15)) & 1;
    v11 = *((_DWORD *)a3 + 15) ^ (*((_DWORD *)a3 + 15) ^ (2 * (*(_BYTE *)(v8 + 1137) != 0))) & 2;
    *((_DWORD *)a3 + 15) = v11;
    v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(4 * (*(_BYTE *)(v8 + 480) != 0))) & 4;
    *((_DWORD *)a3 + 15) = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(8 * (*(_BYTE *)(v8 + 2556) != 0))) & 8;
    *((_DWORD *)a3 + 15) = v13;
    v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(16 * (*(_BYTE *)(v8 + 2557) != 0))) & 0x10;
    *((_DWORD *)a3 + 15) = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(32 * (*(_BYTE *)(v8 + 1139) != 0))) & 0x20;
    *((_DWORD *)a3 + 15) = v15;
    v16 = v15 ^ ((unsigned __int16)v15 ^ ((*(_DWORD *)(v8 + 3312) != -1) << 12)) & 0x1000;
    *((_DWORD *)a3 + 15) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ ((*(_DWORD *)(v8 + 3032) != -1) << 6)) & 0x40;
    *((_DWORD *)a3 + 15) = v17;
    v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)((*(_BYTE *)(v8 + 2604) != 0) << 7)) & 0x80;
    *((_DWORD *)a3 + 15) = v18;
    v19 = v18 ^ ((unsigned __int16)v18 ^ ((*(_BYTE *)(v8 + 1143) != 0) << 8)) & 0x100;
    *((_DWORD *)a3 + 15) = v19;
    v20 = v19 ^ ((unsigned __int16)v19 ^ ((*(_BYTE *)(v8 + 2559) != 0) << 9)) & 0x200;
    *((_DWORD *)a3 + 15) = v20;
    v21 = v20 ^ ((unsigned __int16)v20 ^ ((*(_BYTE *)(v8 + 2558) != 0) << 13)) & 0x2000;
    *((_DWORD *)a3 + 15) = v21;
    v22 = v21 ^ ((unsigned __int16)v21 ^ ((*(_BYTE *)(v8 + 2561) != 0) << 10)) & 0x400;
    *((_DWORD *)a3 + 15) = v22;
    *((_DWORD *)a3 + 15) = v22 ^ ((unsigned __int16)v22 ^ ((*(_BYTE *)(v8 + 2562) != 0) << 11)) & 0x800;
    if ( !*(_QWORD *)(v9 + 184) || (v23 = 1, !*(_QWORD *)(v9 + 192)) )
      v23 = 0;
    *((_BYTE *)a3 + 64) = v23;
    a3[9] = *(_QWORD *)(v9 + 272);
    a3[10] = *(_QWORD *)(v9 + 280);
    a3[11] = *(_QWORD *)(v9 + 288);
    a3[12] = *(_QWORD *)(v9 + 296);
    a3[13] = *(_QWORD *)(v9 + 304);
    a3[14] = *(_QWORD *)(v9 + 312);
    a3[15] = *(_QWORD *)(v9 + 320);
    a3[16] = *(_QWORD *)(v9 + 328);
    a3[17] = *(_QWORD *)(v9 + 336);
    a3[18] = *(_QWORD *)(v9 + 344);
    a3[19] = *(_QWORD *)(v9 + 352);
    a3[20] = *(_QWORD *)(v9 + 360);
    a3[21] = *(_QWORD *)(v9 + 368);
    a3[22] = *(_QWORD *)(v9 + 376);
    a3[23] = *(_QWORD *)(v9 + 384);
    a3[24] = *(_QWORD *)(v9 + 392);
    a3[25] = *(_QWORD *)(v9 + 400);
    a3[26] = *(_QWORD *)(v9 + 408);
    a3[27] = *(_QWORD *)(v9 + 416);
    a3[28] = *(_QWORD *)(v9 + 424);
    a3[29] = *(_QWORD *)(v9 + 432);
    a3[30] = *(_QWORD *)(v9 + 440);
    a3[31] = *(_QWORD *)(v9 + 448);
    a3[32] = *(_QWORD *)(v9 + 456);
    a3[33] = *(_QWORD *)(v9 + 464);
    a3[34] = *(_QWORD *)(v9 + 472);
    a3[35] = *(_QWORD *)(v9 + 480);
    a3[36] = *(_QWORD *)(v9 + 488);
    a3[37] = *(_QWORD *)(v9 + 496);
    a3[38] = *(_QWORD *)(v9 + 504);
    a3[39] = *(_QWORD *)(v9 + 512);
    a3[40] = *(_QWORD *)(v9 + 520);
    a3[41] = *(_QWORD *)(v9 + 528);
    a3[42] = *(_QWORD *)(v9 + 536);
    a3[43] = *(_QWORD *)(v9 + 544);
    a3[44] = *(_QWORD *)(v9 + 552);
    a3[45] = *(_QWORD *)(v9 + 560);
    a3[46] = *(_QWORD *)(v9 + 568);
    a3[47] = *(_QWORD *)(v9 + 576);
    a3[48] = *(_QWORD *)(v9 + 584);
    a3[49] = *(_QWORD *)(v9 + 592);
    a3[50] = *(_QWORD *)(v9 + 600);
    a3[51] = *(_QWORD *)(v9 + 608);
    a3[52] = *(_QWORD *)(v9 + 624);
    if ( *(_DWORD *)(v9 + 28) >= 0x2002u )
      a3[53] = *(_QWORD *)(v9 + 680);
    if ( *(_DWORD *)(v9 + 28) >= 0x2003u )
      a3[54] = *(_QWORD *)(v9 + 696);
    if ( *(_DWORD *)(v9 + 28) >= 0x3001u )
    {
      a3[55] = *(_QWORD *)(v9 + 712);
      a3[56] = *(_QWORD *)(v9 + 720);
      a3[57] = *(_QWORD *)(v9 + 728);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x3004u )
      a3[62] = *(_QWORD *)(v9 + 760);
    if ( *(_DWORD *)(v9 + 28) >= 0x3005u )
    {
      a3[59] = *(_QWORD *)(v9 + 704);
      a3[60] = *(_QWORD *)(v9 + 776);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x3000u )
      a3[58] = *(_QWORD *)(v9 + 1016);
    if ( *(_DWORD *)(v9 + 28) >= 0x4000u )
    {
      a3[65] = *(_QWORD *)(v9 + 808);
      a3[66] = *(_QWORD *)(v9 + 816);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x300Bu )
      a3[63] = *(_QWORD *)(v9 + 784);
    if ( *(_DWORD *)(v9 + 28) >= 0x4001u )
      a3[67] = *(_QWORD *)(v9 + 824);
    if ( *(_DWORD *)(v9 + 28) >= 0x4000u )
      a3[64] = *(_QWORD *)(v9 + 800);
    if ( *(_DWORD *)(v9 + 28) >= 0x4002u )
    {
      a3[68] = *(_QWORD *)(v9 + 832);
      a3[69] = *(_QWORD *)(v9 + 840);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x5001u )
    {
      a3[70] = *(_QWORD *)(v9 + 848);
      a3[71] = *(_QWORD *)(v9 + 856);
      a3[72] = *(_QWORD *)(v9 + 864);
      a3[73] = *(_QWORD *)(v9 + 872);
      a3[74] = *(_QWORD *)(v9 + 880);
      a3[75] = *(_QWORD *)(v9 + 888);
      a3[76] = *(_QWORD *)(v9 + 904);
      a3[77] = *(_QWORD *)(v9 + 912);
      a3[78] = *(_QWORD *)(v9 + 896);
      a3[79] = *(_QWORD *)(v9 + 920);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x5006u )
      a3[61] = *(_QWORD *)(v9 + 944);
    if ( *(_DWORD *)(v9 + 28) >= 0x5008u )
    {
      a3[80] = *(_QWORD *)(v9 + 952);
      a3[81] = *(_QWORD *)(v9 + 960);
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x6000u )
    {
      a3[82] = *(_QWORD *)(v9 + 968);
      a3[83] = *(_QWORD *)(v9 + 976);
      a3[84] = *(_QWORD *)(v9 + 984);
      if ( *(_BYTE *)(v8 + 4520) )
        a3[85] = v8 + 4528;
      if ( *(_BYTE *)(v8 + 4648) )
        a3[87] = v8 + 4656;
      if ( *(_BYTE *)(v8 + 4784) )
        a3[86] = v8 + 4792;
    }
    if ( *(_DWORD *)(v9 + 28) >= 0x6002u )
    {
      a3[88] = *(_QWORD *)(v9 + 1000);
      a3[89] = *(_QWORD *)(v9 + 1008);
      a3[90] = *(_QWORD *)(v9 + 992);
    }
  }
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(v8 + 2557) )
  {
    *(_DWORD *)(a2 + 8) = 7471218;
    *(_QWORD *)(a2 + 16) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 32) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 120) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 136) = L"d3d10warp.dll";
    *(_DWORD *)(a2 + 24) = 7471218;
    *(_DWORD *)(a2 + 112) = 1966110;
    *(_DWORD *)(a2 + 128) = 1966110;
    goto LABEL_65;
  }
  if ( *(_BYTE *)(v8 + 2559) )
  {
    *(_DWORD *)(a2 + 8) = 6684774;
    *(_QWORD *)(a2 + 16) = L"DX9NotSupported.dll";
    *(_QWORD *)(a2 + 32) = L"DX9NotSupported.dll";
    *(_DWORD *)(a2 + 24) = 6684774;
    goto LABEL_65;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) )
  {
LABEL_65:
    LODWORD(v26) = 0;
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(v8 + 4464);
    *(_QWORD *)(a2 + 104) = v8 + 2608;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(v8 + 2548);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(v8 + 3280);
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(v8 + 4472);
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(v8 + 4480);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(v8 + 4488);
    *a4 = *(_OWORD *)(v8 + 1000);
    a4[1] = *(_OWORD *)(v8 + 1016);
    a4[2] = *(_OWORD *)(v8 + 1032);
    a4[3] = *(_OWORD *)(v8 + 1048);
    a4[4] = *(_OWORD *)(v8 + 1064);
    a4[5] = *(_OWORD *)(v8 + 1080);
    goto LABEL_66;
  }
  *(_BYTE *)a2 = 1;
  v24 = DpiOpenPnpRegistryKey(a1, 2, 0x20019u, &Handle);
  v26 = v24;
  if ( v24 < 0 )
  {
    v42 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v42 + 24) = v26;
    WdLogEvent5_WdError(v42);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v27 = DxgkRetrieveStringFromRegistry(Handle, &DestinationString);
    v26 = v27;
    if ( v27 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v44 = WdLogNewEntry5_WdEvent(v29);
        *(_QWORD *)(v44 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v44);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v31 = WdLogNewEntry5_WdEvent(v30);
        *(_QWORD *)(v31 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v31);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v33 = WdLogNewEntry5_WdEvent(v32);
        *(_QWORD *)(v33 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v33);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v45 = WdLogNewEntry5_WdEvent(v34);
        *(_QWORD *)(v45 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v45);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v46 = WdLogNewEntry5_WdEvent(v35);
        *(_QWORD *)(v46 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v46);
      }
      RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v37 = WdLogNewEntry5_WdEvent(v36);
        *(_QWORD *)(v37 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v37);
      }
      RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v39 = WdLogNewEntry5_WdEvent(v38);
        *(_QWORD *)(v39 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v39);
      }
      ZwClose(Handle);
      if ( *(_QWORD *)(a2 + 56) )
      {
        v50[5] = 0LL;
        LODWORD(v50[4]) = 0x4000000;
        LODWORD(v50[11]) = 0x4000000;
        v50[2] = L"OpenGLVersion";
        LODWORD(v50[18]) = 0x4000000;
        v50[3] = a2 + 64;
        LODWORD(v50[25]) = 0x4000000;
        v50[9] = L"OpenGLFlags";
        LODWORD(v50[1]) = 288;
        v50[10] = a2 + 68;
        v50[16] = L"OpenGLVersionWow";
        v50[17] = a2 + 88;
        v50[23] = L"OpenGLFlagsWow";
        v50[24] = a2 + 92;
        LODWORD(v50[6]) = 0;
        LODWORD(v50[8]) = 288;
        v50[12] = 0LL;
        LODWORD(v50[13]) = 0;
        LODWORD(v50[15]) = 288;
        v50[19] = 0LL;
        LODWORD(v50[20]) = 0;
        LODWORD(v50[22]) = 288;
        v50[26] = 0LL;
        LODWORD(v50[27]) = 0;
        if ( (int)RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v8 + 536), v50, 0LL, 0LL) < 0 )
        {
          v47 = WdLogNewEntry5_WdEvent(v40);
          *(_QWORD *)(v47 + 24) = RtlQueryRegistryValuesEx;
          WdLogEvent5_WdEvent(v47);
        }
      }
      goto LABEL_65;
    }
    v43 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v43 + 24) = v26;
    WdLogEvent5_WdError(v43);
    ZwClose(Handle);
  }
LABEL_66:
  if ( (int)v26 < 0 )
  {
    DpiFreeAdapterInfo(a2);
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 176) = 0LL;
  }
  return (unsigned int)v26;
}
