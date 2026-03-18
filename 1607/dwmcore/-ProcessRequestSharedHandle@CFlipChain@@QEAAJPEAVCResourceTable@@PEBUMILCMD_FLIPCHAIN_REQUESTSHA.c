/*
 * XREFs of ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AA714
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 */

__int64 __fastcall CFlipChain::ProcessRequestSharedHandle(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE *a3)
{
  int v5; // eax
  struct CResourceTable *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v7, this);
  v5 = CFlipChain::CacheSharedHandle(
         this,
         *(struct _LUID *)((char *)a3 + 8),
         *((HMONITOR *)a3 + 2),
         (*((_BYTE *)a3 + 24) & 8) != 0,
         0);
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x127u);
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v7);
  return 0LL;
}
