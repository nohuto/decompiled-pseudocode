/*
 * XREFs of sub_140497880 @ 0x140497880
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140497230 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049779C (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 */

__int64 __fastcall sub_140497880(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1404978C4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
