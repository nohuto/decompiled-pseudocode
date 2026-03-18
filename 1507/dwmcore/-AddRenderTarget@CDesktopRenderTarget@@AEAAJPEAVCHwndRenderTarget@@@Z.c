/*
 * XREFs of ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800496E0
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800602EC (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006C4F4 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v2; // r14
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct CHwndRenderTarget *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = (struct CHwndRenderTarget *)a2;
  v2 = a2[10];
  if ( *((_QWORD *)this + 7) )
  {
    v4 = (*((__int64 (__fastcall **)(CDisplay **, _QWORD))*a2 + 22))(a2, *((_QWORD *)this + 7));
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 779;
      goto LABEL_20;
    }
  }
  if ( CDisplay::IsPrimary(v2) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((char *)this + 88, &v12);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_5;
    v11 = 784;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v11);
    return v5;
  }
  v7 = *((_DWORD *)this + 28);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v5 = -2147024362;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x314u);
    return v5;
  }
  if ( v8 > *((_DWORD *)this + 27) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8u, 1, &v12);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    v5 = v9;
    if ( v9 < 0 )
      goto LABEL_17;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v12;
    *((_DWORD *)this + 28) = v8;
  }
LABEL_5:
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v12 + 8LL))(v12);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
         *(HMONITOR *)(*((_QWORD *)v2 + 19) + 32LL),
         *((struct CVisualTree **)this + 7));
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 793;
    goto LABEL_20;
  }
  v4 = CComposition::AddHwndRenderTarget(*((CComposition **)this + 2), v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 798;
    goto LABEL_20;
  }
  return v5;
}
