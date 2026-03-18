/*
 * XREFs of ?bIsLocked@W32PIDLOCK@@QEAAHXZ @ 0x1C000D760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall W32PIDLOCK::bIsLocked(W32PIDLOCK *this)
{
  BOOL v2; // ebx

  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
  v2 = *(_DWORD *)this == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
  return v2;
}
