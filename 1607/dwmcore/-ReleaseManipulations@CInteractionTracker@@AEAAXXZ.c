/*
 * XREFs of ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18014AFC8
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x1801689CC (-ClearAllConfigurations@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::ReleaseManipulations(CInteractionTracker *this)
{
  unsigned int v2; // ebp
  unsigned int i; // edi
  __int64 v4; // r14
  __int64 v5; // rax
  struct CResource *v6; // rdx
  struct CResource *v7; // rdx

  CChainingHelper::ClearAllConfigurations((CInteractionTracker *)((char *)this + 376), this);
  v2 = *((_DWORD *)this + 134);
  for ( i = 0; i < v2; ++i )
  {
    v4 = *((_QWORD *)this + 65);
    v5 = *(_QWORD *)(v4 + 8LL * (int)i);
    if ( v5 )
      v6 = (struct CResource *)(v5 + 8);
    else
      v6 = 0LL;
    CResource::UnRegisterNotifierInternal(this, v6);
    *(_QWORD *)(v4 + 8LL * (int)i) = 0LL;
    v7 = *(struct CResource **)(*((_QWORD *)this + 66) + 8LL * (int)i);
    if ( v7 )
      v7 = (struct CResource *)((char *)v7 + 8);
    CResource::UnRegisterNotifierInternal(this, v7);
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)(*((_QWORD *)this + 66) + 8LL * (int)i));
  }
  CMap<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll((char *)this + 520);
}
