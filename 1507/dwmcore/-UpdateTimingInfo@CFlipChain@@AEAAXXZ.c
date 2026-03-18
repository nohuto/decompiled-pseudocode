/*
 * XREFs of ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x18010A174
 * Callers:
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180109190 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1801084B8 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x180108648 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x180109DF0 (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 */

void __fastcall CFlipChain::UpdateTimingInfo(CFlipChain *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  CFlipChain *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 344LL);
  *((_QWORD *)this + 33) = v2;
  if ( v2 && *((_DWORD *)this + 38) )
  {
    CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v4, this);
    if ( *((_DWORD *)this + 38) == 1 && *((_QWORD *)this + 12) == *(_QWORD *)(**((_QWORD **)this + 33) + 80LL) )
      CFlipChain::UpdateBufferState((__int64)this, v3, 3, 0LL);
    *((_QWORD *)this + 33) = 0LL;
    CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v4);
  }
}
