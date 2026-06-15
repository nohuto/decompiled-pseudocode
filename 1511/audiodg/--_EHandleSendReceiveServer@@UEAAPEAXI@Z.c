/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140016500
 * Callers:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400131E0 (--1CDeviceProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140016494 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

HandleSendReceiveServer *__fastcall HandleSendReceiveServer::`vector deleting destructor'(
        HandleSendReceiveServer *this,
        char a2)
{
  HandleSendReceiveServer::~HandleSendReceiveServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
