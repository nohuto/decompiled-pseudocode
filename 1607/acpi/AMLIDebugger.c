/*
 * XREFs of AMLIDebugger @ 0x1C005A948
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0002D90 (InsertReadyQueue.c)
 *     Load @ 0x1C0006050 (Load.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0014CB8 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C005A994 (CatError.c)
 *     BreakPoint @ 0x1C005E4D0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00A68A8 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     Debugger @ 0x1C005C9EC (Debugger.c)
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
