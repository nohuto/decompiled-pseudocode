/*
 * XREFs of TppSimplepFree @ 0x180074D20
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(_QWORD *a1, char *a2, volatile signed __int32 *a3, __int64 a4)
{
  TppCleanupGroupMemberDestroy(a1, a2, a3, a4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (unsigned __int64)a1);
}
