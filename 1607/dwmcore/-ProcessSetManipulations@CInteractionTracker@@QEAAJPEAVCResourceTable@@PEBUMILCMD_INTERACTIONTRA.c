/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180145D34 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?Add@?$CMap@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBQEAVCManipulation@@AEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180149C84 (-Add@-$CMap@PEAVCManipulation@@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@PEAVC.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18014A3B4 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18014AFC8 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180168ACC (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        char *a4)
{
  CResourceTable *v6; // rbx
  char v8; // r14
  int v9; // r12d
  unsigned int *v10; // r15
  struct CResource *ResourceWithoutType; // rsi
  struct CResource *v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD); // rsi
  CManipulation *v14; // rbp
  struct CResource *v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  struct CResource *v18; // rdx
  bool v19; // dl
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-48h]
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+80h] [rbp+18h] BYREF
  CManipulation *v25; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  CInteractionTracker::ReleaseManipulations(this);
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v10 = (unsigned int *)(a4 + 4);
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, *(v10 - 1));
      v12 = *v10 ? CResourceTable::GetResourceWithoutType(v6, *v10) : 0LL;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              103LL)
        || v12 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 102LL) )
      {
        break;
      }
      v25 = (struct CResource *)((char *)ResourceWithoutType - 8);
      if ( v12 )
        v13 = (__int64 (__fastcall ***)(_QWORD))((char *)v12 - 8);
      else
        v13 = 0LL;
      v24 = v13;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v24);
      CMap<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
        (char *)this + 520,
        &v25,
        &v24);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v24);
      v14 = v25;
      if ( v25 )
        v15 = (CManipulation *)((char *)v25 + 8);
      else
        v15 = 0LL;
      v16 = CResource::RegisterNotifier(this, v15);
      v17 = v16;
      if ( v16 < 0 )
      {
        v22 = 667;
        goto LABEL_31;
      }
      if ( v13 )
        v18 = (struct CResource *)(v13 + 1);
      else
        v18 = 0LL;
      v16 = CResource::RegisterNotifier(this, v18);
      v17 = v16;
      if ( v16 < 0 )
      {
        v22 = 670;
        goto LABEL_31;
      }
      v16 = CManipulation::SetAutoReset_RenderThread(v14, v19);
      v17 = v16;
      if ( v16 < 0 )
      {
        v22 = 678;
LABEL_31:
        v20 = v16;
        goto LABEL_33;
      }
      if ( *((CManipulation **)this + 68) == v14 )
        v8 = 1;
      if ( !*((_DWORD *)this + 51) )
        CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 376), this);
      v10 += 2;
      if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
        goto LABEL_34;
      v6 = a2;
    }
    v17 = -2003303421;
    v22 = 657;
    v20 = -2003303421;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v22);
  }
  else
  {
LABEL_34:
    if ( *((_QWORD *)this + 68) )
    {
      if ( !v8 )
      {
        CInteractionTracker::ClearActiveManipulation(this);
        if ( *((_DWORD *)this + 51) != 2 )
          CInteractionTracker::TransitionToInertia(this);
      }
    }
    return 0;
  }
  return v17;
}
