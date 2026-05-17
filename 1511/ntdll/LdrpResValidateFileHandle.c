/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800D578C
 * Callers:
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A52E0 (NtQueryInformationFile.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile();
}
