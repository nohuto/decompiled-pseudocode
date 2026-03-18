/*
 * XREFs of ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1800937B8
 * Callers:
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18009316C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800517EC (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2)
{
  CRenderTargetManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)this + 24);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((__int64)this + 72);
  *((_DWORD *)this + 27) = 0;
  result = this;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 116) = 0;
  return result;
}
