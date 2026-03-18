/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012D520
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18010CDF0 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012FCE0 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012CA18 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     AxisContainsMotion @ 0x18012D398 (AxisContainsMotion.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NPEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E4E4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NPEAUInteractionAxisGroup@@PEAUInteractionA.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E6FC (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _OWORD *a8)
{
  int v9; // r14d
  unsigned __int8 v11; // di
  int v12; // eax
  int v13; // eax
  char v14; // al
  const GUID *v15; // r8
  const GUID *v16; // r9
  bool MustHandleMotion; // al
  char v18; // dl
  char v19; // r8
  bool v20; // zf
  unsigned __int8 v21; // dl
  int v22; // esi
  __int128 v23; // xmm0
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  CInteractionProcessor *v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  LPCGUID pActivityId[2]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  CInteractionProcessor **v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  char *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  LPCGUID *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  char *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  int *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  int *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  char *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  char *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  char *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]

  v9 = 0;
  v25 = *((_DWORD *)this + 88);
  v11 = 1;
  pActivityId[0] = 0LL;
  pActivityId[1] = 0LL;
  v12 = *((_DWORD *)this + 89);
  switch ( v12 )
  {
    case 1:
      v13 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (char *)this,
              a2,
              a3,
              a6,
              &v25,
              pActivityId);
LABEL_9:
      v9 = v13;
      goto LABEL_13;
    case 3:
      if ( *((_DWORD *)this + 68) == -1 )
      {
LABEL_5:
        v25 = 2;
        LOWORD(pActivityId[0]) = 257;
        break;
      }
      v25 = 3;
      break;
    case 2:
      v13 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (char *)this + 136,
              a2,
              a3,
              a6,
              &v25,
              pActivityId);
      goto LABEL_9;
    case 4:
      if ( *((_DWORD *)this + 69) != -1 )
      {
        v25 = 3;
LABEL_13:
        if ( v9 < 0 )
          return (unsigned int)v9;
        break;
      }
      goto LABEL_5;
  }
  v14 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, pActivityId, &v25);
  v16 = 0LL;
  if ( v14
    && (MustHandleMotion = CInteractionProcessor::ResolveMustHandleMotion(
                             this,
                             a4,
                             (struct InteractionAxis *)pActivityId,
                             (enum InteractionState *)&v25),
        v16 = 0LL,
        MustHandleMotion) )
  {
    v18 = (char)pActivityId[0];
    v19 = BYTE1(pActivityId[0]);
    if ( *((_BYTE *)this + 364) )
      v18 = 1;
    v20 = *((_BYTE *)this + 365) == 0;
    LOBYTE(pActivityId[0]) = v18;
    if ( !v20 )
      v19 = 1;
    BYTE1(pActivityId[0]) = v19;
    if ( AxisContainsMotion((float *)pActivityId) )
      *((_BYTE *)this + 380) |= 2u;
  }
  else
  {
    LOBYTE(v15) = BYTE1(pActivityId[0]);
    v11 = 0;
    v21 = (unsigned __int8)pActivityId[0];
  }
  v22 = v25;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v33 = this;
    v38 = &v33;
    v35 = *(_QWORD *)this;
    v40 = &v35;
    v34 = *((_QWORD *)this + 17);
    v42 = &v34;
    v25 = *((_DWORD *)this + 89);
    v44 = &v25;
    v30 = *((_DWORD *)this + 88);
    v46 = &v30;
    v48 = &v28;
    v32 = v11;
    v50 = &v32;
    v31 = v21;
    v52 = &v31;
    v29 = (unsigned __int8)v15;
    v54 = &v29;
    v56 = (char *)pActivityId + 4;
    v58 = &pActivityId[1];
    v60 = (char *)&pActivityId[1] + 4;
    v26 = *((unsigned __int8 *)this + 364);
    v62 = &v26;
    v27 = *((unsigned __int8 *)this + 365);
    v64 = &v27;
    v66 = (char *)this + 368;
    v68 = (char *)this + 372;
    v70 = (char *)this + 376;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 4LL;
    v47 = 4LL;
    v28 = v22;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F464, v15, v16, 0x13u, &pData);
  }
  v23 = *(_OWORD *)pActivityId;
  *((_DWORD *)this + 88) = v22;
  *a7 = v22;
  *a8 = v23;
  return (unsigned int)v9;
}
