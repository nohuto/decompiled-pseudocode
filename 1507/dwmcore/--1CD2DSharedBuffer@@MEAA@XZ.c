/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180070EAC
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180070E40 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v2 = (CMILCOMBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 3));
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
