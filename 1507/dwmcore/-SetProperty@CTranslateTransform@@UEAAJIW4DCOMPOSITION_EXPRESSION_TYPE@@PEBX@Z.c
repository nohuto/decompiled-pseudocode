/*
 * XREFs of ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180018000
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  double *v5; // rax

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_10;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_10;
    v5 = (double *)(a1 + 112);
  }
  else
  {
    v5 = (double *)(a1 + 104);
  }
  if ( !v5 )
  {
LABEL_10:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xAB8u);
    return v4;
  }
  if ( *v5 != *a4 )
  {
    *v5 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
