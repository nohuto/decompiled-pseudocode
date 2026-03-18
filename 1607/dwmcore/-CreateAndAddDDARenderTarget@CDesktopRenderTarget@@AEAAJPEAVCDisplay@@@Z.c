/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18011DB40 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800436D8 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B67A8 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x18012DC08 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTargetDDA *v4; // rax
  struct CHwndRenderTarget *v5; // rcx
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  int inited; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  char v15; // [rsp+28h] [rbp-28h]
  char v16; // [rsp+30h] [rbp-20h]
  char v17; // [rsp+38h] [rbp-18h]
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  struct CHwndRenderTarget *v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = 0LL;
  v4 = (CHwndRenderTargetDDA *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 784LL);
  if ( v4 )
  {
    v5 = CHwndRenderTargetDDA::CHwndRenderTargetDDA(v4, *((struct CComposition **)this + 2));
    v19 = v5;
  }
  else
  {
    v5 = 0LL;
    v19 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2E6u);
    goto LABEL_24;
  }
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = *((_DWORD *)this + 46);
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    if ( v8 <= *((_DWORD *)this + 45) )
    {
      *(_QWORD *)(*((_QWORD *)this + 20) + 8LL * *((unsigned int *)this + 46)) = v19;
      *((_DWORD *)this + 46) = v8;
      goto LABEL_13;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 8u, 1, &v19);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2E9u);
    goto LABEL_24;
  }
LABEL_13:
  v17 = *((_BYTE *)this + 426);
  v16 = *((_BYTE *)this + 412);
  v15 = *((_BYTE *)this + 424);
  v14 = *((_DWORD *)this + 98);
  v18 = *(_OWORD *)((char *)this + 396);
  inited = CHwndRenderTarget::InitFullScreen(
             v19,
             (__int64)this,
             (void (__fastcall ***)(_QWORD))a2,
             &v18,
             v14,
             v15,
             v16,
             v17);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x2F6u);
  }
  else if ( *((_QWORD *)this + 16)
         && (v11 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v19 + 192LL))(v19),
             v6 = v11,
             v11 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2FEu);
  }
  else
  {
    v12 = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v19);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x304u);
    else
      v19 = 0LL;
  }
  if ( v6 < 0 )
    DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 20, (__int64 *)&v19);
LABEL_24:
  if ( v19 )
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v6;
}
