/*
 * XREFs of ParseArg @ 0x1C001DCAC
 * Callers:
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 * Callees:
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     PushTerm @ 0x1C0018668 (PushTerm.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ParseObjName @ 0x1C002745C (ParseObjName.c)
 *     ParseInteger @ 0x1C00283B8 (ParseInteger.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char v11; // r8
  __int64 v12; // r8
  const void **v13; // r14
  unsigned __int8 v14; // cl

  switch ( a2 )
  {
    case 'B':
      v12 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4, a3);
    case 'D':
      v12 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
    case 'N':
      return (unsigned int)ParseObjName(a1, a1 + 120, a3, 0LL);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      v11 = 0;
      return (unsigned int)ParseSuperName((_QWORD *)a1, a3, v11, a4);
    }
    if ( a2 != 87 )
    {
      if ( a2 != 115 )
      {
        v9 = -1072431101;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, a2, 0, 0, 0LL);
        return v9;
      }
      v11 = 1;
      return (unsigned int)ParseSuperName((_QWORD *)a1, a3, v11, a4);
    }
    v12 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, a3, v12, a4);
  }
  v13 = (const void **)(a1 + 120);
  v9 = ParseIntObj(a1, (_WORD **)(a1 + 120), a3, 1);
  if ( v9 == -1072431103 )
  {
    v9 = ParseString(a1, v13, a3, 1);
    if ( v9 == -1072431103 )
    {
      v14 = *(_BYTE *)*v13;
      if ( (unsigned __int8)(v14 - 17) <= 2u )
      {
        v8 = PushTerm(a1, (__int64)*v13, a4, (__int64)*(&OpcodeTable + v14), a3);
        *v13 = (char *)*v13 + 1;
        return v8;
      }
    }
  }
  return v9;
}
