/*
 * XREFs of MiDereferenceSegmentThread @ 0x1401389A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiDeleteEmptySubsections @ 0x1400E755C (MiDeleteEmptySubsections.c)
 *     MiFreeClonePool @ 0x1400F31C4 (MiFreeClonePool.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 */

void __fastcall MiDereferenceSegmentThread(int *StartContext)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v3; // r15d
  NTSTATUS v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  KIRQL v11; // al
  _QWORD *v12; // rbx
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  LODWORD(CurrentThread[1].Queue) |= 2u;
  Object[0] = StartContext + 34;
  Object[1] = StartContext + 304;
  Object[2] = StartContext + 318;
  Object[3] = StartContext + 310;
  Object[4] = StartContext + 334;
  Object[6] = &Event;
  Object[5] = StartContext + 364;
  Object[7] = &stru_1402FE9A8;
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
                  KeResetEvent(&stru_1402FE9A8);
                  while ( (unsigned int)CcUnmapInactiveViews(64LL, 1LL, 0LL)
                       && (unsigned __int64)qword_1402FE788 <= 0x8000000 )
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
              while ( 1 )
              {
                v11 = ExAcquireSpinLockExclusive(StartContext + 384);
                v12 = (_QWORD *)*((_QWORD *)StartContext + 185);
                if ( v12 )
                  *((_QWORD *)StartContext + 185) = *v12;
                ExReleaseSpinLockExclusive(StartContext + 384, v11);
                if ( !v12 )
                  break;
                MiDeleteControlArea((__int64)v12);
              }
            }
          }
          else
          {
            MiProcessDeleteOnClose(StartContext);
          }
        }
        else
        {
          KeResetEvent((PRKEVENT)(StartContext + 310));
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
      KeResetEvent((PRKEVENT)(StartContext + 304));
      MiDeleteEmptySubsections((__int64)StartContext);
    }
  }
}
