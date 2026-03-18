/*
 * XREFs of ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800B8C20 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x18000BD70 (-GetContentType@CCompositionSurfaceInfo@@QEBA-AW4BufferContentType@@XZ.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18001CAB4 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036B84 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     PubSebRegisterRpc @ 0x180069F00 (PubSebRegisterRpc.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_zqq @ 0x18010679C (Template_zqq.c)
 */

void __fastcall CHwndRenderTarget::NotifyPowerManagerContentType(CHwndRenderTarget *this)
{
  struct _SEB_RPC_PUBLISH_DATA **v1; // r13
  __int64 v3; // rbp
  bool v4; // r15
  int v5; // esi
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
  char v30; // al
  float v31[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 584);
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 1;
  if ( *((_QWORD *)this + 73) || (v25 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, v1), v5 = v25, v25 >= 0) )
  {
    if ( !*((_QWORD *)this + 72) )
    {
      v26 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (_QWORD *)this + 72);
      v5 = v26;
      if ( v26 >= 0 )
        goto LABEL_4;
      MilInstrumentationCheckHR(0x14u, &dword_180178EF0, 1u, v26, 0x20Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178EF0, 1u, v25, 0x204u);
  }
  if ( v5 < 0 )
    return;
LABEL_4:
  v7 = *((_QWORD *)this + 68);
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
        v31[i] = (float)*(int *)((char *)&v31[i + 17] + 224LL * v9 - (_QWORD)v31 + v27);
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v31, (float *)(v7 + 40)) )
        break;
      v9 = v29 + 1;
      if ( v9 >= v8 )
        goto LABEL_6;
    }
    v3 = *(_QWORD *)(224LL * v29 + v27 + 16);
  }
LABEL_6:
  if ( v3 )
  {
    if ( v8 != 1 || (v30 = 1, *(_DWORD *)(v7 + 256)) )
      v30 = 0;
    v4 = v8 <= 2;
    if ( v30 )
      goto LABEL_14;
LABEL_8:
    v11 = 0;
    v12 = v4;
    if ( v3 || !*((_BYTE *)this + 565) )
      goto LABEL_10;
    goto LABEL_27;
  }
  v10 = *(_QWORD *)(v7 + 712);
  if ( !v10 )
    goto LABEL_8;
  v3 = *(_QWORD *)(v10 + 32);
LABEL_14:
  v11 = 1;
  v12 = 1;
  if ( !v3 )
    return;
  if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v3) != 1
    || (v13 = *((_QWORD *)this + 10)) == 0
    || *(_DWORD *)(*(_QWORD *)(v13 + 16) + 72LL) != 1
    || *((_BYTE *)this + 565) )
  {
LABEL_19:
    if ( !v3 )
      return;
    if ( (unsigned int)CCompositionSurfaceInfo::GetContentType(v3) != 1 )
      return;
    v14 = *((_QWORD *)this + 10);
    if ( !v14 || *(_DWORD *)(*(_QWORD *)(v14 + 16) + 72LL) != 1 || *((_BYTE *)this + 566) )
      return;
    goto LABEL_24;
  }
LABEL_27:
  if ( *v1 )
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
    updated = PubSebiUpdateLevelEventRpc(*v1, v18);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_zqq(v21, v20, (unsigned int)L"FSVP", v17, updated);
  }
  *((_BYTE *)this + 565) = v11;
LABEL_10:
  if ( v12 )
    goto LABEL_19;
  if ( !*((_BYTE *)this + 566) )
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
  *((_BYTE *)this + 566) = v12;
}
