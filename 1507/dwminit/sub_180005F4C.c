/*
 * XREFs of sub_180005F4C @ 0x180005F4C
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180005FD8 @ 0x180005FD8 (sub_180005FD8.c)
 *     sub_1800061B8 @ 0x1800061B8 (sub_1800061B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180005F4C(__int64 a1, __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned int *v7; // rax
  __int64 result; // rax

  v2 = (double)(int)a2;
  if ( a2 < 0 )
    v2 = v2 + 1.844674407370955e19;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  v6 = 0;
  if ( (unsigned int)v5 > 0x11 )
  {
    v7 = dword_180009480;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = dword_180009480[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
