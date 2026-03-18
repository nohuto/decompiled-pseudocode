/*
 * XREFs of _CmIsDevicePresent @ 0x140560F00
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1405447FC (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DCDE0 (_NtPlugPlayGetDeviceStatus.c)
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
    || (result = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)v6, (__int64)&v9, (__int64)&v8),
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
