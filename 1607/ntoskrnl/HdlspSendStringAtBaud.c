/*
 * XREFs of HdlspSendStringAtBaud @ 0x140723F44
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140722CBC (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140723C8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140723DEC (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140723EA8 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14023DECC (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rbx

  result = *a1;
  v2 = a1;
  while ( result )
  {
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14));
    result = *++v2;
  }
  return result;
}
