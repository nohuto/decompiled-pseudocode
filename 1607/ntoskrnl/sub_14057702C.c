/*
 * XREFs of sub_14057702C @ 0x14057702C
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_140577070 @ 0x140577070 (sub_140577070.c)
 */

__int64 __fastcall sub_14057702C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140577070(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
