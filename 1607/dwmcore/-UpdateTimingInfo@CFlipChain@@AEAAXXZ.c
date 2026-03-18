/*
 * XREFs of ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x180142490
 * Callers:
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801420A0 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?TraceBuffer@CFlipChain@@AEAAXI@Z @ 0x1800AA43C (-TraceBuffer@CFlipChain@@AEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::UpdateTimingInfo(CFlipChain *this)
{
  __int64 v2; // rdx
  CFlipChain *v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 344LL);
  *((_QWORD *)this + 42) = v2;
  if ( v2 && *((_DWORD *)this + 56) )
  {
    CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v3, this);
    if ( *((_DWORD *)this + 56) == 1 && *((_QWORD *)this + 21) == *(_QWORD *)(**((_QWORD **)this + 42) + 80LL) )
    {
      *(_DWORD *)(*((_QWORD *)this + 25) + 8LL) = 3;
      CFlipChain::TraceBuffer(this);
    }
    *((_QWORD *)this + 42) = 0LL;
    CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v3);
  }
}
