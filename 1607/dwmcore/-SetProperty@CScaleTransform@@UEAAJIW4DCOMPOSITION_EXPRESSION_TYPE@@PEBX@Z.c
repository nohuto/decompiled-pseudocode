/*
 * XREFs of ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022B20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  double *v6; // rax
  int v8; // edx

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_14;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v8 = v5 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          goto LABEL_14;
        v6 = a1 + 30;
      }
      else
      {
        v6 = a1 + 29;
      }
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
  {
LABEL_14:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xAE3u);
    return v4;
  }
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
