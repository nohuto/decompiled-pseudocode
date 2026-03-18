/*
 * XREFs of sub_140576AEC @ 0x140576AEC
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140497230 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 */

__int64 __fastcall sub_140576AEC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140576B30(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
