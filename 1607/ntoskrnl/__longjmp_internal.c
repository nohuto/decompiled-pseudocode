/*
 * XREFs of __longjmp_internal @ 0x140159F20
 * Callers:
 *     longjmp @ 0x14014D1A0 (longjmp.c)
 * Callees:
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 */

void __fastcall __noreturn _longjmp_internal(unsigned __int64 a1, __int64 a2)
{
  _EXCEPTION_RECORD *HistoryTable; // r10
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-508h] BYREF

  if ( !a2 )
    a2 = 1LL;
  HistoryTable = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      ExceptionRecord.ExceptionCode = -2147483610;
      ExceptionRecord.ExceptionFlags = (unsigned int)HistoryTable;
      ExceptionRecord.ExceptionRecord = HistoryTable;
      ExceptionRecord.ExceptionAddress = HistoryTable;
      ExceptionRecord.NumberParameters = (_DWORD)HistoryTable + 1;
      ExceptionRecord.ExceptionInformation[0] = a1;
      RtlUnwindEx(
        *(PVOID *)a1,
        *(PVOID *)(a1 + 80),
        &ExceptionRecord,
        (PVOID)a2,
        (struct _CONTEXT *)&ExceptionRecord.ExceptionInformation[2],
        (PUNWIND_HISTORY_TABLE)HistoryTable);
    }
  }
  _mm_setcsr(*(_DWORD *)(a1 + 88));
  (*(void (**)(void))(a1 + 80))();
}
