/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C
 * Callers:
 *     _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x18016A5F0 (_lambda_0342f3220c32cb7c81f8659183993432_--_lambda_invoker_cdecl_.c)
 *     _lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_::_lambda_invoker_cdecl_ @ 0x18016A660 (_lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18016A9A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z @ 0x18016AEB4 (-OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18016AF50 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x18016B2D0 (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801703AC (-Insert@-$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180170E64 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180170F50 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801714FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  unsigned int *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  CManipulationManager::InteractionUpdate *v6; // rdi
  CVisual *v7; // rbp
  HMONITOR *v8; // rsi
  int v9; // r9d
  struct CInteraction *InteractionInternal; // rax
  HMONITOR Monitor; // rax
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h]
  struct CVisualTree *v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = &v12;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 584LL));
  v13 = 0;
  do
  {
    v5 = CQueue<CManipulationManager::InteractionUpdate *>::Remove(v4, v3, v2);
    v2 = 0LL;
    v6 = (CManipulationManager::InteractionUpdate *)v5;
    if ( v5 )
    {
      v7 = *(CVisual **)(v5 + 8);
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
        else
        {
          switch ( v9 )
          {
            case 4:
              v14 = 0LL;
              Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v14);
              InteractionInternal = CVisual::GetInteractionInternal(v7);
              Monitor = CManipulationContext::FindMonitor(
                          (CManipulationManager *)((char *)this + 128),
                          InteractionInternal);
              CMonitorTreeAssociation::FindTreeNoLock(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                Monitor,
                &v14);
              CManipulationContext::OnVisualPropertyChange(v7, v14);
              Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v14);
              break;
            case 5:
              CManipulationManager::OnCapturePointer(this, *(_DWORD *)(v5 + 24), v8);
              break;
            case 6:
              CManipulationManager::OnCaptureManipulation(
                this,
                (struct CInteraction *)v8,
                *(_DWORD *)(v5 + 24),
                *(_DWORD *)(v5 + 28),
                *(_QWORD *)(v5 + 32));
              break;
          }
        }
      }
      if ( v7 )
        CQueue<CBufferedInteractionOutput *>::Insert((char *)this + 208, v3, v7);
      if ( v8 )
        CQueue<CBufferedInteractionOutput *>::Insert((char *)this + 208, v3, v8 + 1);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(v6);
    }
    v4 = v12--;
  }
  while ( (_DWORD)v4 );
  CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 128));
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)this + 2) + 576LL));
  if ( *((_DWORD *)this + 56) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) + 96LL));
}
