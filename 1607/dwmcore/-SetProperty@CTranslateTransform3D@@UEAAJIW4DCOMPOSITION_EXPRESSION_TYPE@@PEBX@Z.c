/*
 * XREFs of ?SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180151A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  double *v6; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_11;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
LABEL_11:
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6C1u);
        return v4;
      }
      v6 = a1 + 29;
    }
    else
    {
      v6 = a1 + 28;
    }
  }
  else
  {
    v6 = a1 + 27;
  }
  if ( !v6 )
    goto LABEL_11;
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
