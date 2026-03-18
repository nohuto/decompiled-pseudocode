/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x140565840
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140564918 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140564968 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140564B18 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140564E0C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BE9C (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall WdipSemQueryValueFromRegistry(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  unsigned int Size; // [rsp+50h] [rbp-B8h]
  size_t Size_4; // [rsp+54h] [rbp-B4h] BYREF

  ResultLength = 0;
  if ( KeyHandle && a2 && a5 && a6 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      v10 = Size;
      if ( Size <= a4 && v15 == a3 )
      {
        memset(a5, 0, a4);
        memmove(a5, &Size_4, v10);
        *a6 = v10;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
