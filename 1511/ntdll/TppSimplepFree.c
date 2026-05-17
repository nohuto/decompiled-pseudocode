/*
 * XREFs of TppSimplepFree @ 0x18007F160
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (unsigned __int64)a1);
}
