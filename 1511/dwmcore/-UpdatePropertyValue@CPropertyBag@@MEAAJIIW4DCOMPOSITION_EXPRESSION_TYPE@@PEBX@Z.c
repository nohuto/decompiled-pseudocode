/*
 * XREFs of ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180135F00
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012E290 (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801357F8 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180135AD8 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue(
        CPropertyBag *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int *a5)
{
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD, int *); // rsi
  int v29; // eax
  unsigned int v31; // [rsp+20h] [rbp-38h]

  switch ( a4 )
  {
    case 0x12u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_81;
        }
        v26 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 18, (__int64)a5);
        v9 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x110u);
      }
      else
      {
        v27 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 18, (__int64)a5);
        v9 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_81:
      v31 = 195;
      goto LABEL_18;
    case 0x23u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_72;
        }
        v24 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 35, (__int64)a5);
        v9 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x110u);
      }
      else
      {
        v25 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 35, (__int64)a5);
        v9 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_72:
      v31 = 199;
      goto LABEL_18;
    case 0x34u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_63;
        }
        v22 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 52, (__int64)a5);
        v9 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x110u);
      }
      else
      {
        v23 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 52, (__int64)a5);
        v9 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_63:
      v31 = 203;
      goto LABEL_18;
    case 0x45u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_54;
        }
        v20 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 69, (__int64)a5);
        v9 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x110u);
      }
      else
      {
        v21 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 69, (__int64)a5);
        v9 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_54:
      v31 = 207;
      goto LABEL_18;
    case 0x46u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_45;
        }
        v18 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 70, (__int64)a5);
        v9 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x110u);
      }
      else
      {
        v19 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 70, (__int64)a5);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_45:
      v31 = 211;
      goto LABEL_18;
    case 0x47u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_36;
        }
        v16 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 71, (__int64)a5);
        v9 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x110u);
      }
      else
      {
        v17 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 71, (__int64)a5);
        v9 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_36:
      v31 = 215;
      goto LABEL_18;
    case 0x68u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
          goto LABEL_27;
        }
        v14 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 104, (__int64)a5);
        v9 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x110u);
      }
      else
      {
        v15 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 104, (__int64)a5);
        v9 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x10Cu);
      }
      v10 = v9;
      if ( v9 >= 0 )
        break;
LABEL_27:
      v31 = 219;
      goto LABEL_18;
    case 0x109u:
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x114u);
          v10 = -2147024809;
LABEL_17:
          v31 = 223;
LABEL_18:
          v13 = v9;
LABEL_88:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v31);
          return v10;
        }
        v11 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, 265, (__int64)a5);
        v9 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x110u);
      }
      else
      {
        v12 = CPropertyBag::AddPropertyValue<D2DVector4>((__int64)a1, a3, 265, (__int64)a5);
        v9 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x10Cu);
      }
      v10 = v9;
      if ( v9 < 0 )
        goto LABEL_17;
      break;
  }
  v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, int *))*((_QWORD *)a1 + 15);
  if ( v28 )
  {
    v29 = (**v28)(*((_QWORD *)a1 + 15), a3, a4, a5);
    v10 = v29;
    if ( v29 < 0 )
    {
      v31 = 233;
LABEL_87:
      v13 = v29;
      goto LABEL_88;
    }
  }
  v29 = CPropertyBagBase::LogValueUpdate((__int64)a1, a2, (const GUID *)a3, a4, a5);
  v10 = v29;
  if ( v29 < 0 )
  {
    v31 = 236;
    goto LABEL_87;
  }
  return v10;
}
