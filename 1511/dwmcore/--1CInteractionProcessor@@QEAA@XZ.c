/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A7C6C
 * Callers:
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1800036A0 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A7B5C (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 36);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this);
}
