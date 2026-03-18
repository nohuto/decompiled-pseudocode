/*
 * XREFs of ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800436D8 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B67A8 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B82C0 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x18011AF00 (-FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x18011B0D4 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x18012D730 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x18012D970 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRemoteAppRenderTargets(CDesktopRenderTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  CHwndRenderTargetRemoteApp *v3; // rsi
  __int64 v6; // r15
  unsigned __int64 *v7; // r13
  int RemoteAppRenderTarget; // eax
  __int64 v9; // r12
  __int64 v10; // rax
  CHwndRenderTargetRemoteApp *v11; // rax
  int inited; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-28h]
  CHwndRenderTargetRemoteApp *v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+90h] [rbp+48h] BYREF
  struct CHwndRenderTarget *v26; // [rsp+98h] [rbp+50h] BYREF
  struct CVisual *v27; // [rsp+A0h] [rbp+58h] BYREF
  CHwndRenderTargetRemoteApp *v28; // [rsp+A8h] [rbp+60h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v26 = 0LL;
  v3 = 0LL;
  if ( *(int *)(v1 + 1104) < 2 )
    return (unsigned int)v2;
  v6 = 0LL;
  *((_QWORD *)this + 48) = qword_1801EFD20;
  if ( !*((_DWORD *)qword_1801EFD20 + 10) )
    return (unsigned int)v2;
  do
  {
    v7 = *(unsigned __int64 **)(*(_QWORD *)(*((_QWORD *)this + 48) + 16LL) + 8 * v6);
    RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                              *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
                              v7[2],
                              &v26);
    v2 = RemoteAppRenderTarget;
    if ( RemoteAppRenderTarget < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0xB6u);
      return (unsigned int)v2;
    }
    if ( !v26 )
    {
      v9 = 0LL;
      if ( *((_DWORD *)this + 46) )
      {
        while ( 1 )
        {
          v10 = *((_QWORD *)this + 20);
          v27 = 0LL;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 8 * v9) + 144LL))(*(_QWORD *)(v10 + 8 * v9)) )
            break;
LABEL_33:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 46) )
            goto LABEL_34;
        }
        v11 = (CHwndRenderTargetRemoteApp *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                              WPF::g_pProcessHeap,
                                              800LL);
        if ( v11 )
          v3 = CHwndRenderTargetRemoteApp::CHwndRenderTargetRemoteApp(v11, *((struct CComposition **)this + 2));
        else
          v3 = 0LL;
        if ( !v3 )
        {
          v2 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCBu);
          return (unsigned int)v2;
        }
        CBitmapOfDeviceBitmaps::AddRef(v3);
        inited = CHwndRenderTargetRemoteApp::InitRemoteApp(
                   v3,
                   this,
                   *(struct CHwndRenderTarget **)(*((_QWORD *)this + 20) + 8 * v9),
                   (struct CRemoteApplicationWindow *)v7);
        v2 = inited;
        if ( inited < 0 )
        {
          v23 = 208;
LABEL_46:
          v21 = inited;
LABEL_47:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v23);
          break;
        }
        inited = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v3);
        v2 = inited;
        if ( inited < 0 )
        {
          v23 = 211;
          goto LABEL_46;
        }
        inited = CWindowManager::FindTopLevelVisualFromHwnd(
                   *(CWindowManager **)(*((_QWORD *)this + 2) + 48LL),
                   v7[2],
                   &v27);
        v2 = inited;
        if ( inited < 0 )
        {
          v23 = 215;
          goto LABEL_46;
        }
        inited = CRenderTarget::SetRoot(v3, v27);
        v2 = inited;
        if ( inited < 0 )
        {
          v23 = 217;
          goto LABEL_46;
        }
        v28 = v3;
        v13 = *((_DWORD *)this + 58);
        v14 = v13 + 1;
        if ( v13 + 1 >= v13 )
        {
          v2 = 0;
          if ( v14 <= *((_DWORD *)this + 57) )
          {
            *(_QWORD *)(*((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 58)) = v28;
            *((_DWORD *)this + 58) = v14;
            goto LABEL_20;
          }
          v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 208, 8LL, 1LL, &v28);
          v2 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
        }
        else
        {
          v2 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v2 < 0 )
        {
          v23 = 218;
LABEL_29:
          v21 = v2;
          goto LABEL_47;
        }
LABEL_20:
        v15 = *((_QWORD *)v3 + 16);
        v16 = (_QWORD *)*((_QWORD *)this + 38);
        v17 = 0;
        v25 = v15;
        if ( *((_DWORD *)this + 82) )
        {
          while ( v15 != *v16 )
          {
            ++v17;
            ++v16;
            if ( v17 >= *((_DWORD *)this + 82) )
              goto LABEL_23;
          }
          goto LABEL_33;
        }
LABEL_23:
        v18 = *((_DWORD *)this + 82);
        v19 = v18 + 1;
        if ( v18 + 1 >= v18 )
        {
          v2 = 0;
          if ( v19 <= *((_DWORD *)this + 81) )
          {
            *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * *((unsigned int *)this + 82)) = v25;
            *((_DWORD *)this + 82) = v19;
LABEL_32:
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
            goto LABEL_33;
          }
          v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 304, 8LL, 1LL, &v25);
          v2 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
        }
        else
        {
          v2 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v2 < 0 )
        {
          v23 = 223;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
    }
LABEL_34:
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < *(_DWORD *)(*((_QWORD *)this + 48) + 40LL) );
  if ( v2 < 0 )
  {
    v24 = v3;
    DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 208, &v24);
    if ( v3 )
      CMILCOMBase::InternalRelease(v3);
  }
  return (unsigned int)v2;
}
