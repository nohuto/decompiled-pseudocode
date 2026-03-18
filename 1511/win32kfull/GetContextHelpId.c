/*
 * XREFs of GetContextHelpId @ 0x1C024CF04
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall GetContextHelpId(__int64 a1)
{
  __int64 v2; // r11
  unsigned int Prop; // r8d
  __int64 v4; // r10

  v2 = *(unsigned __int16 *)(gpsi + 1360LL);
  do
  {
    Prop = GetProp(a1, v2, 1LL);
    if ( Prop )
      break;
    a1 = (*(_BYTE *)(v4 + 55) & 0xC0) == 0x40 ? *(_QWORD *)(v4 + 88) : *(_QWORD *)(v4 + 104);
  }
  while ( a1 && (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x29D );
  return Prop;
}
