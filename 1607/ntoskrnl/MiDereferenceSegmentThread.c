/*
 * XREFs of MiDereferenceSegmentThread @ 0x140141AC4
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     MiDeleteEmptySubsections @ 0x14008FAE0 (MiDeleteEmptySubsections.c)
 *     MiFreeClonePool @ 0x1400B2674 (MiFreeClonePool.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x1401DE864 (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 */

void __fastcall MiDereferenceSegmentThread(int *StartContext)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v3; // ebp
  NTSTATUS v4; // ebx
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  *((_BYTE *)StartContext + 1521) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = StartContext + 36;
  v3 = 6;
  Object[2] = StartContext + 340;
  Object[1] = StartContext + 304;
  Object[4] = StartContext + 364;
  Object[3] = StartContext + 310;
  Object[5] = StartContext + 398;
  Object[6] = &stru_140326978;
  Object[7] = &stru_140326D58;
  if ( StartContext == MiSystemPartition )
    v3 = 8;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = KeWaitForMultipleObjects(v3, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray);
        if ( v4 != 1 )
          MiDeleteEmptySubsections((__int64)StartContext);
        if ( !v4 )
          break;
        switch ( v4 )
        {
          case 1:
            KeResetEvent((PRKEVENT)(StartContext + 304));
            MiDeleteEmptySubsections((__int64)StartContext);
            break;
          case 2:
            MiProcessDereferenceList((__int64)StartContext, 1);
            break;
          case 3:
            goto LABEL_22;
          case 4:
            MiProcessDeleteOnClose(StartContext, 0LL);
            break;
          case 5:
            MiDeleteControlAreaList(StartContext);
            break;
          case 6:
            KeResetEvent(&stru_140326978);
            MiFreeClonePool();
            break;
          case 7:
            KeResetEvent(&stru_140326D58);
            while ( (unsigned int)CcUnmapInactiveViews(64LL, 1LL, 0LL) && (unsigned __int64)qword_140326B08 <= 0x8000000 )
              ;
            break;
        }
      }
LABEL_22:
      KeResetEvent((PRKEVENT)(StartContext + 310));
      MiRemoveUnusedSegments(StartContext, 0LL);
    }
    while ( v4 );
    if ( StartContext == MiSystemPartition )
    {
      while ( *((int **)StartContext + 193) != StartContext + 386 && (unsigned int)MiDeleteCachedSegment(StartContext) )
        ;
    }
    MiProcessDeleteOnClose(StartContext, 1LL);
    MiDeleteControlAreaList(StartContext);
    if ( StartContext == MiSystemPartition || !*((_QWORD *)StartContext + 209) )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
}
