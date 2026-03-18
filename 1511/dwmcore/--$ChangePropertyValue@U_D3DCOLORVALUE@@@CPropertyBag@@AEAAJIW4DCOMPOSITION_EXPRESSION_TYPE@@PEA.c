/*
 * XREFs of ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180135AD8
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180135F00 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180135DAC (-GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(
        CPropertyBag *a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // esi
  struct PropertyBagValue *v9; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-28h]
  struct PropertyBagValue *v19; // [rsp+30h] [rbp-18h] BYREF

  v19 = 0LL;
  v7 = CPropertyBag::GetPropertyStorageForWrite(a1, a2, &v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v19;
    if ( a2 == *((_DWORD *)v19 + 2) && a3 == *(_DWORD *)v19 )
    {
      v10 = a3 - 18;
      if ( !v10 )
      {
        *((_DWORD *)v19 + 3) = *(_DWORD *)a4;
        return v8;
      }
      v11 = v10 - 17;
      if ( !v11 )
      {
        *(_QWORD *)((char *)v19 + 12) = *(_QWORD *)a4;
        return v8;
      }
      v12 = v11 - 17;
      if ( !v12 )
      {
        *(_QWORD *)((char *)v19 + 12) = *(_QWORD *)a4;
        *((_DWORD *)v9 + 5) = *(_DWORD *)(a4 + 8);
        return v8;
      }
      v13 = v12 - 17;
      if ( !v13 || (v14 = v13 - 1) == 0 || (v15 = v14 - 1) == 0 )
      {
        *(_OWORD *)((char *)v19 + 12) = *(_OWORD *)a4;
        return v8;
      }
      v16 = v15 - 33;
      if ( !v16 )
      {
        *(_OWORD *)((char *)v19 + 12) = *(_OWORD *)a4;
        *(_QWORD *)((char *)v9 + 28) = *(_QWORD *)(a4 + 16);
        return v8;
      }
      if ( v16 == 161 )
      {
        *(_OWORD *)((char *)v19 + 12) = *(_OWORD *)a4;
        *(_OWORD *)((char *)v9 + 28) = *(_OWORD *)(a4 + 16);
        *(_OWORD *)((char *)v9 + 44) = *(_OWORD *)(a4 + 32);
        *(_OWORD *)((char *)v9 + 60) = *(_OWORD *)(a4 + 48);
        return v8;
      }
      v18 = 525;
    }
    else
    {
      v18 = 458;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v18);
    return v8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1C0u);
  return v8;
}
