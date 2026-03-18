/*
 * XREFs of ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x18014243C
 * Callers:
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18010BE88 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipChain::ResetSourceFrameCounters(CFlipChain *this)
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( *((_DWORD *)this + 60) == -1 )
    ++*((_DWORD *)this + 58);
  LODWORD(v1) = 0;
  HIDWORD(v1) = *((_DWORD *)this + 66);
  *((_QWORD *)this + 23) = v1;
  ++*((_DWORD *)this + 46);
  *((_QWORD *)this + 30) = v1;
  *((_QWORD *)this + 31) = v1;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 32) = 0LL;
}
