/*
 * XREFs of sub_180021764 @ 0x180021764
 * Callers:
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 * Callees:
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 *     sub_1800213A0 @ 0x1800213A0 (sub_1800213A0.c)
 */

void **__fastcall sub_180021764(char a1)
{
  void **v2; // rax
  void **v3; // rbx

  v2 = (void **)sub_180021148(0x38uLL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *((_DWORD *)v2 + 2) = 1;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *((_DWORD *)v2 + 8) = 0;
  *v2 = &off_18002B3F0;
  *((_BYTE *)v2 + 36) = a1;
  v2[5] = 0LL;
  *((_BYTE *)v2 + 48) = 0;
  sub_1800213A0(v2 + 5, byte_18002B408);
  return v3;
}
