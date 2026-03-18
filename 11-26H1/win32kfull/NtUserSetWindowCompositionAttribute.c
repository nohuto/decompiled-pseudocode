/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x140235EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400A82B8 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400A8730 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x140179B8C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1401A2DC8 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E54A8 (-SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5570 (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5638 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5704 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E57B8 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E586C (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5934 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E59FC (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5AC0 (-SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5B7C (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5C44 (-SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5D2C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5E0C (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5ED0 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5F94 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E60D4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdq @ 0x140222E1C (WPP_RECORDER_AND_TRACE_SF_sdq.c)
 *     ?SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140261A94 (-SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140264A90 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x14026AB0C (-_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x14026F030 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB6EC (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB9B0 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CBB40 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1402CBBF4 (-_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  size_t v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v8; // xmm0_8
  size_t v9; // r8
  __int64 v10; // rsi
  char v11; // r15
  _QWORD *v12; // rax
  unsigned __int64 left; // rcx
  __int64 v14; // rdi
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // r14d
  struct tagTHREADINFO *v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  struct tagWND *Host; // rax
  __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  NTSTATUS updated; // eax
  __int64 v26; // rdx
  bool v27; // bl
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // sf
  ULONG v32; // eax
  struct tagRECT v34; // [rsp+60h] [rbp-78h] BYREF
  __int64 v35; // [rsp+70h] [rbp-68h]
  int v36; // [rsp+78h] [rbp-60h]
  __m128i v37; // [rsp+90h] [rbp-48h] BYREF
  SIZE_T Length; // [rsp+A0h] [rbp-38h]
  __m128i v39; // [rsp+A8h] [rbp-30h]
  SIZE_T v40; // [rsp+B8h] [rbp-20h]

  v3 = -1073741811;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v37, a2, 0x18uLL);
  v39 = v37;
  v40 = Length;
  v4 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
  v8 = (volatile void *)_mm_srli_si128(v37, 8).m128i_u64[0];
  ProbeForRead(v8, (unsigned int)v4, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v37.m128i_i32[0] - 1) <= 0x24 )
  {
    v9 = *(_QWORD *)&word_140361958[8 * v37.m128i_i32[0]];
    if ( v4 >= v9 )
    {
      memmove(&v34, (const void *)v8, v9);
      v10 = 0LL;
      v3 = 0;
      v36 = 0;
      goto LABEL_6;
    }
    v3 = -1073741789;
    v36 = -1073741789;
  }
  v10 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
LABEL_109:
    v32 = RtlNtStatusToDosError(v3);
    UserSetLastError(v32);
    v31 = v3 < 0;
    goto LABEL_110;
  }
  v11 = 1;
  EnterCrit(1LL, 0LL);
  v12 = (_QWORD *)ValidateHwndIAMComponetUIAware(a1);
  v14 = (__int64)v12;
  if ( !v12 )
    goto LABEL_107;
  v15 = v39.m128i_i32[0];
  if ( v39.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v12)
    || (v16 = *(_QWORD *)(v14 + 40), *(_DWORD *)(v16 + 236) == 15) )
  {
    if ( v15 == 36 && (unsigned int)IsTopLevelOrLayeredChildWindow((_QWORD *)v14) )
    {
      updated = SetWindowCompositionAlpha(
                  (struct tagWND *)v14,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
LABEL_106:
      v3 = updated;
      goto LABEL_108;
    }
    if ( IsTopLevelWindow(v14) || v15 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow((_QWORD *)v14) )
    {
      if ( v15 > 18 )
      {
        if ( v15 > 29 )
        {
          switch ( v15 )
          {
            case 30:
              updated = SetWindowCompositionSystemBackdropType(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 31:
              updated = _DwmAsyncSetTaggedWindowRect((const struct tagWND *)v14, &v34);
              goto LABEL_106;
            case 32:
              updated = _DwmAsyncClearTaggedWindowRect((const struct tagWND *)v14);
              goto LABEL_106;
            case 33:
              updated = SetWindowCompositionRemoteAppPolicy(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
          }
          if ( v15 != 34 )
          {
            if ( v15 == 35 )
            {
              v3 = 0;
              left = (unsigned int)v34.left;
              if ( v34.left )
              {
                if ( (v34.left & 0xFF000000) != 0xFF000000 )
                {
LABEL_27:
                  v3 = -1073741811;
                  goto LABEL_108;
                }
                left = v34.left & 0xFFFFFF;
                *(_DWORD *)(v14 + 180) = left;
              }
              else
              {
                *(_DWORD *)(v14 + 180) = -1;
              }
              goto LABEL_108;
            }
            if ( v15 == 37 )
            {
              updated = DwmSetBorderMargins(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            }
          }
          goto LABEL_95;
        }
        if ( v15 == 29 )
        {
          updated = SetWindowDisableMoveSizeFeedback(
                      (struct tagWND *)v14,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
          goto LABEL_106;
        }
        if ( v15 == 19 )
        {
          updated = SetWindowCompositionAccentPolicy(
                      (struct tagWND *)v14,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
          goto LABEL_106;
        }
        if ( v15 != 20 )
        {
          switch ( v15 )
          {
            case 22:
              updated = SetWindowCompositionVisualOwner(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 24:
              updated = SetWindowCompositionExcludedFromDDA(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 25:
              updated = SetWindowCompositionPassiveUpdateMode(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 26:
              updated = SetWindowCompositionDarkModeColors(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 27:
              updated = SetWindowCompositionCornerStyle(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            case 28:
              updated = SetWindowCompositionPartColor(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
          }
          goto LABEL_95;
        }
        SetWindowCompositionFreezeSWR((struct tagWND *)v14, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
      }
      else
      {
        if ( v15 == 18 )
          goto LABEL_95;
        if ( v15 > 9 )
        {
          v26 = 10LL;
          if ( v15 == 10 )
          {
            updated = _DwmAsyncSetCompositionAttribute(v14);
            goto LABEL_106;
          }
          if ( v15 == 11 )
          {
            updated = SetWindowCompositionNCRenderingExiled(
                        (struct tagWND *)v14,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
            goto LABEL_106;
          }
          if ( v15 != 12 )
          {
            if ( v15 == 13 )
            {
              updated = SetWindowCompositionExcludeFromLivePreview(
                          (struct tagWND *)v14,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
              goto LABEL_106;
            }
            if ( v15 != 14 )
            {
              if ( v15 == 15 )
              {
                updated = SetWindowCompositionForceActiveWindowAppearance(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              }
              if ( v15 == 16 )
              {
                updated = SetWindowCompositionDisallowPeek(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              }
            }
          }
          goto LABEL_95;
        }
        if ( v15 != 9 )
        {
          if ( v15 != 1 )
          {
            switch ( v15 )
            {
              case 2:
                updated = SetWindowCompositionNCRenderPolicy(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              case 3:
                updated = SetWindowCompositionTransitions(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              case 4:
                updated = SetWindowCompositionAllowNCPaint(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
            }
            if ( v15 != 5 )
            {
              if ( v15 == 6 )
              {
                updated = SetWindowCompositionNonClientRTLLayout(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              }
              if ( v15 == 7 )
              {
                updated = SetWindowCompositionForceIconicSWR(
                            (struct tagWND *)v14,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
                goto LABEL_106;
              }
            }
          }
LABEL_95:
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v11 = 0;
          }
          left = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
          v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26);
            LOBYTE(v29) = v27;
            LOBYTE(v30) = v11;
            WPP_RECORDER_AND_TRACE_SF_sdq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v30,
              v29,
              *(_QWORD *)(UserSessionState + 69152));
          }
          goto LABEL_27;
        }
      }
      updated = SetWindowCompositionHasIconicBitmap(
                  (struct tagWND *)v14,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v34);
      goto LABEL_106;
    }
LABEL_107:
    v3 = -1073741816;
    goto LABEL_108;
  }
  v17 = 0;
  v18 = PtiCurrent(v16);
  LOBYTE(v19) = IAMThreadAccessGranted(v18);
  if ( v19 )
  {
    v17 = 2;
  }
  else
  {
    left = *((_QWORD *)v18 + 57);
    if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) == left
      && ((*(_BYTE *)(left + 808) & 0x30) != 0x10 || !IsTopLevelWindow(v14))
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v14, v20)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v14)) != 0LL
      && (left = *((_QWORD *)Host + 2), *(_QWORD *)(left + 456) == *((_QWORD *)v18 + 57)) )
    {
      v17 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !v34.left )
    {
      v22 = *(_QWORD *)(v14 + 120);
      if ( v22 )
      {
        left = *(unsigned __int8 *)(*(_QWORD *)(v22 + 40) + 233LL);
        v23 = (*(unsigned __int8 *)(*(_QWORD *)(v22 + 40) + 233LL) >> 4) & 2;
        v24 = v23 | 1;
        if ( (left & 0x40) == 0 )
          v24 = v23;
        if ( (v24 & v17) != 0 )
          goto LABEL_27;
      }
    }
    updated = zzzUpdateWindowCompositionCloak(v14, v34.left == 0, v17);
    goto LABEL_106;
  }
LABEL_108:
  UserSessionSwitchLeaveCrit(left);
  v31 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_109;
LABEL_110:
  LOBYTE(v10) = !v31;
  return v10;
}
