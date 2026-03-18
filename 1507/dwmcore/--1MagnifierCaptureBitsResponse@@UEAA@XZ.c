/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1800F0CC4
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800F0D70 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
