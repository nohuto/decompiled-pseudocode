/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x1403E7C90
 * Callers:
 *     PfTFreeTraceDump @ 0x1400066F0 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_1403280E0,
    (struct _SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
