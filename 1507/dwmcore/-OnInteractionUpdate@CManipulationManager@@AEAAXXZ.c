/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18012AE48 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A634 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180129A18 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x18012A0BC (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2F4 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18012A684 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x18012B6D4 (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x18012FFB4 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180130470 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18013101C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  unsigned int *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  CManipulationManager::InteractionUpdate *v6; // r14
  struct CInteraction **v7; // r15
  struct CInteraction *v8; // rbp
  int v9; // r9d
  HMONITOR Monitor; // rax
  __int64 v11; // rcx
  HMONITOR v12; // rbx
  CMonitorTreeAssociation *v13; // rdi
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h]
  struct CVisualTree *v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = &v14;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
  v15 = 0;
  do
  {
    v5 = CQueue<CManipulationManager::InteractionUpdate *>::Remove(v4, v3, v2);
    v2 = 0LL;
    v6 = (CManipulationManager::InteractionUpdate *)v5;
    if ( v5 )
    {
      v7 = *(struct CInteraction ***)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      v8 = *(struct CInteraction **)(v5 + 16);
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
          v16 = 0LL;
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v16);
          Monitor = CManipulationContext::FindMonitor((CManipulationManager *)((char *)this + 128), v7[52]);
          v11 = *((_QWORD *)this + 2);
          v12 = Monitor;
          v16 = 0LL;
          v13 = *(CMonitorTreeAssociation **)(v11 + 24);
          AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v13 + 6) + 576LL));
          CMonitorTreeAssociation::FindTreeNoLock(v13, v12, &v16);
          CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v13 + 6) + 568LL));
          CManipulationContext::OnVisualPropertyChange((struct CVisual *)v7, v16);
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v16);
        }
        else if ( v9 == 5 )
        {
          CManipulationManager::OnCapturePointer(this, *(_DWORD *)(v5 + 24), v8);
        }
      }
      if ( v7 )
        CQueue<CResource *>::Insert((__int64)this + 208, v3, (__int64)v7);
      if ( v8 )
        CQueue<CResource *>::Insert((__int64)this + 208, v3, (__int64)v8 + 8);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(v6);
    }
    v4 = v14--;
  }
  while ( (_DWORD)v4 );
  CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 128));
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 568LL));
  if ( *((_DWORD *)this + 56) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 88LL));
}
