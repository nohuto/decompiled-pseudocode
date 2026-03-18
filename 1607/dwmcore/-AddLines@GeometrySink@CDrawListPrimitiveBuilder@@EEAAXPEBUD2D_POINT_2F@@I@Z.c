/*
 * XREFs of ?AddLines@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180002B70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::AddLines(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  int v3; // ebx
  char *v7; // rsi
  int v8; // eax
  __int64 i; // rdi
  unsigned int v10; // eax
  const struct D2D_POINT_2F *v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 4);
  if ( v3 < 0 )
  {
    v14 = 236;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v14);
  }
  else
  {
    v7 = (char *)this + 24;
    v8 = DynArrayImpl<0>::Grow((int)this + 24, 8, a3, 0, 0LL);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEEu);
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
      {
        v10 = *((_DWORD *)v7 + 6);
        v11 = &a2[i];
        v12 = v10 + 1;
        if ( v10 + 1 < v10 )
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else
        {
          v3 = 0;
          if ( v12 <= *((_DWORD *)v7 + 5) )
          {
            *(struct D2D_POINT_2F *)(*(_QWORD *)v7 + 8LL * v10) = *v11;
            *((_DWORD *)v7 + 6) = v12;
            continue;
          }
          v13 = DynArrayImpl<0>::AddMultipleAndSet(v7, 8LL, 1LL, v11);
          v3 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        }
        if ( v3 < 0 )
        {
          v14 = 241;
          goto LABEL_16;
        }
      }
    }
  }
  *((_DWORD *)this + 4) = v3;
}
