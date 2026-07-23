/*
 * XREFs of RtlpLangNameInMultiSzString_Size @ 0x18003E6F8
 * Callers:
 *     RtlpMuiRegTryToAppendLangId @ 0x180014880 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4 (RtlpMuiRegTryToAppendLanguageName.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180040BBC (RtlStringCchLengthW.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString_Size(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  char v3; // bl
  const wchar_t *v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = String1;
  v6 = 0LL;
  if ( String1 )
  {
    if ( String2 )
    {
      v7 = a3;
      if ( (int)RtlStringCchLengthW(String1, a3, &v10) >= 0 )
      {
        if ( v7 )
        {
          while ( v5 && *v5 )
          {
            if ( !wcsicmp(v5, String2) )
              return 1;
            v8 = -1LL;
            do
              ++v8;
            while ( v5[v8] );
            v6 += v8 + 1;
            v5 += v8 + 1;
            if ( v6 >= v7 )
              return v3;
          }
        }
      }
    }
  }
  return v3;
}
