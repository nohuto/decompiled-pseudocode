/*
 * XREFs of DebugOutPort @ 0x1C005AEC0
 * Callers:
 *     DebugO @ 0x1C005AE90 (DebugO.c)
 *     DebugOD @ 0x1C005AEA0 (DebugOD.c)
 *     DebugOW @ 0x1C005AEB0 (DebugOW.c)
 * Callees:
 *     WriteSystemIO @ 0x1C001E318 (WriteSystemIO.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C002BC6E (_strtoui64_0.c)
 *     IsNumber @ 0x1C005B360 (IsNumber.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C00751F4 == 2 )
    {
LABEL_9:
      dword_1C00751F4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C00751F4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C00751F4 == 1 )
    dword_1C0074FA8 = v5;
  else
    WriteSystemIO(dword_1C0074FA8, a2, v5);
  return v2;
}
