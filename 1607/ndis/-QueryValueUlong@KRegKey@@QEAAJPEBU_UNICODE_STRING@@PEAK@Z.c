/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00A773C
 * Callers:
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00A79D8 (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00A7D10 (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A7F1C (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D3C20 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+40h] [rbp-28h]
  unsigned int v9; // [rsp+44h] [rbp-24h]

  result = ZwQueryValueKey(this->_p, a2, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v7 == 4 )
    {
      if ( v8 == 4 )
      {
        *a3 = v9;
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
