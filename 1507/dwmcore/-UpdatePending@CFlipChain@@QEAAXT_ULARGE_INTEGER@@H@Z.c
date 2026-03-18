/*
 * XREFs of ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x18010A06C
 * Callers:
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180105820 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1801084B8 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x180108648 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x180109DF0 (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 */

void __fastcall CFlipChain::UpdatePending(CFlipChain *this, union _ULARGE_INTEGER a2)
{
  bool v3; // zf
  __int64 v4; // rdx
  CFlipChain *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+38h] [rbp+10h]

  QuadPart = a2.QuadPart;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v5, this);
  v3 = *((_DWORD *)this + 38) == 0;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 344LL);
  *((_QWORD *)this + 33) = v4;
  if ( !v3 )
    CFlipChain::UpdateBufferState((__int64)this, v4, 1, QuadPart);
  *((_QWORD *)this + 33) = 0LL;
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v5);
}
