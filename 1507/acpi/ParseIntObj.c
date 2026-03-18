/*
 * XREFs of ParseIntObj @ 0x1C0010B60
 * Callers:
 *     ParseArg @ 0x1C000D8A8 (ParseArg.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     ParseFieldConnection @ 0x1C004A0F0 (ParseFieldConnection.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseIntObj(_WORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // r9
  const char *v7; // rcx

  v3 = 0;
  v5 = *(unsigned __int8 *)*a1;
  *a1 = (_WORD *)((char *)*a1 + 1);
  *(_WORD *)(a2 + 2) = 1;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( !(_BYTE)v5 )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( (gDebugger & 0xD0) == 0 )
      return v3;
    v7 = "Zero";
LABEL_24:
    ConPrintf(v7);
    return v3;
  }
  switch ( (_DWORD)v5 )
  {
    case 1:
      *(_QWORD *)(a2 + 16) = 1LL;
      if ( (gDebugger & 0xD0) == 0 )
        return v3;
      v7 = "One";
      goto LABEL_24;
    case 0xA:
      *(_BYTE *)(a2 + 16) = *(_BYTE *)*a1;
      *a1 = (_WORD *)((char *)*a1 + 1);
      goto LABEL_8;
    case 0xB:
      *(_WORD *)(a2 + 16) = *(*a1)++;
      goto LABEL_8;
    case 0xC:
      *(_DWORD *)(a2 + 16) = *(_DWORD *)*a1;
      *a1 += 2;
      goto LABEL_8;
    case 0xE:
      *(_QWORD *)(a2 + 16) = *(_QWORD *)*a1;
      *a1 += 4;
LABEL_8:
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("0x%I64x");
      return v3;
    case 0xFF:
      *(_QWORD *)(a2 + 16) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(0LL, 1LL, a3, v5) != 0) & 0xFFFFFFFF00000000uLL)
                           + 0xFFFFFFFF;
      if ( (gDebugger & 0xD0) == 0 )
        return v3;
      v7 = "Ones";
      goto LABEL_24;
  }
  *a1 = (_WORD *)((char *)*a1 - 1);
  if ( !(_BYTE)a3 )
  {
    LogError(3222536193LL);
    PrintDebugMessage(128, *(unsigned __int8 *)*a1, (unsigned int)*a1, 0, 0LL);
  }
  return (unsigned int)-1072431103;
}
