/*
 * XREFs of ??1HandleSendReceiveServer@@UEAA@XZ @ 0x140016494
 * Callers:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140016500 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ @ 0x14003CE5C (-SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ.c)
 */

void __fastcall HandleSendReceiveServer::~HandleSendReceiveServer(HandleSendReceiveServer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = *((_BYTE *)this + 60) == 0;
  *(_QWORD *)this = &HandleSendReceiveServer::`vftable';
  if ( v1 )
    HandleSendReceiveServer::SendStopListeningMessage(this);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    WaitForSingleObject(v3, 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 6));
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
}
