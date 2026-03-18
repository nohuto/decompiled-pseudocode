/*
 * XREFs of ParseArgObj @ 0x1C000C84C
 * Callers:
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 * Callees:
 *     CopyObjData @ 0x1C0010728 (CopyObjData.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r9

  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  if ( (unsigned int)v6 >= *(_DWORD *)(v4 + 60) )
  {
    LogError(3222536197LL);
    PrintDebugMessage(122, v6, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    CopyObjData(a2, *(_QWORD *)(v4 + 64) + 40 * v6, a3, a1);
    ++*(_QWORD *)(v7 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v5;
}
