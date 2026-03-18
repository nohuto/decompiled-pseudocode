/*
 * XREFs of HdlspSendStringAtBaud @ 0x14075B128
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140759D1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x14075A430 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14075A4F4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x14075AE70 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14075AFD0 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14075B08C (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14027242C (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rbx

  result = *a1;
  v2 = a1;
  while ( result )
  {
    InbvPortPutByte(*(_DWORD *)(HeadlessGlobals + 56));
    result = *++v2;
  }
  return result;
}
