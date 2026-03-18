/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18016C54C
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18016F2B0 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x18016C9D8 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801889BC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
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
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // r11
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 *v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-88h] BYREF
  int v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v39[2]; // [rsp+90h] [rbp-78h] BYREF
  int v40; // [rsp+98h] [rbp-70h] BYREF
  int v41; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v42[6]; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 **v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  __int64 *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  int *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  __int64 *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  int *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  __int64 v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  __int64 v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  __int64 v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  unsigned __int8 *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  int *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  int *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  int *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  int *v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  _DWORD *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  int *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  int *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  _DWORD *v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v23 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *((_DWORD *)a1 + 98);
    v11 = *a2;
    if ( v10 >= *(_DWORD *)(*a2 + 12LL * v9) && v10 <= *(_DWORD *)(v11 + 12LL * v9 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12LL * v9 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12LL * v9 + 8) < 0 )
        a3[1] = 0;
      v12 = *a2;
      v42[4] = 0;
      v42[3] = 0;
      v42[2] = 0;
      v42[1] = 0;
      v41 = 0;
      v40 = 0;
      v39[1] = 0;
      v39[0] = 0;
      v37 = 0;
      v36[1] = 0;
      v36[0] = 0;
      v35 = 0;
      v42[5] = 1065353216;
      v42[0] = 1065353216;
      v38 = 1065353216;
      v34 = 1065353216;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v34 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v34 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v38 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v38 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v42[0] = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v42[0] = 0;
      v13 = *((_DWORD *)a3 + 3);
      v29 = *(_QWORD *)(a3 + 4);
      LODWORD(v30) = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v29, (const struct D2DVector3 *)&v29, (const struct D2DMatrix *)&v34);
      v14 = v30;
      *(_QWORD *)v15 = v29;
      *(_DWORD *)(v15 + 8) = v14;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 96);
      }
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        if ( (qword_1801EAA90 & 2) == 0 || (v19 = 1, (qword_1801EAA98 & 2) != qword_1801EAA98) )
          v19 = 0;
        if ( v19 )
        {
          v31 = a1;
          v44 = &v31;
          v32 = *a1;
          v46 = &v32;
          v33 = a1[19];
          v48 = &v33;
          v24 = *((_DWORD *)a1 + 97);
          v50 = &v24;
          v25 = v8;
          v54 = &v25;
          v56 = &v23;
          v20 = *a2;
          v45 = 8LL;
          v47 = 8LL;
          v49 = 8LL;
          v21 = v20 + 4LL * (_QWORD)v17;
          v51 = 4LL;
          v52 = a1 + 49;
          v60 = v21 + 4;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v58 = v21;
          v59 = 4LL;
          v61 = 4LL;
          v26 = *(_DWORD *)(v21 + 8);
          v62 = &v26;
          v27 = *a3;
          v64 = &v27;
          v28 = a3[1];
          v66 = &v28;
          v70 = a3 + 8;
          v72 = a3 + 12;
          v74 = &v34;
          v76 = &v35;
          v78 = v36;
          v80 = &v37;
          v82 = &v38;
          v84 = v39;
          v86 = &v40;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v68 = v18;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v88 = &v41;
          v90 = v42;
          v89 = 4LL;
          v91 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C53AF, v16, v17, 0x1Au, &pData);
          v9 = v23;
        }
      }
    }
    v23 = ++v9;
  }
  while ( v8 );
  return v8;
}
