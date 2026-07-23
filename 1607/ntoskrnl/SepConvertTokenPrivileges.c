/*
 * XREFs of SepConvertTokenPrivileges @ 0x14010BF78
 * Callers:
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010BFA0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
