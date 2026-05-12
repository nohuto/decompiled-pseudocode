/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C0007B68
 * Callers:
 *     RaCreateDriver @ 0x1C004CB1C (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C00444D0 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C00444D0 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C00444E0 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C00444E0 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C00444F0 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C00444F0 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C0044500 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C0044500 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C0044510 = (__int64)StorExtGetOriginalMdl;
  return result;
}
