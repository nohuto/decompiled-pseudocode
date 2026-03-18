/*
 * XREFs of VmpProcessInvalidateSlat @ 0x14020C99C
 * Callers:
 *     VmpFlushTb @ 0x14020C4C4 (VmpFlushTb.c)
 *     VmpProcessFlushEntire @ 0x14020C924 (VmpProcessFlushEntire.c)
 *     VmpRemoveMemoryRange @ 0x14020CA3C (VmpRemoveMemoryRange.c)
 * Callees:
 *     HvlMapGpaPages @ 0x140221E74 (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpProcessInvalidateSlat(__int64 a1, int a2, int a3)
{
  char v4; // [rsp+40h] [rbp+8h] BYREF

  return HvlMapGpaPages(*(_QWORD *)(a1 + 64), a2, 1024, a3, 0LL, (__int64)&v4);
}
