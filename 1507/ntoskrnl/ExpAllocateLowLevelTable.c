/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140523F88
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140523564 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140523FC0 (ExpAllocateTablePagedPoolNoZero.c)
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
