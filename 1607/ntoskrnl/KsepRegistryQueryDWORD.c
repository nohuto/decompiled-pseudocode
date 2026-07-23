/*
 * XREFs of KsepRegistryQueryDWORD @ 0x140571D14
 * Callers:
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 */

NTSTATUS __fastcall KsepRegistryQueryDWORD(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  char v10; // al
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v14; // [rsp+4Ch] [rbp-4Ch]
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  if ( !KeyHandle )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v8 = KsepDebugFlag;
    KsepHistoryErrors[2 * v7 + 1] = -1073740768;
    KsepHistoryErrors[2 * v7] = 262790;
    if ( (v8 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x286u, 0LL);
  }
  if ( !a3 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 262791;
    if ( (v10 & 4) != 0 )
      RtlAssert("Value != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x287u, 0LL);
  }
  *a3 = 0;
  ResultLength = 20;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( !result )
  {
    if ( v15 == 4 && v14 == 4 )
      *a3 = v16;
    else
      return -1073741788;
  }
  return result;
}
