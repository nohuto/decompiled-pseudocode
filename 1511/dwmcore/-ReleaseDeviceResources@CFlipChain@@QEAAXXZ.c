/*
 * XREFs of ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180125B80
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x1800F4780 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x18012539C (--1CFlipChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180125B70 (-NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AE0B0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AE0D8 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 */

void __fastcall CFlipChain::ReleaseDeviceResources(CFlipChain *this)
{
  CFlipChain *v2; // [rsp+30h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v2, this);
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 27, 0x58u);
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v2);
}
