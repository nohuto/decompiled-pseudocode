/*
 * XREFs of xxxFlashWindow @ 0x1C0096FE8
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4420 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserFlashWindowEx @ 0x1C0212440 (NtUserFlashWindowEx.c)
 *     xxxFlashEnabledPopup @ 0x1C022A65C (xxxFlashEnabledPopup.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

__int64 __fastcall xxxFlashWindow(struct tagWND *a1, unsigned int a2, int a3)
{
  BOOL v3; // r14d
  unsigned int v7; // r15d
  unsigned int Prop; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  BOOL v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v15; // r12
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0;
  Prop = GetProp((__int64)a1, (unsigned __int16)gaFlashWState, 1LL);
  v9 = Prop;
  if ( Prop == 2048 )
  {
    v9 = 18432;
    v10 = 0;
    goto LABEL_40;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else if ( (*((_BYTE *)a1 + 40) & 0x40) != 0 || (a2 & 1) != 0 && (*((_BYTE *)a1 + 54) & 0xC0) != 0 )
  {
    v9 = 36864;
  }
  v10 = a2 & 0xFFFF000F;
  v7 = v9 & 0x8000;
  if ( a1 != gspwndAltTab )
  {
    if ( (v9 & 8) != 0 && gpqForeground == *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) )
      v10 = 0;
    if ( v10 )
    {
      v11 = v7 == 0;
      goto LABEL_11;
    }
LABEL_40:
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 88LL) == a1 )
    {
      v11 = 1;
      goto LABEL_13;
    }
    v11 = 0;
LABEL_11:
    if ( v10 && (v10 & 1) == 0 )
    {
LABEL_14:
      if ( (!v10 || (v10 & 2) != 0) && (unsigned int)IsTrayWindow(a1) )
      {
        v15 = *(_QWORD *)a1;
        if ( (v9 & 0x800) != 0 )
          LOBYTE(v3) = !v11;
        else
          v3 = v10 != 0 && v11;
        xxxCallHook(6LL, *(_QWORD *)a1, v3, 10LL);
        PostShellHookMessagesEx(v3 ? 32774 : 6, v15, 0LL);
      }
      if ( v10 )
      {
        if ( HIWORD(v10) )
        {
          v9 |= 0x2000u;
          if ( v11 == ((v9 >> 12) & 1) )
            v10 -= 0x10000;
          if ( (v9 & 0x4000) == 0 )
            v10 |= 4u;
        }
        if ( (v10 & 4) == 0 )
          goto LABEL_25;
        v9 |= 0x4000u;
        if ( !a3 )
          a3 = *(_DWORD *)(gpsi + 5392LL);
        if ( SetSystemTimer((_DWORD)a1, 65528, a3, (unsigned int)xxxSystemTimerProc, 1) )
        {
LABEL_25:
          if ( (v9 & 0x2000) != 0 && !HIWORD(v10) )
          {
            v13 = 2048;
          }
          else
          {
            if ( v11 )
              v12 = v9 | 0x8000;
            else
              v12 = v9 & 0xFFFF7FFF;
            v13 = (v10 ^ v12) & 0xFFFF000B ^ v12;
          }
          InternalSetProp(a1, (unsigned __int16)gaFlashWState, v13, 5LL);
        }
      }
      else
      {
        if ( (v9 & 0x4000) != 0 )
          FindTimer((_DWORD)a1, 65528, 2, 1, 0LL);
        InternalRemoveProp();
      }
      return v7;
    }
LABEL_13:
    xxxSendTransformableMessageTimeout(a1, 134LL, v11, 0LL, 0, 100, (__int64 *)&BugCheckParameter3, 1, 0);
    goto LABEL_14;
  }
  return v7;
}
