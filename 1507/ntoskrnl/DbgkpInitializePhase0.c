/*
 * XREFs of DbgkpInitializePhase0 @ 0x1407DEA08
 * Callers:
 *     DbgkInitialize @ 0x1407DE78C (DbgkInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     RtlRunOnceInitialize @ 0x1405B5B34 (RtlRunOnceInitialize.c)
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
  qword_14034D468 = 0LL;
  dword_14034D470 = 0;
  dword_14034D47C = 0;
  DbgkpErrorPortLock = 0LL;
  qword_14034D488 = (__int64)&qword_14034D480;
  qword_14034D480 = (__int64)&qword_14034D480;
  *(_QWORD *)&v3 = 0x2000200020001LL;
  *((_QWORD *)&v3 + 1) = 0x1F000F00120000LL;
  LODWORD(DbgkpProcessDebugPortMutex) = 1;
  word_14034D478 = 1;
  byte_14034D47A = 6;
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
