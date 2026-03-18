/*
 * XREFs of ConPrintf @ 0x1C004392C
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C0004210 (ProcessEvalObj.c)
 *     ParseArgObj @ 0x1C000C84C (ParseArgObj.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000DBA0 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     AccFieldUnit @ 0x1C0015AE0 (AccFieldUnit.c)
 *     AMLIEvalPkgDataElement @ 0x1C001634C (AMLIEvalPkgDataElement.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     ParseInteger @ 0x1C0020D14 (ParseInteger.c)
 *     ParseLocalObj @ 0x1C00220E8 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     CatError @ 0x1C00438A4 (CatError.c)
 *     DebugInPort @ 0x1C0043B40 (DebugInPort.c)
 *     DebugNotify @ 0x1C0043C40 (DebugNotify.c)
 *     DebugQuit @ 0x1C0043E90 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0044328 (PrintBuffData.c)
 *     PrintIndent @ 0x1C00443A0 (PrintIndent.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     RunMethodCallBack @ 0x1C00444F0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C00473D0 (BreakPoint.c)
 *     ToDecStr @ 0x1C0049080 (ToDecStr.c)
 *     ToHexStr @ 0x1C0049400 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0049ED8 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C008606C (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0042564 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C005ADF0, 0x400uLL, pszFormat, va);
  if ( qword_1C005A1F8 )
    return qword_1C005A1F8(byte_1C005ADF0, qword_1C005A200);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C005ADF0);
}
