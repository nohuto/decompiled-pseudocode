/*
 * XREFs of sub_140498310 @ 0x140498310
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_140498354 @ 0x140498354 (sub_140498354.c)
 */

__int64 __fastcall sub_140498310(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140498354(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
