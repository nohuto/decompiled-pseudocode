/*
 * XREFs of RtlSubtreeSuccessor @ 0x1800DE520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSubtreeSuccessor(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    for ( i = *(_QWORD *)(result + 8); i; i = *(_QWORD *)(i + 8) )
      result = i;
  }
  return result;
}
