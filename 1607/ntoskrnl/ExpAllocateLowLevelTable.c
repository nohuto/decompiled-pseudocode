/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1404C15C8
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1404C1120 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404C12B4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x1404C1378 (ExpAllocateHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404C1600 (ExpAllocateTablePagedPoolNoZero.c)
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
