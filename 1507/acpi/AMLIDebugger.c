/*
 * XREFs of AMLIDebugger @ 0x1C0043858
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     Load @ 0x1C0005E10 (Load.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000DBA0 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     AMLIEvalPkgDataElement @ 0x1C001634C (AMLIEvalPkgDataElement.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C00438A4 (CatError.c)
 *     BreakPoint @ 0x1C00473D0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C008606C (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     Debugger @ 0x1C00457E4 (Debugger.c)
 */

__int64 AMLIDebugger()
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
