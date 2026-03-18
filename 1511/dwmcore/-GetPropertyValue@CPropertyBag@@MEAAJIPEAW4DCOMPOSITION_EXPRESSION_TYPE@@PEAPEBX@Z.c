/*
 * XREFs of ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x180135E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z @ 0x180135D88 (-FindElement@-$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyValue(
        CPropertyBag *this,
        int a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3,
        const void **a4)
{
  unsigned int v7; // edi
  _QWORD *Element; // rax
  int v9; // r9d
  _DWORD *v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v7 = 0;
  Element = CGenericTableMap<unsigned int,PropertyMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 48),
              a2);
  if ( Element )
  {
    v10 = (_DWORD *)Element[1];
    if ( a2 != v10[2] )
    {
      v12 = 111;
LABEL_14:
      v9 = -2147024809;
      goto LABEL_15;
    }
    if ( *v10 == 18 )
    {
      *a4 = v10 + 3;
    }
    else
    {
      if ( *v10 != 35 && *v10 != 52 && *v10 != 69 && *v10 != 70 && *v10 != 71 && *v10 != 104 && *v10 != 265 )
      {
        v12 = 165;
        goto LABEL_14;
      }
      *a4 = v10 + 3;
    }
    *(_DWORD *)a3 = *(_DWORD *)Element[1];
    return v7;
  }
  v9 = -2147023728;
  v12 = 106;
LABEL_15:
  v7 = v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
  return v7;
}
