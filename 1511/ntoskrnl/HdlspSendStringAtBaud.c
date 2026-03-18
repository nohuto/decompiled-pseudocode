/*
 * XREFs of HdlspSendStringAtBaud @ 0x1406D7F44
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1406D6CBC (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1406D6DE0 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1406D738C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1406D7450 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1406D7C8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1406D7DEC (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1406D7EA8 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x140222554 (InbvPortPutByte.c)
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
