/*
 * XREFs of ?SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B300
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  double *v6; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_12;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_12;
      v6 = a1 + 17;
    }
    else
    {
      v6 = a1 + 16;
    }
  }
  else
  {
    v6 = a1 + 15;
  }
  if ( !v6 )
  {
LABEL_12:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6C1u);
    return v4;
  }
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
