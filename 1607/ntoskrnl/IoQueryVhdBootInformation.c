/*
 * XREFs of IoQueryVhdBootInformation @ 0x140580878
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_1402F8D5C;
  if ( a3 < (unsigned int)dword_1402F8D5C )
    v5 = -1073741789;
  else
    memmove(a2, off_1402F4A08, (unsigned int)dword_1402F8D5C);
  *a4 = v6;
  return v5;
}
