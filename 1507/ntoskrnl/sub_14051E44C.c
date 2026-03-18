/*
 * XREFs of sub_14051E44C @ 0x14051E44C
 * Callers:
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 * Callees:
 *     sub_14051E490 @ 0x14051E490 (sub_14051E490.c)
 */

__int64 __fastcall sub_14051E44C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14051E490(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
