/*
 * XREFs of sub_140008550 @ 0x140008550
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400089B0 @ 0x1400089B0 (sub_1400089B0.c)
 */

__int64 __fastcall sub_140008550(PCWSTR SourceString, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( !wcsicmp(SourceString, L"DllDirectory") || !wcsicmp(SourceString, L"DllDirectory32") )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  else
  {
    v8 = 0LL;
  }
  return sub_1400089B0(a6, &DestinationString, v8, 1LL, 0LL);
}
