/*
 * XREFs of ?InvalidateCache@CLightStack@@AEAAXXZ @ 0x18009BC24
 * Callers:
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18012DFCC (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x18012E018 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18012E0F8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::InvalidateCache(CLightStack *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
}
