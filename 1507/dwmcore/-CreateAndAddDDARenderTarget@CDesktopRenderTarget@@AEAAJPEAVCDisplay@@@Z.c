/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1800EB2B0
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1800EB690 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18004AEAC (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180060370 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006C4F4 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1800FA770 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTargetDDA *v4; // rax
  struct CHwndRenderTarget *v5; // rdi
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  int inited; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-30h]
  char v16; // [rsp+28h] [rbp-28h]
  char v17; // [rsp+30h] [rbp-20h]
  char v18; // [rsp+38h] [rbp-18h]
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  struct CHwndRenderTarget *v20; // [rsp+90h] [rbp+40h] BYREF

  v20 = 0LL;
  v4 = (CHwndRenderTargetDDA *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 600LL);
  if ( v4 )
  {
    v5 = CHwndRenderTargetDDA::CHwndRenderTargetDDA(v4, *((struct CComposition **)this + 2));
    v20 = v5;
  }
  else
  {
    v5 = 0LL;
    v20 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26Bu);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = *((_DWORD *)this + 28);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v6 = -2147024362;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26Eu);
    goto LABEL_26;
  }
  if ( v8 > *((_DWORD *)this + 27) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8u, 1, &v20);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    v6 = v9;
    if ( v9 < 0 )
      goto LABEL_15;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v20;
    *((_DWORD *)this + 28) = v8;
  }
  v18 = *((_BYTE *)this + 258);
  v17 = *((_BYTE *)this + 244);
  v16 = *((_BYTE *)this + 256);
  v15 = *((_DWORD *)this + 56);
  v19 = *(_OWORD *)((char *)this + 228);
  inited = CHwndRenderTarget::InitFullScreen((__int64)v20, (__int64)this, (__int64)a2, &v19, v15, v16, v17, v18);
  v6 = inited;
  if ( inited >= 0 )
  {
    if ( *((_QWORD *)this + 7)
      && (v12 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *, _QWORD))(*(_QWORD *)v20 + 176LL))(
                  v20,
                  *((_QWORD *)this + 7)),
          v6 = v12,
          v12 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x283u);
    }
    else
    {
      v13 = CComposition::AddHwndRenderTarget(*((CComposition ****)this + 2), v20);
      v6 = v13;
      if ( v13 >= 0 )
        v20 = 0LL;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x289u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x27Bu);
  }
  if ( v6 < 0 )
    DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 11, (__int64 *)&v20);
LABEL_26:
  if ( v20 )
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v6;
}
