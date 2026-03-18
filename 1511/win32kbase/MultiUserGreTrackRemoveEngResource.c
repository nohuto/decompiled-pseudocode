/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C0059E20
 * Callers:
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  if ( WPP_MAIN_CB.Reserved )
    EngAcquireSemaphore((HSEMAPHORE)WPP_MAIN_CB.Reserved);
  v2 = *a1;
  result = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*result != a1 )
    __fastfail(3u);
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  if ( WPP_MAIN_CB.Reserved )
  {
    EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock");
    return (_QWORD *)GreReleaseSemaphoreInternal((struct _ERESOURCE *)WPP_MAIN_CB.Reserved);
  }
  return result;
}
