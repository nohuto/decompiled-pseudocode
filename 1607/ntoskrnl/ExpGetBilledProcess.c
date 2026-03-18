/*
 * XREFs of ExpGetBilledProcess @ 0x1400F9614
 * Callers:
 *     ExReturnPoolQuota @ 0x1400F9564 (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x14022D01C (ExQueryPoolBlockSize.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

_BYTE *__fastcall ExpGetBilledProcess(__int64 a1)
{
  _BYTE *BugCheckParameter4; // rcx

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return 0LL;
  BugCheckParameter4 = (_BYTE *)(a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8));
  if ( BugCheckParameter4
    && ((unsigned __int64)BugCheckParameter4 < 0xFFFF800000000000uLL || (*BugCheckParameter4 & 0x7F) != 3) )
  {
    KeBugCheckEx(0xC2u, 0xDuLL, a1 + 16, *(unsigned int *)(a1 + 4), (ULONG_PTR)BugCheckParameter4);
  }
  return BugCheckParameter4;
}
