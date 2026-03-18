/*
 * XREFs of ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18008C7D0
 * Callers:
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180088AF0 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x18008D880 (-GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::GetProperty(CPropertyBagBase *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 (__fastcall *v4)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **); // rax
  int PropertyValue; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  _QWORD *v10; // rax
  __int64 v11; // xmm1_8
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  __int128 *v14; // rax
  __int128 v15; // xmm0
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int128 *v18; // rax
  __int128 v19; // xmm0
  int v20; // [rsp+50h] [rbp+18h] BYREF
  void *v21; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x146u);
    return v6;
  }
  v4 = *(__int64 (__fastcall **)(CPropertyBag *__hidden, unsigned int, enum DCOMPOSITION_EXPRESSION_TYPE *, const void **))(*(_QWORD *)this + 112LL);
  if ( v4 == CPropertyBag::GetPropertyValue )
    PropertyValue = CPropertyBag::GetPropertyValue(
                      this,
                      a2,
                      (enum DCOMPOSITION_EXPRESSION_TYPE *)&v20,
                      (const void **)&v21);
  else
    PropertyValue = v4(this, a2, (enum DCOMPOSITION_EXPRESSION_TYPE *)&v20, (const void **)&v21);
  v6 = PropertyValue;
  if ( PropertyValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PropertyValue, 0x150u);
    return v6;
  }
  if ( v20 == 18 )
  {
    *(_DWORD *)a3 = *(_DWORD *)v21;
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
    return v6;
  }
  switch ( v20 )
  {
    case 17:
      *(_BYTE *)a3 = *(_BYTE *)v21;
      *((_DWORD *)a3 + 16) = 17;
      *((_BYTE *)a3 + 68) = 1;
      return v6;
    case 35:
      v12 = v21;
      *((_DWORD *)a3 + 16) = 35;
      *(_QWORD *)a3 = *v12;
      *((_BYTE *)a3 + 68) = 1;
      return v6;
    case 52:
      v13 = v21;
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)v13;
      *((_DWORD *)a3 + 2) = v13[2];
      *((_BYTE *)a3 + 68) = 1;
      return v6;
    case 69:
      v14 = (__int128 *)v21;
      *((_DWORD *)a3 + 16) = 69;
      v15 = *v14;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v15;
      return v6;
    case 70:
      v16 = (__int128 *)v21;
      *((_DWORD *)a3 + 16) = 70;
      v17 = *v16;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v17;
      return v6;
    case 71:
      v18 = (__int128 *)v21;
      *((_DWORD *)a3 + 16) = 71;
      v19 = *v18;
      *((_BYTE *)a3 + 68) = 1;
      *(_OWORD *)a3 = v19;
      return v6;
    case 104:
      v10 = v21;
      *((_DWORD *)a3 + 16) = 104;
      *(_OWORD *)a3 = *(_OWORD *)v10;
      v11 = v10[2];
      result = v6;
      *((_QWORD *)a3 + 2) = v11;
      *((_BYTE *)a3 + 68) = 1;
      break;
    case 265:
      v8 = v21;
      *((_DWORD *)a3 + 16) = 265;
      *(_OWORD *)a3 = *v8;
      *((_OWORD *)a3 + 1) = v8[1];
      *((_OWORD *)a3 + 2) = v8[2];
      v9 = v8[3];
      *((_BYTE *)a3 + 68) = 1;
      result = v6;
      *((_OWORD *)a3 + 3) = v9;
      break;
    default:
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x17Eu);
      return v6;
  }
  return result;
}
