/*
 * XREFs of ?BeginFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180002C20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::BeginFigure(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  int v3; // ebx
  char *v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  struct D2D_POINT_2F v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)this + 4);
  v9 = a2;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xDCu);
    goto LABEL_5;
  }
  v5 = (char *)this + 24;
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 8LL);
  v6 = *((_DWORD *)v5 + 6);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v3 = 0;
    if ( v7 <= *((_DWORD *)v5 + 5) )
    {
      *(struct D2D_POINT_2F *)(*(_QWORD *)v5 + 8LL * v6) = v9;
      *((_DWORD *)v5 + 6) = v7;
      goto LABEL_5;
    }
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8LL, 1LL, &v9);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xDFu);
LABEL_5:
  *((_DWORD *)this + 4) = v3;
}
