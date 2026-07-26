/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C009D2F8
 * Callers:
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C009CDC8 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C009D390 (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        struct _UNICODE_STRING *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  NTSTATUS v5; // eax
  ULONG v6; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+3Ch] [rbp-2Ch]
  int v11; // [rsp+40h] [rbp-28h]
  ULONG v12; // [rsp+44h] [rbp-24h]

  v5 = ZwQueryValueKey(this->_p, a2, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v5 >= 0 )
  {
    if ( v10 != 4 || v11 != 4 )
    {
      v6 = ResultLength;
      goto LABEL_9;
    }
    v6 = v12;
    v5 = 0;
  }
  else
  {
    v6 = ResultLength;
  }
  if ( v5 == -1073741772 )
  {
LABEL_4:
    *a3 = 0;
    return 0LL;
  }
LABEL_9:
  if ( !v6 )
    goto LABEL_4;
  if ( v6 == 1 )
  {
    *a3 = 1;
    return 0LL;
  }
  return 3221227787LL;
}
