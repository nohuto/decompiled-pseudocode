/*
 * XREFs of ParseIntObj @ 0x1C0014BB0
 * Callers:
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseArg @ 0x1C001DCAC (ParseArg.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, _WORD **a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  int v7; // r10d
  const char *v9; // rcx

  v4 = 0;
  v7 = *(unsigned __int8 *)*a2;
  *a2 = (_WORD *)((char *)*a2 + 1);
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( !(_BYTE)v7 )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (gDebugger & 0xD0) == 0 )
      return v4;
    v9 = "Zero";
    goto LABEL_24;
  }
  switch ( v7 )
  {
    case 1:
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "One";
      goto LABEL_24;
    case 10:
      *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
      *a2 = (_WORD *)((char *)*a2 + 1);
      break;
    case 11:
      *(_WORD *)(a3 + 16) = *(*a2)++;
      break;
    case 12:
      *(_DWORD *)(a3 + 16) = *(_DWORD *)*a2;
      *a2 += 2;
      break;
    case 14:
      *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
      *a2 += 4;
      break;
    case 255:
      *(_QWORD *)(a3 + 16) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision() != 0) & 0xFFFFFFFF00000000uLL)
                           + 0xFFFFFFFF;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "Ones";
LABEL_24:
      ConPrintf(v9);
      return v4;
    default:
      *a2 = (_WORD *)((char *)*a2 - 1);
      if ( !a4 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(128, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
      }
      return (unsigned int)-1072431103;
  }
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x");
  return v4;
}
