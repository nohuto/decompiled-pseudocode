/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801401B0
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18014119C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?TransformAndNormalize@?A0xe8837992@@YA?AUD2DVector3@@AEBU2@AEBUD2DMatrix@@@Z @ 0x180142E80 (-TransformAndNormalize@-A0xe8837992@@YA-AUD2DVector3@@AEBU2@AEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rax
  _DWORD *v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h]
  _QWORD v41[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v42[20]; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h]
  int v44; // [rsp+98h] [rbp-68h] BYREF
  char v45; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  _QWORD *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  __int64 *v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  _DWORD **v59; // [rsp+130h] [rbp+30h]
  int v60; // [rsp+138h] [rbp+38h]
  int v61; // [rsp+13Ch] [rbp+3Ch]
  _DWORD *v62; // [rsp+140h] [rbp+40h]
  int v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+14Ch] [rbp+4Ch]
  _DWORD *v65; // [rsp+150h] [rbp+50h]
  int v66; // [rsp+158h] [rbp+58h]
  int v67; // [rsp+15Ch] [rbp+5Ch]

  v7 = 0;
  v37 = a6;
  v36 = a7;
  *a5 = 0;
  v38 = a3;
  *a7 = 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, v42);
  v11 = v38;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 40LL))(v38, &v44);
  if ( (unsigned int)(*(_DWORD *)(a1 + 352) - 2) <= 2 || (v42[4] & 1) != 0 || (v45 & 1) != 0 )
    *(_DWORD *)(a1 + 352) = 3;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 352) - 2) > 2 || v44 == 2) && (a2[16] & 0x40) != 0 )
    *(_BYTE *)a4 = 1;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 352) - 2) > 2 || v44 == 4) && (char)a2[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  if ( (a2[16] & 3) != 0 )
  {
    v40 = 0;
    v39 = 1065353216LL;
    v14 = `anonymous namespace'::TransformAndNormalize(v41, &v39, a1 + 496);
    v15 = *(unsigned int *)(a4 + 32);
    v13 = v14;
    v12 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v12 < (unsigned int)v15 )
      goto LABEL_15;
    if ( (unsigned int)v12 > *(_DWORD *)(a4 + 28) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 12, 1, v14);
      v7 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v18 = 3 * v15;
      v19 = *(_QWORD *)(a4 + 8);
      *(_QWORD *)(v19 + 4 * v18) = *(_QWORD *)v14;
      *(_DWORD *)(v19 + 4 * v18 + 8) = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(a4 + 32) = v12;
    }
    ++*a5;
  }
  if ( (a2[16] & 4) != 0 || (a2[16] & 8) != 0 )
  {
    v39 = 0x3F80000000000000LL;
    v40 = 0;
    v21 = `anonymous namespace'::TransformAndNormalize(v41, &v39, a1 + 496);
    v22 = *(unsigned int *)(a4 + 32);
    v13 = v21;
    v12 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v12 < (unsigned int)v22 )
      goto LABEL_15;
    v7 = 0;
    if ( (unsigned int)v12 > *(_DWORD *)(a4 + 28) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 12, 1, v21);
      v7 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v23 = 3 * v22;
      v24 = *(_QWORD *)(a4 + 8);
      *(_QWORD *)(v24 + 4 * v23) = *(_QWORD *)v21;
      *(_DWORD *)(v24 + 4 * v23 + 8) = *(_DWORD *)(v21 + 8);
      *(_DWORD *)(a4 + 32) = v12;
    }
    ++*a5;
  }
  if ( (a2[16] & 0x10) != 0 || (a2[16] & 0x20) != 0 )
  {
    v26 = *(unsigned int *)(a4 + 32);
    v39 = 0LL;
    v40 = 1065353216;
    v12 = (unsigned int)(v26 + 1);
    if ( (unsigned int)v12 < (unsigned int)v26 )
      goto LABEL_15;
    v7 = 0;
    if ( (unsigned int)v12 > *(_DWORD *)(a4 + 28) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 12, 1, &v39);
      v7 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v27 = *(_QWORD *)(a4 + 8);
      v28 = 3 * v26;
      *(_QWORD *)(v27 + 4 * v28) = v39;
      *(_DWORD *)(v27 + 4 * v28 + 8) = v40;
      *(_DWORD *)(a4 + 32) = v12;
    }
    ++*a5;
  }
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v11 == *(_QWORD *)a2 )
    goto LABEL_16;
  if ( v43 == 1 )
  {
    if ( (a2[16] & 1) == 0 && (a2[16] & 2) == 0 )
      goto LABEL_16;
    v39 = 1065353216LL;
  }
  else
  {
    if ( v43 != 2 || (a2[16] & 4) == 0 && (a2[16] & 8) == 0 )
      goto LABEL_16;
    v39 = 0x3F80000000000000LL;
  }
  v40 = 0;
  v33 = `anonymous namespace'::TransformAndNormalize(v41, &v39, a1 + 496);
  v34 = v37;
  v13 = v33;
  v35 = *(unsigned int *)(v37 + 32);
  v12 = (unsigned int)(v35 + 1);
  if ( (unsigned int)v12 >= (unsigned int)v35 )
  {
    v7 = 0;
    if ( (unsigned int)v12 <= *(_DWORD *)(v37 + 28) )
    {
      v30 = *(_QWORD *)(v37 + 8);
      v31 = 3 * v35;
      *(_QWORD *)(v30 + 4 * v31) = *(_QWORD *)v13;
      *(_DWORD *)(v30 + 4 * v31 + 8) = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v34 + 32) = v12;
    }
    else
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet(v37 + 8, 12, 1);
      v7 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    v16 = v36;
    ++*v36;
    goto LABEL_17;
  }
LABEL_15:
  v7 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_16:
  v16 = v36;
LABEL_17:
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v49 = 0;
    v52 = 0;
    v55 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v47 = &v38;
    v41[0] = *(_QWORD *)a2;
    v50 = v41;
    v53 = &v39;
    LODWORD(v37) = *(_DWORD *)(a1 + 356);
    v56 = &v37;
    LODWORD(v36) = *(_DWORD *)(a1 + 352);
    v59 = &v36;
    v38 = a1;
    v48 = 8;
    v51 = 8;
    v39 = v11;
    v54 = 8;
    v57 = 4;
    v60 = 4;
    v62 = a5;
    v63 = 4;
    v65 = v16;
    v66 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E4CB, (LPCGUID)v12, (LPCGUID)v13, 9u, &pData);
  }
  return (unsigned int)v7;
}
