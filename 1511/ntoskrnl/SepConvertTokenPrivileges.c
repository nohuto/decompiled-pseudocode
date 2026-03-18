/*
 * XREFs of SepConvertTokenPrivileges @ 0x140004B64
 * Callers:
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140004B80 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
