/*
 * XREFs of SepConvertTokenPrivileges @ 0x140087D88
 * Callers:
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140087DB0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
