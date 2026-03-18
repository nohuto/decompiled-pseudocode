/*
 * XREFs of InitCreateUserSubsystem @ 0x1C013939C
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C00317C0 (FastGetProfileStringW.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

char *InitCreateUserSubsystem()
{
  char *result; // rax
  unsigned int v1; // ebx
  const wchar_t *v2; // rdi
  wchar_t *v3; // rax
  wchar_t *v4; // rax
  wchar_t *v5; // rsi
  ULONG v6; // ecx
  wchar_t *v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = (char *)Win32AllocPoolWithQuota();
  v1 = 0;
  v2 = (const wchar_t *)result;
  if ( result )
  {
    if ( (unsigned int)FastGetProfileStringW(0LL, 10LL, L"Windows", (char *)L"SharedSection=,3072", result, 0x25Fu, 0) )
    {
      gdwDesktopSectionSize = 512;
      gdwNOIOSectionSize = 128;
      v3 = wcsstr(v2, L"SharedSection");
      if ( v3 )
      {
        v3[32] = 0;
        v4 = wcschr(v3, 0x2Cu);
        v5 = v4;
        if ( v4 )
        {
          RtlInitUnicodeString(&DestinationString, v4 + 1);
          RtlUnicodeStringToInteger(&DestinationString, 0, &gdwDesktopSectionSize);
          v6 = gdwDesktopSectionSize;
          if ( gdwDesktopSectionSize < 0x200 )
          {
            v6 = 512;
            gdwDesktopSectionSize = 512;
          }
          gdwNOIOSectionSize = v6;
          v7 = wcschr(v5 + 1, 0x2Cu);
          if ( v7 )
          {
            RtlInitUnicodeString(&DestinationString, v7 + 1);
            RtlUnicodeStringToInteger(&DestinationString, 0, &gdwNOIOSectionSize);
            if ( gdwNOIOSectionSize < 0x80 )
              gdwNOIOSectionSize = 128;
          }
        }
      }
      v1 = 1;
    }
    Win32FreePool();
    return (char *)v1;
  }
  return result;
}
