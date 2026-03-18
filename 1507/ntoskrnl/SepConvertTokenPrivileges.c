/*
 * XREFs of SepConvertTokenPrivileges @ 0x14010D9E4
 * Callers:
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010DA00 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
