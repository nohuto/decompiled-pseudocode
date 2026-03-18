/*
 * XREFs of ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003C770
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CEffectGroup::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  double *v5; // rax

  v4 = 0;
  if ( a3 != 17 || a2 || (v5 = (double *)(a1 + 40), a1 == -40) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x67u);
  }
  else if ( *v5 != *a4 )
  {
    *v5 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
