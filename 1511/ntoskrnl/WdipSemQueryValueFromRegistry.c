/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x1405338F8
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1405329D0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140532A20 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140532BD0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140532EC4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14065D05C (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
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
