/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x14053F5C0
 * Callers:
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF

  result = ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
    *a1 = SystemInformation;
  return result;
}
