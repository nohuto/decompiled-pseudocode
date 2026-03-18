/*
 * XREFs of RIMIDECheckScanTimeSupport @ 0x1C00C5CB8
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

int __fastcall RIMIDECheckScanTimeSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int result; // eax
  unsigned __int16 v4[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_VALUE_CAPS v5; // [rsp+50h] [rbp-68h] BYREF

  v4[0] = 1;
  result = rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &v5, v4, a2);
  if ( result >= 0 )
  {
    result = v5.LogicalMax;
    if ( v5.LogicalMin < v5.LogicalMax && v5.LogicalMin >= 0 && v5.LogicalMax >= 0xFFFF )
    {
      *(_DWORD *)(a1 + 252) |= 0x200u;
      *(_DWORD *)(a1 + 1488) = result;
    }
  }
  return result;
}
