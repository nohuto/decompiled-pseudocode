/*
 * XREFs of xxxFlashWindow @ 0x1C00776EC
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDB40 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     NtUserFlashWindowEx @ 0x1C0219910 (NtUserFlashWindowEx.c)
 *     xxxFlashEnabledPopup @ 0x1C02313E4 (xxxFlashEnabledPopup.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 */

__int64 __fastcall xxxFlashWindow(__int64 a1, unsigned int a2, int a3)
{
  BOOL v3; // r14d
  unsigned int v7; // r15d
  unsigned int Prop; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  BOOL v11; // ebp
  __int64 v12; // r12
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0;
  Prop = GetProp(a1, (unsigned __int16)gaFlashWState, 1LL);
  v9 = Prop;
  if ( Prop == 2048 )
  {
    v9 = 18432;
    v10 = 0;
    goto LABEL_35;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else if ( (*(_BYTE *)(a1 + 40) & 0x40) != 0 || (a2 & 1) != 0 && (*(_BYTE *)(a1 + 54) & 0xC0) != 0 )
  {
    v9 = 36864;
  }
  v10 = a2 & 0xFFFF000F;
  v7 = v9 & 0x8000;
  if ( (struct tagWND *)a1 != gspwndAltTab )
  {
    if ( (v9 & 8) != 0 && gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL) )
      v10 = 0;
    if ( v10 )
    {
      v11 = v7 == 0;
      goto LABEL_11;
    }
LABEL_35:
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) == a1 )
    {
      v11 = 1;
      goto LABEL_38;
    }
    v11 = 0;
LABEL_11:
    if ( v10 && (v10 & 1) == 0 )
    {
LABEL_13:
      if ( (!v10 || (v10 & 2) != 0) && (unsigned int)IsTrayWindow(a1) )
      {
        v12 = *(_QWORD *)a1;
        if ( (v9 & 0x800) != 0 )
          LOBYTE(v3) = !v11;
        else
          v3 = v10 != 0 && v11;
        xxxCallHook(6, *(_QWORD *)a1, v3, 0xAu);
        PostShellHookMessagesEx(v3 ? 32774 : 6, v12, 0LL);
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
          goto LABEL_27;
        v9 |= 0x4000u;
        if ( !a3 )
          a3 = *(_DWORD *)(gpsi + 4000LL);
        if ( SetSystemTimer(a1, 65528, a3, (unsigned int)xxxSystemTimerProc, 1) )
        {
LABEL_27:
          if ( (v9 & 0x2000) != 0 && !HIWORD(v10) )
          {
            v14 = 2048;
          }
          else
          {
            if ( v11 )
              v13 = v9 | 0x8000;
            else
              v13 = v9 & 0xFFFF7FFF;
            v14 = (v10 ^ v13) & 0xFFFF000B ^ v13;
          }
          InternalSetProp(a1, (unsigned __int16)gaFlashWState, v14, 5LL);
        }
      }
      else
      {
        if ( (v9 & 0x4000) != 0 )
          FindTimer(a1, 65528, 2, 1, 0LL);
        InternalRemoveProp(a1, (unsigned __int16)gaFlashWState, 1LL);
      }
      return v7;
    }
LABEL_38:
    xxxSendTransformableMessageTimeout((struct tagWND *)a1, 0x86u, v11, 0LL, 0, 100, &v16, 1, 0);
    goto LABEL_13;
  }
  return v7;
}
