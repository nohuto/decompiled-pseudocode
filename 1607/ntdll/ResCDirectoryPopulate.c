/*
 * XREFs of ResCDirectoryPopulate @ 0x180105D0C
 * Callers:
 *     ResCDirectoryCreateAndPopulate @ 0x180105C1C (ResCDirectoryCreateAndPopulate.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x18005D090 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryPopulate(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = ResCDirectoryValidateHeader(a2, a3);
  if ( (_DWORD)result )
  {
    a1[3] = a2;
    a1[4] = a2 + 104;
    v6 = 32LL * *(unsigned int *)(a2 + 52) + a2 + 104;
    a1[5] = v6;
    result = 1LL;
    a1[6] = v6 + 2LL * *(unsigned int *)(a2 + 56);
  }
  return result;
}
