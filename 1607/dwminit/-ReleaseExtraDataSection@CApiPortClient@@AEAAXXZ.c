/*
 * XREFs of ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x1800053E0
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x180004BD4 (--1CApiPortClient@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApiPortClient::ReleaseExtraDataSection(CApiPortClient *this)
{
  HANDLE CurrentProcess; // rax

  EnterCriticalSection(&CriticalSection);
  if ( BaseAddress )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  LeaveCriticalSection(&CriticalSection);
}
