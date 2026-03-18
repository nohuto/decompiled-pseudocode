/*
 * XREFs of ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x18004B000
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Release@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800BFF50 (-Release@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800C0000 (-Release@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WHI@EAAKXZ @ 0x1800C0010 (-Release@CRenderTargetImageSource@@WHI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WIA@EAAKXZ @ 0x1800C0020 (-Release@CRenderTargetImageSource@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::Release(CRenderTargetImageSource *this)
{
  return CMILCOMBase::InternalRelease((CRenderTargetImageSource *)((char *)this + 8));
}
