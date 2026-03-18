/*
 * XREFs of MmMarkHiberRange @ 0x14056A138
 * Callers:
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

void __fastcall MmMarkHiberRange(void *a1, unsigned __int64 a2, __int64 a3)
{
  PoSetHiberRange(
    a1,
    2u,
    (PVOID)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
    (((a2 + a3) >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL),
    0x20657450u);
}
