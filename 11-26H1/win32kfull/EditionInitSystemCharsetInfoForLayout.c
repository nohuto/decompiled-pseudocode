/*
 * XREFs of EditionInitSystemCharsetInfoForLayout @ 0x140240F30
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientGetCharsetInfo @ 0x14024102C (xxxClientGetCharsetInfo.c)
 */

__int64 __fastcall EditionInitSystemCharsetInfoForLayout(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+40h] [rbp+8h] BYREF
  ULONG Value; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  Value = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66080) )
  {
    DefaultLocaleId = 0;
    if ( ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (unsigned int)xxxClientGetCharsetInfo(DefaultLocaleId, a2) )
    {
      v8 = *((_DWORD *)a2 + 6);
      *(_DWORD *)(W32GetUserSessionState(v7, v6) + 66080) = v8;
      v2 = *a2;
    }
    else
    {
      *(_DWORD *)(W32GetUserSessionState(v7, v6) + 66080) = 0xFFFF;
    }
    *(_BYTE *)(W32GetUserSessionState(v10, v9) + 14051) = v2;
  }
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 8));
  RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
  return xxxClientGetCharsetInfo(Value, a2);
}
