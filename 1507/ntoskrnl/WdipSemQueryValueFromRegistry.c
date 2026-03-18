/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x1405AEDDC
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1405ADEB4 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1405ADF04 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x1405AE0B4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1405AE3A8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1406DF904 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
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
