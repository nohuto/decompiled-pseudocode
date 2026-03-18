/*
 * XREFs of ParseIntObj @ 0x1C000E4C0
 * Callers:
 *     ParsePackage @ 0x1C000E2B0 (ParsePackage.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseArg @ 0x1C0016648 (ParseArg.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C000D340 (IsCompatableDSDTRevision.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseIntObj(_WORD **a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  int v5; // r9d
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
  switch ( v5 )
  {
    case 1:
      *(_QWORD *)(a2 + 16) = 1LL;
      if ( (gDebugger & 0xD0) == 0 )
        return v3;
      v7 = "One";
      goto LABEL_24;
    case 10:
      *(_BYTE *)(a2 + 16) = *(_BYTE *)*a1;
      *a1 = (_WORD *)((char *)*a1 + 1);
      goto LABEL_8;
    case 11:
      *(_WORD *)(a2 + 16) = *(*a1)++;
      goto LABEL_8;
    case 12:
      *(_DWORD *)(a2 + 16) = *(_DWORD *)*a1;
      *a1 += 2;
      goto LABEL_8;
    case 14:
      *(_QWORD *)(a2 + 16) = *(_QWORD *)*a1;
      *a1 += 4;
LABEL_8:
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("0x%I64x");
      return v3;
    case 255:
      *(_QWORD *)(a2 + 16) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( (gDebugger & 0xD0) == 0 )
        return v3;
      v7 = "Ones";
      goto LABEL_24;
  }
  *a1 = (_WORD *)((char *)*a1 - 1);
  if ( !a3 )
  {
    LogError(3222536193LL);
    PrintDebugMessage(128, *(unsigned __int8 *)*a1, (unsigned int)*a1, 0, 0LL);
  }
  return (unsigned int)-1072431103;
}
