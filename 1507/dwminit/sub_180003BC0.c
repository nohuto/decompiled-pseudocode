/*
 * XREFs of sub_180003BC0 @ 0x180003BC0
 * Callers:
 *     sub_180003A94 @ 0x180003A94 (sub_180003A94.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180003BC0(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180008F50;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
      return result;
  }
  return 1;
}
