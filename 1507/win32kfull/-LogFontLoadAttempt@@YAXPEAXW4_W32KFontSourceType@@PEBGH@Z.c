/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CEB4
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025D1CC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z @ 0x1C025CE1C (-GetProcessImageFileName@@YAPEAU_UNICODE_STRING@@PEAX@Z.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  struct _UNICODE_STRING *ProcessImageFileName; // rax
  struct _UNICODE_STRING *v7; // rbx
  const unsigned __int16 *Buffer; // rcx
  char result; // al
  __int64 v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  unsigned int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]

  v14 = a4;
  ProcessImageFileName = GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    Buffer = ProcessImageFileName->Buffer;
  else
    Buffer = &qword_1C015E270;
  result = EtwFontLoadAttemptEvent(Buffer, a2, a3, v14);
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    result = TlgKeywordOn(v11, 0x200000000000uLL);
    if ( result )
    {
      v19 = 0;
      v22 = 0;
      v17 = (int *)&v15;
      v20 = &v14;
      v15 = a2;
      v18 = 4;
      v21 = 4;
      result = TlgWrite((TraceLoggingHProvider)4, &unk_1C02EAE34, v12, v13, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7, v10, v12, v13);
  return result;
}
