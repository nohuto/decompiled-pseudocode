/*
 * XREFs of HdlspSendBlueScreenInfo @ 0x14075B08C
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     HdlspSendStringAtBaud @ 0x14075B128 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspSendBlueScreenInfo(int a1)
{
  __int64 i; // rbx
  char DstBuf[160]; // [rsp+20h] [rbp-B8h] BYREF

  HdlspSendStringAtBaud("\a\a\a<?xml>\a<BP>");
  HdlspSendStringAtBaud("\r\n<INSTANCE CLASSNAME=\"BLUESCREEN\">");
  sprintf_s(DstBuf, 0xA0uLL, "\r\n<PROPERTY NAME=\"STOPCODE\" TYPE=\"string\"><VALUE>\"0x%0X\"</VALUE></PROPERTY>", a1);
  HdlspSendStringAtBaud(DstBuf);
  for ( i = *(_QWORD *)(HeadlessGlobals + 40); i; i = *(_QWORD *)(i + 16) )
    HdlspSendStringAtBaud(*(_QWORD *)(i + 8));
  return HdlspSendStringAtBaud("\r\n</INSTANCE>\r\n</BP>\a");
}
