/*
 * XREFs of ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008F0DC
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void VIDMM_GLOBAL::ReadTestAndStagingConfiguration(void)
{
  int v0; // eax
  int v1; // ecx
  int v2; // eax
  unsigned int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v5; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+6Ch] [rbp-94h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+88h] [rbp-78h]
  const wchar_t *v22; // [rsp+90h] [rbp-70h]
  unsigned int *v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  int *v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  const wchar_t *v29; // [rsp+C8h] [rbp-38h]
  unsigned int *v30; // [rsp+D0h] [rbp-30h]
  int v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  const wchar_t *v36; // [rsp+100h] [rbp+0h]
  int *v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+110h] [rbp+10h]
  int *v39; // [rsp+118h] [rbp+18h]
  int v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+130h] [rbp+30h]
  const wchar_t *v43; // [rsp+138h] [rbp+38h]
  __int64 *v44; // [rsp+140h] [rbp+40h]
  int v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+158h] [rbp+58h]
  __int64 v48; // [rsp+160h] [rbp+60h]
  int v49; // [rsp+168h] [rbp+68h]
  const wchar_t *v50; // [rsp+170h] [rbp+70h]
  char *v51; // [rsp+178h] [rbp+78h]
  int v52; // [rsp+180h] [rbp+80h]
  int *v53; // [rsp+188h] [rbp+88h]
  int v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  int v56; // [rsp+1A0h] [rbp+A0h]
  const wchar_t *v57; // [rsp+1A8h] [rbp+A8h]
  int *v58; // [rsp+1B0h] [rbp+B0h]
  int v59; // [rsp+1B8h] [rbp+B8h]
  int *v60; // [rsp+1C0h] [rbp+C0h]
  int v61; // [rsp+1C8h] [rbp+C8h]
  __int64 v62; // [rsp+1D0h] [rbp+D0h]
  int v63; // [rsp+1D8h] [rbp+D8h]
  const wchar_t *v64; // [rsp+1E0h] [rbp+E0h]
  unsigned int *v65; // [rsp+1E8h] [rbp+E8h]
  int v66; // [rsp+1F0h] [rbp+F0h]
  int *v67; // [rsp+1F8h] [rbp+F8h]
  int v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int v70; // [rsp+210h] [rbp+110h]
  const wchar_t *v71; // [rsp+218h] [rbp+118h]
  unsigned int *v72; // [rsp+220h] [rbp+120h]
  int v73; // [rsp+228h] [rbp+128h]
  int *v74; // [rsp+230h] [rbp+130h]
  int v75; // [rsp+238h] [rbp+138h]
  __int64 v76; // [rsp+240h] [rbp+140h]
  int v77; // [rsp+248h] [rbp+148h]
  const wchar_t *v78; // [rsp+250h] [rbp+150h]
  int *v79; // [rsp+258h] [rbp+158h]
  int v80; // [rsp+260h] [rbp+160h]
  int *v81; // [rsp+268h] [rbp+168h]
  int v82; // [rsp+270h] [rbp+170h]
  _BYTE v83[56]; // [rsp+278h] [rbp+178h] BYREF

  v11 = 25;
  v3 = 25;
  v13 = 0;
  v7 = 0;
  v12 = 1;
  v15 = 0x400000;
  v17 = 32;
  v4 = 32;
  v19 = -1;
  v10 = -1;
  v22 = L"BudgetThreshold";
  v23 = &v3;
  v25 = &v11;
  v29 = L"PagingQueueFenceIncrement";
  v30 = &v6;
  v32 = &v12;
  v36 = L"RestrictToPreferredSegment";
  v37 = &v7;
  v39 = &v13;
  v43 = L"Use64KPages";
  v44 = &v9;
  v46 = &v14;
  v50 = L"ExpandTo64KBAllocationSizeThreshold";
  v51 = (char *)&v9 + 4;
  v53 = &v15;
  v57 = L"AlwaysDecommitOnOffer";
  v6 = 1;
  v14 = 1;
  v9 = 0x40000000000001LL;
  v16 = 0;
  v8 = 0;
  v18 = 1;
  v5 = 1;
  v20 = 0LL;
  v21 = 288;
  v24 = 67108868;
  v26 = 4;
  v27 = 0LL;
  v28 = 288;
  v31 = 67108868;
  v33 = 4;
  v34 = 0LL;
  v35 = 288;
  v38 = 67108868;
  v40 = 4;
  v41 = 0LL;
  v42 = 288;
  v45 = 67108868;
  v47 = 4;
  v48 = 0LL;
  v49 = 288;
  v52 = 67108868;
  v54 = 4;
  v55 = 0LL;
  v56 = 288;
  v59 = 67108868;
  v58 = &v8;
  v60 = &v16;
  v64 = L"LazyDecommitChunkSizeMB";
  v65 = &v4;
  v67 = &v17;
  v71 = L"DecommitRepurposeMode";
  v72 = &v5;
  v74 = &v18;
  v78 = L"DxgMms2OfferReclaim";
  v79 = &v10;
  v61 = 4;
  v63 = 288;
  v66 = 67108868;
  v68 = 4;
  v70 = 288;
  v73 = 67108868;
  v75 = 4;
  v77 = 288;
  v80 = 67108868;
  v82 = 4;
  v81 = &v19;
  v62 = 0LL;
  v69 = 0LL;
  v76 = 0LL;
  memset(v83, 0, sizeof(v83));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v20, 0LL, 0LL);
  v0 = 100;
  if ( v3 < 0x64 )
    v0 = v3;
  dword_1C0035388 = v0;
  dword_1C003538C = v6;
  if ( v6 <= 0x51EB851 )
  {
    if ( !v6 )
      dword_1C003538C = 1;
  }
  else
  {
    dword_1C003538C = 85899345;
  }
  v1 = v10;
  dword_1C0035400 = v7;
  dword_1C003540C = v8;
  v2 = 512;
  if ( v4 < 0x200 )
    v2 = v4;
  dword_1C0035410 = v2;
  dword_1C0035414 = v5 < 3 ? v5 : 0;
  qword_1C0035404 = (VIDMM_GLOBAL *)v9;
  if ( (unsigned int)(v10 - 3) <= 0xFFFFFFFB )
    v1 = 0;
  dword_1C00353DC = v1;
}
