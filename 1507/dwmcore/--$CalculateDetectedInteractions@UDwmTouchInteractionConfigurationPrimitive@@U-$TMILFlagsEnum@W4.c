/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18012C518
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18012D3D0 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  int v7; // r14d
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rax
  _DWORD *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  _BYTE v37[20]; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h]
  int v39; // [rsp+78h] [rbp-88h] BYREF
  char v40; // [rsp+7Ch] [rbp-84h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  _DWORD **v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  _DWORD *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _DWORD *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]

  v7 = 0;
  v33 = a6;
  v32 = a7;
  *a5 = 0;
  v34 = a1;
  *a7 = 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, v37);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v39);
  v12 = v34;
  if ( (unsigned int)(*(_DWORD *)(v34 + 352) - 2) <= 1 || (v37[4] & 1) != 0 || (v40 & 1) != 0 )
    *(_DWORD *)(v34 + 352) = 3;
  if ( ((unsigned int)(*(_DWORD *)(v12 + 352) - 2) > 1 || v39 == 2) && (a2[16] & 0x40) != 0 )
    *(_BYTE *)a4 = 1;
  if ( ((unsigned int)(*(_DWORD *)(v12 + 352) - 2) > 1 || v39 == 4) && (char)a2[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  if ( (a2[16] & 3) != 0 )
  {
    v13 = *(unsigned int *)(a4 + 32);
    v36 = 0;
    v35 = 1065353216LL;
    v11 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v11 < (unsigned int)v13 )
      goto LABEL_15;
    if ( (unsigned int)v11 > *(_DWORD *)(a4 + 28) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, &v35);
      v7 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v16 = *(_QWORD *)(a4 + 8);
      v17 = 3 * v13;
      *(_QWORD *)(v16 + 4 * v17) = v35;
      *(_DWORD *)(v16 + 4 * v17 + 8) = v36;
      *(_DWORD *)(a4 + 32) = v11;
    }
    ++*a5;
  }
  if ( (a2[16] & 4) != 0 || (a2[16] & 8) != 0 )
  {
    v19 = *(unsigned int *)(a4 + 32);
    v35 = 0x3F80000000000000LL;
    v36 = 0;
    v11 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v11 < (unsigned int)v19 )
      goto LABEL_15;
    v7 = 0;
    if ( (unsigned int)v11 > *(_DWORD *)(a4 + 28) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, &v35);
      v7 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v20 = *(_QWORD *)(a4 + 8);
      v21 = 3 * v19;
      *(_QWORD *)(v20 + 4 * v21) = v35;
      *(_DWORD *)(v20 + 4 * v21 + 8) = v36;
      *(_DWORD *)(a4 + 32) = v11;
    }
    ++*a5;
  }
  if ( (a2[16] & 0x10) != 0 || (a2[16] & 0x20) != 0 )
  {
    v23 = *(unsigned int *)(a4 + 32);
    v35 = 0LL;
    v36 = 1065353216;
    v11 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v11 < (unsigned int)v23 )
      goto LABEL_15;
    v7 = 0;
    if ( (unsigned int)v11 > *(_DWORD *)(a4 + 28) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, &v35);
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    else
    {
      v24 = *(_QWORD *)(a4 + 8);
      v25 = 3 * v23;
      *(_QWORD *)(v24 + 4 * v25) = v35;
      *(_DWORD *)(v24 + 4 * v25 + 8) = v36;
      *(_DWORD *)(a4 + 32) = v11;
    }
    ++*a5;
  }
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) )
    goto LABEL_16;
  if ( v38 == 1 )
  {
    if ( (a2[16] & 1) == 0 && (a2[16] & 2) == 0 )
      goto LABEL_16;
    v35 = 1065353216LL;
  }
  else
  {
    if ( v38 != 2 || (a2[16] & 4) == 0 && (a2[16] & 8) == 0 )
      goto LABEL_16;
    v35 = 0x3F80000000000000LL;
  }
  v30 = v33;
  v36 = 0;
  v31 = *(unsigned int *)(v33 + 32);
  v11 = (unsigned int)(v31 + 1);
  if ( (unsigned int)v11 >= (unsigned int)v31 )
  {
    v7 = 0;
    if ( (unsigned int)v11 <= *(_DWORD *)(v33 + 28) )
    {
      v27 = *(_QWORD *)(v33 + 8);
      v28 = 3 * v31;
      *(_QWORD *)(v27 + 4 * v28) = v35;
      *(_DWORD *)(v27 + 4 * v28 + 8) = v36;
      *(_DWORD *)(v30 + 32) = v11;
    }
    else
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet(v33 + 8, 0xCu, 1, &v35);
      v7 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_16;
    }
    v14 = v32;
    ++*v32;
    goto LABEL_17;
  }
LABEL_15:
  v7 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_16:
  v14 = v32;
LABEL_17:
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v34 = v12;
    v42 = &v34;
    v35 = *(_QWORD *)a2;
    v44 = &v35;
    LODWORD(v33) = *(_DWORD *)(v12 + 356);
    v46 = &v33;
    LODWORD(v32) = *(_DWORD *)(v12 + 352);
    v48 = &v32;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 4LL;
    v49 = 4LL;
    v50 = a5;
    v51 = 4LL;
    v52 = v14;
    v53 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F2DF, (LPCGUID)v11, (LPCGUID)4, 8u, &pData);
  }
  return (unsigned int)v7;
}
