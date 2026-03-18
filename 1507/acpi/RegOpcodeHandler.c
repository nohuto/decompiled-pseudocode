/*
 * XREFs of RegOpcodeHandler @ 0x1C00455E0
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0004604 (AMLIRegEventHandler.c)
 * Callees:
 *     FindOpcodeTerm @ 0x1C0018C54 (FindOpcodeTerm.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall RegOpcodeHandler(unsigned int a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 OpcodeTerm; // rax

  v4 = 0;
  v5 = a2;
  if ( (_BYTE)a1 == 91 )
    OpcodeTerm = FindOpcodeTerm(a1 >> 8);
  else
    OpcodeTerm = (__int64)*(&OpcodeTable + a1);
  if ( OpcodeTerm )
  {
    if ( *(_QWORD *)(OpcodeTerm + 32) && v5 )
    {
      LogError(-1072431090);
      PrintDebugMessage(166, 0, 0, 0, 0LL);
      return (unsigned int)-1072431090;
    }
    else
    {
      *(_DWORD *)(OpcodeTerm + 28) |= a4;
      *(_QWORD *)(OpcodeTerm + 32) = v5;
      *(_DWORD *)(OpcodeTerm + 40) = a3;
    }
  }
  else
  {
    LogError(-1072431072);
    PrintDebugMessage(167, 0, 0, 0, 0LL);
    return (unsigned int)-1072431072;
  }
  return v4;
}
