/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0039AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this, void *a2, struct DC *a3)
{
  LONG v5; // r8d

  if ( (*((_QWORD *)this + 30) || (*((_DWORD *)this + 29) & 1) != 0) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 38) + 64LL), 0);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 38) + 64LL), UserRequest, 0, 0, 0LL);
    if ( *((_DWORD *)this + 66) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      && (*((_DWORD *)this + 68))-- == 1 )
    {
      v5 = *((_DWORD *)this + 67);
      *((_DWORD *)this + 66) = 0;
      if ( v5 )
      {
        KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 38), 0, v5, 0);
        *((_DWORD *)this + 67) = 0;
      }
    }
    KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 38) + 64LL), 0);
  }
  return 1LL;
}
