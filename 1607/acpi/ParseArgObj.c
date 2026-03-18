/*
 * XREFs of ParseArgObj @ 0x1C001EC5C
 * Callers:
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C001ED78 (CopyObjData.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // esi
  __int64 v6; // rbx

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  if ( (unsigned int)v6 >= *(_DWORD *)(v3 + 60) )
  {
    LogError(3222536197LL);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(122, v6, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    CopyObjData(a2, *(_QWORD *)(v3 + 64) + 40 * v6);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v4;
}
