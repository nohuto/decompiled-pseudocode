/*
 * XREFs of ?BeginFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180017870
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::BeginFigure(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  int v3; // edi
  char *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  struct D2D_POINT_2F v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)this + 4);
  v10 = a2;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x344u);
    goto LABEL_5;
  }
  v5 = (char *)this + 24;
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 8LL);
  v6 = *((_DWORD *)v5 + 6);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
    goto LABEL_11;
  }
  v3 = 0;
  if ( v7 <= *((_DWORD *)v5 + 5) )
  {
    *(struct D2D_POINT_2F *)(*(_QWORD *)v5 + 8LL * v6) = v10;
    *((_DWORD *)v5 + 6) = v7;
    goto LABEL_5;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8LL, 1LL, &v10);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  v3 = v8;
  if ( v8 < 0 )
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x347u);
LABEL_5:
  *((_DWORD *)this + 4) = v3;
}
