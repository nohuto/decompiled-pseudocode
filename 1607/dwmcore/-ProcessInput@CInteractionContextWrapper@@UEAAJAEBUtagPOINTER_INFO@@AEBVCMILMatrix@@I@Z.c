/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1800BBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180020C40 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A53F0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800A5420 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z @ 0x180112440 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180112530 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  bool *v10; // r8
  const GUID *v11; // r9
  int updated; // r14d
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int64 v23; // rcx
  int v25; // xmm0_4
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm0_4
  int v35; // xmm0_4
  int v36; // xmm0_4
  int v37; // xmm0_4
  int v38; // xmm0_4
  int v39; // xmm0_4
  int v40; // xmm0_4
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+74h] [rbp-8Ch] BYREF
  int v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+7Ch] [rbp-84h] BYREF
  int v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  CInteractionContextWrapper *v62; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v63[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+F0h] [rbp-10h]
  _DWORD v67[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CInteractionContextWrapper **v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  char *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  char *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  int *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  int *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  __int64 *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  char *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  int *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  int *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  int *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  int *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  int *v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  int *v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  int *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  int *v99; // [rsp+230h] [rbp+130h]
  __int64 v100; // [rsp+238h] [rbp+138h]
  int *v101; // [rsp+240h] [rbp+140h]
  __int64 v102; // [rsp+248h] [rbp+148h]
  int *v103; // [rsp+250h] [rbp+150h]
  __int64 v104; // [rsp+258h] [rbp+158h]
  int *v105; // [rsp+260h] [rbp+160h]
  __int64 v106; // [rsp+268h] [rbp+168h]
  int *v107; // [rsp+270h] [rbp+170h]
  __int64 v108; // [rsp+278h] [rbp+178h]
  int *v109; // [rsp+280h] [rbp+180h]
  __int64 v110; // [rsp+288h] [rbp+188h]
  int *v111; // [rsp+290h] [rbp+190h]
  __int64 v112; // [rsp+298h] [rbp+198h]
  int *v113; // [rsp+2A0h] [rbp+1A0h]
  __int64 v114; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v115; // [rsp+2B0h] [rbp+1B0h]
  __int64 v116; // [rsp+2B8h] [rbp+1B8h]
  int *v117; // [rsp+2C0h] [rbp+1C0h]
  __int64 v118; // [rsp+2C8h] [rbp+1C8h]

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  v41 = v8;
  updated = v8;
  *((_DWORD *)this + 79) = a4;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 1);
    if ( *((_DWORD *)a2 + 2) != *((_DWORD *)this + 56) )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 56) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 560),
                           *((_QWORD *)a2 + 10),
                           &v61) )
        v13 = v61;
      else
        v13 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 29) = v13;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 62, (float *)a3) )
    {
      *(_OWORD *)v14 = *(_OWORD *)a3;
      *(_OWORD *)(v14 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v14 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v14 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v14 + 64) = *((_DWORD *)a3 + 16);
      v15 = *(_DWORD *)(v14 + 4);
      v67[0] = *(_DWORD *)v14;
      v16 = *(_DWORD *)(v14 + 16);
      v67[1] = v15;
      v17 = *(_DWORD *)(v14 + 20);
      v67[2] = v16;
      v18 = *(_DWORD *)(v14 + 48);
      v67[3] = v17;
      v19 = *(_DWORD *)(v14 + 52);
      v67[4] = v18;
      v67[5] = v19;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 320),
                  (const struct D2D1::Matrix3x2F *)v67,
                  v10);
      v41 = updated;
    }
  }
  v20 = *((_OWORD *)a2 + 1);
  v63[0] = *(_OWORD *)a2;
  v63[1] = v20;
  v21 = *((_OWORD *)a2 + 3);
  v63[2] = *((_OWORD *)a2 + 2);
  v64 = v21;
  v22 = *((_OWORD *)a2 + 5);
  v65 = *((_OWORD *)a2 + 4);
  v66 = v22;
  if ( updated >= 0 )
  {
    v41 = CInteractionContextTransformHelper::TransformInput(
            (CInteractionContextWrapper *)((char *)this + 320),
            a2,
            (struct tagPOINTER_INFO *)v63);
    updated = v41;
    if ( v41 >= 0 )
    {
      v23 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 30) = *((_QWORD *)a2 + 2);
      updated = ProcessPointerFramesInteractionContext(v23, 1LL, 1LL, v63);
      v41 = updated;
    }
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v25 = *(_DWORD *)a3;
    v69 = &v62;
    v71 = (char *)a2 + 4;
    v73 = (char *)a2 + 8;
    v42 = *((_DWORD *)a2 + 16);
    v75 = &v42;
    v43 = *((_DWORD *)a2 + 14);
    v77 = &v43;
    v44 = *((_DWORD *)a2 + 15);
    v79 = &v44;
    v45 = *((_QWORD *)&v64 + 1);
    v81 = &v45;
    v83 = (char *)&v45 + 4;
    v46 = v25;
    v26 = *((_DWORD *)a3 + 1);
    v85 = &v46;
    v47 = v26;
    v27 = *((_DWORD *)a3 + 2);
    v87 = &v47;
    v48 = v27;
    v28 = *((_DWORD *)a3 + 3);
    v89 = &v48;
    v49 = v28;
    v29 = *((_DWORD *)a3 + 4);
    v91 = &v49;
    v50 = v29;
    v30 = *((_DWORD *)a3 + 5);
    v93 = &v50;
    v51 = v30;
    v31 = *((_DWORD *)a3 + 6);
    v95 = &v51;
    v52 = v31;
    v32 = *((_DWORD *)a3 + 7);
    v97 = &v52;
    v53 = v32;
    v33 = *((_DWORD *)a3 + 8);
    v99 = &v53;
    v54 = v33;
    v34 = *((_DWORD *)a3 + 9);
    v101 = &v54;
    v62 = this;
    v70 = 8LL;
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
    v100 = 4LL;
    v102 = 4LL;
    v55 = v34;
    v35 = *((_DWORD *)a3 + 10);
    v103 = &v55;
    v105 = &v56;
    v107 = &v57;
    v56 = v35;
    v36 = *((_DWORD *)a3 + 11);
    v109 = &v58;
    v57 = v36;
    v37 = *((_DWORD *)a3 + 12);
    v111 = &v59;
    v58 = v37;
    v38 = *((_DWORD *)a3 + 13);
    v113 = &v60;
    v59 = v38;
    v39 = *((_DWORD *)a3 + 14);
    v115 = &v61;
    v60 = v39;
    v40 = *((_DWORD *)a3 + 15);
    v117 = &v41;
    LODWORD(v61) = v40;
    v104 = 4LL;
    v106 = 4LL;
    v108 = 4LL;
    v110 = 4LL;
    v112 = 4LL;
    v114 = 4LL;
    v116 = 4LL;
    v118 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C60EA, (LPCGUID)v10, v11, 0x1Bu, &pData);
    return (unsigned int)v41;
  }
  return (unsigned int)updated;
}
