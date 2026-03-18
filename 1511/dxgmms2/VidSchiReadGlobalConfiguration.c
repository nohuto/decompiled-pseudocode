/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C0063C78
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0063290 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0014F68 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

__int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int16 v1; // bx
  int v3; // esi
  DXGADAPTER *v4; // rcx
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  __int16 v21; // cx
  int v22; // r8d
  int v23; // eax
  bool v24; // cc
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  DXGADAPTER *v28; // rcx
  int v29; // ebx
  int v30; // eax
  unsigned int v31; // r8d
  __int64 result; // rax
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+64h] [rbp-9Ch] BYREF
  int v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+6Ch] [rbp-94h] BYREF
  int v49; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+74h] [rbp-8Ch] BYREF
  int v51; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  int v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+84h] [rbp-7Ch] BYREF
  int v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v56; // [rsp+8Ch] [rbp-74h] BYREF
  int v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  int v59; // [rsp+98h] [rbp-68h] BYREF
  int v60; // [rsp+9Ch] [rbp-64h] BYREF
  int v61; // [rsp+A0h] [rbp-60h] BYREF
  int v62; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v63; // [rsp+A8h] [rbp-58h] BYREF
  int v64; // [rsp+ACh] [rbp-54h] BYREF
  int v65; // [rsp+B0h] [rbp-50h] BYREF
  int v66; // [rsp+B4h] [rbp-4Ch] BYREF
  int v67; // [rsp+B8h] [rbp-48h] BYREF
  int v68; // [rsp+BCh] [rbp-44h] BYREF
  int v69; // [rsp+C0h] [rbp-40h] BYREF
  int v70; // [rsp+C4h] [rbp-3Ch] BYREF
  int v71; // [rsp+C8h] [rbp-38h] BYREF
  int v72; // [rsp+CCh] [rbp-34h] BYREF
  int v73; // [rsp+D0h] [rbp-30h] BYREF
  int v74; // [rsp+D4h] [rbp-2Ch] BYREF
  int v75; // [rsp+D8h] [rbp-28h] BYREF
  int v76; // [rsp+DCh] [rbp-24h] BYREF
  int v77; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+E4h] [rbp-1Ch] BYREF
  int v79; // [rsp+E8h] [rbp-18h] BYREF
  int v80; // [rsp+ECh] [rbp-14h] BYREF
  int v81; // [rsp+F0h] [rbp-10h] BYREF
  int v82; // [rsp+F4h] [rbp-Ch] BYREF
  int v83; // [rsp+F8h] [rbp-8h] BYREF
  int v84; // [rsp+FCh] [rbp-4h] BYREF
  int v85; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+104h] [rbp+4h] BYREF
  int v87; // [rsp+108h] [rbp+8h] BYREF
  int v88; // [rsp+10Ch] [rbp+Ch] BYREF
  int v89; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+114h] [rbp+14h] BYREF
  _QWORD v91[210]; // [rsp+120h] [rbp+20h] BYREF

  HIBYTE(v1) = 0;
  v64 = 25000;
  v66 = 0;
  v86 = 0;
  v72 = 0;
  v3 = 1;
  v88 = 50000;
  v68 = 1;
  v80 = 2;
  v60 = 10;
  v50 = 10;
  v4 = *(DXGADAPTER **)(a1 + 16);
  v70 = 3;
  v82 = 1;
  v5 = 16;
  v74 = 1;
  v90 = 1;
  v76 = 1;
  v84 = 0;
  v69 = 0;
  v78 = 1;
  v65 = 20;
  v67 = 2;
  v61 = 7;
  v73 = 0;
  v75 = 900;
  v77 = 1000;
  v71 = 1;
  v79 = 8;
  v81 = 0;
  v83 = 1;
  v85 = 0;
  v87 = 16;
  v89 = 100;
  v52 = 0;
  v37 = 25000;
  v35 = 50000;
  v58 = 1;
  v33 = 2;
  v34 = 3;
  v63 = 0;
  v42 = 0;
  v44 = 1;
  v54 = 1;
  v46 = 1;
  v53 = 1;
  v55 = 0;
  v57 = 0;
  v59 = 1;
  v36 = 20;
  v39 = 2;
  v38 = 7;
  v62 = 0;
  v41 = 900;
  v43 = 1000;
  v51 = 1;
  v47 = 8;
  v40 = 0;
  v48 = 1;
  v56 = 0;
  v45 = 16;
  v49 = 100;
  if ( (int)DXGADAPTER::GetDriverVersion(v4) >= 1300 && *(_BYTE *)(v6 + 1861) )
  {
    v61 = 1;
    v38 = 1;
  }
  memset(v91, 0, sizeof(v91));
  v91[0] = 0LL;
  LODWORD(v91[1]) = 288;
  LODWORD(v91[4]) = 67108868;
  LODWORD(v91[6]) = 4;
  v91[2] = L"AutoSyncToCPUPriority";
  v91[3] = &v52;
  v91[5] = &v66;
  v91[9] = L"QuantumUnit";
  v91[10] = &v37;
  v91[12] = &v64;
  v91[16] = L"PreemptionQuantumUnit";
  v91[17] = &v35;
  v91[19] = &v88;
  v91[23] = L"EnablePreemption";
  v91[24] = &v58;
  v91[26] = &v68;
  v91[30] = L"HwQueuedRenderPacketGroupLimit";
  v91[31] = &v33;
  v91[33] = &v80;
  v91[37] = L"QueuedPresentLimit";
  v91[38] = &v34;
  v91[40] = &v70;
  v91[44] = L"InitDriverFenceId";
  v91[45] = &v63;
  v91[47] = &v86;
  v91[51] = L"CarryOverUsedQuantum";
  v91[7] = 0LL;
  LODWORD(v91[8]) = 288;
  LODWORD(v91[11]) = 67108868;
  LODWORD(v91[13]) = 4;
  v91[14] = 0LL;
  LODWORD(v91[15]) = 288;
  LODWORD(v91[18]) = 67108868;
  LODWORD(v91[20]) = 4;
  v91[21] = 0LL;
  LODWORD(v91[22]) = 288;
  LODWORD(v91[25]) = 67108868;
  LODWORD(v91[27]) = 4;
  v91[28] = 0LL;
  LODWORD(v91[29]) = 288;
  LODWORD(v91[32]) = 67108868;
  LODWORD(v91[34]) = 4;
  v91[35] = 0LL;
  LODWORD(v91[36]) = 288;
  LODWORD(v91[39]) = 67108868;
  LODWORD(v91[41]) = 4;
  v91[42] = 0LL;
  LODWORD(v91[43]) = 288;
  LODWORD(v91[46]) = 67108868;
  LODWORD(v91[48]) = 4;
  v91[49] = 0LL;
  LODWORD(v91[50]) = 288;
  LODWORD(v91[53]) = 67108868;
  v91[52] = &v42;
  v91[54] = &v72;
  v91[58] = L"EnableFlipOnVSyncHwFlipQueue";
  v91[59] = &v44;
  v91[61] = &v82;
  v91[65] = L"EnableFlipOnVSyncSwFlipQueue";
  v91[66] = &v54;
  v91[68] = &v74;
  v91[72] = L"EnableFlipImmediateSwFlipQueue";
  v91[73] = &v46;
  v91[75] = &v90;
  v91[79] = L"AdjustWorkerThreadPriority";
  v91[80] = &v53;
  v91[82] = &v76;
  v91[86] = L"CountFlipTowardHwLimit";
  v91[87] = &v55;
  v91[89] = &v84;
  v91[93] = L"AllowUserModeToSetFlipLimit";
  v91[94] = &v59;
  v91[96] = &v78;
  v91[100] = L"NumberOfDmaPacketPool";
  v91[101] = &v36;
  v91[103] = &v65;
  v91[107] = L"ProfileLevel";
  LODWORD(v91[55]) = 4;
  v91[56] = 0LL;
  LODWORD(v91[57]) = 288;
  LODWORD(v91[60]) = 67108868;
  LODWORD(v91[62]) = 4;
  v91[63] = 0LL;
  LODWORD(v91[64]) = 288;
  LODWORD(v91[67]) = 67108868;
  LODWORD(v91[69]) = 4;
  v91[70] = 0LL;
  LODWORD(v91[71]) = 288;
  LODWORD(v91[74]) = 67108868;
  LODWORD(v91[76]) = 4;
  v91[77] = 0LL;
  LODWORD(v91[78]) = 288;
  LODWORD(v91[81]) = 67108868;
  LODWORD(v91[83]) = 4;
  v91[84] = 0LL;
  LODWORD(v91[85]) = 288;
  LODWORD(v91[88]) = 67108868;
  LODWORD(v91[90]) = 4;
  v91[91] = 0LL;
  LODWORD(v91[92]) = 288;
  LODWORD(v91[95]) = 67108868;
  LODWORD(v91[97]) = 4;
  v91[98] = 0LL;
  LODWORD(v91[99]) = 288;
  LODWORD(v91[102]) = 67108868;
  LODWORD(v91[104]) = 4;
  v91[105] = 0LL;
  LODWORD(v91[106]) = 288;
  v91[108] = &v39;
  v91[110] = &v67;
  v91[114] = L"VSyncIdleTimeout";
  v91[115] = &v38;
  v91[117] = &v61;
  v91[121] = L"CountPresentTowardHwLimit";
  v91[122] = &v57;
  v91[124] = &v69;
  v91[128] = L"EnableContextDelay";
  v91[129] = &v51;
  v91[131] = &v71;
  v91[135] = L"LogDriverVSyncCallback";
  v91[136] = &v62;
  v91[138] = &v73;
  v91[142] = L"MaximumAllowedPreemptionDelay";
  v91[143] = &v41;
  v91[145] = &v75;
  v91[149] = L"ContextSchedulingPenaltyDelay";
  v91[150] = &v43;
  v91[152] = &v77;
  v91[156] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v91[157] = &v47;
  v91[159] = &v79;
  v91[163] = L"ForceIndependentFlip";
  v91[164] = &v40;
  LODWORD(v91[109]) = 67108868;
  LODWORD(v91[111]) = 4;
  v91[112] = 0LL;
  LODWORD(v91[113]) = 288;
  LODWORD(v91[116]) = 67108868;
  LODWORD(v91[118]) = 4;
  v91[119] = 0LL;
  LODWORD(v91[120]) = 288;
  LODWORD(v91[123]) = 67108868;
  LODWORD(v91[125]) = 4;
  v91[126] = 0LL;
  LODWORD(v91[127]) = 288;
  LODWORD(v91[130]) = 67108868;
  LODWORD(v91[132]) = 4;
  v91[133] = 0LL;
  LODWORD(v91[134]) = 288;
  LODWORD(v91[137]) = 67108868;
  LODWORD(v91[139]) = 4;
  v91[140] = 0LL;
  LODWORD(v91[141]) = 288;
  LODWORD(v91[144]) = 67108868;
  LODWORD(v91[146]) = 4;
  v91[147] = 0LL;
  LODWORD(v91[148]) = 288;
  LODWORD(v91[151]) = 67108868;
  LODWORD(v91[153]) = 4;
  v91[154] = 0LL;
  LODWORD(v91[155]) = 288;
  LODWORD(v91[158]) = 67108868;
  LODWORD(v91[160]) = 4;
  v91[161] = 0LL;
  LODWORD(v91[162]) = 288;
  LODWORD(v91[165]) = 67108868;
  v91[166] = &v81;
  LODWORD(v91[169]) = 288;
  v91[170] = L"YieldPercentage";
  LODWORD(v91[172]) = 67108868;
  v91[171] = &v50;
  v91[173] = &v60;
  v91[177] = L"ForegroundPriorityBoost";
  v91[178] = &v48;
  v91[180] = &v83;
  v91[184] = L"ForceFlipTrueImmediateMode";
  v91[185] = &v56;
  v91[187] = &v85;
  v91[191] = L"MaxYieldInterval";
  v91[192] = &v45;
  v91[194] = &v87;
  v91[198] = L"MaxFocusGpuQuantumWithoutPresent";
  v91[199] = &v49;
  LODWORD(v91[176]) = 288;
  LODWORD(v91[179]) = 67108868;
  LODWORD(v91[183]) = 288;
  LODWORD(v91[186]) = 67108868;
  LODWORD(v91[190]) = 288;
  LODWORD(v91[193]) = 67108868;
  LODWORD(v91[197]) = 288;
  LODWORD(v91[200]) = 67108868;
  v91[201] = &v89;
  LODWORD(v91[167]) = 4;
  v91[168] = 0LL;
  LODWORD(v91[174]) = 4;
  v91[175] = 0LL;
  LODWORD(v91[181]) = 4;
  v91[182] = 0LL;
  LODWORD(v91[188]) = 4;
  v91[189] = 0LL;
  LODWORD(v91[195]) = 4;
  v91[196] = 0LL;
  LODWORD(v91[202]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v91, 0LL, 0LL);
  *(_DWORD *)(a1 + 2096) ^= (*(_DWORD *)(a1 + 2096) ^ (2 * (v52 != 0))) & 2;
  v7 = *(_DWORD *)(a1 + 2096) ^ (*(_DWORD *)(a1 + 2096) ^ (4 * (v42 != 0))) & 4;
  v8 = v7 ^ ((v58 != 0) ^ v7) & 1 ^ ((unsigned __int8)(v7 ^ ((v58 != 0) ^ v7) & 1) ^ (unsigned __int8)((v44 != 0) << 7)) & 0x80;
  v9 = v8 ^ ((unsigned __int16)v8 ^ ((v54 != 0) << 8)) & 0x100;
  v10 = v9 ^ ((unsigned __int16)v9 ^ ((v46 != 0) << 9)) & 0x200;
  v11 = v10 ^ ((unsigned __int16)v10 ^ ((v62 != 0) << 14)) & 0x4000;
  *(_DWORD *)(a1 + 2096) = v11 ^ (v11 ^ ((v48 != 0) << 16)) & 0x10000;
  if ( v56 <= 2 )
    *(_DWORD *)(a1 + 2112) = v56;
  if ( (unsigned int)(v50 - 1) > 0x53 )
    *(_DWORD *)(a1 + 168) = v60;
  else
    *(_DWORD *)(a1 + 168) = v50;
  v12 = v40 == 0;
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a1 + 168) + 15;
  v13 = (unsigned int)(10000 * v41);
  *(_BYTE *)(a1 + 47) |= !v12;
  *(_QWORD *)(a1 + 2272) = v13;
  *(_QWORD *)(a1 + 2280) = (unsigned int)(10000 * v43);
  *(_QWORD *)(a1 + 2296) = (unsigned int)(10000 * v45);
  *(_QWORD *)(a1 + 2288) = (unsigned int)(10000 * v47);
  *(_QWORD *)(a1 + 2304) = (unsigned int)(10000 * v49);
  if ( !v51 || (v12 = !TdrIsEnabled(), v14 = 1, v12) )
    v14 = 0;
  v15 = (_QWORD *)(a1 + 2184);
  v16 = 0LL;
  *(_DWORD *)(a1 + 2096) ^= (*(_DWORD *)(a1 + 2096) ^ (v14 << 15)) & 0x8000;
  do
  {
    v17 = 1;
    if ( v37 > 1 )
      v17 = v37;
    v18 = (unsigned int)(v17 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v16));
    v19 = 1;
    if ( v35 > 1 )
      v19 = v35;
    *(v15 - 6) = v18;
    v20 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v16);
    v16 += 4LL;
    *v15++ = (unsigned int)(v19 * v20);
  }
  while ( v16 < 24 );
  HIBYTE(v21) = 0;
  v22 = v38;
  v23 = 1;
  if ( v33 > 1 )
    v23 = v33;
  v24 = v34 <= 1;
  *(_DWORD *)(a1 + 2120) = v23;
  v25 = 0;
  if ( !v24 )
    v3 = v34;
  v12 = v53 == 0;
  *(_DWORD *)(a1 + 2116) = v3;
  LOBYTE(v25) = !v12;
  *(_DWORD *)(a1 + 1984) = v22;
  *(_DWORD *)(a1 + 2096) ^= (*(_DWORD *)(a1 + 2096) ^ (v25 << 10)) & 0x400;
  LOBYTE(v21) = v55 != 0;
  v26 = *(_DWORD *)(a1 + 2096) ^ ((unsigned __int16)*(_DWORD *)(a1 + 2096) ^ (unsigned __int16)(v21 << 11)) & 0x800;
  v27 = v26 ^ ((unsigned __int16)v26 ^ ((v57 != 0) << 12)) & 0x1000;
  v28 = *(DXGADAPTER **)(a1 + 16);
  LOBYTE(v1) = v59 != 0;
  v29 = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(v1 << 13)) & 0x2000;
  v30 = v39;
  v24 = v36 <= 0x10;
  *(_DWORD *)(a1 + 2096) = v29;
  if ( !v24 )
    v5 = v36;
  *(_DWORD *)(a1 + 2128) = v5;
  *(_DWORD *)(a1 + 5120) = v30;
  if ( (int)DXGADAPTER::GetDriverVersion(v28) < 1300 )
  {
    if ( v31 >= 4 )
    {
      if ( v31 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 1984) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 1984) = 4;
    }
  }
  result = v63;
  *(_DWORD *)(a1 + 2264) = v63;
  *(_DWORD *)(a1 + 2256) = result;
  *(_DWORD *)(a1 + 2248) = result;
  *(_DWORD *)(a1 + 2240) = result;
  *(_DWORD *)(a1 + 2232) = result;
  return result;
}
