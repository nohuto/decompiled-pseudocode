/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A538C
 * Callers:
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x180008610 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A4958 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800A6104 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 312));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 240);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 152);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 88);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(this);
}
