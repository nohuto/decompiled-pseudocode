/*
 * XREFs of ??9@YA_NAEBU_FD_KERNINGPAIR@@0@Z @ 0x1C029C04C
 * Callers:
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C029C5F0 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator!=(_WORD *a1, _WORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
