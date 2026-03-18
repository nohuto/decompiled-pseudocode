/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x18005A75C
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18005A3DC (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x18012F824 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594C8 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 36);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease((__int64 *)this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease((__int64 *)this);
}
