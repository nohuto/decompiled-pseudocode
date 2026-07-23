/*
 * XREFs of SepMatchCapability @ 0x1400A5D08
 * Callers:
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 */

char __fastcall SepMatchCapability(__int64 a1, int a2, void *a3, int a4, _BYTE *a5, _DWORD *a6)
{
  char result; // al

  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 808), 0LL, a3, 0, 1, 0);
  if ( result )
  {
    *a6 |= a4 & a2;
    result = (char)a5;
    *a5 = 1;
  }
  return result;
}
