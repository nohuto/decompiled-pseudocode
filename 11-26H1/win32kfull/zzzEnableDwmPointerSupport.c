/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1400F8118
 * Callers:
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GreDwmHasSoftwareCursor @ 0x1400F6CF4 (GreDwmHasSoftwareCursor.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140245370 (GreDwmEnableSoftwareCursorRendering.c)
 */

void __fastcall zzzEnableDwmPointerSupport(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int HasSoftwareCursor; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  BOOL v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rax

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70592);
  GreLockVisRgn();
  v7 = W32GetUserSessionState(v6, v5);
  GreLockPointer(*(_QWORD *)(*(_QWORD *)(v7 + 56968) + 40LL));
  GreLockSprite();
  v10 = W32GetUserSessionState(v9, v8);
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(Gre::Base **)(*(_QWORD *)(v10 + 56968) + 40LL), 0);
  if ( !v2 || HasSoftwareCursor || v3 )
  {
    if ( HasSoftwareCursor == v3 )
    {
      v14 = 0;
    }
    else
    {
      v14 = 1;
      SetPointerInternal(0LL, 6LL);
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 36324) = 0;
    }
    v17 = W32GetUserSessionState(v13, v12);
    GreDwmEnableSoftwareCursorRendering(*(_QWORD *)(*(_QWORD *)(v17 + 56968) + 40LL), v3);
    if ( v14 )
    {
      v20 = *(_DWORD *)(W32GetUserSessionState(v19, v18) + 36320) > 0;
      v23 = W32GetUserSessionState(v22, v21);
      LOBYTE(v24) = 1;
      *(_DWORD *)(v23 + 36324) = v20;
      SetPointerInternal(v24, 6LL);
      if ( !v2 )
      {
        v31 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904);
        v32 = *(_DWORD *)(v31 + 4964);
        v34 = W32GetUserSessionState(v31, v33);
        zzzInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(v34 + 19904) + 4960LL), v32, 2, 0);
      }
    }
  }
  GreUnlockSprite();
  v29 = W32GetUserSessionState(v28, v27);
  GreUnlockPointer(*(_QWORD *)(*(_QWORD *)(v29 + 56968) + 40LL));
  GreUnlockVisRgn(v30);
  zzzEndDeferWinEventNotify();
}
