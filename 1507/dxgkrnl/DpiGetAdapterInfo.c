/*
 * XREFs of DpiGetAdapterInfo @ 0x1C00BAC70
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiFreeAdapterInfo @ 0x1C00B431C (DpiFreeAdapterInfo.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00B45D0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00BB6D0 (DxgkRetrieveStringFromRegistry.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  char v8; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v70[36]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v70, 0, 280);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v6 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x290uLL);
    v8 = 1;
    *a3 = *(_QWORD *)(v6 + 48);
    v9 = 1;
    if ( *(_DWORD *)(v6 + 472) )
      v9 = *(_DWORD *)(v6 + 472);
    *((_DWORD *)a3 + 2) = v9;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v6 + 1400);
    *(_QWORD *)((char *)a3 + 28) = *(_QWORD *)(v6 + 1416);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v6 + 1028);
    *((_DWORD *)a3 + 10) = *(_DWORD *)(v6 + 1032);
    *((_DWORD *)a3 + 11) = *(_DWORD *)(v6 + 1036);
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v6 + 1040);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 1044);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 1024);
    *((_DWORD *)a3 + 15) ^= ((*(_BYTE *)(v6 + 1056) != 0) ^ *((_DWORD *)a3 + 15)) & 1;
    v10 = *((_DWORD *)a3 + 15) ^ (*((_DWORD *)a3 + 15) ^ (2 * (*(_BYTE *)(v6 + 448) != 0))) & 2;
    *((_DWORD *)a3 + 15) = v10;
    v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(4 * (*(_BYTE *)(v6 + 1436) != 0))) & 4;
    *((_DWORD *)a3 + 15) = v11;
    v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * (*(_BYTE *)(v6 + 1437) != 0))) & 8;
    *((_DWORD *)a3 + 15) = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(16 * (*(_BYTE *)(v6 + 1058) != 0))) & 0x10;
    *((_DWORD *)a3 + 15) = v13;
    v14 = v13 ^ ((unsigned __int16)v13 ^ ((*(_BYTE *)(v6 + 2128) != 0) << 10)) & 0x400;
    *((_DWORD *)a3 + 15) = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(32 * (*(_DWORD *)(v6 + 1848) != -1))) & 0x20;
    *((_DWORD *)a3 + 15) = v15;
    v16 = v15 ^ ((unsigned __int8)v15 ^ ((*(_BYTE *)(v6 + 1484) != 0) << 6)) & 0x40;
    *((_DWORD *)a3 + 15) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)((*(_BYTE *)(v6 + 1062) != 0) << 7)) & 0x80;
    *((_DWORD *)a3 + 15) = v17;
    v18 = v17 ^ ((unsigned __int16)v17 ^ ((*(_BYTE *)(v6 + 1439) != 0) << 8)) & 0x100;
    *((_DWORD *)a3 + 15) = v18;
    v19 = v18 ^ ((unsigned __int16)v18 ^ ((*(_BYTE *)(v6 + 1438) != 0) << 11)) & 0x800;
    *((_DWORD *)a3 + 15) = v19;
    *((_DWORD *)a3 + 15) = v19 ^ ((unsigned __int16)v19 ^ ((*(_BYTE *)(v6 + 1441) != 0) << 9)) & 0x200;
    if ( !*(_QWORD *)(v7 + 184) || !*(_QWORD *)(v7 + 192) )
      v8 = 0;
    *((_BYTE *)a3 + 64) = v8;
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
  if ( *(_BYTE *)(v6 + 1437) )
  {
    *(_DWORD *)a2 = 7471218;
    *(_QWORD *)(a2 + 8) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 24) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 112) = L"d3d10warp.dll";
    *(_QWORD *)(a2 + 128) = L"d3d10warp.dll";
    *(_DWORD *)(a2 + 16) = 7471218;
    *(_DWORD *)(a2 + 104) = 1966110;
    *(_DWORD *)(a2 + 120) = 1966110;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v6 + 1439) )
  {
    *(_DWORD *)a2 = 6684774;
    *(_QWORD *)(a2 + 8) = L"DX9NotSupported.dll";
    *(_QWORD *)(a2 + 24) = L"DX9NotSupported.dll";
    *(_DWORD *)(a2 + 16) = 6684774;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 40) + 133LL) )
  {
LABEL_56:
    LODWORD(v22) = 0;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(v6 + 3248);
    *(_QWORD *)(a2 + 96) = v6 + 1488;
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(v6 + 1428);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(v6 + 2096);
    *(_QWORD *)(a2 + 168) = *(_QWORD *)(v6 + 3256);
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(v6 + 3264);
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(v6 + 3272);
    goto LABEL_57;
  }
  v20 = DpiOpenPnpRegistryKey(a1, 2, 0x20019u, &Handle);
  v22 = v20;
  if ( v20 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v62[4] = DpiOpenPnpRegistryKey;
    v62[3] = DpiGetAdapterInfo;
    v62[5] = v22;
    WdLogEvent5_WdError(v62);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v23 = DxgkRetrieveStringFromRegistry(Handle, &DestinationString);
    v22 = v23;
    if ( v23 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v64 = WdLogNewEntry5_WdEvent(v26, v25, v27, v28);
        *(_QWORD *)(v64 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v64 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v64);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v33 = WdLogNewEntry5_WdEvent(v30, v29, v31, v32);
        *(_QWORD *)(v33 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v33 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v33);
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v38 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v38 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v38);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v65 = WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
        *(_QWORD *)(v65 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v65 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v65);
      }
      RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v66 = WdLogNewEntry5_WdEvent(v44, v43, v45, v46);
        *(_QWORD *)(v66 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v66 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v66);
      }
      RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v51 = WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
        *(_QWORD *)(v51 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v51 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v51);
      }
      RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
      {
        v56 = WdLogNewEntry5_WdEvent(v53, v52, v54, v55);
        *(_QWORD *)(v56 + 24) = DpiGetAdapterInfo;
        *(_QWORD *)(v56 + 32) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v56);
      }
      ZwClose(Handle);
      if ( *(_QWORD *)(a2 + 48) )
      {
        v70[5] = 0LL;
        LODWORD(v70[4]) = 0x4000000;
        LODWORD(v70[11]) = 0x4000000;
        v70[2] = L"OpenGLVersion";
        LODWORD(v70[18]) = 0x4000000;
        v70[3] = a2 + 56;
        LODWORD(v70[25]) = 0x4000000;
        v70[9] = L"OpenGLFlags";
        LODWORD(v70[1]) = 288;
        v70[10] = a2 + 60;
        v70[16] = L"OpenGLVersionWow";
        v70[17] = a2 + 80;
        v70[23] = L"OpenGLFlagsWow";
        v70[24] = a2 + 84;
        LODWORD(v70[6]) = 0;
        LODWORD(v70[8]) = 288;
        v70[12] = 0LL;
        LODWORD(v70[13]) = 0;
        LODWORD(v70[15]) = 288;
        v70[19] = 0LL;
        LODWORD(v70[20]) = 0;
        LODWORD(v70[22]) = 288;
        v70[26] = 0LL;
        LODWORD(v70[27]) = 0;
        if ( (int)RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v6 + 504), v70, 0LL, 0LL) < 0 )
        {
          v67 = WdLogNewEntry5_WdEvent(v58, v57, v59, v60);
          *(_QWORD *)(v67 + 32) = RtlQueryRegistryValuesEx;
          *(_QWORD *)(v67 + 24) = DpiGetAdapterInfo;
          WdLogEvent5_WdEvent(v67);
        }
      }
      goto LABEL_56;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v63[3] = DpiGetAdapterInfo;
    v63[4] = DxgkRetrieveStringFromRegistry;
    v63[5] = v22;
    WdLogEvent5_WdError(v63);
    ZwClose(Handle);
  }
LABEL_57:
  if ( (int)v22 < 0 )
  {
    if ( !*(_BYTE *)(v6 + 1437) )
      DpiFreeAdapterInfo(a2);
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_QWORD *)(a2 + 168) = 0LL;
  }
  return (unsigned int)v22;
}
