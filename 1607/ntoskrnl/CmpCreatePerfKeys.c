/*
 * XREFs of CmpCreatePerfKeys @ 0x14055DD0C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpCreatePredefined @ 0x14055DDCC (CmpCreatePredefined.c)
 */

NTSTATUS CmpCreatePerfKeys()
{
  NTSTATUS result; // eax
  unsigned __int16 v1; // cx
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+30h] [rbp-58h] BYREF
  int v6; // [rsp+38h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 *v8; // [rsp+48h] [rbp-40h]
  int v9; // [rsp+50h] [rbp-38h]
  __int128 v10; // [rsp+58h] [rbp-30h]
  wchar_t pszDest[8]; // [rsp+68h] [rbp-20h] BYREF

  v6 = 48;
  v7 = 0LL;
  v9 = 64;
  v8 = &CmpPerflibPathString;
  v10 = 0LL;
  result = CmOpenKey(&Handle, 131078, (__int64)&v6, 0, 0LL);
  if ( result >= 0 )
  {
    CmpCreatePredefined(Handle, L"009", -2147483568LL);
    CmpCreatePredefined(Handle, L"CurrentLanguage", -2147483552LL);
    if ( PsDefaultSystemLocaleId != 1033 )
    {
      v1 = PsDefaultUILanguageId;
      v2 = 4LL;
      v3 = PsDefaultUILanguageId & 0x3FF;
      if ( v3 == 4 )
      {
        if ( (PsDefaultUILanguageId & 0xFC00) != 0x800 )
          v1 = 1028;
      }
      else if ( v3 == 22 )
      {
        if ( (PsDefaultUILanguageId & 0xFC00) != 0x400 )
          v1 = 2070;
      }
      else
      {
        v1 = PsDefaultUILanguageId & 0x3FF;
        v2 = 3LL;
      }
      LODWORD(v4) = v1;
      RtlStringCbPrintfW(pszDest, 0xAuLL, L"%0*X", v2, v4);
      CmpCreatePredefined(Handle, pszDest, -2147483552LL);
    }
    return NtClose(Handle);
  }
  return result;
}
