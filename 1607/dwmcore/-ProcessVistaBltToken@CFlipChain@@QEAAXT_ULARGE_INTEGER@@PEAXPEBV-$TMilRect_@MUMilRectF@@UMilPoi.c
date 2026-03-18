/*
 * XREFs of ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA7E4
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1801091A8 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AA6AC (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::ProcessVistaBltToken(struct CFlipChain *a1, __int64 a2, __int64 a3, float *a4)
{
  bool v7; // zf
  __int64 v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v9, a1);
  v7 = *((_DWORD *)a1 + 56) == 0;
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 344LL);
  *((_QWORD *)a1 + 42) = v8;
  if ( !v7 )
    CFlipChain::MarkBufferComplete((__int64)a1, v10, a3, a4, v8 != 0 ? 2 : 4);
  *((_QWORD *)a1 + 42) = 0LL;
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v9);
}
