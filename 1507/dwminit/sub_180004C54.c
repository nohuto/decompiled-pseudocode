/*
 * XREFs of sub_180004C54 @ 0x180004C54
 * Callers:
 *     sub_180004564 @ 0x180004564 (sub_180004564.c)
 * Callees:
 *     <none>
 */

void sub_180004C54()
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
