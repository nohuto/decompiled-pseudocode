/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0259FB8
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0259F20 (-GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  struct _UNICODE_STRING *ProcessImageFileName; // rax
  struct _UNICODE_STRING *v7; // rbx
  const unsigned __int16 *Buffer; // rcx
  char result; // al
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  unsigned int *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]

  v12 = a4;
  ProcessImageFileName = GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    Buffer = ProcessImageFileName->Buffer;
  else
    Buffer = &qword_1C015B240;
  result = EtwFontLoadAttemptEvent(Buffer, a2, a3, v12);
  if ( dword_1C0320840 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL);
    if ( result )
    {
      v17 = 0;
      v20 = 0;
      v15 = (int *)&v13;
      v18 = &v12;
      v13 = a2;
      v16 = 4;
      v19 = 4;
      result = TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF98D, v10, v11, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
