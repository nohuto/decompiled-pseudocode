/*
 * XREFs of ResCDirectoryPopulate @ 0x1800FBFE4
 * Callers:
 *     ResCDirectoryCreateAndPopulate @ 0x1800FBEF4 (ResCDirectoryCreateAndPopulate.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x1800FC1F4 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryPopulate(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = ResCDirectoryValidateHeader(a2);
  if ( (_DWORD)result )
  {
    a1[3] = a2;
    a1[4] = a2 + 104;
    v5 = 32LL * *(unsigned int *)(a2 + 52) + a2 + 104;
    a1[5] = v5;
    result = 1LL;
    a1[6] = v5 + 2LL * *(unsigned int *)(a2 + 56);
  }
  return result;
}
