/*
 * XREFs of MyRegQueryUlong @ 0x1C00325B0
 * Callers:
 *     ReadManifestAssignedValue @ 0x1C0031CD4 (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0031D90 (CheckUSBFnIncludeDefaultCfg.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00321C8 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

__int64 __fastcall MyRegQueryUlong(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 >= 0 )
  {
    if ( v10 == 4 )
      *a3 = v11;
    else
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
