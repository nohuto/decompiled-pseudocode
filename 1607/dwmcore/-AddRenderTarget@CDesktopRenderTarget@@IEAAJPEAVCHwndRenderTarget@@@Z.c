/*
 * XREFs of ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800436D8 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B6480 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B67A8 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B67EC (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v3; // rbp
  int v4; // eax
  int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct CHwndRenderTarget *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = (struct CHwndRenderTarget *)a2;
  v3 = a2[19];
  (*((void (__fastcall **)(CDisplay **))*a2 + 1))(a2);
  if ( *((_QWORD *)this + 16) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v11 + 192LL))(v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 878;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v10);
      goto LABEL_9;
    }
  }
  if ( (unsigned int)DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 160, &v11) )
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( CDisplay::IsPrimary(v3) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((char *)this + 160, &v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 890;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 46);
    v8 = v7 + 1;
    if ( v7 + 1 >= v7 )
    {
      if ( v8 <= *((_DWORD *)this + 45) )
      {
        *(_QWORD *)(*((_QWORD *)this + 20) + 8LL * *((unsigned int *)this + 46)) = v11;
        *((_DWORD *)this + 46) = v8;
        goto LABEL_7;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 160, 8LL, 1LL, &v11);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x37Eu);
      goto LABEL_9;
    }
  }
LABEL_7:
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v11 + 8LL))(v11);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
         *(HMONITOR *)(*((_QWORD *)v3 + 17) + 24LL),
         *((struct CVisualTree **)this + 16));
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 899;
    goto LABEL_12;
  }
  v4 = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 904;
    goto LABEL_12;
  }
LABEL_9:
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v5;
}
