/*
 * XREFs of ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180109C5C
 * Callers:
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1801097E8 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180109AC8 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipChain::ResetSourceFrameCounters(CFlipChain *this)
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( *((_DWORD *)this + 42) == -1 )
    ++*((_DWORD *)this + 40);
  LODWORD(v1) = 0;
  HIDWORD(v1) = *((_DWORD *)this + 48);
  *((_QWORD *)this + 14) = v1;
  ++*((_DWORD *)this + 28);
  *((_QWORD *)this + 21) = v1;
  *((_QWORD *)this + 22) = v1;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 23) = 0LL;
}
