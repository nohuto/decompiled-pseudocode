/*
 * XREFs of ?ReadPagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008EA9C
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void VIDMM_GLOBAL::ReadPagingConfiguration(void)
{
  unsigned int v0; // edx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v2; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v3; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v5; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch] BYREF
  int v19; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+7Ch] [rbp-84h] BYREF
  int v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+84h] [rbp-7Ch] BYREF
  int v23; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h] BYREF
  int v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B8h] [rbp-48h]
  const wchar_t *v32; // [rsp+C0h] [rbp-40h]
  int *v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]
  int *v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+F0h] [rbp-10h]
  const wchar_t *v39; // [rsp+F8h] [rbp-8h]
  unsigned int *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  const wchar_t *v46; // [rsp+130h] [rbp+30h]
  unsigned int *v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+140h] [rbp+40h]
  int *v49; // [rsp+148h] [rbp+48h]
  int v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int v52; // [rsp+160h] [rbp+60h]
  const wchar_t *v53; // [rsp+168h] [rbp+68h]
  unsigned int *v54; // [rsp+170h] [rbp+70h]
  int v55; // [rsp+178h] [rbp+78h]
  int *v56; // [rsp+180h] [rbp+80h]
  int v57; // [rsp+188h] [rbp+88h]
  __int64 v58; // [rsp+190h] [rbp+90h]
  int v59; // [rsp+198h] [rbp+98h]
  const wchar_t *v60; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v61; // [rsp+1A8h] [rbp+A8h]
  int v62; // [rsp+1B0h] [rbp+B0h]
  int *v63; // [rsp+1B8h] [rbp+B8h]
  int v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  int v66; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v67; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v68; // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1E8h] [rbp+E8h]
  int *v70; // [rsp+1F0h] [rbp+F0h]
  int v71; // [rsp+1F8h] [rbp+F8h]
  __int64 v72; // [rsp+200h] [rbp+100h]
  int v73; // [rsp+208h] [rbp+108h]
  const wchar_t *v74; // [rsp+210h] [rbp+110h]
  int *v75; // [rsp+218h] [rbp+118h]
  int v76; // [rsp+220h] [rbp+120h]
  int *v77; // [rsp+228h] [rbp+128h]
  int v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]
  int v80; // [rsp+240h] [rbp+140h]
  const wchar_t *v81; // [rsp+248h] [rbp+148h]
  int *v82; // [rsp+250h] [rbp+150h]
  int v83; // [rsp+258h] [rbp+158h]
  int *v84; // [rsp+260h] [rbp+160h]
  int v85; // [rsp+268h] [rbp+168h]
  __int64 v86; // [rsp+270h] [rbp+170h]
  int v87; // [rsp+278h] [rbp+178h]
  const wchar_t *v88; // [rsp+280h] [rbp+180h]
  __int64 *v89; // [rsp+288h] [rbp+188h]
  int v90; // [rsp+290h] [rbp+190h]
  __int64 *v91; // [rsp+298h] [rbp+198h]
  int v92; // [rsp+2A0h] [rbp+1A0h]
  __int64 v93; // [rsp+2A8h] [rbp+1A8h]
  int v94; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v95; // [rsp+2B8h] [rbp+1B8h]
  int *v96; // [rsp+2C0h] [rbp+1C0h]
  int v97; // [rsp+2C8h] [rbp+1C8h]
  int *v98; // [rsp+2D0h] [rbp+1D0h]
  int v99; // [rsp+2D8h] [rbp+1D8h]
  __int64 v100; // [rsp+2E0h] [rbp+1E0h]
  int v101; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v102; // [rsp+2F0h] [rbp+1F0h]
  unsigned int *v103; // [rsp+2F8h] [rbp+1F8h]
  int v104; // [rsp+300h] [rbp+200h]
  int *v105; // [rsp+308h] [rbp+208h]
  int v106; // [rsp+310h] [rbp+210h]
  __int64 v107; // [rsp+318h] [rbp+218h]
  int v108; // [rsp+320h] [rbp+220h]
  const wchar_t *v109; // [rsp+328h] [rbp+228h]
  int *v110; // [rsp+330h] [rbp+230h]
  int v111; // [rsp+338h] [rbp+238h]
  int *v112; // [rsp+340h] [rbp+240h]
  int v113; // [rsp+348h] [rbp+248h]
  __int64 v114; // [rsp+350h] [rbp+250h]
  int v115; // [rsp+358h] [rbp+258h]
  const wchar_t *v116; // [rsp+360h] [rbp+260h]
  int *v117; // [rsp+368h] [rbp+268h]
  int v118; // [rsp+370h] [rbp+270h]
  int *v119; // [rsp+378h] [rbp+278h]
  int v120; // [rsp+380h] [rbp+280h]
  __int64 v121; // [rsp+388h] [rbp+288h]
  int v122; // [rsp+390h] [rbp+290h]
  const wchar_t *v123; // [rsp+398h] [rbp+298h]
  int *v124; // [rsp+3A0h] [rbp+2A0h]
  int v125; // [rsp+3A8h] [rbp+2A8h]
  int *v126; // [rsp+3B0h] [rbp+2B0h]
  int v127; // [rsp+3B8h] [rbp+2B8h]
  _BYTE v128[56]; // [rsp+3C0h] [rbp+2C0h] BYREF

  v15 = 500;
  v3 = 500;
  v16 = 500;
  v4 = 500;
  v14 = 1;
  v17 = 1000;
  v5 = 1000;
  v18 = 1000;
  v6 = 1000;
  v20 = 48;
  v7 = 48;
  v21 = 5000;
  v8 = 5000;
  v1 = 1;
  v32 = L"DemotionWithinDeviceEnabled";
  v33 = &v1;
  v35 = &v14;
  v39 = L"DeviceSuspendPeriodMin";
  v40 = &v3;
  v42 = &v15;
  v46 = L"DeviceSuspendPeriodMax";
  v47 = &v4;
  v49 = &v16;
  v53 = L"DeviceResumePeriodMin";
  v19 = 50;
  v2 = 50;
  v27 = 0x2000000LL;
  v29 = 0x2000000LL;
  v22 = 50;
  v9 = 50;
  v23 = 1;
  v10 = 1;
  v24 = 1;
  v11 = 1;
  v54 = &v5;
  v28 = 16LL;
  v25 = 0;
  v12 = 0;
  v26 = 0;
  v13 = 0;
  v30 = 0LL;
  v31 = 288;
  v34 = 67108868;
  v36 = 4;
  v37 = 0LL;
  v38 = 288;
  v41 = 67108868;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  v51 = 0LL;
  v52 = 288;
  v55 = 67108868;
  v56 = &v17;
  v60 = L"DeviceResumePeriodMax";
  v61 = &v6;
  v63 = &v18;
  v67 = L"PagingQueueProcessingPeriodTime";
  v68 = &v2;
  v70 = &v19;
  v74 = L"InitialPromotionInterval";
  v75 = &v7;
  v77 = &v20;
  v81 = L"MaximumPromotionInterval";
  v82 = &v8;
  v84 = &v21;
  v88 = L"PromotionTargetSizePerInterval";
  v89 = &v28;
  v91 = &v27;
  v95 = L"PromotionNumberCapPerInterval";
  v96 = &v9;
  v98 = &v22;
  v102 = L"TransferFlushThreshold";
  v103 = &v10;
  v105 = &v23;
  v109 = L"EnableAsyncResidency";
  v110 = &v11;
  v112 = &v24;
  v57 = 4;
  v58 = 0LL;
  v59 = 288;
  v62 = 67108868;
  v64 = 4;
  v65 = 0LL;
  v66 = 288;
  v69 = 67108868;
  v71 = 4;
  v72 = 0LL;
  v73 = 288;
  v76 = 67108868;
  v78 = 4;
  v79 = 0LL;
  v80 = 288;
  v83 = 67108868;
  v85 = 4;
  v86 = 0LL;
  v87 = 288;
  v90 = 184549387;
  v92 = 8;
  v93 = 0LL;
  v94 = 288;
  v97 = 67108868;
  v99 = 4;
  v100 = 0LL;
  v101 = 288;
  v104 = 67108868;
  v106 = 4;
  v107 = 0LL;
  v108 = 288;
  v111 = 67108868;
  v113 = 4;
  v116 = L"ForceUncommitGpuVAOnEvict";
  v117 = &v12;
  v119 = &v25;
  v123 = L"ForceSynchronousEvict";
  v124 = &v13;
  v115 = 288;
  v118 = 67108868;
  v120 = 4;
  v122 = 288;
  v125 = 67108868;
  v127 = 4;
  v126 = &v26;
  v114 = 0LL;
  v121 = 0LL;
  memset(v128, 0, sizeof(v128));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v30, 0LL, 0LL);
  v0 = v2;
  VIDMM_GLOBAL::_Config ^= (VIDMM_GLOBAL::_Config ^ ((v1 != 0) << 6)) & 0x40;
  if ( v2 < 0x12D )
  {
    if ( v2 < 0x10 )
      v0 = 16;
  }
  else
  {
    v0 = 300;
  }
  qword_1C0035390 = 10000LL * v3;
  qword_1C0035398 = 10000LL * v4;
  qword_1C00353A0 = 10000LL * v5;
  qword_1C00353A8 = 10000LL * v6;
  qword_1C00353C8 = v29;
  dword_1C00353D0 = v9;
  qword_1C00353B0 = 10000LL * v0;
  qword_1C00353B8 = (unsigned int)(10000 * v7);
  qword_1C00353F0 = (unsigned __int64)v10 << 20;
  dword_1C0035320 = v11;
  dword_1C00353D4 = v12;
  dword_1C00353D8 = v13;
  qword_1C00353C0 = (unsigned int)(10000 * v8);
}
