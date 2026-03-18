/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012CEC0
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E6FC (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     AxisContainsInteraction @ 0x18012D33C (AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801497DC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        float *a3,
        _DWORD *a4)
{
  unsigned int v5; // edx
  unsigned __int8 v8; // si
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // xmm1_4
  int v14; // xmm1_4
  _DWORD *v15; // r11
  char v16; // al
  const GUID *v17; // r9
  __int64 v18; // r11
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h]
  int v26; // [rsp+48h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v32; // [rsp+68h] [rbp-A0h]
  __int64 *v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v41[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v44[6]; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 **v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  __int64 *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  int *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  __int64 *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  __int64 *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  int *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  __int64 v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  __int64 v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  __int64 v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  unsigned __int8 *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  int *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  int *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  int *v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  int *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  _DWORD *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  int *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  int *v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  _DWORD *v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]

  v32 = a4;
  v5 = 0;
  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)AxisContainsInteraction(a3) )
    return v5;
  v8 = 1;
  v23 = v5;
  v9 = v5;
  do
  {
    if ( v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *((_DWORD *)a1 + 90);
    v11 = *a2;
    if ( v10 >= *(_DWORD *)(*a2 + 12LL * v9) && v10 <= *(_DWORD *)(v11 + 12LL * v9 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12LL * v9 + 8) & 0x40) != 0 )
        *(_BYTE *)a3 = v5;
      if ( *(char *)(*a2 + 12LL * v9 + 8) < 0 )
        *((_BYTE *)a3 + 1) = v5;
      v12 = *a2;
      v44[4] = 0;
      v44[3] = 0;
      v44[2] = 0;
      v44[1] = 0;
      v43 = 0;
      v42 = 0;
      v41[1] = 0;
      v41[0] = 0;
      v39 = 0;
      v38[1] = 0;
      v38[0] = 0;
      v37 = 0;
      v44[5] = 1065353216;
      v44[0] = 1065353216;
      v40 = 1065353216;
      v36 = 1065353216;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 1) != 0 && a3[1] > 0.0 )
        v36 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 2) != 0 && a3[1] < 0.0 )
        v36 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 4) != 0 && a3[2] > 0.0 )
        v40 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 8) != 0 && a3[2] < 0.0 )
        v40 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x10) != 0 && a3[3] < 0.0 )
        v44[0] = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x20) != 0 && a3[3] > 0.0 )
        v44[0] = 0;
      v13 = *((_DWORD *)a3 + 2);
      v24 = *((_DWORD *)a3 + 1);
      v26 = *((_DWORD *)a3 + 3);
      v25 = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v24, (const struct D2DVector3 *)&v24, (const struct D2DMatrix *)&v36);
      v14 = v25;
      *v15 = v24;
      *((_DWORD *)a3 + 3) = v26;
      *((_DWORD *)a3 + 2) = v14;
      v16 = AxisContainsInteraction(a3);
      LOBYTE(v5) = 0;
      if ( !v16 )
      {
        v8 = 0;
        *v32 = *((_DWORD *)a1 + 88);
      }
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        if ( (qword_180190AC0 & 2) == 0 || (v19 = 1, (qword_180190AC8 & 2) != qword_180190AC8) )
          v19 = 0;
        if ( v19 )
        {
          v33 = a1;
          v46 = &v33;
          v34 = *a1;
          v48 = &v34;
          v35 = a1[17];
          v50 = &v35;
          v30 = *((_DWORD *)a1 + 89);
          v52 = &v30;
          LODWORD(v31) = v8;
          v56 = &v31;
          v58 = &v23;
          v20 = *a2;
          v47 = 8LL;
          v49 = 8LL;
          v51 = 8LL;
          v21 = v20 + 4LL * (_QWORD)v17;
          v53 = 4LL;
          v54 = a1 + 45;
          v62 = v21 + 4;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v60 = v21;
          v61 = 4LL;
          v63 = 4LL;
          v27 = *(_DWORD *)(v21 + 8);
          v64 = &v27;
          v28 = *(unsigned __int8 *)a3;
          v66 = &v28;
          v29 = *((unsigned __int8 *)a3 + 1);
          v68 = &v29;
          v76 = &v36;
          v78 = &v37;
          v80 = v38;
          v82 = &v39;
          v84 = &v40;
          v86 = v41;
          v88 = &v42;
          v90 = &v43;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v70 = v18;
          v71 = 4LL;
          v72 = (unsigned __int8 *)(a3 + 2);
          v73 = 4LL;
          v74 = (unsigned __int8 *)(a3 + 3);
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v93 = 4LL;
          v92 = v44;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F03F, (LPCGUID)4, v17, 0x1Au, &pData);
          v9 = v23;
          LOBYTE(v5) = 0;
        }
      }
    }
    v23 = ++v9;
  }
  while ( v8 );
  return v8;
}
