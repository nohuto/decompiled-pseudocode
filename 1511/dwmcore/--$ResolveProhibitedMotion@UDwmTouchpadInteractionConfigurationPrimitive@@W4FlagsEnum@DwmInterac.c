/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180140CB4
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180142B4C (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AxisContainsInteraction@?A0xe8837992@@YA_NAEBUInteractionAxis@@@Z @ 0x180141108 (-AxisContainsInteraction@-A0xe8837992@@YA_NAEBUInteractionAxis@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180157C78 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned __int8 v8; // si
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // r11
  const struct InteractionAxis *v16; // rdx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r11
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v37[2]; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+98h] [rbp-70h] BYREF
  int v39; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v40[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  int v42; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v43[6]; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 **v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  __int64 *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  __int64 *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  __int64 *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  __int64 v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  __int64 v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  int *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  __int64 *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  int *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  __int64 v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  unsigned __int8 *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  int *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  int *v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  int *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  int *v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  _DWORD *v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  int *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  int *v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  _DWORD *v91; // [rsp+258h] [rbp+150h]
  __int64 v92; // [rsp+260h] [rbp+158h]

  if ( *((_DWORD *)a2 + 6)
    && !`anonymous namespace'::AxisContainsInteraction((_anonymous_namespace_ *)a3, (const struct InteractionAxis *)a2) )
  {
    return 0;
  }
  v8 = 1;
  v24 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *((_DWORD *)a1 + 90);
    v11 = *a2;
    if ( v10 >= *(_DWORD *)(*a2 + 12LL * v9) && v10 <= *(_DWORD *)(v11 + 12LL * v9 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12LL * v9 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12LL * v9 + 8) < 0 )
        a3[1] = 0;
      v12 = *a2;
      v43[4] = 0;
      v43[3] = 0;
      v43[2] = 0;
      v43[1] = 0;
      v42 = 0;
      v41 = 0;
      v40[1] = 0;
      v40[0] = 0;
      v38 = 0;
      v37[1] = 0;
      v37[0] = 0;
      v36 = 0;
      v43[5] = 1065353216;
      v43[0] = 1065353216;
      v39 = 1065353216;
      v35 = 1065353216;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v35 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v35 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v39 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v39 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v43[0] = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v43[0] = 0;
      v13 = *((_DWORD *)a3 + 3);
      v27 = *(_QWORD *)(a3 + 4);
      v28 = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v27, (const struct D2DVector3 *)&v27, (const struct D2DMatrix *)&v35);
      v14 = v28;
      *(_QWORD *)v15 = v27;
      *(_DWORD *)(v15 + 8) = v14;
      if ( !`anonymous namespace'::AxisContainsInteraction((_anonymous_namespace_ *)a3, v16) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 88);
      }
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        if ( (qword_18019E950 & 2) == 0 || (v20 = 1, (qword_18019E958 & 2) != qword_18019E958) )
          v20 = 0;
        if ( v20 )
        {
          v32 = a1;
          v45 = &v32;
          v33 = *a1;
          v47 = &v33;
          v34 = a1[17];
          v49 = &v34;
          v29 = *((_DWORD *)a1 + 89);
          v51 = &v29;
          LODWORD(v31) = v8;
          v55 = &v31;
          v57 = &v24;
          v21 = *a2;
          v46 = 8LL;
          v48 = 8LL;
          v50 = 8LL;
          v22 = v21 + 4LL * (_QWORD)v18;
          v52 = 4LL;
          v53 = a1 + 45;
          v61 = v22 + 4;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v59 = v22;
          v60 = 4LL;
          v62 = 4LL;
          v30 = *(_DWORD *)(v22 + 8);
          v63 = &v30;
          LODWORD(v26) = *a3;
          v65 = &v26;
          v25 = a3[1];
          v67 = &v25;
          v71 = a3 + 8;
          v73 = a3 + 12;
          v75 = &v35;
          v77 = &v36;
          v79 = v37;
          v81 = &v38;
          v83 = &v39;
          v85 = v40;
          v87 = &v41;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v69 = v19;
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
          v89 = &v42;
          v91 = v43;
          v90 = 4LL;
          v92 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E259, v17, v18, 0x1Au, &pData);
          v9 = v24;
        }
      }
    }
    v24 = ++v9;
  }
  while ( v8 );
  return v8;
}
