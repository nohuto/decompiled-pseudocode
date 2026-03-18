/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x14025FEE8
 * Callers:
 *     EtwpThreadEnumCallback @ 0x14041CAF0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x14000BE64 (EtwpTraceThreadRundown.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeRemoveQueueApc @ 0x140128588 (KeRemoveQueueApc.c)
 */

char __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS v4; // eax
  __int16 Object; // [rsp+40h] [rbp-29h] BYREF
  char v7; // [rsp+42h] [rbp-27h]
  int v8; // [rsp+44h] [rbp-25h]
  _QWORD v9[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v10[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  if ( a1 == KeGetCurrentThread() )
    goto LABEL_7;
  if ( *(_BYTE *)(a2 + 59) )
    goto LABEL_7;
  v8 = 0;
  v9[1] = v9;
  v9[0] = v9;
  Object = 1;
  v7 = 6;
  KeInitializeApc((__int64)v10, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v10, (__int64)&Object, a2, 0) )
    goto LABEL_7;
  Timeout.QuadPart = EtwpOneSecond.QuadPart * (unsigned int)EtwpStackCaptureTimeout;
  v4 = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( v4 == 258 )
  {
    if ( !(unsigned __int8)KeRemoveQueueApc((__int64)v10) )
    {
      LOBYTE(v4) = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      return v4;
    }
LABEL_7:
    LOBYTE(v4) = EtwpTraceThreadRundown((__int64)a1, a2);
  }
  return v4;
}
