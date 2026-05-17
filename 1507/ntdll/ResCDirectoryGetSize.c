/*
 * XREFs of ResCDirectoryGetSize @ 0x1800FBF98
 * Callers:
 *     ResCDirectoryValidateHeader @ 0x1800FC1F4 (ResCDirectoryValidateHeader.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x1800FC1F4 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryGetSize(_DWORD *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( a1 && (unsigned int)ResCDirectoryValidateHeader(a1) )
    return (unsigned int)(2 * (a1[14] + 16 * a1[13] + 24 * a1[15]) + 104);
  return v1;
}
