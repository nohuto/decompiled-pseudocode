/*
 * XREFs of ?Initialize@CFlipChain@@MEAAJXZ @ 0x1801094C0
 * Callers:
 *     ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x1801083E4 (--0CFlipChain@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::Initialize(CFlipChain *this)
{
  if ( !*((_BYTE *)this + 257) )
  {
    *((_QWORD *)this + 31) = 0LL;
    *((_BYTE *)this + 257) = 1;
  }
  return 0LL;
}
