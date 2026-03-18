/*
 * XREFs of sub_1405BAB54 @ 0x1405BAB54
 * Callers:
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 * Callees:
 *     sub_1405BAB98 @ 0x1405BAB98 (sub_1405BAB98.c)
 */

__int64 __fastcall sub_1405BAB54(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1405BAB98(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
