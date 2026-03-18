/*
 * XREFs of ParseOpcode @ 0x1C000D910
 * Callers:
 *     ParseArg @ 0x1C000D8A8 (ParseArg.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 * Callees:
 *     ParseArgObj @ 0x1C000C84C (ParseArgObj.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     PushTerm @ 0x1C0013334 (PushTerm.c)
 *     ParseNameObj @ 0x1C0015A18 (ParseNameObj.c)
 *     FindOpcodeTerm @ 0x1C0018C54 (FindOpcodeTerm.c)
 *     ParseLocalObj @ 0x1C00220E8 (ParseLocalObj.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, int a2, __int64 a3)
{
  PVOID *v3; // rax
  int v6; // edx
  unsigned __int8 *v8; // r10
  __int64 OpcodeTerm; // r9
  int v10; // eax

  v3 = (PVOID *)&unk_1C005A150;
  v6 = 0;
  do
  {
    if ( *(PVOID *)(a1 + 120) == *v3 )
      break;
    ++v6;
    v3 += 2;
  }
  while ( (__int64)v3 < (__int64)&P );
  if ( v6 != 10 && (dword_1C005A148[4 * v6] & 1) != 0 && v6 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger();
  }
  v8 = *(unsigned __int8 **)(a1 + 120);
  if ( *v8 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v8 + 1;
    OpcodeTerm = FindOpcodeTerm(v8[1]);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + *v8);
  }
  if ( OpcodeTerm )
  {
    v10 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v10 & 8) != 0 )
    {
      return ParseIntObj(a1 + 120, a3, 0LL);
    }
    else if ( (v10 & 0x10) != 0 )
    {
      return ParseString((const void **)(a1 + 120), a3, 0);
    }
    else if ( (v10 & 2) != 0 )
    {
      return ParseArgObj(a1, a3, a3);
    }
    else if ( (v10 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3);
    }
    else if ( (v10 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3);
    }
    else if ( (v10 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      ++*(_QWORD *)(a1 + 120);
      return PushTerm(a1, (_DWORD)v8, a2, OpcodeTerm, a3);
    }
  }
  else
  {
    LogError(3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return 3222536193LL;
  }
}
