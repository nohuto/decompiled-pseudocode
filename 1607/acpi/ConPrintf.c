/*
 * XREFs of ConPrintf @ 0x1C005AA1C
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0002D90 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C0003390 (ProcessEvalObj.c)
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0014CB8 (AMLIGetNameSpaceObjectNoLock.c)
 *     AccFieldUnit @ 0x1C0014F20 (AccFieldUnit.c)
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     ParsePackage @ 0x1C001BD20 (ParsePackage.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     ParseArgObj @ 0x1C001EC5C (ParseArgObj.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     ParseInteger @ 0x1C00283B8 (ParseInteger.c)
 *     ParseLocalObj @ 0x1C0029524 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     CatError @ 0x1C005A994 (CatError.c)
 *     DebugInPort @ 0x1C005AC30 (DebugInPort.c)
 *     DebugNotify @ 0x1C005AD30 (DebugNotify.c)
 *     DebugQuit @ 0x1C005AF80 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C005B3A8 (PrintBuffData.c)
 *     PrintIndent @ 0x1C005B420 (PrintIndent.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 *     RunMethodCallBack @ 0x1C005B570 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C005E4D0 (BreakPoint.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C00612C0 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00A68A8 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C00593C0 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0075260, 0x400uLL, pszFormat, va);
  if ( qword_1C0074678 )
    return qword_1C0074678(byte_1C0075260, qword_1C0074680);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0075260);
}
