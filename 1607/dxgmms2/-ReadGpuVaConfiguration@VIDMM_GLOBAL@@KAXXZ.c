/*
 * XREFs of ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008E348
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void VIDMM_GLOBAL::ReadGpuVaConfiguration(void)
{
  int v0; // eax
  int v1; // ecx
  int v2; // ecx
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+78h] [rbp-88h]
  const wchar_t *v21; // [rsp+80h] [rbp-80h]
  int *v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  int *v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp-50h]
  const wchar_t *v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  const wchar_t *v35; // [rsp+F0h] [rbp-10h]
  int *v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+100h] [rbp+0h]
  int *v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+120h] [rbp+20h]
  const wchar_t *v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  int v46; // [rsp+148h] [rbp+48h]
  __int64 v47; // [rsp+150h] [rbp+50h]
  int v48; // [rsp+158h] [rbp+58h]
  const wchar_t *v49; // [rsp+160h] [rbp+60h]
  int *v50; // [rsp+168h] [rbp+68h]
  int v51; // [rsp+170h] [rbp+70h]
  int *v52; // [rsp+178h] [rbp+78h]
  int v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int v55; // [rsp+190h] [rbp+90h]
  const wchar_t *v56; // [rsp+198h] [rbp+98h]
  int *v57; // [rsp+1A0h] [rbp+A0h]
  int v58; // [rsp+1A8h] [rbp+A8h]
  int *v59; // [rsp+1B0h] [rbp+B0h]
  int v60; // [rsp+1B8h] [rbp+B8h]
  __int64 v61; // [rsp+1C0h] [rbp+C0h]
  int v62; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v63; // [rsp+1D0h] [rbp+D0h]
  int *v64; // [rsp+1D8h] [rbp+D8h]
  int v65; // [rsp+1E0h] [rbp+E0h]
  int *v66; // [rsp+1E8h] [rbp+E8h]
  int v67; // [rsp+1F0h] [rbp+F0h]
  __int64 v68; // [rsp+1F8h] [rbp+F8h]
  int v69; // [rsp+200h] [rbp+100h]
  const wchar_t *v70; // [rsp+208h] [rbp+108h]
  int *v71; // [rsp+210h] [rbp+110h]
  int v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  int v74; // [rsp+228h] [rbp+128h]
  _BYTE v75[56]; // [rsp+230h] [rbp+130h] BYREF

  v12 = 0;
  v4 = 0;
  v13 = 0;
  v15 = 30;
  v7 = 30;
  v5 = 0;
  v14 = 0;
  v6 = 0;
  if ( (unsigned __int64)qword_1C0035148 > 0x53333333 && g_IsInternalReleaseOrDbg )
  {
    v0 = 4096;
    v3 = 4096;
  }
  else
  {
    v0 = 0;
    v3 = 0;
  }
  v8 = v0;
  v17 = 0;
  v10 = 0;
  v18 = 0;
  v16 = 0x10000;
  v9 = 0x10000;
  v21 = L"DisableUncommitGpuVaInPagingProcess";
  v22 = &v4;
  v24 = &v12;
  v28 = L"EnableZeroFlagInPde";
  v29 = &v5;
  v31 = &v13;
  v35 = L"DisableMakeIoMmuAddressValid";
  v36 = &v6;
  v38 = &v14;
  v42 = L"PagingProcessVaSpaceBitCount";
  v43 = &v7;
  v45 = &v15;
  v49 = L"GpuVaPagingHistorySize";
  v50 = &v8;
  v52 = &v3;
  v56 = L"GpuVaFirstValidAddress";
  v57 = &v9;
  v59 = &v16;
  v63 = L"EnableGpuVaGuardPages";
  v64 = &v10;
  v66 = &v17;
  v11 = 0;
  v19 = 0LL;
  v20 = 288;
  v23 = 67108868;
  v25 = 4;
  v26 = 0LL;
  v27 = 288;
  v30 = 67108868;
  v32 = 4;
  v33 = 0LL;
  v34 = 288;
  v37 = 67108868;
  v39 = 4;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v62 = 288;
  v65 = 67108868;
  v67 = 4;
  v69 = 288;
  v70 = L"AllocateGpuVaFromHighAddresses";
  v72 = 67108868;
  v71 = &v11;
  v74 = 4;
  v73 = &v18;
  v68 = 0LL;
  memset(v75, 0, sizeof(v75));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v19, 0LL, 0LL);
  v1 = (VIDMM_GLOBAL::_Config ^ (unsigned __int8)((v4 != 0) << 7)) & 0x80 ^ VIDMM_GLOBAL::_Config;
  v2 = ((unsigned __int16)v1 ^ ((v5 != 0) << 8)) & 0x100 ^ v1;
  dword_1C0035310 = v7;
  dword_1C0035314 = v8;
  dword_1C0035318 = 32 * v8;
  VIDMM_GLOBAL::_Config = ((unsigned __int8)v2 ^ (unsigned __int8)(32 * (v6 != 0))) & 0x20 ^ v2;
  dword_1C003531C = v9 & 0xFFFFF000;
  dword_1C00353E0 = v10;
  dword_1C00353E4 = v11;
}
