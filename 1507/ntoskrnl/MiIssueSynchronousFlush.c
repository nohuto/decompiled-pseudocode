/*
 * XREFs of MiIssueSynchronousFlush @ 0x140112590
 * Callers:
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __fastcall MiIssueSynchronousFlush(int a1, int a2, __int64 a3, char a4, NTSTATUS *a5)
{
  NTSTATUS *v8; // r14
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF

  v11 = a3;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  LOWORD(Event.Header.Lock) = 0;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  Event.Header.Size = 6;
  KeResetEvent(&Event);
  v8 = a5;
  result = IoSynchronousPageWriteEx(a1, a2, (unsigned int)&v11, (unsigned int)&Event, a4, (__int64)a5);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, WrPageOut, 0, 0, 0LL);
  *v8 = result;
  return result;
}
