/*
 * XREFs of sub_180001010 @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1800266A2 (memcmp.c)
 */

__int64 __fastcall sub_180001010(void **Buf1, int *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void **v9; // r8

  v3 = -1;
  v5 = memcmp(Buf1, *(&off_18002E640 + 1), 0x10uLL);
  if ( v5 <= 0 )
  {
    if ( !v5 )
    {
      v3 = 8;
LABEL_12:
      *a2 = v3;
      return 1LL;
    }
  }
  else
  {
    v3 = 1;
  }
  v6 = memcmp(Buf1, off_180030220[v3 + 4][1], 0x10uLL);
  if ( v6 >= 0 )
  {
    v3 += 4;
    if ( !v6 )
      goto LABEL_12;
  }
  v7 = memcmp(Buf1, off_180030220[v3 + 2][1], 0x10uLL);
  if ( v7 >= 0 )
  {
    v3 += 2;
    if ( !v7 )
      goto LABEL_12;
  }
  v8 = memcmp(Buf1, off_180030220[v3 + 1][1], 0x10uLL);
  if ( v8 >= 0 )
  {
    ++v3;
    if ( !v8 )
      goto LABEL_12;
  }
  if ( ++v3 < 9 )
  {
    _mm_lfence();
    v9 = (void **)off_180030220[v3][1];
    if ( *Buf1 == *v9 && Buf1[1] == v9[1] )
      goto LABEL_12;
  }
  return 0LL;
}
