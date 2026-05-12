/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C000A3B0
 * Callers:
 *     RaCreateDriver @ 0x1C0050A98 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C00484D0 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C00484D0 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C00484E0 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C00484E0 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C00484F0 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C00484F0 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C0048500 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C0048500 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C0048510 = (__int64)StorExtGetOriginalMdl;
  return result;
}
