/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014D180
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x18014CEF8 (-PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z.c)
 */

__int64 __fastcall CTableTransferEffect::SetProperty(CTableTransferEffect *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  _DWORD *v6; // r11
  float *v7; // rdx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 == 18
    && (v5 = *a4, CTableTransferEffect::PropertyIdToColorChannelAndIndex(a1, a2, &v10, v9))
    && (v7 = (float *)(*(_QWORD *)&v6[10 * v10 + 74] + 4LL * v9[0])) != 0LL )
  {
    if ( *v7 != v5 )
    {
      *v7 = v5;
      CResource::NotifyOnChanged(v6, 0, 0LL);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x8Fu);
  }
  return v4;
}
