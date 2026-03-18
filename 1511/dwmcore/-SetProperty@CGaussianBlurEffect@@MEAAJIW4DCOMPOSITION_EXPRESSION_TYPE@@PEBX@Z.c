/*
 * XREFs of ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801334E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  float *v6; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_8;
  v5 = *a4;
  if ( a2 )
    goto LABEL_8;
  if ( v5 < 0.0 )
    v5 = 0.0;
  v6 = (float *)(a1 + 48);
  if ( a1 == (_DWORD *)-192LL )
  {
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Eu);
  }
  else if ( *v6 != v5 )
  {
    *v6 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
