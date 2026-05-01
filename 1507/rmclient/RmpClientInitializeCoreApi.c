/*
 * XREFs of RmpClientInitializeCoreApi @ 0x180002810
 * Callers:
 *     DllMain @ 0x18000BD98 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 RmpClientInitializeCoreApi()
{
  __int64 result; // rax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]

  qword_1800226E8 = (__int64)&RmpClientConnectionListHead;
  RmpClientConnectionListHead = (__int64)&RmpClientConnectionListHead;
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  result = v2;
  RmpPageSize = v2;
  return result;
}
