/*
 * XREFs of PoGetLightestSystemStateForEject @ 0x14066A264
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140132A90 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwPowerInformation @ 0x14015ADD0 (ZwPowerInformation.c)
 */

int __fastcall PoGetLightestSystemStateForEject(char a1, bool a2, char a3, _DWORD *a4)
{
  bool v6; // bl
  int result; // eax
  NTSTATUS v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  HANDLE KeyHandle; // [rsp+38h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-1h]
  int v16; // [rsp+64h] [rbp+3h]
  int v17; // [rsp+68h] [rbp+7h]
  unsigned int v18; // [rsp+6Ch] [rbp+Bh]
  unsigned int v19; // [rsp+70h] [rbp+Fh]
  _BYTE OutputBuffer[8]; // [rsp+78h] [rbp+17h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+1Fh]
  unsigned int v22; // [rsp+84h] [rbp+23h]

  *a4 = 0;
  v6 = a2;
  if ( !a2 )
    v6 = a3 == 0;
  if ( !a1 )
  {
    *a4 = 2 - v6;
    return 0;
  }
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UndockPowerPolicy");
    v8 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x20u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( v8 >= 0 )
    {
      if ( v15 < 8 )
        return -1073741492;
      if ( v16 != 1 )
        return -1073741823;
      if ( v15 < 0x10 || v17 != v15 )
        return -1073741492;
    }
    else
    {
      if ( v8 != -1073741772 )
        return v8;
      v19 = 0;
      v18 = 10;
    }
    result = ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u);
    v9 = result;
    if ( result >= 0 )
    {
      if ( v21 && 100 * v22 > v22 )
        v10 = 100 * v22 / v21;
      else
        v10 = 0;
      if ( v10 >= v18 && v6 )
      {
        *a4 = 1;
      }
      else if ( a3 )
      {
        *a4 = v10 < v19 ? 5 : 2;
      }
      else
      {
        return -1073741090;
      }
      return v9;
    }
  }
  return result;
}
