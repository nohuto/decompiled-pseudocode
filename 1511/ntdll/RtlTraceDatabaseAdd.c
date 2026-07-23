/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1800EA4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800EA958 (RtlpTraceDatabaseInternalAdd.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // al

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 40) = 0LL;
  LOBYTE(a4) = v8;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return a4;
}
