/*
 * XREFs of ?Initialize@CFlipChain@@MEAAJXZ @ 0x180142220
 * Callers:
 *     ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x180141A6C (--0CFlipChain@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::Initialize(CFlipChain *this)
{
  if ( !*((_BYTE *)this + 329) )
  {
    *((_QWORD *)this + 40) = 0LL;
    *((_BYTE *)this + 329) = 1;
  }
  return 0LL;
}
