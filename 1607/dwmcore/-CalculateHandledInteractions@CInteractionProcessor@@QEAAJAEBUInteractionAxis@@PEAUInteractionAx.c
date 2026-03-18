/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18016CD8C
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801451D0 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180170BF0 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCFC (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U-$TMILFlagsEnum@W4FlagsEnum@DwmIn.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18016BFA8 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18016F01C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18016F2B0 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        __int64 a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  unsigned int v10; // r12d
  struct _D3DMATRIX *v11; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  __int64 v13; // r8
  _BYTE *v14; // r9
  __int64 v15; // r10
  int v16; // ecx
  __int128 v17; // xmm1
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  const GUID *v23; // r9
  unsigned __int8 v24; // r13
  unsigned __int8 v25; // r14
  unsigned __int8 v26; // r15
  int v27; // esi
  unsigned int v28; // ecx
  int v29; // eax
  _DWORD *v30; // rax
  __int128 v31; // xmm0
  _DWORD v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+A4h] [rbp-5Ch] BYREF
  int v37; // [rsp+A8h] [rbp-58h] BYREF
  int v38; // [rsp+ACh] [rbp-54h] BYREF
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+B4h] [rbp-4Ch] BYREF
  int v41; // [rsp+B8h] [rbp-48h] BYREF
  int v42; // [rsp+BCh] [rbp-44h] BYREF
  int v43; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+C4h] [rbp-3Ch] BYREF
  int v45; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h]
  _OWORD *v50; // [rsp+F0h] [rbp-10h]
  struct _D3DMATRIX v51; // [rsp+100h] [rbp+0h] BYREF
  __int128 v52; // [rsp+140h] [rbp+40h] BYREF
  __int128 v53; // [rsp+150h] [rbp+50h] BYREF
  __int128 v54; // [rsp+160h] [rbp+60h]
  __int128 v55; // [rsp+170h] [rbp+70h]
  __int128 v56; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  CInteractionProcessor **v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  int *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  int *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  int *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  int *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  int *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  int *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  int *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  char *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  char *v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  char *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  int *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  int *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  char *v94; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  char *v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  char *v98; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h]

  v49 = a7;
  v50 = a8;
  v10 = 0;
  v33[0] = *((_DWORD *)this + 96);
  v52 = 0uLL;
  v34 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v51);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v11, &v51);
  v16 = *((_DWORD *)this + 97);
  v53 = *(_OWORD *)&D3DMatrix->_11;
  v54 = *(_OWORD *)&D3DMatrix->_21;
  v55 = *(_OWORD *)&D3DMatrix->_31;
  v17 = *(_OWORD *)&D3DMatrix->_41;
  v51 = (struct _D3DMATRIX)zmmword_1801C0740;
  v56 = v17;
  v18 = v16 - 1;
  if ( !v18 )
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            v13,
            v14,
            v15,
            v33,
            &v52,
            (__int64)&v34,
            (__int64)&v53,
            (__int64)&v51);
LABEL_13:
    v10 = v22;
    if ( v22 < 0 )
      return v10;
    goto LABEL_14;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (_BYTE *)this + 152,
            v13,
            v14,
            v15,
            v33,
            &v52,
            (__int64)&v34,
            (__int64)&v53,
            (__int64)&v51);
    goto LABEL_13;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v21 = *((_DWORD *)this + 76) == -1;
    goto LABEL_6;
  }
  if ( v20 == 1 )
  {
    v21 = *((_DWORD *)this + 77) == -1;
LABEL_6:
    if ( v21 )
    {
      v33[0] = 2;
      LOWORD(v52) = 257;
    }
    else
    {
      v33[0] = 3;
    }
    *(_QWORD *)&v34._42 = 0LL;
    v34._41 = 0.0;
    *(_QWORD *)&v34._31 = 0LL;
    *(_OWORD *)&v34._21 = 0x3F80000000000000uLL;
    *(_QWORD *)((char *)&v56 + 4) = 0LL;
    LODWORD(v56) = 0;
    *(_QWORD *)&v55 = 0LL;
    v54 = 0x3F80000000000000uLL;
    v34._44 = 1.0;
    *(_QWORD *)&v34._33 = 1065353216LL;
    *(_OWORD *)&v34._11 = 0x3F800000uLL;
    HIDWORD(v56) = 1065353216;
    *((_QWORD *)&v55 + 1) = 1065353216LL;
    v53 = 0x3F800000uLL;
  }
LABEL_14:
  if ( (unsigned __int8)CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v52, v33)
    && CInteractionProcessor::ResolveMustHandleMotion(
         this,
         (const struct D2DMatrix *)&v53,
         (const struct D2DMatrix *)&v51,
         a4,
         (struct InteractionAxis *)&v52,
         (enum InteractionState *)v33) )
  {
    v24 = 1;
    v25 = v52;
    if ( *((_BYTE *)this + 840) )
      v25 = 1;
    v26 = BYTE1(v52);
    if ( *((_BYTE *)this + 841) )
      v26 = 1;
    LOBYTE(v52) = v25;
    BYTE1(v52) = v26;
    if ( *((float *)&v52 + 1) != 0.0 )
      *((_BYTE *)this + 408) |= 1u;
    if ( *((float *)&v52 + 2) != 0.0 )
      *((_BYTE *)this + 408) |= 2u;
    if ( *((float *)&v52 + 3) != 0.0 )
      *((_BYTE *)this + 408) |= 4u;
    if ( v25 || v26 )
      *((_BYTE *)this + 408) |= 8u;
  }
  else
  {
    v26 = BYTE1(v52);
    v24 = 0;
    v25 = v52;
  }
  v27 = v33[0];
  if ( v33[0] == 3
    && (*((_BYTE *)this + 856) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType((__int64)this, *((_DWORD *)this + 97), 0LL, 0) )
  {
    v27 = 4;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v28 = *((unsigned __int8 *)this + 408);
    v58 = &v46;
    v47 = *(_QWORD *)this;
    v60 = &v47;
    v48 = *((_QWORD *)this + 19);
    v62 = &v48;
    v33[0] = *((_DWORD *)this + 97);
    v64 = v33;
    v35 = *((_DWORD *)this + 96);
    v66 = &v35;
    v68 = &v36;
    v46 = this;
    v37 = v28 & 1;
    v70 = &v37;
    v59 = 8LL;
    v38 = (v28 >> 1) & 1;
    v72 = &v38;
    v39 = (v28 >> 2) & 1;
    v61 = 8LL;
    v74 = &v39;
    v76 = &v40;
    v41 = v24;
    v78 = &v41;
    v42 = v25;
    v80 = &v42;
    v43 = v26;
    v82 = &v43;
    v84 = (char *)&v52 + 4;
    v86 = (char *)&v52 + 8;
    v88 = (char *)&v52 + 12;
    v29 = *((unsigned __int8 *)this + 840);
    v63 = 8LL;
    v65 = 4LL;
    v67 = 4LL;
    v36 = v27;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v40 = (v28 >> 3) & 1;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v44 = v29;
    v90 = &v44;
    v45 = *((unsigned __int8 *)this + 841);
    v92 = &v45;
    v94 = (char *)this + 844;
    v96 = (char *)this + 848;
    v98 = (char *)this + 852;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5842, (LPCGUID)4, v23, 0x17u, &pData);
  }
  v30 = (_DWORD *)v49;
  v31 = v52;
  *((_DWORD *)this + 96) = v27;
  *v30 = v27;
  *v50 = v31;
  return v10;
}
