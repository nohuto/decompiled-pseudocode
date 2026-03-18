/*
 * XREFs of AMLIDebugger @ 0x1C0043278
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003250 (InsertReadyQueue.c)
 *     Load @ 0x1C0006210 (Load.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C00432C4 (CatError.c)
 *     BreakPoint @ 0x1C0046CE0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C00483D0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C0086088 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     Debugger @ 0x1C0045228 (Debugger.c)
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
