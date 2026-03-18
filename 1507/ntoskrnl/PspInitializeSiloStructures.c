/*
 * XREFs of PspInitializeSiloStructures @ 0x1407E4ED8
 * Callers:
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x1405C0030 (PspAllocateMonitorContextArrayServerSilo.c)
 */

char PspInitializeSiloStructures()
{
  __int64 HandleTable; // rax
  unsigned int *PoolWithTag; // rax
  void *ServerSiloGlobals; // rax
  char result; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  qword_14032C468 = 0LL;
  dword_14032C470 = 0;
  dword_14032C47C = 0;
  qword_14032C448 = (__int64)&PspSiloList;
  PspSiloList = (__int64)&PspSiloList;
  LODWORD(PspSiloListLock) = 1;
  qword_14032C488 = (__int64)&qword_14032C480;
  qword_14032C480 = (__int64)&qword_14032C480;
  word_14032C478 = 1;
  byte_14032C47A = 6;
  memset(v5, 0, 0x78uLL);
  BYTE2(v5[0]) |= 8u;
  HIDWORD(v5[4]) = 0;
  LOWORD(v5[0]) = 120;
  RtlInitUnicodeString(&DestinationString, L"Silo");
  v5[5] = 0x11000000000LL;
  LODWORD(v5[1]) = 0;
  v5[9] = PspSiloDelete;
  v5[8] = AlpcMessageDeleteProcedure;
  HIDWORD(v5[3]) = 2031647;
  *(_OWORD *)((char *)&v5[1] + 4) = PspSiloMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&PsSiloType) < 0 )
    return 0;
  HandleTable = ExCreateHandleTable(0LL, 0LL);
  PspSiloIdTable = HandleTable;
  if ( !HandleTable )
    return 0;
  *(_BYTE *)(HandleTable + 44) |= 1u;
  dword_140356A04 = 1;
  dword_140356A00 = 1;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x426C6953u);
  if ( !PoolWithTag )
    return 0;
  MonitorContextIndexBitmap.SizeOfBitMap = 32;
  MonitorContextIndexBitmap.Buffer = PoolWithTag;
  *PoolWithTag = 0;
  MonitorContextIndexBitmapBuffer = (__int64)PoolWithTag;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (int)PspAllocateMonitorContextArrayServerSilo((__int64)ServerSiloGlobals) < 0 )
    return 0;
  SiloMonitorLock = 0LL;
  SiloMonitorNonpagedContextSpinLock = 0LL;
  result = 1;
  qword_14032C4A8 = (__int64)&SiloMonitorList;
  SiloMonitorList = (__int64)&SiloMonitorList;
  return result;
}
