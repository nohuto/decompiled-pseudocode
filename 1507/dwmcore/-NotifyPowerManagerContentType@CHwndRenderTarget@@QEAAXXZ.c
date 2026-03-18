/*
 * XREFs of ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18004A590
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800EA4A0 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x1800076FC (-GetContentType@CCompositionSurfaceInfo@@QEBA-AW4BufferContentType@@XZ.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18000EBAC (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     PubSebRegisterRpc @ 0x180058904 (PubSebRegisterRpc.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?IsDesktopContent@COverlayContext@@QEAA_NXZ @ 0x1800EA398 (-IsDesktopContent@COverlayContext@@QEAA_NXZ.c)
 *     Template_zqq @ 0x1800EAD7C (Template_zqq.c)
 */

void __fastcall CHwndRenderTarget::NotifyPowerManagerContentType(CHwndRenderTarget *this)
{
  __int64 v1; // rbp
  struct _SEB_RPC_PUBLISH_DATA **v2; // r13
  bool v3; // r15
  int v4; // esi
  unsigned __int8 v6; // bl
  __int64 v7; // r10
  unsigned int v8; // esi
  unsigned int v9; // r11d
  __int64 v10; // rax
  char v11; // r14
  bool v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  struct _SEB_RPC_PUBLISH_DATA *v15; // rcx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r15
  unsigned __int8 v18; // dl
  char updated; // al
  int v20; // edx
  int v21; // ecx
  char v22; // al
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  __int64 i; // rdx
  unsigned int v29; // r11d
  bool v30; // al
  _DWORD v31[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 584);
  v3 = 0;
  v4 = 0;
  v6 = 1;
  if ( *((_QWORD *)this + 73) || (v25 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, v2), v4 = v25, v25 >= 0) )
  {
    if ( !*((_QWORD *)this + 72) )
    {
      v26 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 576);
      v4 = v26;
      if ( v26 >= 0 )
        goto LABEL_4;
      MilInstrumentationCheckHR(0x14u, &dword_18016AB18, 1u, v26, 0x245u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016AB18, 1u, v25, 0x23Fu);
  }
  if ( v4 < 0 )
    return;
LABEL_4:
  v7 = *((_QWORD *)this + 69);
  if ( !v7 )
    goto LABEL_8;
  v8 = *(_DWORD *)(v7 + 224);
  v9 = 0;
  if ( v8 )
  {
    v27 = *(_QWORD *)(v7 + 200);
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v31[i] = (float)*(int *)((char *)&v31[i + 17] + 240LL * v9 - (_QWORD)v31 + v27);
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v31, v7 + 40) )
        break;
      v9 = v29 + 1;
      if ( v9 >= v8 )
        goto LABEL_6;
    }
    v1 = *(_QWORD *)(240LL * v29 + v27 + 16);
  }
LABEL_6:
  if ( v1 )
  {
    v30 = v8 == 1 && !COverlayContext::IsDesktopContent((COverlayContext *)v7);
    v3 = v8 <= 2;
    if ( v30 )
      goto LABEL_14;
LABEL_8:
    v11 = 0;
    v12 = v3;
    if ( v1 || !*((_BYTE *)this + 572) )
      goto LABEL_10;
    goto LABEL_27;
  }
  v10 = *(_QWORD *)(v7 + 624);
  if ( !v10 )
    goto LABEL_8;
  v1 = *(_QWORD *)(v10 + 32);
LABEL_14:
  v11 = 1;
  v12 = 1;
  if ( !v1 )
    return;
  if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v1) != 1
    || (v13 = *((_QWORD *)this + 10)) == 0
    || *(_DWORD *)(*(_QWORD *)(v13 + 16) + 72LL) != 1
    || *((_BYTE *)this + 572) )
  {
LABEL_19:
    if ( !v1 )
      return;
    if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v1) != 1 )
      return;
    v14 = *((_QWORD *)this + 10);
    if ( !v14 || *(_DWORD *)(*(_QWORD *)(v14 + 16) + 72LL) != 1 || *((_BYTE *)this + 573) )
      return;
    goto LABEL_24;
  }
LABEL_27:
  if ( *v2 )
  {
    if ( v11 )
    {
      v17 = 1;
      v18 = 1;
    }
    else
    {
      v17 = 0;
      v18 = 0;
    }
    updated = PubSebiUpdateLevelEventRpc(*v2, v18);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqq(v21, v20, (unsigned int)L"FSVP", v17, updated);
  }
  *((_BYTE *)this + 572) = v11;
LABEL_10:
  if ( v12 )
    goto LABEL_19;
  if ( !*((_BYTE *)this + 573) )
    return;
LABEL_24:
  v15 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 72);
  if ( v15 )
  {
    if ( v12 )
    {
      v16 = 1;
    }
    else
    {
      v6 = 0;
      v16 = 0;
    }
    v22 = PubSebiUpdateLevelEventRpc(v15, v16);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqq(v24, v23, (unsigned int)L"P2PRenderer", v6, v22);
  }
  *((_BYTE *)this + 573) = v12;
}
