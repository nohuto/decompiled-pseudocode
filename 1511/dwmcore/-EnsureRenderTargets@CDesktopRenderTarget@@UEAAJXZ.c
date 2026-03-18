/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18007C290 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007E82C (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18009DABC (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A60F8 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800AD27C (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B2D74 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x180104914 (-FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180104AF8 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x180114464 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180139CA4 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  __int64 i; // rdi
  __int64 (__fastcall *v3)(CHwndRenderTarget *__hidden); // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // esi
  CHwndRenderTarget *v8; // r12
  void *v9; // rcx
  int RenderTargets; // eax
  int v12; // r9d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 *v15; // rax
  __int64 v16; // rcx
  int RemoteAppRenderTarget; // eax
  unsigned int v18; // eax
  CHwndRenderTarget *v19; // rax
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax
  struct CRemoteApplicationWindow *v21; // rbx
  int inited; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  int v33; // r9d
  unsigned int v34; // [rsp+20h] [rbp-48h]
  unsigned int v35; // [rsp+20h] [rbp-48h]
  struct CHwndRenderTarget *v36; // [rsp+30h] [rbp-38h] BYREF
  struct CVisual *v37; // [rsp+38h] [rbp-30h] BYREF
  CHwndRenderTarget *v38; // [rsp+40h] [rbp-28h] BYREF
  struct CRemoteApplicationWindow *v39; // [rsp+48h] [rbp-20h]
  CHwndRenderTarget *v40; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+48h]
  unsigned int v42; // [rsp+B8h] [rbp+50h]
  bool v43; // [rsp+C0h] [rbp+58h]
  __int64 v44; // [rsp+C8h] [rbp+60h] BYREF

  v43 = 0;
  if ( *((_BYTE *)this + 152) )
  {
    *((_BYTE *)this + 152) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 80));
    v5 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      v34 = 872;
      v12 = RenderTargets;
      goto LABEL_17;
    }
    v43 = *((_DWORD *)this + 8) != 0;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 1) + 8 * i) + 240LL);
    if ( v3 == CHwndRenderTarget::EnsureRenderTarget )
      v4 = CHwndRenderTarget::EnsureRenderTarget(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * i));
    else
      v4 = v3(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * i));
    v5 = v4;
    if ( v4 < 0 )
    {
      v34 = 888;
      v12 = v4;
      goto LABEL_17;
    }
  }
  v6 = *((_QWORD *)this - 8);
  v7 = 0;
  v36 = 0LL;
  v8 = 0LL;
  if ( *(int *)(v6 + 1000) < 2 )
    goto LABEL_8;
  v14 = 0;
  *((_QWORD *)this + 23) = qword_1801A39E0;
  v42 = 0;
  if ( !*((_DWORD *)qword_1801A39E0 + 10) )
    goto LABEL_8;
  while ( 1 )
  {
    v15 = *(unsigned __int64 **)(*(_QWORD *)(*((_QWORD *)this + 23) + 16LL) + 8LL * v14);
    v16 = *((_QWORD *)this - 8);
    v39 = (struct CRemoteApplicationWindow *)v15;
    RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                              *(CRenderTargetManager **)(v16 + 32),
                              v15[2],
                              &v36);
    v7 = RemoteAppRenderTarget;
    if ( RemoteAppRenderTarget < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0xB3u);
LABEL_8:
      v5 = v7;
      if ( v7 < 0 )
        goto LABEL_68;
      if ( v43 )
      {
        v13 = CLogicalSurfaceHandleMap::EnsureTextures((CLogicalSurfaceHandleMap *)(*(_QWORD *)(*((_QWORD *)this - 8)
                                                                                              + 40LL)
                                                                                  + 96LL));
        v5 = v13;
        if ( v13 < 0 )
        {
          v34 = 909;
          v12 = v13;
          goto LABEL_17;
        }
      }
      v9 = (void *)*((_QWORD *)this + 29);
      if ( v9 && v43 )
        SetEvent(v9);
      return v5;
    }
    if ( !v36 )
    {
      v18 = 0;
      v41 = 0;
      if ( *((_DWORD *)this + 8) )
        break;
    }
LABEL_52:
    v14 = v42 + 1;
    v42 = v14;
    if ( v14 >= *(_DWORD *)(*((_QWORD *)this + 23) + 40LL) )
    {
LABEL_53:
      if ( v7 < 0 )
      {
        v40 = v8;
        DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 56, &v40);
        if ( v8 )
          CMILCOMBase::InternalRelease(v8);
      }
      goto LABEL_8;
    }
  }
  while ( 1 )
  {
    v37 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 8LL * v18) + 136LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v18)) )
      goto LABEL_51;
    v19 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 608LL);
    v8 = v19;
    if ( v19 )
    {
      CHwndRenderTarget::CHwndRenderTarget(v19, *((struct CComposition **)this - 8));
      *((_QWORD *)v8 + 5) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
      *(_QWORD *)v8 = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
      *((_QWORD *)v8 + 6) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
      Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)&CHwndRenderTargetRemoteApp::`vftable'{for `CResource'});
      DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, v8, 4LL);
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
      break;
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v21 = v39;
    inited = CHwndRenderTargetRemoteApp::InitRemoteApp(
               v8,
               (CDesktopRenderTarget *)((char *)this - 80),
               *(struct CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v41),
               v39);
    v7 = inited;
    if ( inited < 0 )
    {
      v35 = 205;
      goto LABEL_62;
    }
    inited = CComposition::AddHwndRenderTarget(*((CComposition **)this - 8), v8);
    v7 = inited;
    if ( inited < 0 )
    {
      v35 = 208;
      goto LABEL_62;
    }
    inited = CWindowManager::FindTopLevelVisualFromHwnd(
               *(CWindowManager **)(*((_QWORD *)this - 8) + 48LL),
               *((_QWORD *)v21 + 2),
               &v37);
    v7 = inited;
    if ( inited < 0 )
    {
      v35 = 212;
      goto LABEL_62;
    }
    inited = CRenderTarget::SetRoot(v8, v37);
    v7 = inited;
    if ( inited < 0 )
    {
      v35 = 214;
LABEL_62:
      v33 = inited;
      goto LABEL_63;
    }
    v23 = *((_DWORD *)this + 20);
    v38 = v8;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_59:
      v35 = 215;
LABEL_60:
      v33 = v26;
LABEL_63:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, v35);
      goto LABEL_53;
    }
    v7 = 0;
    if ( v24 > *((_DWORD *)this + 19) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v38);
      v26 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      v7 = v26;
      if ( v26 < 0 )
        goto LABEL_59;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v23) = v38;
      *((_DWORD *)this + 20) = v24;
    }
    v27 = *((_QWORD *)v8 + 7);
    v28 = (_QWORD *)*((_QWORD *)this + 13);
    v29 = 0;
    v44 = v27;
    if ( *((_DWORD *)this + 32) )
    {
      while ( v27 != *v28 )
      {
        ++v29;
        ++v28;
        if ( v29 >= *((_DWORD *)this + 32) )
          goto LABEL_44;
      }
      goto LABEL_51;
    }
LABEL_44:
    v30 = *((_DWORD *)this + 32);
    v31 = v30 + 1;
    if ( v30 + 1 < v30 )
    {
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_57:
      v35 = 220;
      goto LABEL_60;
    }
    v7 = 0;
    if ( v31 > *((_DWORD *)this + 31) )
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 104, 8LL, 1LL, &v44);
      v26 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      v7 = v26;
      if ( v26 < 0 )
        goto LABEL_57;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v30) = v44;
      *((_DWORD *)this + 32) = v31;
    }
    _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
LABEL_51:
    v18 = v41 + 1;
    v41 = v18;
    if ( v18 >= *((_DWORD *)this + 8) )
      goto LABEL_52;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC8u);
  v5 = -2147024882;
LABEL_68:
  v34 = 896;
  v12 = v7;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v12, v34);
  return v5;
}
