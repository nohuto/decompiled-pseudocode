/*
 * XREFs of _CmIsDevicePresent @ 0x1404B01E0
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404B00D8 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140441D70 (_NtPlugPlayGetDeviceStatus.c)
 */

int __fastcall CmIsDevicePresent(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int result; // eax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0
    || (result = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)v6, (__int64)&v9, (__int64)&v8, 0),
        result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
