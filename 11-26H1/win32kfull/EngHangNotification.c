/*
 * XREFs of EngHangNotification @ 0x140346760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

ULONG __stdcall EngHangNotification(HDEV hDev, PVOID Reserved)
{
  ULONG v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  _WORD *v7; // r14
  size_t v8; // r15
  size_t v9; // r12
  UCHAR v10; // bl
  void *DriverObject; // rax
  char *ErrorLogEntry; // rax
  char *v13; // rbx
  unsigned int (__fastcall *v14)(_QWORD, _QWORD); // rax

  v3 = 1;
  WdLogSingleEntry1(4LL, hDev);
  WdLogGlobalForLineNumber = 357;
  if ( hDev )
  {
    v4 = *((_QWORD *)hDev + 321);
    if ( v4 == -4 || !v4 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 369;
      return v3;
    }
    DbgPrint("GDI: EngHangNotification: %ls is not responding.\n", (const wchar_t *)(v4 + 64));
    WdLogSingleEntry1(5LL, v4);
    v5 = -1LL;
    WdLogGlobalForLineNumber = 374;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v4 + 2 * v6) );
    v7 = *(_WORD **)(v4 + 208);
    v8 = 2 * v6 + 2;
    do
      ++v5;
    while ( v7[v5] );
    v9 = 2 * v5 + 2;
    v10 = v8 + 2 * v5 + 42;
    DriverObject = (void *)UserGetDriverObject();
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DriverObject, v10);
    v13 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = -1073741436;
      *((_DWORD *)ErrorLogEntry + 1) = 2621442;
      memmove(ErrorLogEntry + 40, (const void *)v4, v8);
      memmove(&v13[v8 + 40], v7, v9);
      IoWriteErrorLogEntry(v13);
    }
    v14 = (unsigned int (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)hDev + 424);
    if ( v14 && !v14(*((_QWORD *)hDev + 223), 0LL) )
      v3 = 0;
  }
  WdLogSingleEntry1(5LL, v3);
  WdLogGlobalForLineNumber = 413;
  return v3;
}
