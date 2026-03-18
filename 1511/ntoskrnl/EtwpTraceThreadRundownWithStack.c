/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140210B28
 * Callers:
 *     EtwpThreadEnumCallback @ 0x140500D30 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeRemoveQueueApc @ 0x1400ED8E4 (KeRemoveQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x14011FAD4 (EtwpTraceThreadRundown.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int16 Object; // [rsp+40h] [rbp-29h] BYREF
  char v6; // [rsp+42h] [rbp-27h]
  int v7; // [rsp+44h] [rbp-25h]
  _QWORD v8[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v9[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  if ( a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  if ( *(_BYTE *)(a2 + 59) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  v7 = 0;
  v8[1] = v8;
  v8[0] = v8;
  Object = 1;
  v6 = 6;
  KeInitializeApc((__int64)v9, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v9, (__int64)&Object, a2, 0) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  Timeout.QuadPart = EtwpOneSecond.QuadPart * (unsigned int)EtwpStackCaptureTimeout;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( (unsigned __int8)KeRemoveQueueApc((__int64)v9) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
