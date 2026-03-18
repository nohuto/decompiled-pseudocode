/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C005C740
 * Callers:
 *     GreDeleteSemaphore @ 0x1C005C6D0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C005C710 (EngFreeMem.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  v4 = *a1;
  result = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*result != a1 )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  if ( MultiUserEngAllocListLock )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MultiUserEngAllocListLock", (__int64)MultiUserEngAllocListLock, a3);
    return (_QWORD *)GreReleaseSemaphoreInternal((struct _ERESOURCE *)MultiUserEngAllocListLock);
  }
  return result;
}
