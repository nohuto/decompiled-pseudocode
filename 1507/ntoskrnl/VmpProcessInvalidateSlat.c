/*
 * XREFs of VmpProcessInvalidateSlat @ 0x14025BB7C
 * Callers:
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 *     VmpProcessFlushEntire @ 0x14025BB10 (VmpProcessFlushEntire.c)
 *     VmpRemoveMemoryRange @ 0x14025BC74 (VmpRemoveMemoryRange.c)
 * Callees:
 *     HvlMapGpaPages @ 0x140271C0C (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpProcessInvalidateSlat(__int64 a1, int a2, int a3)
{
  char v4; // [rsp+40h] [rbp+8h] BYREF

  return HvlMapGpaPages(*(_QWORD *)(a1 + 48), a2, 1024, a3, 0LL, (__int64)&v4);
}
