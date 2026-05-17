/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800CCF4C
 * Callers:
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x180093A10 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
