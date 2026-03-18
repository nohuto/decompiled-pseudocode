/*
 * XREFs of ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AA77C
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1801091A8 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AA4C0 (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::UpdatePending(CFlipChain *this, union _ULARGE_INTEGER a2)
{
  bool v3; // zf
  __int64 v4; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+38h] [rbp+10h]

  QuadPart = a2.QuadPart;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v5, this);
  v3 = *((_DWORD *)this + 56) == 0;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 344LL);
  *((_QWORD *)this + 42) = v4;
  if ( !v3 )
    CFlipChain::UpdateBufferState((__int64)this, v4, 1, QuadPart);
  *((_QWORD *)this + 42) = 0LL;
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v5);
}
