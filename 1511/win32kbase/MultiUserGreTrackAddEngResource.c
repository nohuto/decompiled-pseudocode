/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C0012430
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C00123A0 (EngAllocMem.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

struct _LIST_ENTRY **__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  struct _LIST_ENTRY **result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  if ( WPP_MAIN_CB.Reserved )
    EngAcquireSemaphore((HSEMAPHORE)WPP_MAIN_CB.Reserved);
  result = (struct _LIST_ENTRY **)qword_1C0106FA8;
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  if ( *result != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *result = (struct _LIST_ENTRY *)a1;
  qword_1C0106FA8 = a1;
  if ( WPP_MAIN_CB.Reserved )
  {
    EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock");
    return (struct _LIST_ENTRY **)GreReleaseSemaphoreInternal(WPP_MAIN_CB.Reserved);
  }
  return result;
}
