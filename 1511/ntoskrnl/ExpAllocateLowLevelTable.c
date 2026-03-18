/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1403E32DC
 * Callers:
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1404B5F30 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1403E3314 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
