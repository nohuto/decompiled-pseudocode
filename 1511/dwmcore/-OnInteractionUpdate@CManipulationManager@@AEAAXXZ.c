/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18013FF10 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18013F708 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x18013F8EC (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18013F9DC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18013FBB4 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x18013FF7C (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180143744 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18014384C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180143DBC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  unsigned int *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  CManipulationManager::InteractionUpdate *v6; // rdi
  struct CInteraction **v7; // rbp
  HMONITOR *v8; // rsi
  int v9; // r9d
  HMONITOR Monitor; // rax
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h]
  struct CVisualTree *v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = &v11;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
  v12 = 0;
  do
  {
    v5 = CQueue<CManipulationManager::InteractionUpdate *>::Remove(v4, v3, v2);
    v2 = 0LL;
    v6 = (CManipulationManager::InteractionUpdate *)v5;
    if ( v5 )
    {
      v7 = *(struct CInteraction ***)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      v8 = *(HMONITOR **)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      v9 = *(_DWORD *)v5;
      if ( *(int *)v5 >= 0 )
      {
        if ( v9 <= 3 )
        {
          CManipulationContext::InvalidateMCs((char *)this + 128, v7, v8);
        }
        else if ( v9 == 4 )
        {
          v13 = 0LL;
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v13);
          Monitor = CManipulationContext::FindMonitor((CManipulationManager *)((char *)this + 128), v7[50]);
          CMonitorTreeAssociation::FindTreeNoLock(
            *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
            Monitor,
            &v13);
          CManipulationContext::OnVisualPropertyChange((struct CVisual *)v7, v13);
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v13);
        }
        else if ( v9 == 5 )
        {
          CManipulationManager::OnCapturePointer(this, *(_DWORD *)(v5 + 24), v8);
        }
      }
      if ( v7 )
        CQueue<CResource *>::Insert((__int64)this + 208, v3, (__int64)v7);
      if ( v8 )
        CQueue<CResource *>::Insert((__int64)this + 208, v3, (__int64)(v8 + 1));
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(v6);
    }
    v4 = v11--;
  }
  while ( (_DWORD)v4 );
  CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 128));
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 568LL));
  if ( *((_DWORD *)this + 56) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 96LL));
}
