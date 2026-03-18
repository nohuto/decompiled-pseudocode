/*
 * XREFs of ExpGetBilledProcess @ 0x1400E2B14
 * Callers:
 *     ExReturnPoolQuota @ 0x1400E2A64 (ExReturnPoolQuota.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

_BYTE *__fastcall ExpGetBilledProcess(__int64 a1)
{
  _BYTE *BugCheckParameter4; // rcx

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return 0LL;
  BugCheckParameter4 = (_BYTE *)(a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8));
  if ( BugCheckParameter4 && (BugCheckParameter4 < MmSystemRangeStart || (*BugCheckParameter4 & 0x7F) != 3) )
    KeBugCheckEx(0xC2u, 0xDuLL, a1 + 16, *(unsigned int *)(a1 + 4), (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter4;
}
