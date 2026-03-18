/*
 * XREFs of ParseArgObj @ 0x1C000E12C
 * Callers:
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 * Callees:
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  if ( (unsigned int)v5 >= *(_DWORD *)(v3 + 60) )
  {
    LogError(3222536197LL);
    PrintDebugMessage(122, v5, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    v6 = *(_QWORD *)(v3 + 64) + 40 * v5;
    if ( a2 != v6 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v6;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 8) + 8LL), 1u);
      }
      else if ( *(_QWORD *)(v6 + 32) )
      {
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
        *(_WORD *)a2 |= 1u;
        *(_QWORD *)(a2 + 8) = v6;
      }
    }
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v4;
}
