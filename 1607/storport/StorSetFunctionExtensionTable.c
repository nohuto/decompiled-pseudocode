/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C000D260
 * Callers:
 *     RaCreateDriver @ 0x1C0057A10 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C004F570 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C004F570 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C004F580 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C004F580 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C004F590 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C004F590 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C004F5A0 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C004F5A0 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C004F5B0 = (__int64)StorExtGetOriginalMdl;
  return result;
}
