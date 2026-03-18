/*
 * XREFs of xxxFlashWindow @ 0x140214FC0
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxFlashEnabledPopup @ 0x1401B1004 (xxxFlashEnabledPopup.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     NtUserFlashWindowEx @ 0x14022EA40 (NtUserFlashWindowEx.c)
 *     xxxSystemTimerProc @ 0x14024E4E0 (xxxSystemTimerProc.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402CB460 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall xxxFlashWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r15d
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  unsigned int Prop; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  BOOL v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // r12
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v27 = 0LL;
  v5 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41372), 1u);
  v11 = Prop;
  if ( Prop == 2048 )
  {
    v11 = 18432;
LABEL_7:
    v12 = 0;
LABEL_8:
    v15 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928)
       && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 18928) + 128LL) == a1;
    goto LABEL_11;
  }
  if ( Prop )
  {
    if ( v5 == 1024 )
      v5 = Prop;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v10 + 16) & 0x40) != 0 || (v5 & 1) != 0 && (*(_BYTE *)(v10 + 30) & 0xC0) != 0 )
      v11 = 36864;
  }
  v12 = v5 & 0xFFFF000F;
  v4 = v11 & 0x8000;
  if ( (v11 & 8) != 0 )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928);
    if ( v10 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) )
      goto LABEL_7;
  }
  if ( !v12 )
    goto LABEL_8;
  v15 = v4 == 0;
  if ( (v12 & 1) == 0 )
  {
LABEL_15:
    if ( (v12 & 2) == 0 )
      goto LABEL_25;
    goto LABEL_16;
  }
LABEL_11:
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 134LL, v15, 0LL, 0, 0x64u, &v27, 1u, 0);
  if ( v12 )
    goto LABEL_15;
LABEL_16:
  if ( IsTrayWindow((_QWORD *)a1, 1LL) )
  {
    v18 = *(struct tagTHREADINFO **)a1;
    if ( (v11 & 0x800) != 0 )
      v19 = !v15;
    else
      v19 = v12 != 0 && v15;
    xxxCallHook(6LL, *(_QWORD *)a1, v19, 10);
    PostShellHookMessagesEx((LastWokenThread *)(v19 != 0 ? 32774 : 6), (__int64)v18);
  }
  if ( !v12 )
  {
    if ( (v11 & 0x4000) != 0 )
      FindTimer(a1, 65528LL, 2u, 1, 0LL);
    v20 = W32GetUserSessionState(v17, v16);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v20 + 41372), 1u);
    return v4;
  }
LABEL_25:
  v22 = v12;
  v23 = 0x4000LL;
  if ( HIWORD(v12) )
  {
    v11 |= 0x2000u;
    v12 -= 0x10000;
    if ( v15 != ((v11 >> 12) & 1) )
      v12 = v22;
    if ( (v11 & 0x4000) == 0 )
      v12 |= 4u;
  }
  if ( (v12 & 4) == 0 )
    goto LABEL_32;
  v11 |= 0x4000u;
  if ( !a3 )
    a3 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(0x4000LL, v22) + 19904) + 4984LL);
  if ( a1
    && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0
    && InternalSetTimer(a1, 65528LL, a3, (__int64)xxxSystemTimerProc, 0, 66) )
  {
LABEL_32:
    if ( (v11 & 0x2000) != 0 && !HIWORD(v12) )
    {
      v25 = 2048LL;
    }
    else
    {
      if ( v15 )
        v24 = v11 | 0x8000;
      else
        v24 = v11 & 0xFFFF7FFF;
      v25 = (v12 ^ v24) & 0xFFFF000B ^ v24;
    }
    v26 = W32GetUserSessionState(v23, v22);
    InternalSetProp(a1, *(unsigned __int16 *)(v26 + 41372), v25, 5u);
  }
  return v4;
}
