/*
 * XREFs of ?SetPropertyValue@CCompiledEffect@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180113970
 * Callers:
 *     ?OnPropertyValueChanged@CCompiledEffect@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801134C0 (-OnPropertyValueChanged@CCompiledEffect@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z @ 0x18011318C (-GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z.c)
 */

__int64 __fastcall CCompiledEffect::SetPropertyValue(CCompiledEffect *a1, unsigned int a2, int a3, const void *a4)
{
  int PropertyStorage; // eax
  unsigned int v8; // ebx
  int ExpressionTypeChannelCount; // eax
  bool v10; // cf
  unsigned int v12; // [rsp+20h] [rbp-28h]
  bool v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+34h] [rbp-14h] BYREF
  void *Destination; // [rsp+38h] [rbp-10h] BYREF

  PropertyStorage = CCompiledEffect::GetPropertyStorage(
                      a1,
                      a2,
                      (enum DCOMPOSITION_EXPRESSION_TYPE *)&v14,
                      &Destination,
                      &v13);
  v8 = PropertyStorage;
  if ( PropertyStorage >= 0 )
  {
    if ( a3 == v14 )
    {
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(a3);
      if ( !memcpy_s(
              Destination,
              (unsigned int)(4 * ExpressionTypeChannelCount),
              a4,
              (unsigned int)(4 * ExpressionTypeChannelCount)) )
      {
        v10 = v13;
        *((_BYTE *)a1 + 160) = 1;
        CResource::NotifyOnChanged(a1, v10 ? 6 : 0, 0LL);
        return 0;
      }
      v12 = 643;
    }
    else
    {
      v12 = 636;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v12);
    return v8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, PropertyStorage, 0x278u);
  return v8;
}
