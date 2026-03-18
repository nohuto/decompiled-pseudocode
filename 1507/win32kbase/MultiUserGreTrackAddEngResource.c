/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C00244B0
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C0024420 (EngAllocMem.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

struct _LIST_ENTRY **__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2, __int64 a3)
{
  struct _LIST_ENTRY **result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  result = (struct _LIST_ENTRY **)qword_1C0101F38;
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  if ( *result != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *result = (struct _LIST_ENTRY *)a1;
  qword_1C0101F38 = a1;
  if ( MultiUserEngAllocListLock )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MultiUserEngAllocListLock", (__int64)MultiUserEngAllocListLock, a3);
    return (struct _LIST_ENTRY **)GreReleaseSemaphoreInternal(MultiUserEngAllocListLock);
  }
  return result;
}
