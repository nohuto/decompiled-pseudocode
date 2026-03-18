/*
 * XREFs of ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x180008610
 * Callers:
 *     ??_ECInteractionRoot@@W7EAAPEAXI@Z @ 0x1800C12A0 (--_ECInteractionRoot@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A538C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`scalar deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 32));
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 24);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CInteractionRoot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
