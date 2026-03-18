/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x1C006A1A0
 * Callers:
 *     GreDeleteSemaphore @ 0x1C006A130 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C006A170 (EngFreeMem.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    EngAcquireSemaphore(*(HSEMAPHORE *)&WPP_MAIN_CB.SectorSize);
  v2 = *a1;
  result = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*result != a1 )
    __fastfail(3u);
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock");
    return (_QWORD *)GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)&WPP_MAIN_CB.SectorSize);
  }
  return result;
}
