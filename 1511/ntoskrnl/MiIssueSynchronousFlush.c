/*
 * XREFs of MiIssueSynchronousFlush @ 0x1400E03C0
 * Callers:
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
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
