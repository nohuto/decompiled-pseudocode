/*
 * XREFs of ResCDirectoryGetSize @ 0x180105CC0
 * Callers:
 *     ResCDirectoryValidateHeader @ 0x18005D090 (ResCDirectoryValidateHeader.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x18005D090 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryGetSize(_DWORD *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( a1 && (unsigned int)ResCDirectoryValidateHeader((__int64)a1, 0) )
    return (unsigned int)(2 * (a1[14] + 16 * a1[13] + 24 * a1[15]) + 104);
  return v1;
}
