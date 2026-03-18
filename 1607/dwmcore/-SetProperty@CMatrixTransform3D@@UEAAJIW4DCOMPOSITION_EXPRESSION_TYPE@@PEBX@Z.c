/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180155550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(_DWORD *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  float *v7; // rcx

  v4 = 0;
  if ( a3 == 18 && (v6 = *a4, a2 < 0x10) && (v7 = (float *)&a1[4 * (a2 >> 2) + 54 + (a2 & 3)]) != 0LL )
  {
    if ( *v7 != v6 )
    {
      *v7 = v6;
      CResource::NotifyOnChanged(a1, 0, 0LL);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x48u);
  }
  return v4;
}
