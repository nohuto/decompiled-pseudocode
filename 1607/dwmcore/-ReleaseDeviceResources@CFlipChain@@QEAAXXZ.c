/*
 * XREFs of ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180142264
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010BD38 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180141BA0 (--1CFlipChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180142250 (-NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::ReleaseDeviceResources(CFlipChain *this)
{
  CFlipChain *v2; // [rsp+30h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v2, this);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 0x58u);
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v2);
}
