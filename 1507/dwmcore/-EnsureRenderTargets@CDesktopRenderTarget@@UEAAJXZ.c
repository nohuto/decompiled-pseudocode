/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18004AC20 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18004D580 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180060370 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800629F0 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006C4F4 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800927AC (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x1800E88B4 (-FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x1800E8A98 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x1800FA4F4 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x1801246F4 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  int v2; // ebx
  bool v3; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v5)(CHwndRenderTarget *__hidden); // r15
  int v6; // eax
  int v7; // edi
  __int64 v8; // rax
  int v9; // esi
  CHwndRenderTarget *v10; // r12
  void *v11; // rcx
  int RenderTargets; // eax
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 *v17; // rax
  __int64 v18; // rcx
  int RemoteAppRenderTarget; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  CHwndRenderTarget *v23; // rax
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax
  struct CRemoteApplicationWindow *v25; // rbx
  int inited; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rax
  unsigned int v32; // [rsp+20h] [rbp-78h]
  unsigned int v33; // [rsp+20h] [rbp-78h]
  CHwndRenderTarget *v34; // [rsp+30h] [rbp-68h] BYREF
  struct CRemoteApplicationWindow *v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  CHwndRenderTarget *v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  struct CHwndRenderTarget *v39; // [rsp+B0h] [rbp+18h] BYREF
  struct CVisual *v40; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    *((_BYTE *)this + 104) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 80));
    v2 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      v32 = 874;
      v14 = RenderTargets;
      goto LABEL_19;
    }
    v3 = *((_DWORD *)this + 8) != 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
  {
    v5 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 1) + 8LL * i) + 232LL);
    if ( v5 == CHwndRenderTarget::EnsureRenderTarget )
      v6 = CHwndRenderTarget::EnsureRenderTarget(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * i));
    else
      v6 = v5(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * i));
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v6, 0x37Au);
    if ( !v2 || v2 >= 0 && v7 < 0 )
      v2 = v7;
  }
  v8 = *((_QWORD *)this - 8);
  v9 = 0;
  v10 = 0LL;
  v39 = 0LL;
  if ( *(int *)(v8 + 1032) >= 2 )
  {
    v16 = 0;
    *((_QWORD *)this + 17) = qword_1801930E0;
    v38 = 0;
    if ( *((_DWORD *)qword_1801930E0 + 10) )
    {
      do
      {
        v17 = *(unsigned __int64 **)(*(_QWORD *)(*((_QWORD *)this + 17) + 16LL) + 8LL * v16);
        v18 = *((_QWORD *)this - 8);
        v35 = (struct CRemoteApplicationWindow *)v17;
        RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                                  *(CRenderTargetManager **)(v18 + 32),
                                  v17[2],
                                  &v39);
        v9 = RemoteAppRenderTarget;
        if ( RemoteAppRenderTarget < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0x95u);
          goto LABEL_11;
        }
        if ( !v39 )
        {
          v20 = 0;
          for ( LODWORD(v37) = 0; v20 < *((_DWORD *)this + 8); LODWORD(v37) = v20 )
          {
            v21 = v20;
            v22 = *((_QWORD *)this + 1);
            v36 = v21;
            v40 = 0LL;
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 8 * v21) + 128LL))(*(_QWORD *)(v22 + 8 * v21)) )
            {
              v23 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                           WPF::g_pProcessHeap,
                                           616LL);
              v10 = v23;
              if ( v23 )
              {
                CHwndRenderTarget::CHwndRenderTarget(v23, *((struct CComposition **)this - 8));
                *((_QWORD *)v10 + 5) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
                *(_QWORD *)v10 = &CHwndRenderTargetRemoteApp::`vftable'{for `CResource'};
                *((_QWORD *)v10 + 6) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
                Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)&CHwndRenderTargetRemoteApp::`vftable'{for `CResource'});
                DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, v10, 4LL);
              }
              else
              {
                v10 = 0LL;
              }
              if ( !v10 )
              {
                v9 = -2147024882;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xAAu);
                v2 = -2147024882;
LABEL_59:
                v32 = 898;
                v14 = v9;
LABEL_19:
                MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v14, v32);
                return (unsigned int)v2;
              }
              CBitmapOfDeviceBitmaps::AddRef(v10);
              v25 = v35;
              inited = CHwndRenderTargetRemoteApp::InitRemoteApp(
                         v10,
                         (CDesktopRenderTarget *)((char *)this - 80),
                         *(struct CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * v36),
                         v35);
              v9 = inited;
              if ( inited < 0 )
              {
                v33 = 175;
                goto LABEL_55;
              }
              inited = CComposition::AddHwndRenderTarget(*((CComposition **)this - 8), v10);
              v9 = inited;
              if ( inited < 0 )
              {
                v33 = 178;
                goto LABEL_55;
              }
              inited = CWindowManager::FindTopLevelVisualFromHwnd(
                         *(CWindowManager **)(*((_QWORD *)this - 8) + 48LL),
                         *((_QWORD *)v25 + 2),
                         &v40);
              v9 = inited;
              if ( inited < 0 )
              {
                v33 = 182;
                goto LABEL_55;
              }
              inited = CRenderTarget::SetRoot(v10, v40);
              v9 = inited;
              if ( inited < 0 )
              {
                v33 = 184;
LABEL_55:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, v33);
                goto LABEL_48;
              }
              v27 = *((_DWORD *)this + 20);
              v34 = v10;
              v28 = v27 + 1;
              if ( v27 + 1 < v27 )
              {
                v30 = -2147024362;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                v9 = -2147024362;
LABEL_52:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xB9u);
                goto LABEL_48;
              }
              v9 = 0;
              if ( v28 > *((_DWORD *)this + 19) )
              {
                v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, &v34);
                v30 = v29;
                if ( v29 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
                v9 = v30;
                if ( v30 < 0 )
                  goto LABEL_52;
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v27) = v34;
                *((_DWORD *)this + 20) = v28;
              }
            }
            v20 = (_DWORD)v37 + 1;
          }
        }
        v31 = *((_QWORD *)this + 17);
        v16 = v38 + 1;
        v38 = v16;
      }
      while ( v16 < *(_DWORD *)(v31 + 40) );
LABEL_48:
      if ( v9 < 0 )
      {
        v37 = v10;
        DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 56, &v37);
        if ( v10 )
          CMILCOMBase::InternalRelease(v10);
      }
    }
  }
LABEL_11:
  v2 = v9;
  if ( v9 < 0 )
    goto LABEL_59;
  if ( v3 )
  {
    v15 = CLogicalSurfaceHandleMap::EnsureTextures((CLogicalSurfaceHandleMap *)(*(_QWORD *)(*((_QWORD *)this - 8) + 40LL)
                                                                              + 96LL));
    v2 = v15;
    if ( v15 < 0 )
    {
      v32 = 911;
      v14 = v15;
      goto LABEL_19;
    }
  }
  v11 = (void *)*((_QWORD *)this + 23);
  if ( v11 && v3 )
    SetEvent(v11);
  return (unsigned int)v2;
}
