/*
 * XREFs of SepMatchCapability @ 0x1400E8724
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
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
