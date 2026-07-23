/*
 * XREFs of DbgkpInitializePhase0 @ 0x14075AACC
 * Callers:
 *     DbgkInitialize @ 0x14075AC04 (DbgkInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 *     RtlRunOnceInitialize @ 0x1405262A4 (RtlRunOnceInitialize.c)
 */

void DbgkpInitializePhase0()
{
  __int64 v0; // rbx
  _RTL_RUN_ONCE *v1; // rcx
  _RTL_RUN_ONCE *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+40h] [rbp-29h] BYREF

  memset((char *)v5 + 2, 0, 0x76uLL);
  DbgkpProcessDebugPortMutex.Owner = 0LL;
  DbgkpProcessDebugPortMutex.Contention = 0;
  DbgkpProcessDebugPortMutex.Event.Header.SignalState = 0;
  DbgkpErrorPortLock = 0LL;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Blink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Flink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  *(_QWORD *)&v3 = 0x2000200020001LL;
  *((_QWORD *)&v3 + 1) = 0x1F000F00120000LL;
  DbgkpProcessDebugPortMutex.Count = 1;
  LOWORD(DbgkpProcessDebugPortMutex.Event.Header.Lock) = 1;
  DbgkpProcessDebugPortMutex.Event.Header.Size = 6;
  RtlInitUnicodeString(&DestinationString, L"DebugObject");
  LODWORD(v5[1]) = 0;
  v5[5] = 0LL;
  HIDWORD(v5[4]) = 512;
  LOWORD(v5[0]) = 120;
  HIDWORD(v5[3]) = 2031631;
  *(_OWORD *)((char *)&v5[1] + 4) = v3;
  v0 = 8LL;
  BYTE2(v5[0]) |= 8u;
  v5[9] = AlpcMessageDeleteProcedure;
  v5[8] = DbgkpCloseObject;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
  {
    if ( !DbgkpMaxModuleMsgs )
      DbgkpMaxModuleMsgs = 500;
    v1 = &RunOnce;
    do
    {
      RtlRunOnceInitialize(v1);
      v1 = v2 + 2;
      --v0;
    }
    while ( v0 );
  }
}
