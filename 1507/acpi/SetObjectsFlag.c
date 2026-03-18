/*
 * XREFs of SetObjectsFlag @ 0x1C0045C7C
 * Callers:
 *     AMLIFinalizeObject @ 0x1C0042638 (AMLIFinalizeObject.c)
 *     SetObjectsFlag @ 0x1C0045C7C (SetObjectsFlag.c)
 * Callees:
 *     SetObjectsFlag @ 0x1C0045C7C (SetObjectsFlag.c)
 */

__int64 __fastcall SetObjectsFlag(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  *(_WORD *)(a1 + 56) |= a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    do
    {
      result = SetObjectsFlag(v3, a2);
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 != *(_QWORD *)(a1 + 24) );
  }
  return result;
}
