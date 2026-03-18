/*
 * XREFs of ParseArg @ 0x1C000D8A8
 * Callers:
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 * Callees:
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     PushTerm @ 0x1C0013334 (PushTerm.c)
 *     ParseObjName @ 0x1C0020370 (ParseObjName.c)
 *     ParseInteger @ 0x1C0020D14 (ParseInteger.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rdi
  int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r8
  const void **v12; // r14
  unsigned __int8 v13; // cl

  v5 = a4;
  v6 = a3;
  v7 = a1;
  switch ( a2 )
  {
    case 'B':
      v11 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4);
    case 'D':
      v11 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11);
    case 'N':
      return (unsigned int)ParseObjName(a1 + 120, a3, 0LL);
  }
  if ( a2 != 79 )
  {
    if ( a2 == 83 )
    {
      a3 = 0LL;
      return (unsigned int)ParseSuperName(a1, v6, a3);
    }
    if ( a2 != 87 )
    {
      if ( a2 != 115 )
      {
        v9 = -1072431101;
        LogError(3222536195LL);
        PrintDebugMessage(121, a2, 0, 0, 0LL);
        return v9;
      }
      LOBYTE(a3) = 1;
      return (unsigned int)ParseSuperName(a1, v6, a3);
    }
    v11 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, v6, v11);
  }
  v12 = (const void **)(a1 + 120);
  LOBYTE(a3) = 1;
  v9 = ParseIntObj(a1 + 120, v6, a3);
  if ( v9 == -1072431103 )
  {
    v9 = ParseString(v12, v6, 1);
    if ( v9 == -1072431103 )
    {
      v13 = *(_BYTE *)*v12;
      if ( (unsigned __int8)(v13 - 17) <= 2u )
      {
        v8 = PushTerm(v7, (unsigned int)*v12, v5, (unsigned int)*(&OpcodeTable + v13), v6);
        *v12 = (char *)*v12 + 1;
        return v8;
      }
    }
  }
  return v9;
}
