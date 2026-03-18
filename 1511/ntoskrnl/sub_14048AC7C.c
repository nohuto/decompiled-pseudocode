/*
 * XREFs of sub_14048AC7C @ 0x14048AC7C
 * Callers:
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 * Callees:
 *     sub_14048ACC0 @ 0x14048ACC0 (sub_14048ACC0.c)
 */

__int64 __fastcall sub_14048AC7C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14048ACC0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
