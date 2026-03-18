/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x180114680 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006A7C (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180074220 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18007C248 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x180105E90 (-GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, char a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 (__fastcall *v16)(CHwFullScreenRenderTarget *, _BOOL8, bool, struct RenderTargetPresentParameters *); // rbp
  int v17; // eax
  __int64 v18; // rax
  __int64 result; // rax
  COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rax
  int RemoteAppParameters; // eax
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[28]; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+54h] [rbp-34h]

  v6 = 0;
  if ( *((_BYTE *)this + 521)
    || (v7 = *((_QWORD *)this + 5), *(_BYTE *)(v7 + 299))
    && *(_BYTE *)(v7 + 300)
    && ((v8 = *((_QWORD *)this + 63)) == 0
     || !*(_QWORD *)(v8 + 712)
     || !CDisplay::IsPrimary(*((CDisplay **)this + 5))
     || (OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(*(CRenderTargetManager **)(*((_QWORD *)this - 3) + 32LL))) == 0LL
     || !COutOfFrameDirectFlipInfo::EarlyWakeUp(OutOfFrameDirectFlipInfo))
    && !*((_BYTE *)this + 519) )
  {
    a2 = 1;
  }
  if ( !*((_BYTE *)this + 517) && !a2 && !*((_BYTE *)this + 515) )
    goto LABEL_21;
  v9 = (_QWORD *)((char *)this - 40);
  if ( *((_BYTE *)this + 527) )
    goto LABEL_21;
  v10 = v9[68];
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 224) && *(_BYTE *)(v10 + 835) )
      goto LABEL_21;
    v11 = *(_QWORD *)(v10 + 712);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 78) && !*(_BYTE *)(v11 + 76) )
        goto LABEL_21;
    }
  }
  *((_BYTE *)this + 517) = 0;
  if ( !*((_QWORD *)this + 6) )
    goto LABEL_21;
  v22 = 0LL;
  memset_0(v23, 0, 0x20uLL);
  v23[25] = (*(__int64 (__fastcall **)(char *))(*v9 + 144LL))((char *)this - 40);
  v12 = *(_DWORD *)(*((_QWORD *)this - 3) + 1000LL) == 3;
  v23[26] = *((_BYTE *)this + 521);
  v23[24] = v12;
  v13 = *v9;
  v24 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(v13 + 144))((char *)this - 40) )
  {
    RemoteAppParameters = CHwndRenderTarget::GetRemoteAppParameters(
                            (CHwndRenderTarget *)((char *)this - 40),
                            (struct RenderTargetPresentParameters *)&v22);
    v6 = RemoteAppParameters;
    if ( RemoteAppParameters < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppParameters, 0x669u);
      goto LABEL_23;
    }
  }
  v16 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, _BOOL8, bool, struct RenderTargetPresentParameters *))(**((_QWORD **)this + 6) + 176LL);
  if ( v16 == CHwFullScreenRenderTarget::Present )
  {
    LOBYTE(v14) = *((_BYTE *)this + 515);
    v17 = CHwFullScreenRenderTarget::Present(
            *((CHwFullScreenRenderTarget **)this + 6),
            v14,
            *((_BYTE *)this + 523),
            (struct RenderTargetPresentParameters *)&v22);
  }
  else
  {
    LOBYTE(v15) = *((_BYTE *)this + 523);
    LOBYTE(v14) = *((_BYTE *)this + 515);
    v17 = v16(*((CHwFullScreenRenderTarget **)this + 6), v14, v15, (struct RenderTargetPresentParameters *)&v22);
  }
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x66Eu);
    goto LABEL_23;
  }
  v18 = *((_QWORD *)this + 63);
  if ( v18 )
    *(_BYTE *)(v18 + 838) = 0;
  CHwndRenderTarget::NotifyPowerManagerContentType((CHwndRenderTarget *)((char *)this - 40));
  if ( v6 == 142213130 )
    *((_BYTE *)this + 521) = 1;
  else
LABEL_21:
    *((_BYTE *)this + 521) = 0;
  *((_BYTE *)this + 527) = 0;
LABEL_23:
  result = CHwndRenderTarget::HandleWindowErrors((COverlayContext **)this - 5, v6);
  *((_BYTE *)this + 515) = 0;
  return result;
}
