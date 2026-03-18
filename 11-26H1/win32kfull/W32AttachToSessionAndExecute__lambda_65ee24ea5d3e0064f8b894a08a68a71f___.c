/*
 * XREFs of W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFCB0
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1402FFF90 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFBFC (W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 */

int __fastcall W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(
        __int64 a1,
        struct _PLUGPLAY_NOTIFY_HDR **a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  int v10; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v12; // rsi

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return SimpleHapticsController::HapticsDeviceNotifyWorker(*a2, a2[1]);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v8, v7) )
      return SimpleHapticsController::HapticsDeviceNotifyWorker(*a2, a2[1]);
    else
      return -1073741811;
  }
  else
  {
    v10 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, 0LL);
    v12 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v10 = W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v12, 0x47727355u);
    }
    return v10;
  }
}
