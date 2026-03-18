/*
 * XREFs of ?vLockSimple@W32PIDLOCK@@QEAAXK@Z @ 0x1C000D828
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0025DA0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vLockSimple(W32PIDLOCK *this, int a2)
{
  __int64 i; // rcx
  __int64 v5; // rcx
  int v6; // eax

  for ( i = *((_QWORD *)this + 5); ; i = *((_QWORD *)this + 5) )
  {
    KeWaitForSingleObject((PVOID)(i + 64), UserRequest, 0, 0, 0LL);
    if ( !*(_DWORD *)this || *(_DWORD *)this == a2 )
      break;
    v5 = *((_QWORD *)this + 5);
    ++*((_DWORD *)this + 1);
    KeReleaseMutex((PRKMUTEX)(v5 + 64), 0);
    KeWaitForSingleObject(*((PVOID *)this + 5), UserRequest, 0, 0, 0LL);
  }
  v6 = ++*((_DWORD *)this + 2);
  *(_DWORD *)this = a2;
  if ( v6 > *((_DWORD *)this + 3) )
    *((_DWORD *)this + 3) = v6;
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
}
