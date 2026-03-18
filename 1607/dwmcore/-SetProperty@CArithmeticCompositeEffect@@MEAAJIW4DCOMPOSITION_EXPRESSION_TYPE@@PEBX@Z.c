/*
 * XREFs of ?SetProperty@CArithmeticCompositeEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801568B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_13;
  v5 = *a4;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_13:
          v4 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Au);
          return v4;
        }
        v9 = a1 + 71;
      }
      else
      {
        v9 = a1 + 70;
      }
    }
    else
    {
      v9 = a1 + 69;
    }
  }
  else
  {
    v9 = a1 + 68;
  }
  if ( !v9 )
    goto LABEL_13;
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
