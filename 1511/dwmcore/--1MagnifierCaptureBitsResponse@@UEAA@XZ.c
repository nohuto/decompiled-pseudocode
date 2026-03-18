/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18010AA20
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18010AAC0 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  CMILCOMBase *v4; // rcx

  v1 = *((_QWORD *)this + 25);
  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  v3 = *((_QWORD *)this + 24);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 24));
  v4 = (CMILCOMBase *)*((_QWORD *)this + 20);
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
