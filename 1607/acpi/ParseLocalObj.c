/*
 * XREFs of ParseLocalObj @ 0x1C0029524
 * Callers:
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C001ED78 (CopyObjData.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 */

__int64 __fastcall ParseLocalObj(__int64 a1, __int64 a2)
{
  __int64 v4; // r10

  v4 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 96;
  CopyObjData(a2, *(_QWORD *)(a1 + 96) + 8 * (v4 + 4 * v4 + 9));
  if ( (gDebugger & 0xD0) != 0 )
  {
    ConPrintf("Local%d=");
    PrintObject(a2);
  }
  ++*(_QWORD *)(a1 + 120);
  return 0LL;
}
