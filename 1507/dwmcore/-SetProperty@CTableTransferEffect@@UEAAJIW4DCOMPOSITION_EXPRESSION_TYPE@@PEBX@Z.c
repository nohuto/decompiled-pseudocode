/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180114170
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x180113E94 (-PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z.c)
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
  if ( a3 == 17
    && (v5 = *a4, CTableTransferEffect::PropertyIdToColorChannelAndIndex(a1, a2, &v10, v9))
    && (v7 = (float *)(*(_QWORD *)&v6[10 * v10 + 50] + 4LL * v9[0])) != 0LL )
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
