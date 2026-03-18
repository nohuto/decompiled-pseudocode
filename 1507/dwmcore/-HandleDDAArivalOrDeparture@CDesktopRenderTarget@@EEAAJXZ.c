/*
 * XREFs of ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1800EB690
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18004967C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x180057AE8 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1800EB2B0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1800EB508 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArivalOrDeparture(CDesktopRenderTarget *this)
{
  unsigned int v1; // r14d
  struct CHwndRenderTarget *v2; // rsi
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  __int64 v12; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)this + 14) + 72LL);
  if ( !v4 )
    return v1;
  v5 = 0;
  v6 = 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + *(_QWORD *)(*((_QWORD *)this + 14) + 48LL));
    if ( CDisplay::HasDDAChanged((CDisplay *)v7) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 56) + 24LL))(*(_QWORD *)(v7 + 56));
      *(_BYTE *)(v7 + 148) = v8 != 0;
      if ( !v8 || !*(_BYTE *)(v7 + 145) )
      {
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
                                         (CDesktopRenderTarget *)((char *)this - 80),
                                         (const struct CDisplay *)v7);
        v2 = DDAHwndRenderTargetByDisplay;
        if ( DDAHwndRenderTargetByDisplay )
        {
          CDesktopRenderTarget::RemoveRenderTarget(
            (CDesktopRenderTarget *)((char *)this - 80),
            DDAHwndRenderTargetByDisplay);
          v2 = 0LL;
        }
        goto LABEL_13;
      }
      v9 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
             (CDesktopRenderTarget *)((char *)this - 80),
             (struct CDisplay *)v7);
      v1 = v9;
      if ( v9 < 0 )
        break;
    }
LABEL_13:
    ++v5;
    v6 = v12 + 8;
    v12 += 8LL;
    if ( v5 >= v4 )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801752D8, 2u, v9, 0x2CCu);
LABEL_8:
  if ( v2 )
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v2 + 16LL))(v2);
  return v1;
}
