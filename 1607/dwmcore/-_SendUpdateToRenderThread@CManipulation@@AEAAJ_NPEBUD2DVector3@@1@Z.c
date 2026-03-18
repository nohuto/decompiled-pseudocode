/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z @ 0x1801461C0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801464A0 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001ADC0 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??DD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180110918 (--DD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801452A0 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  _OWORD *v5; // rax
  _OWORD *v6; // r10
  unsigned int v7; // ecx
  struct IMessageCallSendHost *v8; // rbx
  int ManipulationManager; // eax
  unsigned int v10; // edi
  CManipulationManager *v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // eax
  CManipulationManager *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+110h] [rbp+10h]
  _BYTE v44[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v45[64]; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD *v47; // [rsp+1C0h] [rbp+C0h]
  __int64 v48; // [rsp+1C8h] [rbp+C8h]
  char *v49; // [rsp+1D0h] [rbp+D0h]
  __int64 v50; // [rsp+1D8h] [rbp+D8h]
  char *v51; // [rsp+1E0h] [rbp+E0h]
  __int64 v52; // [rsp+1E8h] [rbp+E8h]
  char *v53; // [rsp+1F0h] [rbp+F0h]
  __int64 v54; // [rsp+1F8h] [rbp+F8h]
  char *v55; // [rsp+200h] [rbp+100h]
  __int64 v56; // [rsp+208h] [rbp+108h]
  char *v57; // [rsp+210h] [rbp+110h]
  __int64 v58; // [rsp+218h] [rbp+118h]
  char *v59; // [rsp+220h] [rbp+120h]
  __int64 v60; // [rsp+228h] [rbp+128h]
  char *v61; // [rsp+230h] [rbp+130h]
  __int64 v62; // [rsp+238h] [rbp+138h]
  char *v63; // [rsp+240h] [rbp+140h]
  __int64 v64; // [rsp+248h] [rbp+148h]
  char *v65; // [rsp+250h] [rbp+150h]
  __int64 v66; // [rsp+258h] [rbp+158h]
  char *v67; // [rsp+260h] [rbp+160h]
  __int64 v68; // [rsp+268h] [rbp+168h]
  char *v69; // [rsp+270h] [rbp+170h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  char *v71; // [rsp+280h] [rbp+180h]
  __int64 v72; // [rsp+288h] [rbp+188h]
  char *v73; // [rsp+290h] [rbp+190h]
  __int64 v74; // [rsp+298h] [rbp+198h]
  char *v75; // [rsp+2A0h] [rbp+1A0h]
  __int64 v76; // [rsp+2A8h] [rbp+1A8h]
  char *v77; // [rsp+2B0h] [rbp+1B0h]
  __int64 v78; // [rsp+2B8h] [rbp+1B8h]
  char *v79; // [rsp+2C0h] [rbp+1C0h]
  __int64 v80; // [rsp+2C8h] [rbp+1C8h]
  char *v81; // [rsp+2D0h] [rbp+1D0h]
  __int64 v82; // [rsp+2D8h] [rbp+1D8h]
  char *v83; // [rsp+2E0h] [rbp+1E0h]
  __int64 v84; // [rsp+2E8h] [rbp+1E8h]
  char *v85; // [rsp+2F0h] [rbp+1F0h]
  __int64 v86; // [rsp+2F8h] [rbp+1F8h]
  char *v87; // [rsp+300h] [rbp+200h]
  __int64 v88; // [rsp+308h] [rbp+208h]
  char *v89; // [rsp+310h] [rbp+210h]
  __int64 v90; // [rsp+318h] [rbp+218h]
  char *v91; // [rsp+320h] [rbp+220h]
  __int64 v92; // [rsp+328h] [rbp+228h]
  char *v93; // [rsp+330h] [rbp+230h]
  __int64 v94; // [rsp+338h] [rbp+238h]
  char *v95; // [rsp+340h] [rbp+240h]
  __int64 v96; // [rsp+348h] [rbp+248h]
  char *v97; // [rsp+350h] [rbp+250h]
  __int64 v98; // [rsp+358h] [rbp+258h]
  char *v99; // [rsp+360h] [rbp+260h]
  __int64 v100; // [rsp+368h] [rbp+268h]
  char *v101; // [rsp+370h] [rbp+270h]
  __int64 v102; // [rsp+378h] [rbp+278h]
  char *v103; // [rsp+380h] [rbp+280h]
  __int64 v104; // [rsp+388h] [rbp+288h]
  char *v105; // [rsp+390h] [rbp+290h]
  __int64 v106; // [rsp+398h] [rbp+298h]
  char *v107; // [rsp+3A0h] [rbp+2A0h]
  __int64 v108; // [rsp+3A8h] [rbp+2A8h]
  int *v109; // [rsp+3B0h] [rbp+2B0h]
  __int64 v110; // [rsp+3B8h] [rbp+2B8h]
  int *v111; // [rsp+3C0h] [rbp+2C0h]
  __int64 v112; // [rsp+3C8h] [rbp+2C8h]
  int *v113; // [rsp+3D0h] [rbp+2D0h]
  __int64 v114; // [rsp+3D8h] [rbp+2D8h]
  int *v115; // [rsp+3E0h] [rbp+2E0h]
  __int64 v116; // [rsp+3E8h] [rbp+2E8h]
  int *v117; // [rsp+3F0h] [rbp+2F0h]
  __int64 v118; // [rsp+3F8h] [rbp+2F8h]
  __int64 *v119; // [rsp+400h] [rbp+300h]
  __int64 v120; // [rsp+408h] [rbp+308h]
  CManipulationManager **v121; // [rsp+410h] [rbp+310h]
  __int64 v122; // [rsp+418h] [rbp+318h]
  struct IMessageCallSendHost **v123; // [rsp+420h] [rbp+320h]
  __int64 v124; // [rsp+428h] [rbp+328h]

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 148),
      (struct D2DMatrix *)v44);
    v5 = (_OWORD *)D2DMatrix::operator*(
                     (CManipulation *)((char *)this + 160),
                     (struct D2DMatrix *)v45,
                     (const struct D2DMatrix *)v44);
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v33[0] = this;
    v47 = v33;
    v49 = (char *)this + 120;
    v51 = (char *)this + 124;
    v53 = (char *)this + 128;
    v55 = (char *)this + 132;
    v57 = (char *)this + 136;
    v59 = (char *)this + 140;
    v61 = (char *)this + 144;
    v63 = (char *)this + 224;
    v65 = (char *)this + 228;
    v67 = (char *)this + 232;
    v69 = (char *)this + 236;
    v71 = (char *)this + 240;
    v73 = (char *)this + 244;
    v75 = (char *)this + 248;
    v77 = (char *)this + 160;
    v79 = (char *)this + 164;
    v81 = (char *)this + 168;
    v83 = (char *)this + 172;
    v85 = (char *)this + 176;
    v87 = (char *)this + 180;
    v89 = (char *)this + 184;
    v91 = (char *)this + 188;
    v93 = (char *)this + 192;
    v95 = (char *)this + 196;
    v97 = (char *)this + 200;
    v99 = (char *)this + 204;
    v48 = 8LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v7 = *((unsigned __int8 *)this + 264);
    v101 = (char *)this + 208;
    v103 = (char *)this + 212;
    v105 = (char *)this + 216;
    v107 = (char *)this + 220;
    v27 = *((_DWORD *)this + 63);
    v109 = &v27;
    v100 = 4LL;
    v28 = v7 & 1;
    v111 = &v28;
    v102 = 4LL;
    v29 = (v7 >> 1) & 1;
    v113 = &v29;
    v104 = 4LL;
    v30 = (v7 >> 2) & 1;
    v115 = &v30;
    v31 = *((_DWORD *)this + 64);
    v117 = &v31;
    LODWORD(v32) = (v7 >> 3) & 1;
    v106 = 4LL;
    v119 = &v32;
    v121 = &v25;
    LODWORD(v26) = *((_DWORD *)this + 105);
    v123 = &v26;
    v108 = 4LL;
    v110 = 4LL;
    v112 = 4LL;
    v114 = 4LL;
    v116 = 4LL;
    v118 = 4LL;
    v120 = 4LL;
    LODWORD(v25) = (v7 >> 4) & 1;
    v122 = 4LL;
    v124 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3CB8, (LPCGUID)a3, (LPCGUID)a4, 0x29u, &pData);
  }
  v8 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v25);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v25);
  v10 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x112u);
  }
  else
  {
    v11 = v25;
    v12 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v25, &v26);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x114u);
      goto LABEL_15;
    }
    v13 = *((unsigned int *)v11 + 88);
    if ( !(_DWORD)v13 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x117u);
LABEL_15:
      v8 = v26;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
    v14 = *(_OWORD *)((char *)this + 120);
    v15 = *(_OWORD *)((char *)this + 136);
    v32 = v13;
    v8 = v26;
    v16 = *((_DWORD *)this + 66);
    v34 = v14;
    v17 = *(_OWORD *)((char *)this + 152);
    v33[0] = this;
    v35 = v15;
    v18 = *(_OWORD *)((char *)this + 168);
    v36 = v17;
    v19 = *(_OWORD *)((char *)this + 184);
    v37 = v18;
    v20 = *(_OWORD *)((char *)this + 200);
    v38 = v19;
    v21 = *(_OWORD *)((char *)this + 216);
    v39 = v20;
    v22 = *(_OWORD *)((char *)this + 248);
    v40 = v21;
    v41 = *(_OWORD *)((char *)this + 232);
    v42 = v22;
    v43 = v16;
    v23 = CoreUICallSend(v26, &v32, 1LL, 4LL, 0, &unk_1801AD3AE, (unsigned int)v33);
    v10 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x120u);
    else
      SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 512LL) + 96LL));
  }
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v25);
  return v10;
}
