/*
 * XREFs of sub_140543D40 @ 0x140543D40
 * Callers:
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 * Callees:
 *     sub_140543D84 @ 0x140543D84 (sub_140543D84.c)
 */

__int64 __fastcall sub_140543D40(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140543D84(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
