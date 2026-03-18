/*
 * XREFs of ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1800036A0
 * Callers:
 *     ??_ECInteractionRoot@@W7EAAPEAXI@Z @ 0x1800BDAC0 (--_ECInteractionRoot@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A7C6C (--1CInteractionProcessor@@QEAA@XZ.c)
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
