/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CBB8
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025CEA8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z @ 0x1C025CB20 (-GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  struct _UNICODE_STRING *ProcessImageFileName; // rax
  struct _UNICODE_STRING *v7; // rbx
  const WCHAR *Buffer; // rcx
  char result; // al
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  unsigned int *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]

  v13 = a4;
  ProcessImageFileName = GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    Buffer = ProcessImageFileName->Buffer;
  else
    Buffer = &word_1C0153C60;
  result = EtwFontLoadAttemptEvent(Buffer, a2, a3, v13);
  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    result = TlgKeywordOn(v10, 0x200000000000uLL);
    if ( result )
    {
      v18 = 0;
      v21 = 0;
      v16 = (int *)&v14;
      v19 = &v13;
      v14 = a2;
      v17 = 4;
      v20 = 4;
      result = TlgWrite((TraceLoggingHProvider)4, &unk_1C02E9DDD, v11, v12, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
