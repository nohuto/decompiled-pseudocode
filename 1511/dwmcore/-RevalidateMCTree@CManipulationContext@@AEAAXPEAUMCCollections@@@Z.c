/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180144354
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180143DBC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180001C1C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18000205C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18013F9DC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180143608 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180143744 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180144864 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  unsigned int v2; // r12d
  struct MCCollections *v3; // rdi
  _QWORD *v5; // r14
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
  HMONITOR Monitor; // rax
  struct CVisual *v19; // rax
  struct CInteraction **v20; // rdi
  struct CInteraction *v21; // rbx
  struct CInteraction *v22; // r14
  const struct CVisual *v23; // rax
  __int64 v24; // rcx
  CManipulationContext *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct CInteraction *v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  __int64 v31; // [rsp+30h] [rbp-18h]
  struct CVisualTree *v32; // [rsp+90h] [rbp+48h] BYREF
  struct MCCollections *v33; // [rsp+98h] [rbp+50h]
  unsigned int v34; // [rsp+A0h] [rbp+58h]
  struct CInteraction *v35; // [rsp+A8h] [rbp+60h] BYREF

  v33 = a2;
  v2 = 0;
  v3 = a2;
  v34 = 0;
  if ( *((int *)this + 18) > 0 )
  {
    v5 = (_QWORD *)((char *)this + 56);
    v6 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v7 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v32) = *(_DWORD *)(v6 + *v5);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v7,
              (int *)&v32);
      if ( Key == -1 )
        v10 = 2;
      else
        v10 = *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL * Key);
      v29 = *(struct CInteraction **)(v9 + *((_QWORD *)this + 8));
      v11 = v29;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v29);
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
        v35 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v35);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v5,
          v2,
          &v32,
          &v35);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v35);
      }
      if ( !CInteraction::GetVisual(ClosestInteractionAncestor) )
      {
        ClosestInteractionAncestor = 0LL;
        v35 = 0LL;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v35);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v5,
          v2,
          &v32,
          &v35);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v35);
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
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v29);
      v7 = (char *)v3 + 40;
      v6 = v30 + 4;
      v30 += 4LL;
      ++v2;
      v31 += 8LL;
      v34 = v2;
      if ( (signed int)v2 >= *((_DWORD *)this + 18) )
        return;
    }
    v17 = v33;
    while ( 1 )
    {
      v32 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v32);
      Monitor = (HMONITOR)CManipulationContext::FindMonitor(v17, ClosestInteractionAncestor);
      CMonitorTreeAssociation::FindTreeNoLock(
        *(CMonitorTreeAssociation **)(*((_QWORD *)this + 5) + 24LL),
        Monitor,
        &v32);
      v19 = CInteraction::GetVisual(ClosestInteractionAncestor);
      CManipulationContext::OnVisualPropertyChange(v19, v32);
      v20 = (struct CInteraction **)((char *)ClosestInteractionAncestor + 168);
      v21 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 21);
      v22 = ClosestInteractionAncestor;
      v23 = CInteraction::GetVisual(ClosestInteractionAncestor);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v23);
      if ( v21 != ClosestInteractionAncestor )
      {
        v24 = *((_QWORD *)v22 + 22);
        if ( v24 )
          *(_QWORD *)(v24 + 184) = *((_QWORD *)v22 + 23);
        v25 = (CManipulationContext *)*((_QWORD *)v22 + 23);
        if ( v25 )
          *((_QWORD *)v25 + 22) = *((_QWORD *)v22 + 22);
        if ( v21 && *((struct CInteraction **)v21 + 24) == v22 )
          *((_QWORD *)v21 + 24) = *((_QWORD *)v22 + 22);
        *((_QWORD *)v22 + 23) = 0LL;
        *((_QWORD *)v22 + 22) = 0LL;
        *v20 = 0LL;
        CManipulationContext::CleanStaleFork(v25, v10, v21);
        if ( !ClosestInteractionAncestor )
          goto LABEL_35;
        *((_QWORD *)v22 + 22) = *((_QWORD *)ClosestInteractionAncestor + 24);
        v26 = *((_QWORD *)ClosestInteractionAncestor + 24);
        if ( v26 )
          *(_QWORD *)(v26 + 184) = v22;
        *((_QWORD *)ClosestInteractionAncestor + 24) = v22;
        *v20 = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && (*((_BYTE *)ClosestInteractionAncestor + 156) & 0x10) == 0 )
      {
        ++*((_DWORD *)ClosestInteractionAncestor + v10 + 49);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) == 1 )
        {
          LOBYTE(v28) = *((_BYTE *)this + 28) & 1;
          LOBYTE(v27) = 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64))(*(_QWORD *)ClosestInteractionAncestor + 40LL))(
            ClosestInteractionAncestor,
            v27,
            v28);
        }
      }
LABEL_35:
      *((_BYTE *)v22 + 156) &= 0xE7u;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v32);
      if ( !ClosestInteractionAncestor )
      {
        v2 = v34;
        v5 = (_QWORD *)((char *)this + 56);
        v3 = v33;
        goto LABEL_37;
      }
    }
  }
}
