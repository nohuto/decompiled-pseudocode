/*
 * XREFs of sub_14000BD80 @ 0x14000BD80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000BD80(__int64 a1, int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // eax
  int v6; // eax
  _BYTE JobInformation[48]; // [rsp+30h] [rbp-48h] BYREF

  if ( a4 == 4 && a2 == 4 )
    v4 = *a3;
  else
    v4 = 1;
  if ( v4 > 2 )
    v4 = 2;
  if ( !v4 )
    v4 = 1;
  if ( byte_14001FE58 == 1 )
    v4 = 1;
  dword_14001F028 = v4;
  if ( NtQueryInformationJobObject(0LL, (JOBOBJECTINFOCLASS)36, JobInformation, 0x2Cu, 0LL) >= 0 )
  {
    v6 = dword_14001F028;
    if ( JobInformation[40] )
      v6 = 1;
    dword_14001F028 = v6;
  }
  return 0LL;
}
