/*
 * XREFs of ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180073BC0
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800B8008 (PubSebRegisterRpc.c)
 *     Template_zqq @ 0x18011CC4C (Template_zqq.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128FF8 (-IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x180151F54 (-GetContentType@CCompositionSurfaceInfo@@QEBA-AW4BufferContentType@@XZ.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18018B078 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::NotifyPowerManagerContentType(CHwndRenderTarget *this)
{
  __int64 v1; // rbp
  struct _SEB_RPC_PUBLISH_DATA **v2; // r12
  bool v3; // r15
  int v4; // esi
  unsigned __int8 v6; // bl
  __int64 v7; // r10
  unsigned int v8; // esi
  unsigned int v9; // r11d
  __int64 v10; // rax
  char v11; // r14
  bool v12; // si
  int v13; // eax
  int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // r11d
  bool v17; // al
  __int64 v18; // rax
  unsigned __int8 v19; // r15
  unsigned __int8 v20; // dl
  char updated; // al
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  struct _SEB_RPC_PUBLISH_DATA *v25; // rcx
  unsigned __int8 v26; // dl
  char v27; // al
  int v28; // edx
  int v29; // ecx

  v1 = 0LL;
  v2 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 776);
  v3 = 0;
  v4 = 0;
  v6 = 1;
  if ( *((_QWORD *)this + 97) || (v13 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, v2), v4 = v13, v13 >= 0) )
  {
    if ( !*((_QWORD *)this + 96) )
    {
      v14 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 768);
      v4 = v14;
      if ( v14 >= 0 )
        goto LABEL_4;
      MilInstrumentationCheckHR(0x14u, &dword_1801B0A28, 1u, v14, 0x1FCu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B0A28, 1u, v13, 0x1F6u);
  }
  if ( v4 < 0 )
    return;
LABEL_4:
  v7 = *((_QWORD *)this + 92);
  if ( !v7 )
    goto LABEL_8;
  v8 = *(_DWORD *)(v7 + 264);
  v9 = 0;
  if ( v8 )
  {
    v15 = *(_QWORD *)(v7 + 240);
    while ( !COverlayContext::IsFullscreen(
               (COverlayContext *)v7,
               (struct COverlayContext::OverlayPlaneInfo *)(v15 + 232LL * v9)) )
    {
      v9 = v16 + 1;
      if ( v9 >= v8 )
        goto LABEL_6;
    }
    v1 = *(_QWORD *)(232LL * v16 + v15 + 24);
  }
LABEL_6:
  if ( v1 )
  {
    v17 = v8 == 1 && !*(_DWORD *)(v7 + 296);
    v3 = v8 <= 2;
    if ( v17 )
      goto LABEL_29;
LABEL_8:
    v11 = 0;
    v12 = v3;
    if ( v1 || !*((_BYTE *)this + 758) )
      goto LABEL_10;
    goto LABEL_34;
  }
  v10 = *(_QWORD *)(v7 + 960);
  if ( !v10 )
    goto LABEL_8;
  v1 = *(_QWORD *)(v10 + 32);
LABEL_29:
  v11 = 1;
  v12 = 1;
  if ( !v1 )
    return;
  if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v1) != 1
    || (v18 = *((_QWORD *)this + 19)) == 0
    || *(_DWORD *)(*(_QWORD *)(v18 + 16) + 72LL) != 1
    || *((_BYTE *)this + 758) )
  {
LABEL_41:
    if ( !v1 )
      return;
    if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v1) != 1 )
      return;
    v24 = *((_QWORD *)this + 19);
    if ( !v24 || *(_DWORD *)(*(_QWORD *)(v24 + 16) + 72LL) != 1 || *((_BYTE *)this + 759) )
      return;
    goto LABEL_46;
  }
LABEL_34:
  if ( *v2 )
  {
    if ( v11 )
    {
      v19 = 1;
      v20 = 1;
    }
    else
    {
      v19 = 0;
      v20 = 0;
    }
    updated = PubSebiUpdateLevelEventRpc(*v2, v20);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqq(v23, v22, (unsigned int)L"FSVP", v19, updated);
  }
  *((_BYTE *)this + 758) = v11;
LABEL_10:
  if ( v12 )
    goto LABEL_41;
  if ( !*((_BYTE *)this + 759) )
    return;
LABEL_46:
  v25 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 96);
  if ( v25 )
  {
    if ( v12 )
    {
      v26 = 1;
    }
    else
    {
      v6 = 0;
      v26 = 0;
    }
    v27 = PubSebiUpdateLevelEventRpc(v25, v26);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqq(v29, v28, (unsigned int)L"P2PRenderer", v6, v27);
  }
  *((_BYTE *)this + 759) = v12;
}
