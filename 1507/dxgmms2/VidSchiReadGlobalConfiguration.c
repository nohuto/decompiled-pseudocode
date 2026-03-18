/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C003F5D8
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0040EF0 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0006AB8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int16 v1; // bx
  int v3; // esi
  DXGADAPTER *v4; // rcx
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  __int16 v22; // cx
  int v23; // r8d
  int v24; // eax
  bool v25; // cc
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  DXGADAPTER *v29; // rcx
  int v30; // ebx
  int v31; // eax
  unsigned int v32; // r8d
  __int64 result; // rax
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+64h] [rbp-9Ch] BYREF
  int v48; // [rsp+68h] [rbp-98h] BYREF
  int v49; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-90h] BYREF
  int v51; // [rsp+74h] [rbp-8Ch] BYREF
  int v52; // [rsp+78h] [rbp-88h] BYREF
  int v53; // [rsp+7Ch] [rbp-84h] BYREF
  int v54; // [rsp+80h] [rbp-80h] BYREF
  int v55; // [rsp+84h] [rbp-7Ch] BYREF
  int v56; // [rsp+88h] [rbp-78h] BYREF
  int v57; // [rsp+8Ch] [rbp-74h] BYREF
  int v58; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+94h] [rbp-6Ch] BYREF
  int v60; // [rsp+98h] [rbp-68h] BYREF
  int v61; // [rsp+9Ch] [rbp-64h] BYREF
  int v62; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v63; // [rsp+A4h] [rbp-5Ch] BYREF
  int v64; // [rsp+A8h] [rbp-58h] BYREF
  int v65; // [rsp+ACh] [rbp-54h] BYREF
  int v66; // [rsp+B0h] [rbp-50h] BYREF
  int v67; // [rsp+B4h] [rbp-4Ch] BYREF
  int v68; // [rsp+B8h] [rbp-48h] BYREF
  int v69; // [rsp+BCh] [rbp-44h] BYREF
  int v70; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+C4h] [rbp-3Ch] BYREF
  int v72; // [rsp+C8h] [rbp-38h] BYREF
  int v73; // [rsp+CCh] [rbp-34h] BYREF
  int v74; // [rsp+D0h] [rbp-30h] BYREF
  int v75; // [rsp+D4h] [rbp-2Ch] BYREF
  int v76; // [rsp+D8h] [rbp-28h] BYREF
  int v77; // [rsp+DCh] [rbp-24h] BYREF
  int v78; // [rsp+E0h] [rbp-20h] BYREF
  int v79; // [rsp+E4h] [rbp-1Ch] BYREF
  int v80; // [rsp+E8h] [rbp-18h] BYREF
  int v81; // [rsp+ECh] [rbp-14h] BYREF
  int v82; // [rsp+F0h] [rbp-10h] BYREF
  int v83; // [rsp+F4h] [rbp-Ch] BYREF
  int v84; // [rsp+F8h] [rbp-8h] BYREF
  int v85; // [rsp+FCh] [rbp-4h] BYREF
  int v86; // [rsp+100h] [rbp+0h] BYREF
  int v87; // [rsp+104h] [rbp+4h] BYREF
  int v88; // [rsp+108h] [rbp+8h] BYREF
  int v89; // [rsp+10Ch] [rbp+Ch] BYREF
  _QWORD v90[204]; // [rsp+110h] [rbp+10h] BYREF

  HIBYTE(v1) = 0;
  v80 = 8;
  v87 = 0;
  v71 = 0;
  v81 = 0;
  v3 = 1;
  v64 = 25000;
  v79 = 1;
  v78 = 1000;
  v45 = 1000;
  v4 = *(DXGADAPTER **)(a1 + 16);
  v69 = 2;
  v67 = 50000;
  v85 = 3;
  v5 = 16;
  v73 = 1;
  v89 = 1;
  v75 = 1;
  v83 = 1;
  v77 = 0;
  v70 = 0;
  v65 = 1;
  v66 = 20;
  v68 = 2;
  v61 = 7;
  v74 = 0;
  v76 = 900;
  v72 = 1;
  v82 = 0;
  v52 = 10;
  v84 = 1;
  v86 = 0;
  v88 = 16;
  v42 = 0;
  v38 = 25000;
  v36 = 50000;
  v44 = 1;
  v34 = 2;
  v35 = 3;
  v63 = 0;
  v58 = 0;
  v54 = 1;
  v46 = 1;
  v62 = 1;
  v53 = 1;
  v55 = 0;
  v57 = 0;
  v59 = 1;
  v37 = 20;
  v40 = 2;
  v39 = 7;
  v48 = 0;
  v43 = 900;
  v51 = 1;
  v49 = 8;
  v41 = 0;
  v60 = 10;
  v56 = 1;
  v50 = 0;
  v47 = 16;
  if ( (int)DXGADAPTER::GetDriverVersion(v4) >= 1300 && *(_BYTE *)(v6 + 1853) )
  {
    v61 = 1;
    v39 = 1;
  }
  memset(v90, 0, 0x658uLL);
  v90[0] = 0LL;
  LODWORD(v90[1]) = 288;
  LODWORD(v90[4]) = 67108868;
  LODWORD(v90[6]) = 4;
  v90[2] = L"AutoSyncToCPUPriority";
  v90[3] = &v42;
  v90[5] = &v87;
  v90[9] = L"QuantumUnit";
  v90[10] = &v38;
  v90[12] = &v64;
  v90[16] = L"PreemptionQuantumUnit";
  v90[17] = &v36;
  v90[19] = &v67;
  v90[23] = L"EnablePreemption";
  v90[24] = &v44;
  v90[26] = &v79;
  v90[30] = L"HwQueuedRenderPacketGroupLimit";
  v90[31] = &v34;
  v90[33] = &v69;
  v90[37] = L"QueuedPresentLimit";
  v90[38] = &v35;
  v90[40] = &v85;
  v90[44] = L"InitDriverFenceId";
  v90[45] = &v63;
  v90[47] = &v71;
  v90[51] = L"CarryOverUsedQuantum";
  v90[7] = 0LL;
  LODWORD(v90[8]) = 288;
  LODWORD(v90[11]) = 67108868;
  LODWORD(v90[13]) = 4;
  v90[14] = 0LL;
  LODWORD(v90[15]) = 288;
  LODWORD(v90[18]) = 67108868;
  LODWORD(v90[20]) = 4;
  v90[21] = 0LL;
  LODWORD(v90[22]) = 288;
  LODWORD(v90[25]) = 67108868;
  LODWORD(v90[27]) = 4;
  v90[28] = 0LL;
  LODWORD(v90[29]) = 288;
  LODWORD(v90[32]) = 67108868;
  LODWORD(v90[34]) = 4;
  v90[35] = 0LL;
  LODWORD(v90[36]) = 288;
  LODWORD(v90[39]) = 67108868;
  LODWORD(v90[41]) = 4;
  v90[42] = 0LL;
  LODWORD(v90[43]) = 288;
  LODWORD(v90[46]) = 67108868;
  LODWORD(v90[48]) = 4;
  v90[49] = 0LL;
  LODWORD(v90[50]) = 288;
  LODWORD(v90[53]) = 67108868;
  v90[52] = &v58;
  v90[54] = &v81;
  v90[58] = L"EnableFlipOnVSyncHwFlipQueue";
  v90[59] = &v54;
  v90[61] = &v73;
  v90[65] = L"EnableFlipOnVSyncSwFlipQueue";
  v90[66] = &v46;
  v90[68] = &v89;
  v90[72] = L"EnableFlipImmediateSwFlipQueue";
  v90[73] = &v62;
  v90[75] = &v75;
  v90[79] = L"AdjustWorkerThreadPriority";
  v90[80] = &v53;
  v90[82] = &v83;
  v90[86] = L"CountFlipTowardHwLimit";
  v90[87] = &v55;
  v90[89] = &v77;
  v90[93] = L"AllowUserModeToSetFlipLimit";
  v90[94] = &v59;
  v90[96] = &v65;
  v90[100] = L"NumberOfDmaPacketPool";
  v90[101] = &v37;
  v90[103] = &v66;
  v90[107] = L"ProfileLevel";
  LODWORD(v90[55]) = 4;
  v90[56] = 0LL;
  LODWORD(v90[57]) = 288;
  LODWORD(v90[60]) = 67108868;
  LODWORD(v90[62]) = 4;
  v90[63] = 0LL;
  LODWORD(v90[64]) = 288;
  LODWORD(v90[67]) = 67108868;
  LODWORD(v90[69]) = 4;
  v90[70] = 0LL;
  LODWORD(v90[71]) = 288;
  LODWORD(v90[74]) = 67108868;
  LODWORD(v90[76]) = 4;
  v90[77] = 0LL;
  LODWORD(v90[78]) = 288;
  LODWORD(v90[81]) = 67108868;
  LODWORD(v90[83]) = 4;
  v90[84] = 0LL;
  LODWORD(v90[85]) = 288;
  LODWORD(v90[88]) = 67108868;
  LODWORD(v90[90]) = 4;
  v90[91] = 0LL;
  LODWORD(v90[92]) = 288;
  LODWORD(v90[95]) = 67108868;
  LODWORD(v90[97]) = 4;
  v90[98] = 0LL;
  LODWORD(v90[99]) = 288;
  LODWORD(v90[102]) = 67108868;
  LODWORD(v90[104]) = 4;
  v90[105] = 0LL;
  LODWORD(v90[106]) = 288;
  v90[108] = &v40;
  v90[110] = &v68;
  v90[114] = L"VSyncIdleTimeout";
  v90[115] = &v39;
  v90[117] = &v61;
  v90[121] = L"CountPresentTowardHwLimit";
  v90[122] = &v57;
  v90[124] = &v70;
  v90[128] = L"EnableContextDelay";
  v90[129] = &v51;
  v90[131] = &v72;
  v90[135] = L"LogDriverVSyncCallback";
  v90[136] = &v48;
  v90[138] = &v74;
  v90[142] = L"MaximumAllowedPreemptionDelay";
  v90[143] = &v43;
  v90[145] = &v76;
  v90[149] = L"ContextSchedulingPenaltyDelay";
  v90[150] = &v45;
  v90[152] = &v78;
  v90[156] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v90[157] = &v49;
  v90[159] = &v80;
  v90[163] = L"ForceIndependentFlip";
  v90[164] = &v41;
  LODWORD(v90[109]) = 67108868;
  LODWORD(v90[111]) = 4;
  v90[112] = 0LL;
  LODWORD(v90[113]) = 288;
  LODWORD(v90[116]) = 67108868;
  LODWORD(v90[118]) = 4;
  v90[119] = 0LL;
  LODWORD(v90[120]) = 288;
  LODWORD(v90[123]) = 67108868;
  LODWORD(v90[125]) = 4;
  v90[126] = 0LL;
  LODWORD(v90[127]) = 288;
  LODWORD(v90[130]) = 67108868;
  LODWORD(v90[132]) = 4;
  v90[133] = 0LL;
  LODWORD(v90[134]) = 288;
  LODWORD(v90[137]) = 67108868;
  LODWORD(v90[139]) = 4;
  v90[140] = 0LL;
  LODWORD(v90[141]) = 288;
  LODWORD(v90[144]) = 67108868;
  LODWORD(v90[146]) = 4;
  v90[147] = 0LL;
  LODWORD(v90[148]) = 288;
  LODWORD(v90[151]) = 67108868;
  LODWORD(v90[153]) = 4;
  v90[154] = 0LL;
  LODWORD(v90[155]) = 288;
  LODWORD(v90[158]) = 67108868;
  LODWORD(v90[160]) = 4;
  v90[161] = 0LL;
  LODWORD(v90[162]) = 288;
  LODWORD(v90[165]) = 67108868;
  v90[166] = &v82;
  LODWORD(v90[169]) = 288;
  v90[170] = L"YieldPercentage";
  LODWORD(v90[172]) = 67108868;
  v90[171] = &v60;
  v90[173] = &v52;
  v90[177] = L"ForegroundPriorityBoost";
  v90[178] = &v56;
  v90[180] = &v84;
  v90[184] = L"ForceFlipTrueImmediateMode";
  v90[185] = &v50;
  v90[187] = &v86;
  v90[191] = L"MaxYieldInterval";
  v90[192] = &v47;
  LODWORD(v90[176]) = 288;
  LODWORD(v90[179]) = 67108868;
  LODWORD(v90[183]) = 288;
  LODWORD(v90[186]) = 67108868;
  LODWORD(v90[190]) = 288;
  LODWORD(v90[193]) = 67108868;
  v90[194] = &v88;
  LODWORD(v90[167]) = 4;
  v90[168] = 0LL;
  LODWORD(v90[174]) = 4;
  v90[175] = 0LL;
  LODWORD(v90[181]) = 4;
  v90[182] = 0LL;
  LODWORD(v90[188]) = 4;
  v90[189] = 0LL;
  LODWORD(v90[195]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v90, 0LL, 0LL);
  *(_DWORD *)(a1 + 2144) ^= (*(_DWORD *)(a1 + 2144) ^ (2 * (v42 != 0))) & 2;
  v7 = *(_DWORD *)(a1 + 2144) ^ (*(_DWORD *)(a1 + 2144) ^ (4 * (v58 != 0))) & 4;
  v8 = v7 ^ (v7 ^ (v44 != 0)) & 1 ^ ((unsigned __int8)(v7 ^ (v7 ^ (v44 != 0)) & 1) ^ (unsigned __int8)((v54 != 0) << 7)) & 0x80;
  v9 = v8 ^ ((unsigned __int16)v8 ^ ((v46 != 0) << 8)) & 0x100;
  v10 = v9 ^ ((unsigned __int16)v9 ^ ((v62 != 0) << 9)) & 0x200;
  v11 = v10 ^ ((unsigned __int16)v10 ^ ((v48 != 0) << 14)) & 0x4000;
  *(_DWORD *)(a1 + 2144) = v11 ^ (v11 ^ ((v56 != 0) << 16)) & 0x10000;
  if ( v50 <= 2 )
    *(_DWORD *)(a1 + 2160) = v50;
  v12 = v52;
  if ( (unsigned int)(v60 - 1) <= 0x62 )
    v12 = v60;
  v13 = v41 == 0;
  *(_DWORD *)(a1 + 164) = v12;
  v14 = (unsigned int)(10000 * v43);
  *(_BYTE *)(a1 + 47) |= !v13;
  *(_QWORD *)(a1 + 2320) = v14;
  *(_QWORD *)(a1 + 2328) = (unsigned int)(10000 * v45);
  *(_QWORD *)(a1 + 2344) = (unsigned int)(10000 * v47);
  *(_QWORD *)(a1 + 2336) = (unsigned int)(10000 * v49);
  if ( !v51 || (v13 = !TdrIsEnabled(), v15 = 1, v13) )
    v15 = 0;
  v16 = (_QWORD *)(a1 + 2232);
  v17 = 0LL;
  *(_DWORD *)(a1 + 2144) ^= (*(_DWORD *)(a1 + 2144) ^ (v15 << 15)) & 0x8000;
  do
  {
    v18 = 1;
    if ( v38 > 1 )
      v18 = v38;
    v19 = (unsigned int)(v18 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v17));
    v20 = 1;
    if ( v36 > 1 )
      v20 = v36;
    *(v16 - 6) = v19;
    v21 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v17);
    v17 += 4LL;
    *v16++ = (unsigned int)(v20 * v21);
  }
  while ( v17 < 24 );
  HIBYTE(v22) = 0;
  v23 = v39;
  v24 = 1;
  if ( v34 > 1 )
    v24 = v34;
  v25 = v35 <= 1;
  *(_DWORD *)(a1 + 2168) = v24;
  v26 = 0;
  if ( !v25 )
    v3 = v35;
  v13 = v53 == 0;
  *(_DWORD *)(a1 + 2164) = v3;
  LOBYTE(v26) = !v13;
  *(_DWORD *)(a1 + 2032) = v23;
  *(_DWORD *)(a1 + 2144) ^= (*(_DWORD *)(a1 + 2144) ^ (v26 << 10)) & 0x400;
  LOBYTE(v22) = v55 != 0;
  v27 = *(_DWORD *)(a1 + 2144) ^ ((unsigned __int16)*(_DWORD *)(a1 + 2144) ^ (unsigned __int16)(v22 << 11)) & 0x800;
  v28 = v27 ^ ((unsigned __int16)v27 ^ ((v57 != 0) << 12)) & 0x1000;
  v29 = *(DXGADAPTER **)(a1 + 16);
  LOBYTE(v1) = v59 != 0;
  v30 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(v1 << 13)) & 0x2000;
  v31 = v40;
  v25 = v37 <= 0x10;
  *(_DWORD *)(a1 + 2144) = v30;
  if ( !v25 )
    v5 = v37;
  *(_DWORD *)(a1 + 2176) = v5;
  *(_DWORD *)(a1 + 5168) = v31;
  if ( (int)DXGADAPTER::GetDriverVersion(v29) < 1300 )
  {
    if ( v32 >= 4 )
    {
      if ( v32 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 2032) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 2032) = 4;
    }
  }
  result = v63;
  *(_DWORD *)(a1 + 2312) = v63;
  *(_DWORD *)(a1 + 2304) = result;
  *(_DWORD *)(a1 + 2296) = result;
  *(_DWORD *)(a1 + 2288) = result;
  *(_DWORD *)(a1 + 2280) = result;
  return result;
}
