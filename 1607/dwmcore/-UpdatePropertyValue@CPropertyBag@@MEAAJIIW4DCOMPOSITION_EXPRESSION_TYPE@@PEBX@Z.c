/*
 * XREFs of ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340
 * Callers:
 *     ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008C730 (-SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x18008CA58 (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x18008CAD0 (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x18008CB74 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008C770 (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008CE70 (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ??$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008D034 (--$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU.c)
 *     ??$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z @ 0x18008D1AC (--$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z.c)
 *     ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008D2E0 (--$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801588C4 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int updated; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _QWORD *v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // r13
  _QWORD *i; // rcx
  int v27; // eax
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD, unsigned __int8 *); // rcx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+20h] [rbp-58h]
  unsigned int v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]
  unsigned int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v36; // [rsp+48h] [rbp-30h]

  if ( a4 != 18 )
  {
    switch ( a4 )
    {
      case 0x11u:
        updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = updated;
        if ( updated >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xC9u);
        return v10;
      case 0x23u:
        v11 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = v11;
        if ( v11 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD1u);
        return v10;
      case 0x34u:
        v12 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = v12;
        if ( v12 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD5u);
        return v10;
      case 0x45u:
        v13 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = v13;
        if ( v13 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD9u);
        return v10;
      case 0x46u:
        v14 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = v14;
        if ( v14 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDDu);
        return v10;
      case 0x47u:
        v15 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
        v10 = v15;
        if ( v15 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE1u);
        return v10;
      case 0x68u:
        if ( a2 )
        {
          if ( a2 != 1 )
          {
            v16 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Eu);
            v10 = -2147024809;
            v31 = 229;
            goto LABEL_30;
          }
          v17 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(a1, a3, a4, (__int64)a5);
          v16 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x11Au);
        }
        else
        {
          v18 = CPropertyBag::AddPropertyValue<D2D_MATRIX_3X2_F>((CResource *)a1, a3, a4, (__int64)a5);
          v16 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x116u);
        }
        v10 = v16;
        if ( v16 >= 0 )
          goto LABEL_45;
        v31 = 229;
        break;
      case 0x109u:
        v19 = CPropertyBag::UpdatePropertyValue<D2DMatrix>((CResource *)a1, a2, a3, a4, (__int64)a5);
        v10 = v19;
        if ( v19 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE9u);
        return v10;
      default:
        goto LABEL_45;
    }
    goto LABEL_30;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v16 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Eu);
      v10 = -2147024809;
LABEL_29:
      v31 = 205;
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v31);
      return v10;
    }
    v16 = 0;
    Buffer = a3;
    v36 = 0LL;
    v21 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 120), &Buffer);
    if ( !v21 )
    {
      v16 = -2147023728;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x258u);
      v32 = 482;
LABEL_41:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v32);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x11Au);
      goto LABEL_44;
    }
    v22 = (_DWORD *)v21[1];
    if ( a3 != v22[2] || *v22 != 18 )
    {
      v16 = -2147024809;
      v32 = 492;
      goto LABEL_41;
    }
    v22[3] = *(_DWORD *)a5;
    v23 = *(_QWORD *)(a1 + 16);
    v34 = 0LL;
    v33 = a3;
    v24 = *(_QWORD *)(v23 + 352);
    v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 40), &v33);
    CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&v33);
    if ( v25 )
    {
      for ( i = (_QWORD *)v25[1]; i; i = (_QWORD *)i[1] )
        *(_QWORD *)(*i + 280LL) = v24;
    }
  }
  else
  {
    v27 = CPropertyBag::AddPropertyValue<float>((CResource *)a1, a3, 18, (__int64)a5);
    v16 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x116u);
  }
LABEL_44:
  v10 = v16;
  if ( v16 < 0 )
    goto LABEL_29;
LABEL_45:
  v28 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, unsigned __int8 *))(a1 + 192);
  if ( v28 && (v29 = (**v28)(v28, a3, a4, a5), v10 = v29, v29 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xF3u);
  }
  else
  {
    v30 = CPropertyBagBase::LogValueUpdate(a1, a2, (const GUID *)a3, a4, a5);
    v10 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xF6u);
  }
  return v10;
}
