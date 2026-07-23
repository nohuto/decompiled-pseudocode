/*
 * XREFs of PfpGetParameter @ 0x1405727EC
 * Callers:
 *     PfpSetBaseTime @ 0x140572130 (PfpSetBaseTime.c)
 *     PfpParametersRead @ 0x14057221C (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x1405723EC (PfSnParametersRead.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __fastcall PfpGetParameter(HANDLE KeyHandle, const WCHAR *a2, int a3, void *a4, unsigned int *a5)
{
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v13; // [rsp+54h] [rbp-134h]
  unsigned int Size; // [rsp+58h] [rbp-130h]
  size_t Size_4; // [rsp+5Ch] [rbp-12Ch] BYREF

  ResultLength = 272;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( ResultLength < 0x10 )
    {
      return -1073741823;
    }
    else if ( v13 == a3 )
    {
      v9 = Size;
      if ( Size > *a5 )
      {
        return -1073741789;
      }
      else
      {
        memmove(a4, &Size_4, Size);
        result = 0;
        *a5 = v9;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
