/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x18005A3DC
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x18005A494 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18005A1C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18005A270 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18005A75C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  CInteraction *v1; // rdi
  __int64 v3; // rcx

  v1 = (CInteraction *)((char *)this + 8);
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)Buffer + (unsigned int)(*((_DWORD *)this + 152) * Size), 0, (unsigned int)Size);
  *((_DWORD *)this + 152) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  CInteraction::UnRegisterNotifiers(v1);
  CInteraction::UpdateInputSink(this, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v3, &INTERACTION_DESTROYED, v1);
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 224));
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 160);
  CResource::~CResource(v1);
}
