/*
 * XREFs of MiMarkFileExtentsDeleted @ 0x140230CE4
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     MiDeleteSubsection @ 0x14012DB70 (MiDeleteSubsection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkFileExtentsDeleted(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
