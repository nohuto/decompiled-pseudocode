/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180171BA0
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801714FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180008C5C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18000DA48 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180170C38 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180170E64 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180172414 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  unsigned __int8 v2; // r15
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  char *v11; // r8
  _QWORD *v12; // r14
  int Key; // eax
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int v16; // r13d
  const GUID *v17; // rbx
  struct CInteraction *v18; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  const GUID *v20; // r8
  const GUID *v21; // r9
  struct CInteraction *i; // r14
  char v23; // al
  const struct CVisual *Visual; // rax
  bool *v25; // rdx
  const GUID *v26; // r14
  char v27; // al
  char v28; // al
  struct MCCollections *v29; // r12
  HMONITOR Monitor; // rax
  struct CVisual *v31; // rax
  const GUID *v32; // r14
  struct CInteraction *v33; // rbx
  CInteraction *v34; // rcx
  const struct CVisual *v35; // rax
  bool *v36; // rdx
  const GUID *v37; // r8
  const GUID *v38; // r9
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // r8
  __int64 j; // rcx
  struct CVisualTree *v49; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v50; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-C0h]
  CManipulationContext *v52; // [rsp+48h] [rbp-B8h] BYREF
  const GUID *v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  struct MCCollections *v56; // [rsp+68h] [rbp-98h]
  struct CInteraction *v57; // [rsp+70h] [rbp-90h] BYREF
  const GUID *v58; // [rsp+78h] [rbp-88h] BYREF
  struct CInteraction *v59; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct CVisualTree **v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  struct CInteraction **v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  CManipulationContext **v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  struct CInteraction **v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+ECh] [rbp-14h]
  struct CInteraction **v70; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+F8h] [rbp-8h]
  int v72; // [rsp+FCh] [rbp-4h]

  v2 = 0;
  v56 = a2;
  v5 = 0;
  if ( *((int *)this + 18) > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 8));
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 280);
          *(_QWORD *)(v7 + 272) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < *((_DWORD *)this + 18) );
  }
  v9 = 0;
  v51 = 0;
  if ( *((int *)this + 18) > 0 )
  {
    v10 = 0LL;
    v55 = 0LL;
    v54 = 0LL;
    v11 = (char *)a2 + 40;
    v12 = (_QWORD *)((char *)this + 56);
    while ( 1 )
    {
      LODWORD(v50) = *(_DWORD *)(v10 + *v12);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v11,
              (int *)&v50);
      if ( Key == -1 )
        v16 = 2;
      else
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 4LL * Key);
      v53 = *(const GUID **)(v14 + *((_QWORD *)this + 8));
      v17 = v53;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v53);
      v18 = *(struct CInteraction **)v17[16].Data4;
      ClosestInteractionAncestor = (struct CInteraction *)v17;
      if ( v18 )
      {
        do
        {
          ClosestInteractionAncestor = v18;
          v18 = (struct CInteraction *)*((_QWORD *)v18 + 33);
        }
        while ( v18 );
        v49 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v49);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v50,
          &v49);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v49);
      }
      if ( !CInteraction::GetVisual(ClosestInteractionAncestor) )
      {
        v49 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v49);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v50,
          &v49);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v49);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(Visual, v25) )
      {
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          if ( (qword_1801EAA90 & 2) == 0 || (v23 = 1, (qword_1801EAA98 & 2) != qword_1801EAA98) )
            v23 = 0;
          if ( v23 )
          {
            v49 = this;
            v61 = &v49;
            v63 = &v50;
            v62 = 8LL;
            v50 = i;
            v64 = 8LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C6389, v20, v21, 4u, &pData);
          }
        }
        *((_BYTE *)i + 256) |= 0x40u;
        Visual = CInteraction::GetVisual(i);
      }
      v26 = v17;
      do
      {
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          if ( (qword_1801EAA90 & 2) == 0 || (v27 = 1, (qword_1801EAA98 & 2) != qword_1801EAA98) )
            v27 = 0;
          if ( v27 )
          {
            v49 = this;
            v61 = &v49;
            v63 = &v50;
            v62 = 8LL;
            v50 = (struct CInteraction *)v26;
            v64 = 8LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C63DB, v20, v21, 4u, &pData);
          }
        }
        LOBYTE(v26[16].Data1) |= 0x80u;
        v26 = *(const GUID **)&v26[17].Data1;
      }
      while ( v26 );
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        if ( (qword_1801EAA90 & 2) == 0 || (v28 = 1, (qword_1801EAA98 & 2) != qword_1801EAA98) )
          v28 = 0;
        if ( v28 )
        {
          v49 = this;
          v61 = &v49;
          v63 = &v50;
          v65 = &v52;
          v62 = 8LL;
          v50 = ClosestInteractionAncestor;
          v64 = 8LL;
          v52 = (CManipulationContext *)v17;
          v66 = 8LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C62A6, v20, v21, 5u, &pData);
        }
      }
      if ( ClosestInteractionAncestor != (struct CInteraction *)v17 )
        CManipulationContext::CleanStaleFork(this, v16, v17, v21);
      if ( ClosestInteractionAncestor )
        break;
LABEL_68:
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v53);
      v12 = (_QWORD *)((char *)this + 56);
      v10 = v54 + 4;
      ++v9;
      v54 += 4LL;
      v2 = 0;
      v51 = v9;
      v55 += 8LL;
      v11 = (char *)v56 + 40;
      if ( (signed int)v9 >= *((_DWORD *)this + 18) )
        goto LABEL_69;
    }
    v29 = v56;
    while ( 1 )
    {
      v49 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v49);
      Monitor = (HMONITOR)CManipulationContext::FindMonitor(v29, ClosestInteractionAncestor);
      CMonitorTreeAssociation::FindTreeNoLock(
        *(CMonitorTreeAssociation **)(*((_QWORD *)this + 5) + 24LL),
        Monitor,
        &v49);
      v31 = CInteraction::GetVisual(ClosestInteractionAncestor);
      CManipulationContext::OnVisualPropertyChange(v31, v49);
      v2 |= (*((_BYTE *)ClosestInteractionAncestor + 256) & 0x20) != 0;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor, v2);
      v32 = (const GUID *)*((_QWORD *)ClosestInteractionAncestor + 34);
      v33 = ClosestInteractionAncestor;
      v35 = CInteraction::GetVisual(v34);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v35, v36);
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 2) != 0
        && (qword_1801EAA98 & 2) == qword_1801EAA98 )
      {
        v69 = 0;
        v72 = 0;
        v61 = &v52;
        v63 = &v57;
        v65 = (CManipulationContext **)&v58;
        v67 = &v59;
        LODWORD(v50) = v2;
        v70 = &v50;
        v52 = this;
        v62 = 8LL;
        v57 = ClosestInteractionAncestor;
        v64 = 8LL;
        v58 = v32;
        v66 = 8LL;
        v59 = v33;
        v68 = 8;
        v71 = 4;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C6308, v37, v38, 7u, &pData);
      }
      if ( v32 != (const GUID *)ClosestInteractionAncestor )
      {
        v40 = *((_QWORD *)v33 + 36);
        if ( v40 )
          *(_QWORD *)(v40 + 296) = *((_QWORD *)v33 + 37);
        v41 = *((_QWORD *)v33 + 37);
        if ( v41 )
          *(_QWORD *)(v41 + 288) = *((_QWORD *)v33 + 36);
        v42 = *((_QWORD *)v33 + 35);
        if ( v42 && *(struct CInteraction **)(v42 + 304) == v33 )
          *(_QWORD *)(v42 + 304) = *((_QWORD *)v33 + 36);
        *((_QWORD *)v33 + 37) = 0LL;
        *((_QWORD *)v33 + 36) = 0LL;
        *((_QWORD *)v33 + 35) = 0LL;
        CManipulationContext::CleanStaleFork(this, v16, v32, v38);
        if ( !ClosestInteractionAncestor )
          goto LABEL_66;
        *((_QWORD *)v33 + 36) = *((_QWORD *)ClosestInteractionAncestor + 38);
        v43 = *((_QWORD *)ClosestInteractionAncestor + 38);
        if ( v43 )
          *(_QWORD *)(v43 + 296) = v33;
        *((_QWORD *)ClosestInteractionAncestor + 38) = v33;
        *((_QWORD *)v33 + 35) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && *((char *)ClosestInteractionAncestor + 256) >= 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v44) = 1;
          LOBYTE(v45) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v44,
            v45,
            v16);
        }
        *((_DWORD *)ClosestInteractionAncestor + v16 + 77) += *((_DWORD *)v33 + v16 + 77);
      }
LABEL_66:
      *((_BYTE *)v33 + 256) &= 0x3Fu;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v49);
      if ( !ClosestInteractionAncestor )
      {
        v9 = v51;
        goto LABEL_68;
      }
    }
  }
LABEL_69:
  v46 = 0;
  if ( *((int *)this + 18) > 0 )
  {
    v47 = 0LL;
    do
    {
      for ( j = *(_QWORD *)(v47 + *((_QWORD *)this + 8)); j; j = *(_QWORD *)(j + 280) )
        *(_QWORD *)(j + 272) = 0LL;
      ++v46;
      v47 += 8LL;
    }
    while ( v46 < *((_DWORD *)this + 18) );
  }
}
