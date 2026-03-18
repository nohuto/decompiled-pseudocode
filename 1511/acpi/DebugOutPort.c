/*
 * XREFs of DebugOutPort @ 0x1C00437F0
 * Callers:
 *     DebugO @ 0x1C00437C0 (DebugO.c)
 *     DebugOD @ 0x1C00437D0 (DebugOD.c)
 *     DebugOW @ 0x1C00437E0 (DebugOW.c)
 * Callees:
 *     WriteSystemIO @ 0x1C0017860 (WriteSystemIO.c)
 *     _strtoui64_0 @ 0x1C0024C9E (_strtoui64_0.c)
 *     IsNumber @ 0x1C0043C90 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C005AD64 == 2 )
    {
LABEL_9:
      dword_1C005AD64 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0, 0, 0, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C005AD64 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C005AD64 == 1 )
    dword_1C005AB28 = v5;
  else
    WriteSystemIO(dword_1C005AB28, a2, v5);
  return v2;
}
