/*
 * XREFs of ?AddLines@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180009270
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::AddLines(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  int v3; // ebx
  char *v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // eax
  const struct D2D_POINT_2F *v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  int v14; // edi

  v3 = *((_DWORD *)this + 4);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x354u);
  }
  else
  {
    v7 = (char *)this + 24;
    v8 = DynArrayImpl<0>::Grow((int)this + 24, 8, a3, 0, 0LL);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x356u);
    }
    else
    {
      v9 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v10 = *((_DWORD *)v7 + 6);
          v11 = &a2[v9];
          v12 = v10 + 1;
          if ( v10 + 1 < v10 )
            break;
          v3 = 0;
          if ( v12 > *((_DWORD *)v7 + 5) )
          {
            v13 = DynArrayImpl<0>::AddMultipleAndSet(v7, 8LL, 1LL, v11);
            v14 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
            v3 = v14;
            if ( v14 < 0 )
              goto LABEL_16;
          }
          else
          {
            *(struct D2D_POINT_2F *)(*(_QWORD *)v7 + 8LL * v10) = *v11;
            *((_DWORD *)v7 + 6) = v12;
          }
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= a3 )
            goto LABEL_8;
        }
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v3 = -2147024362;
LABEL_16:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x359u);
      }
    }
  }
LABEL_8:
  *((_DWORD *)this + 4) = v3;
}
