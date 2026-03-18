/*
 * XREFs of IoQueryVhdBootInformation @ 0x14054AAF4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_1402D3270;
  if ( a3 < (unsigned int)dword_1402D3270 )
    v5 = -1073741789;
  else
    memmove(a2, off_1402D3288, (unsigned int)dword_1402D3270);
  *a4 = v6;
  return v5;
}
