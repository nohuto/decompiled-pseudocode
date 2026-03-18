/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x18012DB70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x180073B10 (-ForcePresent@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180073BC0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800740C4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18007B210 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x18011C358 (-GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, char a2, int a3)
{
  CHwndRenderTarget *v3; // rsi
  int v7; // edi
  __int64 (__fastcall *v8)(CHwndRenderTarget *); // rax
  CHwndRenderTarget *v9; // rcx
  char v10; // al
  char v11; // cl
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  CHwFullScreenRenderTarget *v19; // rcx
  __int64 (__fastcall *v20)(CHwFullScreenRenderTarget *__hidden, bool, bool, struct RenderTargetPresentParameters *); // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 result; // rax
  int RemoteAppParameters; // eax
  _BYTE v25[36]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+54h] [rbp-34h]

  v3 = (CHwndRenderTarget *)((char *)this - 112);
  v7 = 0;
  v8 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*((_QWORD *)this - 14) + 208LL);
  v9 = (CHwndRenderTarget *)((char *)this - 112);
  if ( v8 == CHwndRenderTarget::ForcePresent )
    v10 = CHwndRenderTarget::ForcePresent(v9);
  else
    v10 = v8(v9);
  v11 = v10;
  v12 = a2;
  if ( v11 )
    v12 = 1;
  if ( !*((_BYTE *)this + 638) && !v12 && !*((_BYTE *)this + 636) )
    goto LABEL_18;
  if ( *((_BYTE *)v3 + 760) )
    goto LABEL_18;
  v13 = *((_QWORD *)v3 + 92);
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 + 264) && *(_BYTE *)(v13 + 1083) )
      goto LABEL_18;
    v14 = *(_QWORD *)(v13 + 960);
    if ( v14 )
    {
      if ( *(_BYTE *)(v14 + 78) && !*(_BYTE *)(v14 + 76) )
        goto LABEL_18;
    }
  }
  *((_BYTE *)this + 638) = 0;
  if ( !*((_QWORD *)this + 6) )
    goto LABEL_18;
  memset_0(v25, 0, 0x28uLL);
  v25[33] = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v3 + 152LL))(v3);
  v15 = *(_DWORD *)(*((_QWORD *)this - 12) + 1104LL) == 3;
  v25[34] = *((_BYTE *)this + 642);
  v25[32] = v15;
  v16 = *(_QWORD *)v3;
  v26 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(v16 + 152))(v3) )
  {
    RemoteAppParameters = CHwndRenderTarget::GetRemoteAppParameters(v3, (struct RenderTargetPresentParameters *)v25);
    v7 = RemoteAppParameters;
    if ( RemoteAppParameters < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppParameters, 0x6A1u);
      goto LABEL_20;
    }
  }
  v19 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 6);
  LOBYTE(v18) = *((_BYTE *)this + 644);
  LOBYTE(v17) = *((_BYTE *)this + 636);
  v20 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool, bool, struct RenderTargetPresentParameters *))(*(_QWORD *)v19 + 184LL);
  if ( v20 == CHwFullScreenRenderTarget::Present )
    v21 = CHwFullScreenRenderTarget::Present(v19, v17, v18, (struct RenderTargetPresentParameters *)v25);
  else
    v21 = v20(v19, v17, v18, (struct RenderTargetPresentParameters *)v25);
  v7 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x6A6u);
    goto LABEL_20;
  }
  v22 = *((_QWORD *)this + 78);
  if ( v22 )
    *(_BYTE *)(v22 + 1086) = 0;
  CHwndRenderTarget::NotifyPowerManagerContentType(v3);
  if ( v7 == 142213130 )
    *((_BYTE *)this + 642) = 1;
  else
LABEL_18:
    *((_BYTE *)this + 642) = 0;
  *((_BYTE *)this + 648) = 0;
LABEL_20:
  result = CHwndRenderTarget::HandleWindowErrors((COverlayContext **)v3, v7);
  *((_BYTE *)this + 636) = 0;
  return result;
}
