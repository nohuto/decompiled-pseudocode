/*
 * XREFs of SetObjectsFlag @ 0x1C005CDB8
 * Callers:
 *     AMLIFinalizeObject @ 0x1C00596B8 (AMLIFinalizeObject.c)
 *     SetObjectsFlag @ 0x1C005CDB8 (SetObjectsFlag.c)
 * Callees:
 *     SetObjectsFlag @ 0x1C005CDB8 (SetObjectsFlag.c)
 */

__int64 __fastcall SetObjectsFlag(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  *(_WORD *)(a1 + 64) |= a2;
  v2 = (_QWORD *)(a1 + 24);
  for ( i = *(_QWORD **)(a1 + 24); v2 != i; i = (_QWORD *)*i )
    result = SetObjectsFlag(i, a2);
  return result;
}
