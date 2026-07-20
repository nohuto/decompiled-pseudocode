/*
 * XREFs of sub_14000F810 @ 0x14000F810
 * Callers:
 *     sub_14000FC70 @ 0x14000FC70 (sub_14000FC70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_14000F810()
{
  unsigned __int64 result; // rax
  double v1; // xmm0_8
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  result = 0LL;
  if ( byte_14002046D == 1 )
  {
    v1 = 2744006883.555555;
    v2 = 0LL;
    if ( 2744006883.555555 >= 9.223372036854776e18 )
    {
      v1 = 2744006883.555555 - 9.223372036854776e18;
      if ( 2744006883.555555 - 9.223372036854776e18 < 9.223372036854776e18 )
        v2 = 0x8000000000000000uLL;
    }
    v3 = v2 + (unsigned int)(int)v1;
    if ( v3 <= qword_140020480 )
      v4 = 0LL;
    else
      v4 = v3 - qword_140020480;
    return (v4 >> 4) + v4;
  }
  return result;
}
