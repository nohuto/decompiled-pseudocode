/*
 * XREFs of SepIsOptionPresent @ 0x14052805C
 * Callers:
 *     SepInitializeCodeIntegrity @ 0x140527F64 (SepInitializeCodeIntegrity.c)
 * Callees:
 *     strstr @ 0x140143918 (strstr.c)
 */

__int64 __fastcall SepIsOptionPresent(const char *a1, const char *a2)
{
  unsigned int v4; // ebx
  char *v5; // rax
  __int64 v6; // r8

  v4 = 0;
  v5 = strstr(a1, a2);
  if ( v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    if ( (v5 == a1 || *(v5 - 1) == 32) && (v5[(unsigned int)v6] & 0xDF) == 0 )
      return 1;
  }
  return v4;
}
