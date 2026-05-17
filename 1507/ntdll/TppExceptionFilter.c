/*
 * XREFs of TppExceptionFilter @ 0x1800F5B34
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F5ED4 (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E3F90 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall TppExceptionFilter(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(__int64))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    result = v2(a1);
  else
    result = RtlUnhandledExceptionFilter2((const void **)a1);
  if ( !(_DWORD)result && **(_DWORD **)a1 == -1073741571 )
  {
    RtlReportException(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 3u);
    return 1LL;
  }
  return result;
}
