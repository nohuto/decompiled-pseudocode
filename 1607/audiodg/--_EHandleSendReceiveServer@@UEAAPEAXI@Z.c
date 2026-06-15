/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140015810
 * Callers:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140010164 (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140010318 (--1CDeviceProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x1400157A0 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
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
