/*
 * XREFs of ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801207CC
 * Callers:
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801208F0 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180120C90 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180120B4C (-GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(
        CPropertyBag *a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // esi
  struct PropertyBagValue *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct PropertyBagValue *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = CPropertyBag::GetPropertyStorageForWrite(a1, a2, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v12;
    if ( a2 == *((_DWORD *)v12 + 2) && a3 == *(_DWORD *)v12 )
    {
      switch ( a3 )
      {
        case 17:
          *((_DWORD *)v12 + 3) = *(_DWORD *)a4;
          return v8;
        case 34:
          *(_QWORD *)((char *)v12 + 12) = *(_QWORD *)a4;
          return v8;
        case 51:
          *(_QWORD *)((char *)v12 + 12) = *(_QWORD *)a4;
          *((_DWORD *)v9 + 5) = *(_DWORD *)(a4 + 8);
          return v8;
        case 68:
          *(_OWORD *)((char *)v12 + 12) = *(_OWORD *)a4;
          return v8;
        case 101:
          *(_OWORD *)((char *)v12 + 12) = *(_OWORD *)a4;
          *(_QWORD *)((char *)v9 + 28) = *(_QWORD *)(a4 + 16);
          return v8;
        case 262:
          *(_OWORD *)((char *)v12 + 12) = *(_OWORD *)a4;
          *(_OWORD *)((char *)v9 + 28) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)((char *)v9 + 44) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)((char *)v9 + 60) = *(_OWORD *)(a4 + 48);
          return v8;
      }
      v11 = 475;
    }
    else
    {
      v11 = 422;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v11);
    return v8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x19Cu);
  return v8;
}
