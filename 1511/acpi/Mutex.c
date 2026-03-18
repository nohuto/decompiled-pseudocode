/*
 * XREFs of Mutex @ 0x1C0005F80
 * Callers:
 *     <none>
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C000601C (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C00060F8 (InitMutex.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Mutex(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 64);
  result = CreateNameSpaceObject(a1[40], *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], a1[11], a2 + 64, 0);
  if ( !(_DWORD)result )
  {
    result = InitMutex(a1[40], *v2, *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL), 0LL);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*v2 + 88LL), (_DWORD)a1, 0, 0);
    }
  }
  return result;
}
