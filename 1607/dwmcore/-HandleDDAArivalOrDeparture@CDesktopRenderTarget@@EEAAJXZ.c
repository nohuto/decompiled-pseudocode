/*
 * XREFs of ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18011DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18003466C (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180076D08 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18011D8F0 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArivalOrDeparture(CDesktopRenderTarget *this, __int64 a2, __int64 a3)
{
  const struct CDisplaySet **v3; // r14
  CDisplaySet *v5; // rcx
  struct CHwndRenderTarget *v6; // rbx
  int CurrentDisplaySet; // eax
  unsigned int v8; // edi
  __int64 v9; // r14
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax

  v3 = (const struct CDisplaySet **)((char *)this + 208);
  v5 = (CDisplaySet *)*((_QWORD *)this + 26);
  v6 = 0LL;
  if ( v5 )
  {
    CDisplaySet::Release(v5, a2, a3);
    *v3 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v5, v3);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, CurrentDisplaySet, 0x326u);
    goto LABEL_16;
  }
  if ( *((_DWORD *)*v3 + 18) )
  {
    v9 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v9) + 152LL);
        if ( CDisplay::HasDDAChanged((CDisplay *)v10) )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 48) + 24LL))(*(_QWORD *)(v10 + 48));
          *(_BYTE *)(v10 + 303) = v11 != 0;
          if ( v11 && *(_BYTE *)(v10 + 300) )
          {
            v12 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                    (CDesktopRenderTarget *)((char *)this - 152),
                    (struct CDisplay *)v10);
            v8 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, v12, 0x348u);
LABEL_16:
              if ( v6 )
                (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
              return v8;
            }
          }
          else
          {
            DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
                                             (CDesktopRenderTarget *)((char *)this - 152),
                                             (const struct CDisplay *)v10);
            v6 = DDAHwndRenderTargetByDisplay;
            if ( DDAHwndRenderTargetByDisplay )
            {
              CDesktopRenderTarget::RemoveRenderTarget(
                (CDesktopRenderTarget *)((char *)this - 152),
                DDAHwndRenderTargetByDisplay);
              v6 = 0LL;
            }
          }
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *((_DWORD *)this + 8) )
          goto LABEL_16;
      }
    }
  }
  return v8;
}
