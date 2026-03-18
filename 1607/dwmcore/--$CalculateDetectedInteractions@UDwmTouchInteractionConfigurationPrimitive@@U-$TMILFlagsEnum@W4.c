/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18016B83C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18016CA6C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18016F8CC (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18016F9F4 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // r13
  int v8; // ebx
  _DWORD *v9; // rsi
  char *v11; // r12
  __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  char v19; // al
  char v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rsi
  bool v36; // zf
  unsigned int v37; // r15d
  unsigned int v38; // r13d
  unsigned int v39; // edx
  bool v40; // r12
  char v41; // bl
  char v42; // al
  char v43; // al
  char v44; // al
  _DWORD *v45; // r14
  __int64 v46; // rax
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  char v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+31h] [rbp-CFh]
  char v55; // [rsp+32h] [rbp-CEh]
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v57; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v58; // [rsp+40h] [rbp-C0h]
  _DWORD *v59; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  char *v61; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+70h] [rbp-90h]
  _BYTE v65[16]; // [rsp+78h] [rbp-88h] BYREF
  int v66; // [rsp+88h] [rbp-78h] BYREF
  char v67; // [rsp+8Ch] [rbp-74h]
  _BYTE v68[20]; // [rsp+C8h] [rbp-38h] BYREF
  int v69; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  char **v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+14Ch] [rbp+4Ch]
  _DWORD **v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+15Ch] [rbp+5Ch]
  unsigned int *v80; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+16Ch] [rbp+6Ch]
  int *v83; // [rsp+170h] [rbp+70h]
  int v84; // [rsp+178h] [rbp+78h]
  int v85; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v86; // [rsp+180h] [rbp+80h]
  int v87; // [rsp+188h] [rbp+88h]
  int v88; // [rsp+18Ch] [rbp+8Ch]
  _DWORD *v89; // [rsp+190h] [rbp+90h]
  int v90; // [rsp+198h] [rbp+98h]
  int v91; // [rsp+19Ch] [rbp+9Ch]

  v7 = a5;
  v8 = 0;
  v9 = a7;
  v11 = a2;
  v60 = a6;
  *a5 = 0;
  *a7 = 0;
  v14 = *(__int64 **)a2;
  v61 = a2;
  v58 = a3;
  v62 = a5;
  v15 = *v14;
  v59 = a7;
  v56 = 0;
  (*(void (__fastcall **)(__int64 *, _BYTE *))(v15 + 40))(v14, v68);
  (*(void (__fastcall **)(_DWORD *, int *))(*(_QWORD *)a3 + 40LL))(a3, &v66);
  v18 = *(_DWORD *)(a1 + 384) - 2;
  v57 = 3;
  if ( v18 <= 2 || (v68[4] & 1) != 0 || (v67 & 1) != 0 )
    *(_DWORD *)(a1 + 384) = 3;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 384) - 2) > 2 || v66 == 2) && (v11[16] & 0x40) != 0 )
    *(_BYTE *)a4 = 1;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 384) - 2) > 2 || v66 == 4) && v11[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v19 = 0;
  v20 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  if ( (v11[16] & 3) != 0 )
  {
    v64 = 0;
    v63 = 1065353216LL;
    v21 = anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v65);
    v22 = *(unsigned int *)(a4 + 32);
    v17 = v21;
    v16 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v16 >= (unsigned int)v22 )
    {
      v56 = 0;
      if ( (unsigned int)v16 <= *(_DWORD *)(a4 + 28) )
      {
        v23 = 3 * v22;
        v24 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)(v24 + 4 * v23) = *(_QWORD *)v21;
        *(_DWORD *)(v24 + 4 * v23 + 8) = *(_DWORD *)(v21 + 8);
        *(_DWORD *)(a4 + 32) = v16;
LABEL_21:
        ++*a5;
        v20 = 1;
        v19 = 0;
        v55 = 1;
        goto LABEL_22;
      }
      v25 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, v21);
      v56 = v25;
      v8 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      v8 = -2147024362;
      v56 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v8 < 0 )
      goto LABEL_83;
    goto LABEL_21;
  }
LABEL_22:
  if ( (v11[16] & 4) != 0 || (v11[16] & 8) != 0 )
  {
    v63 = 0x3F80000000000000LL;
    v64 = 0;
    v26 = anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v65);
    v27 = *(unsigned int *)(a4 + 32);
    v17 = v26;
    v16 = (unsigned int)(v27 + 1);
    if ( (unsigned int)v16 >= (unsigned int)v27 )
    {
      v8 = 0;
      v56 = 0;
      if ( (unsigned int)v16 <= *(_DWORD *)(a4 + 28) )
      {
        v28 = 3 * v27;
        v29 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)(v29 + 4 * v28) = *(_QWORD *)v26;
        *(_DWORD *)(v29 + 4 * v28 + 8) = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(a4 + 32) = v16;
LABEL_31:
        ++*a5;
        v19 = 1;
        v54 = 1;
        goto LABEL_32;
      }
      v30 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, v26);
      v56 = v30;
      v8 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
    }
    else
    {
      v8 = -2147024362;
      v56 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v8 < 0 )
      goto LABEL_83;
    goto LABEL_31;
  }
LABEL_32:
  if ( (v11[16] & 0x10) != 0 || (v11[16] & 0x20) != 0 )
  {
    v31 = *(unsigned int *)(a4 + 32);
    v63 = 0LL;
    v64 = 1065353216;
    v16 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v16 >= (unsigned int)v31 )
    {
      v8 = 0;
      v56 = 0;
      if ( (unsigned int)v16 <= *(_DWORD *)(a4 + 28) )
      {
        v32 = *(_QWORD *)(a4 + 8);
        v33 = 3 * v31;
        *(_QWORD *)(v32 + 4 * v33) = v63;
        *(_DWORD *)(v32 + 4 * v33 + 8) = v64;
        *(_DWORD *)(a4 + 32) = v16;
LABEL_41:
        ++*a5;
        LOBYTE(v16) = 1;
        v19 = v54;
        v53 = 1;
        goto LABEL_43;
      }
      v34 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0xCu, 1, &v63);
      v56 = v34;
      v8 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
    }
    else
    {
      v8 = -2147024362;
      v56 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v8 >= 0 )
      goto LABEL_41;
LABEL_83:
    v45 = v58;
    goto LABEL_84;
  }
  LOBYTE(v16) = 0;
LABEL_43:
  if ( (int)*a5 > 0 )
  {
    v35 = (unsigned int)(*(_DWORD *)(a4 + 32) - *a5);
    v36 = v20 == 0;
    v37 = v35 + 1;
    if ( v36 )
      v37 = *(_DWORD *)(a4 + 32) - *a5;
    v38 = v37 + 1;
    if ( !v19 )
      v38 = v37;
    *(_BYTE *)(a1 + 408) &= 0x3Fu;
    *(_BYTE *)(a1 + 409) &= ~1u;
    v39 = 3;
    *(_BYTE *)(a1 + 409) |= v16 & 1;
    *(_BYTE *)(a1 + 408) |= (v55 & 1 | (unsigned __int8)(2 * v19)) << 6;
    if ( (int)v35 > 3 )
    {
      v40 = v55;
      v41 = v54;
      do
      {
        if ( (*(_BYTE *)(a1 + 408) & 0x40) == 0 && *(char *)(a1 + 408) >= 0 && (*(_BYTE *)(a1 + 409) & 1) == 0 )
          break;
        if ( v40 && (*(_BYTE *)(a1 + 408) & 0x40) != 0 )
        {
          v42 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12 * v35,
                  *(_QWORD *)(a4 + 8) + 12LL * v39);
          v39 = v57;
          LOBYTE(v16) = v53;
          *(_BYTE *)(a1 + 408) &= ~0x40u;
          *(_BYTE *)(a1 + 408) |= (v42 == 0) << 6;
          v40 = (*(_BYTE *)(a1 + 408) & 0x40) != 0;
        }
        if ( v41 )
        {
          v43 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12LL * v37,
                  *(_QWORD *)(a4 + 8) + 12LL * v39);
          LOBYTE(v16) = v53;
          *(_BYTE *)(a1 + 408) &= ~0x80u;
          *(_BYTE *)(a1 + 408) |= (v43 == 0) << 7;
          v41 = *(_BYTE *)(a1 + 408) >> 7;
        }
        if ( (_BYTE)v16 )
        {
          v44 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12LL * v38,
                  *(_QWORD *)(a4 + 8) + 12LL * v57);
          *(_BYTE *)(a1 + 409) &= ~1u;
          *(_BYTE *)(a1 + 409) |= v44 == 0;
          LOBYTE(v16) = *(_BYTE *)(a1 + 409) & 1;
          v53 = v16;
        }
        v39 = v57 + 1;
        v57 = v39;
      }
      while ( (int)v39 < (int)v35 );
      v8 = v56;
      v11 = v61;
    }
    v9 = v59;
    v7 = v62;
  }
  if ( *(_BYTE *)a4 )
    goto LABEL_83;
  v36 = *(_BYTE *)(a4 + 1) == 0;
  v45 = v58;
  if ( v36 && v58 != *(_DWORD **)v11 )
  {
    if ( v69 == 1 )
    {
      if ( (v11[16] & 1) == 0 && (v11[16] & 2) == 0 )
        goto LABEL_84;
      v63 = 1065353216LL;
    }
    else
    {
      if ( v69 != 2 || (v11[16] & 4) == 0 && (v11[16] & 8) == 0 )
        goto LABEL_84;
      v63 = 0x3F80000000000000LL;
    }
    v64 = 0;
    v46 = anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v65);
    v47 = v60;
    v17 = v46;
    v48 = *(unsigned int *)(v60 + 32);
    v16 = (unsigned int)(v48 + 1);
    if ( (unsigned int)v16 >= (unsigned int)v48 )
    {
      v8 = 0;
      if ( (unsigned int)v16 <= *(_DWORD *)(v60 + 28) )
      {
        v49 = *(_QWORD *)(v60 + 8);
        v50 = 3 * v48;
        *(_QWORD *)(v49 + 4 * v50) = *(_QWORD *)v17;
        *(_DWORD *)(v49 + 4 * v50 + 8) = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v47 + 32) = v16;
LABEL_76:
        ++*v9;
        goto LABEL_84;
      }
      v51 = DynArrayImpl<0>::AddMultipleAndSet(v60 + 8, 0xCu, 1);
      v8 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xC0u);
    }
    else
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v8 >= 0 )
      goto LABEL_76;
  }
LABEL_84:
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v73 = 0;
    v76 = 0;
    v79 = 0;
    v82 = 0;
    v85 = 0;
    v88 = 0;
    v91 = 0;
    v71 = &v61;
    v60 = *(_QWORD *)v11;
    v74 = &v60;
    v77 = &v59;
    v57 = *(_DWORD *)(a1 + 388);
    v80 = &v57;
    v56 = *(_DWORD *)(a1 + 384);
    v83 = &v56;
    v61 = (char *)a1;
    v72 = 8;
    v75 = 8;
    v59 = v45;
    v78 = 8;
    v81 = 4;
    v84 = 4;
    v86 = v7;
    v87 = 4;
    v89 = v9;
    v90 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5621, (LPCGUID)v16, (LPCGUID)v17, 9u, &pData);
  }
  return (unsigned int)v8;
}
