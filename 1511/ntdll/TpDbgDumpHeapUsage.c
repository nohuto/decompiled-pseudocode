/*
 * XREFs of TpDbgDumpHeapUsage @ 0x1800F5420
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 */

void *__fastcall TpDbgDumpHeapUsage(
        char a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, void *, _QWORD, _DWORD, __int64),
        __int64 a3)
{
  unsigned int i; // edi
  void *result; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h]

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               i + ((unsigned int)TppHeapTag >> 18),
               a1,
               (__int64)v8);
    if ( result )
      result = (void *)a2(a3, i + TppHeapTag, result, v8[0], v8[1], v9);
  }
  return result;
}
