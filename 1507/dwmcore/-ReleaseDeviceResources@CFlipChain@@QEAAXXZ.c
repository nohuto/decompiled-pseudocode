/*
 * XREFs of ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180109984
 * Callers:
 *     ??1CFlipChain@@MEAA@XZ @ 0x18010857C (--1CFlipChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180109580 (-NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010960C (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1801084B8 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x180108648 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::ReleaseDeviceResources(CFlipChain *this)
{
  CFlipChain *v2; // [rsp+30h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v2, this);
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 27, 0x58u);
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v2);
}
