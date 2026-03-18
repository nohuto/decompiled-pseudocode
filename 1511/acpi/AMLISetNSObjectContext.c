/*
 * XREFs of AMLISetNSObjectContext @ 0x1C00048C0
 * Callers:
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectContext(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)(*a1 + 96) = a2;
  return result;
}
