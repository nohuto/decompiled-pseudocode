/*
 * XREFs of ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x18003B5B4 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180073B48 (-GetDisplayRect@CHwndRenderTarget@@AEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800770E0 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800B8AF4 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets2(CDesktopRenderTarget *this)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r13
  struct CDisplay *DisplayNoRef; // r8
  char v10; // al
  int inited; // eax
  int *DisplayRect; // rax
  int *v13; // rcx
  bool v14; // dl
  BOOL v15; // r8d
  int v16; // edx
  bool v17; // al
  CComposition *v18; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-50h]
  CHwndRenderTarget *v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v7 = *((_QWORD *)this + 55);
  if ( !v7 || !*(_DWORD *)(v7 + 112) )
    return v2;
  v8 = 0LL;
  while ( 1 )
  {
    v24 = *(CHwndRenderTarget **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 120LL) + 8 * v8) + 112LL);
    DisplayNoRef = CDesktopRenderTarget::FindDisplayNoRef(this, v24);
    v10 = *((_BYTE *)this + 426);
    v25 = *(_OWORD *)((char *)this + 396);
    if ( !DisplayNoRef )
      break;
    inited = CHwndRenderTarget::InitFullScreen(
               v24,
               (__int64)this,
               (void (__fastcall ***)(_QWORD))DisplayNoRef,
               &v25,
               *((_DWORD *)this + 98),
               *((_BYTE *)this + 424),
               *((_BYTE *)this + 412),
               v10);
    v2 = inited;
    if ( inited < 0 )
    {
      v23 = 493;
      goto LABEL_45;
    }
    inited = CDesktopRenderTarget::AddRenderTarget(this, (CDisplay **)v24);
    v2 = inited;
    if ( inited < 0 )
    {
      v23 = 494;
      goto LABEL_45;
    }
LABEL_7:
    DisplayRect = (int *)CHwndRenderTarget::GetDisplayRect((__int64)v24);
    v13 = DisplayRect;
    v14 = v4 <= v6 || v3 <= v5;
    v15 = v14;
    v16 = *DisplayRect;
    v17 = DisplayRect[2] <= *DisplayRect || DisplayRect[3] <= DisplayRect[1];
    if ( v15 )
    {
      if ( v17 )
      {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = 0;
      }
      else
      {
        v25 = *(_OWORD *)v13;
        v3 = HIDWORD(v25);
        v4 = DWORD2(v25);
        v5 = DWORD1(v25);
        v6 = v25;
      }
    }
    else if ( !v17 )
    {
      if ( v16 < v6 )
        v6 = v16;
      if ( v13[1] < v5 )
        v5 = v13[1];
      if ( v13[2] > v4 )
        v4 = v13[2];
      if ( v13[3] > v3 )
        v3 = v13[3];
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(*((_QWORD *)this + 55) + 112LL) )
    {
      v18 = (CComposition *)*((_QWORD *)this + 2);
      *((float *)this + 92) = (float)v6;
      *((float *)this + 93) = (float)v5;
      *((float *)this + 94) = (float)v4;
      *((float *)this + 95) = (float)v3;
      CComposition::ResetScheduler(v18);
      return v2;
    }
  }
  inited = CHwndRenderTarget::ResetRenderTarget(
             (_DWORD)v24,
             (_DWORD)this,
             (unsigned int)&v25,
             *((_DWORD *)this + 98),
             *((_BYTE *)this + 424),
             *((_BYTE *)this + 412),
             v10);
  v2 = inited;
  if ( inited >= 0 )
  {
    v20 = *((_DWORD *)this + 70);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v2 = 0;
      if ( v21 <= *((_DWORD *)this + 69) )
      {
        *(_QWORD *)(*((_QWORD *)this + 32) + 8LL * v20) = v24;
        *((_DWORD *)this + 70) = v21;
LABEL_22:
        (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v24 + 8LL))(v24);
        goto LABEL_7;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 256, 8LL, 1LL, &v24);
      v2 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1FDu);
      return v2;
    }
    goto LABEL_22;
  }
  v23 = 505;
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, v23);
  return v2;
}
