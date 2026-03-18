/*
 * XREFs of MiDereferenceSegmentThread @ 0x140167DD0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeClonePool @ 0x14000568C (MiFreeClonePool.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiDeleteControlAreaList @ 0x140211368 (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 */

void __fastcall MiDereferenceSegmentThread(__int16 *StartContext)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v3; // r14d
  NTSTATUS v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  LODWORD(CurrentThread[1].Queue) |= 2u;
  Object[0] = StartContext + 76;
  Object[1] = StartContext + 584;
  Object[2] = StartContext + 612;
  Object[3] = StartContext + 596;
  Object[4] = StartContext + 644;
  Object[6] = &Event;
  Object[5] = StartContext + 704;
  Object[7] = &stru_14034EE68;
  v3 = 6;
  if ( StartContext == MiSystemPartition )
    v3 = 8;
  while ( 1 )
  {
    v4 = KeWaitForMultipleObjects(v3, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray);
    if ( v4 != 1 )
      MiDeleteEmptySubsections((__int64)StartContext);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 1 )
                {
                  KeResetEvent(&stru_14034EE68);
                  while ( (unsigned int)CcUnmapInactiveViews(64LL, 1LL, 0LL)
                       && (unsigned __int64)qword_14034EC48 <= 0x8000000 )
                    ;
                }
              }
              else
              {
                KeResetEvent(&Event);
                MiFreeClonePool();
              }
            }
            else
            {
              MiDeleteControlAreaList(StartContext);
            }
          }
          else
          {
            MiProcessDeleteOnClose(StartContext);
          }
        }
        else
        {
          KeResetEvent((PRKEVENT)(StartContext + 596));
          MiRemoveUnusedSegments(StartContext);
        }
      }
      else
      {
        MiProcessDereferenceList((__int64)StartContext);
      }
    }
    else
    {
      KeResetEvent((PRKEVENT)(StartContext + 584));
      MiDeleteEmptySubsections((__int64)StartContext);
    }
  }
}
