/*
 * XREFs of TpDbgDumpHeapUsage @ 0x1800F5420
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall TpDbgDumpHeapUsage(
        BOOLEAN a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, PWSTR, _QWORD, ULONG, SIZE_T),
        __int64 a3)
{
  unsigned int i; // edi
  PWSTR result; // rax
  _RTL_HEAP_TAG_INFO TagInfo; // [rsp+30h] [rbp-48h] BYREF

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(NtCurrentPeb()->ProcessHeap, 0, i + (TppHeapTag >> 18), a1, &TagInfo);
    if ( result )
      result = (PWSTR)a2(
                        a3,
                        i + TppHeapTag,
                        result,
                        TagInfo.NumberOfAllocations,
                        TagInfo.NumberOfFrees,
                        TagInfo.BytesAllocated);
  }
  return result;
}
