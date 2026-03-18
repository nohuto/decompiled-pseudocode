/*
 * XREFs of ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014FD50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18014FB68 (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 *     ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x18014FBA8 (-SetColor@CDropShadow@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x18014FC98 (-SetOffset@CDropShadow@@AEAAXMMM@Z.c)
 *     ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x18014FD08 (-SetOpacity@CDropShadow@@AEAAXM@Z.c)
 */

__int64 __fastcall CDropShadow::SetProperty(CDropShadow *a1, int a2, int a3, float *a4)
{
  if ( a3 == 18 )
  {
LABEL_6:
    if ( a2 )
    {
      if ( a2 == 4 )
      {
        CDropShadow::SetOpacity(a1, *a4);
        goto LABEL_12;
      }
    }
    else
    {
      CDropShadow::SetBlurRadius(a1, *a4);
    }
    goto LABEL_10;
  }
  if ( a3 != 52 )
  {
    if ( a3 != 70 )
      goto LABEL_12;
    if ( a2 == 1 )
      CDropShadow::SetColor(
        a1,
        COERCE_FLOAT(*(_OWORD *)a4),
        COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
        COERCE_FLOAT(*((_QWORD *)a4 + 1)),
        COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
    goto LABEL_6;
  }
LABEL_10:
  if ( a2 == 3 )
    CDropShadow::SetOffset(a1, *a4, a4[1], a4[2]);
LABEL_12:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x95u);
  return 2147942487LL;
}
