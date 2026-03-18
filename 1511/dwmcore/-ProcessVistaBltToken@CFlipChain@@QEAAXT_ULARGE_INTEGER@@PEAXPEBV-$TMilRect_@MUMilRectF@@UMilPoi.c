/*
 * XREFs of ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1800F6F88 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AE0B0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AE0D8 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AE4BC (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 */

void __fastcall CFlipChain::ProcessVistaBltToken(struct CFlipChain *a1, __int64 a2, int a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // rcx
  CFlipChain *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v9, a1);
  v7 = *((_DWORD *)a1 + 38) == 0;
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 344LL);
  *((_QWORD *)a1 + 33) = v8;
  if ( !v7 )
    CFlipChain::MarkBufferComplete((__int64)a1, v10, a3, a4, v8 != 0 ? 2 : 4);
  *((_QWORD *)a1 + 33) = 0LL;
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v9);
}
