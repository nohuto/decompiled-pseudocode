/*
 * XREFs of ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023260
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRotateTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  double *v5; // rax
  int v7; // edx

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_12;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_12;
      v5 = a1 + 29;
    }
    else
    {
      v5 = a1 + 28;
    }
  }
  else
  {
    v5 = a1 + 27;
  }
  if ( !v5 )
  {
LABEL_12:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB51u);
    return v4;
  }
  if ( *v5 != *a4 )
  {
    *v5 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
