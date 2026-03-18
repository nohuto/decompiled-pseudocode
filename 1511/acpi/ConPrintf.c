/*
 * XREFs of ConPrintf @ 0x1C004334C
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003250 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C00041B0 (ProcessEvalObj.c)
 *     ParseString @ 0x1C000CDDC (ParseString.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     ParseArgObj @ 0x1C000E12C (ParseArgObj.c)
 *     ParsePackage @ 0x1C000E2B0 (ParsePackage.c)
 *     ParseIntObj @ 0x1C000E4C0 (ParseIntObj.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseName @ 0x1C0012EF0 (ParseName.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     ParseInteger @ 0x1C002161C (ParseInteger.c)
 *     ParseLocalObj @ 0x1C0022868 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     CatError @ 0x1C00432C4 (CatError.c)
 *     DebugInPort @ 0x1C0043560 (DebugInPort.c)
 *     DebugNotify @ 0x1C0043660 (DebugNotify.c)
 *     DebugQuit @ 0x1C00438B0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0043910 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0043D48 (PrintBuffData.c)
 *     PrintIndent @ 0x1C0043DC0 (PrintIndent.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     RunMethodCallBack @ 0x1C0043F10 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0045C44 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C0046CE0 (BreakPoint.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C00497E8 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C0086088 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0041FA4 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C005ADE0, 0x400uLL, pszFormat, va);
  if ( qword_1C005A208 )
    return qword_1C005A208(byte_1C005ADE0, qword_1C005A210);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C005ADE0);
}
