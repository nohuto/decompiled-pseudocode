/*
 * XREFs of ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140038450
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140039570 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x1400333D8 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 */

HandleSendReceiveClient *__fastcall HandleSendReceiveClient::`vector deleting destructor'(
        HandleSendReceiveClient *this,
        char a2)
{
  *(_QWORD *)this = &HandleSendReceiveClient::`vftable';
  HandleSendReceiveClient::CloseConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
