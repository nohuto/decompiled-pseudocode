/*
 * XREFs of RtlpHpStackDbInitialize @ 0x1800F8040
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpStackDbInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  RtlpHpStackDbContext = 0;
  qword_1801506A8 = 0LL;
  dword_1801506B0 = 0;
  dword_1801506A4 = 0;
  qword_1801506B8 = 0LL;
  stru_1801506C8.0 = 0LL;
  dword_1801506B4 = 0;
  qword_1801506D0 = (__int64)RtlpHpStackDbAllocRoutine;
  qword_1801506D8 = (__int64)RtlpHpStackDbFreeRoutine;
  result = 1LL;
  stru_1801506C0.0 = 0LL;
  qword_1801506E0 = (__int64)RtlpHpMetadataHeap;
  return result;
}
