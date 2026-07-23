/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1404AD2F8
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1404ACE50 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404AD330 (ExpAllocateTablePagedPoolNoZero.c)
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
