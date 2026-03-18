/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180155FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  float *v6; // rax

  v4 = 0;
  if ( a3 != 18 || (v5 = *a4, a2) || (v6 = (float *)(a1 + 68), a1 == (_DWORD *)-272LL) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2Fu);
  }
  else if ( *v6 != v5 )
  {
    *v6 = v5;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
