/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801412EC
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180127BA0 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801435C0 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z @ 0x180005D50 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180140704 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?AxisContainsMotion@?A0xe8837992@@YA_NAEBUInteractionAxis@@@Z @ 0x180141164 (-AxisContainsMotion@-A0xe8837992@@YA_NAEBUInteractionAxis@@@Z.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801428B0 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180142B4C (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _OWORD *a8)
{
  int v8; // eax
  int v10; // ecx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  const GUID *v18; // r8
  const GUID *v19; // r9
  char v20; // r10
  char v21; // r11
  unsigned __int8 v22; // r14
  char v23; // dl
  unsigned __int8 v24; // r10
  unsigned __int8 v25; // r11
  int v26; // edi
  int v27; // eax
  unsigned int v28; // ecx
  __int128 v29; // xmm0
  _DWORD v31[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  int v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+74h] [rbp-8Ch]
  int v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  int v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A4h] [rbp-5Ch] BYREF
  int v49; // [rsp+A8h] [rbp-58h] BYREF
  int v50; // [rsp+ACh] [rbp-54h] BYREF
  int v51; // [rsp+B0h] [rbp-50h] BYREF
  int v52; // [rsp+B4h] [rbp-4Ch] BYREF
  int v53; // [rsp+B8h] [rbp-48h] BYREF
  int v54; // [rsp+BCh] [rbp-44h] BYREF
  int v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v58[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h] BYREF
  int v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+144h] [rbp+44h]
  int v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+14Ch] [rbp+4Ch]
  int v65; // [rsp+150h] [rbp+50h]
  int v66; // [rsp+154h] [rbp+54h]
  int v67; // [rsp+158h] [rbp+58h]
  int v68; // [rsp+15Ch] [rbp+5Ch]
  int v69; // [rsp+160h] [rbp+60h]
  int v70; // [rsp+164h] [rbp+64h]
  int v71; // [rsp+168h] [rbp+68h]
  int v72; // [rsp+16Ch] [rbp+6Ch]
  __int64 v73; // [rsp+170h] [rbp+70h] BYREF
  int v74; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int64 *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  __int64 *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  __int64 *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  int *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  int *v86; // [rsp+1F0h] [rbp+F0h]
  __int64 v87; // [rsp+1F8h] [rbp+F8h]
  int *v88; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  int *v90; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  int *v92; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  int *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  char *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  char *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]
  char *v102; // [rsp+270h] [rbp+170h]
  __int64 v103; // [rsp+278h] [rbp+178h]
  int *v104; // [rsp+280h] [rbp+180h]
  __int64 v105; // [rsp+288h] [rbp+188h]
  int *v106; // [rsp+290h] [rbp+190h]
  __int64 v107; // [rsp+298h] [rbp+198h]
  __int64 v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  __int64 v110; // [rsp+2B0h] [rbp+1B0h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  __int64 v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]

  v8 = *(_DWORD *)(a1 + 352);
  v10 = *(_DWORD *)(a1 + 356);
  v31[0] = v8;
  v74 = 0;
  v12 = 0;
  LODWORD(v59) = 0;
  *(_QWORD *)((char *)&v59 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  HIDWORD(v59) = 0;
  v13 = v10 - 1;
  if ( !v13 )
  {
    v17 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (_BYTE *)a1,
            a2,
            a3,
            a6,
            v31,
            (_anonymous_namespace_ *)&v59,
            (__int64)&v32,
            &v60,
            v58);
LABEL_13:
    v12 = v17;
    if ( v17 < 0 )
      return v12;
    goto LABEL_14;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v17 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (_BYTE *)(a1 + 136),
            a2,
            a3,
            a6,
            v31,
            (_anonymous_namespace_ *)&v59,
            (__int64)&v32,
            &v60,
            v58);
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = *(_DWORD *)(a1 + 272) == -1;
    goto LABEL_6;
  }
  if ( v15 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 276) == -1;
LABEL_6:
    if ( v16 )
    {
      v31[0] = 2;
      LOWORD(v59) = 257;
    }
    else
    {
      v31[0] = 3;
    }
    v45 = 0;
    v44 = 0;
    v43 = 0;
    v42 = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v71 = 0;
    v70 = 0;
    v69 = 0;
    v68 = 0;
    v66 = 0;
    v65 = 0;
    v64 = 0;
    v63 = 0;
    v61 = 0;
    v46 = 1065353216;
    v41 = 1065353216;
    v36 = 1065353216;
    v32 = 1065353216LL;
    v72 = 1065353216;
    v67 = 1065353216;
    v62 = 1065353216;
    v60 = 0x3F800000uLL;
  }
LABEL_14:
  if ( (unsigned __int8)CInteractionProcessor::ResolveProhibitedMotion(a1, a5, &v59, v31)
    && CInteractionProcessor::ResolveMustHandleMotion(
         (CInteractionProcessor *)a1,
         (const struct D2DMatrix *)&v60,
         (const struct D2DMatrix *)v58,
         a4,
         (struct InteractionAxis *)&v59,
         (enum InteractionState *)v31) )
  {
    v20 = v59;
    v21 = BYTE1(v59);
    if ( *(_BYTE *)(a1 + 624) )
      v20 = 1;
    v16 = *(_BYTE *)(a1 + 625) == 0;
    v22 = 1;
    LOBYTE(v59) = v20;
    if ( !v16 )
      v21 = 1;
    BYTE1(v59) = v21;
    if ( `anonymous namespace'::AxisContainsMotion((_anonymous_namespace_ *)&v59, (const struct InteractionAxis *)1) )
      *(_BYTE *)(a1 + 364) |= v23;
    if ( v24 || v25 )
      *(_BYTE *)(a1 + 364) |= 2u;
  }
  else
  {
    v25 = BYTE1(v59);
    v22 = 0;
    v24 = v59;
  }
  v26 = v31[0];
  if ( v31[0] == 3 && (*(_BYTE *)(a1 + 640) & 2) != 0 )
  {
    LOBYTE(v27) = CInteractionProcessor::SupportsPointerType(a1, *(_DWORD *)(a1 + 356), 0, 0);
    if ( v27 )
      v26 = 4;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v28 = *(unsigned __int8 *)(a1 + 364);
    v76 = &v56;
    v57 = *(_QWORD *)a1;
    v78 = &v57;
    v73 = *(_QWORD *)(a1 + 136);
    v80 = &v73;
    v31[0] = *(_DWORD *)(a1 + 356);
    v82 = (__int64 *)v31;
    v51 = *(_DWORD *)(a1 + 352);
    v84 = &v51;
    v86 = &v52;
    v55 = v28 & 1;
    v56 = a1;
    v88 = &v55;
    v90 = &v50;
    v54 = v22;
    v92 = &v54;
    v48 = v24;
    v94 = &v48;
    v49 = v25;
    v96 = &v49;
    v98 = (char *)&v59 + 4;
    v100 = (char *)&v59 + 8;
    v102 = (char *)&v59 + 12;
    v47 = *(unsigned __int8 *)(a1 + 624);
    v104 = &v47;
    v53 = *(unsigned __int8 *)(a1 + 625);
    v106 = &v53;
    v108 = a1 + 628;
    v110 = a1 + 632;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 4LL;
    v85 = 4LL;
    v52 = v26;
    v87 = 4LL;
    v89 = 4LL;
    v50 = (v28 >> 1) & 1;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 4LL;
    v105 = 4LL;
    v107 = 4LL;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 4LL;
    v112 = a1 + 636;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E599, v18, v19, 0x15u, &pData);
  }
  v29 = v59;
  *(_DWORD *)(a1 + 352) = v26;
  *a7 = v26;
  *a8 = v29;
  return v12;
}
