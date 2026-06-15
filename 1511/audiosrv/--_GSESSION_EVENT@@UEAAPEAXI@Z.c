/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002FD70
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002FF28 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1SESSION_EVENT@@UEAA@XZ @ 0x18002FDB4 (--1SESSION_EVENT@@UEAA@XZ.c)
 */

SESSION_EVENT *__fastcall SESSION_EVENT::`scalar deleting destructor'(SESSION_EVENT *this, char a2)
{
  HANDLE ProcessHeap; // rax

  SESSION_EVENT::~SESSION_EVENT(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
