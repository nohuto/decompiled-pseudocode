/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C000DA40
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C000D9B0 (EngAllocMem.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 *__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  __int64 *result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    EngAcquireSemaphore(*(HSEMAPHORE *)&WPP_MAIN_CB.SectorSize);
  result = (__int64 *)qword_1C011E3C0;
  if ( *(struct _LIST_ENTRY **)qword_1C011E3C0 != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_1C011E3C0 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock");
    return (__int64 *)GreReleaseSemaphoreInternal(*(_QWORD *)&WPP_MAIN_CB.SectorSize);
  }
  return result;
}
