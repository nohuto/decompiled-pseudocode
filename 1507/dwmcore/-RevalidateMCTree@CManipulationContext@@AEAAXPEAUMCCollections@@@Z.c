/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18013101C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A634 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18005A744 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129F2C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2F4 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x18012FD28 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x18012FFB4 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18012FFF0 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180131B4C (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  unsigned int v2; // r12d
  struct MCCollections *v3; // r14
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  char *v7; // r8
  int Key; // eax
  __int64 v9; // r10
  unsigned int v10; // r13d
  struct CInteraction *v11; // rbx
  struct CInteraction *v12; // rax
  struct CInteraction *ClosestInteractionAncestor; // rsi
  struct CInteraction *i; // rcx
  const struct CVisual *Visual; // rax
  struct CInteraction *v16; // rax
  struct MCCollections *v17; // r12
  __int64 Monitor; // rax
  __int64 v19; // rcx
  HMONITOR v20; // rbx
  CMonitorTreeAssociation *v21; // rdi
  struct CVisual *v22; // rax
  struct CInteraction **v23; // rdi
  struct CInteraction *v24; // rbx
  struct CInteraction *v25; // r14
  const struct CVisual *v26; // rax
  __int64 v27; // rcx
  CManipulationContext *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  struct CInteraction *v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+28h] [rbp-20h]
  __int64 v34; // [rsp+30h] [rbp-18h]
  struct CVisualTree *v35; // [rsp+90h] [rbp+48h] BYREF
  struct MCCollections *v36; // [rsp+98h] [rbp+50h]
  unsigned int v37; // [rsp+A0h] [rbp+58h]
  struct CInteraction *v38; // [rsp+A8h] [rbp+60h] BYREF

  v36 = a2;
  v2 = 0;
  v3 = a2;
  v37 = 0;
  if ( *((int *)this + 18) > 0 )
  {
    v5 = (_QWORD *)((char *)this + 56);
    v6 = 0LL;
    v34 = 0LL;
    v33 = 0LL;
    v7 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v35) = *(_DWORD *)(v6 + *v5);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v7,
              (int *)&v35);
      if ( Key == -1 )
        v10 = 2;
      else
        v10 = *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL * Key);
      v32 = *(struct CInteraction **)(v9 + *((_QWORD *)this + 8));
      v11 = v32;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v32);
      v12 = (struct CInteraction *)*((_QWORD *)v11 + 20);
      ClosestInteractionAncestor = v11;
      if ( v12 )
      {
        do
        {
          ClosestInteractionAncestor = v12;
          v12 = (struct CInteraction *)*((_QWORD *)v12 + 20);
        }
        while ( v12 );
        v38 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v38);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v5,
          v2,
          &v35,
          &v38);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v38);
      }
      if ( !CInteraction::GetVisual(ClosestInteractionAncestor) )
      {
        ClosestInteractionAncestor = 0LL;
        v38 = 0LL;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v38);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v5,
          v2,
          &v35,
          &v38);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v38);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(Visual) )
      {
        *((_BYTE *)i + 156) |= 8u;
        Visual = CInteraction::GetVisual(i);
      }
      v16 = v11;
      do
      {
        *((_BYTE *)v16 + 156) |= 0x10u;
        v16 = (struct CInteraction *)*((_QWORD *)v16 + 21);
      }
      while ( v16 );
      if ( ClosestInteractionAncestor != v11 )
        CManipulationContext::CleanStaleFork(i, v10, v11);
      if ( ClosestInteractionAncestor )
        break;
LABEL_37:
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v32);
      v7 = (char *)v3 + 40;
      v6 = v33 + 4;
      v33 += 4LL;
      ++v2;
      v34 += 8LL;
      v37 = v2;
      if ( (signed int)v2 >= *((_DWORD *)this + 18) )
        return;
    }
    v17 = v36;
    while ( 1 )
    {
      v35 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v35);
      Monitor = CManipulationContext::FindMonitor(v17, ClosestInteractionAncestor);
      v19 = *((_QWORD *)this + 5);
      v20 = (HMONITOR)Monitor;
      v35 = 0LL;
      v21 = *(CMonitorTreeAssociation **)(v19 + 24);
      AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v21 + 6) + 576LL));
      CMonitorTreeAssociation::FindTreeNoLock(v21, v20, &v35);
      CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v21 + 6) + 568LL));
      v22 = CInteraction::GetVisual(ClosestInteractionAncestor);
      CManipulationContext::OnVisualPropertyChange(v22, v35);
      v23 = (struct CInteraction **)((char *)ClosestInteractionAncestor + 168);
      v24 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 21);
      v25 = ClosestInteractionAncestor;
      v26 = CInteraction::GetVisual(ClosestInteractionAncestor);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v26);
      if ( v24 != ClosestInteractionAncestor )
      {
        v27 = *((_QWORD *)v25 + 22);
        if ( v27 )
          *(_QWORD *)(v27 + 184) = *((_QWORD *)v25 + 23);
        v28 = (CManipulationContext *)*((_QWORD *)v25 + 23);
        if ( v28 )
          *((_QWORD *)v28 + 22) = *((_QWORD *)v25 + 22);
        if ( v24 && *((struct CInteraction **)v24 + 24) == v25 )
          *((_QWORD *)v24 + 24) = *((_QWORD *)v25 + 22);
        *((_QWORD *)v25 + 23) = 0LL;
        *((_QWORD *)v25 + 22) = 0LL;
        *v23 = 0LL;
        CManipulationContext::CleanStaleFork(v28, v10, v24);
        if ( !ClosestInteractionAncestor )
          goto LABEL_35;
        *((_QWORD *)v25 + 22) = *((_QWORD *)ClosestInteractionAncestor + 24);
        v29 = *((_QWORD *)ClosestInteractionAncestor + 24);
        if ( v29 )
          *(_QWORD *)(v29 + 184) = v25;
        *((_QWORD *)ClosestInteractionAncestor + 24) = v25;
        *v23 = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && (*((_BYTE *)ClosestInteractionAncestor + 156) & 0x10) == 0 )
      {
        ++*((_DWORD *)ClosestInteractionAncestor + v10 + 49);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) == 1 )
        {
          LOBYTE(v31) = *((_BYTE *)this + 28) & 1;
          LOBYTE(v30) = 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64))(*(_QWORD *)ClosestInteractionAncestor + 40LL))(
            ClosestInteractionAncestor,
            v30,
            v31);
        }
      }
LABEL_35:
      *((_BYTE *)v25 + 156) &= 0xE7u;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v35);
      if ( !ClosestInteractionAncestor )
      {
        v2 = v37;
        v5 = (_QWORD *)((char *)this + 56);
        v3 = v36;
        goto LABEL_37;
      }
    }
  }
}
