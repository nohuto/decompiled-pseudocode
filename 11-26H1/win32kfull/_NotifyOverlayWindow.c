/*
 * XREFs of _NotifyOverlayWindow @ 0x1402AD3C0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserNotifyOverlayWindow @ 0x1402B8BF0 (NtUserNotifyOverlayWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1402ACA20 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x14034724C (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax

  v2 = 0;
  v3 = a2;
  if ( !a1 )
    return v2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 0;
  v8 = *((_DWORD *)a1 + 95) & 0x10000;
  v9 = *(_DWORD *)(UserSessionState + 63400);
  v10 = 0;
  if ( v3 )
  {
    if ( (_DWORD)v8 )
    {
      v2 = 1;
      goto LABEL_15;
    }
    v11 = W32GetUserSessionState(v8, v6);
    v8 = *(unsigned int *)(W32GetUserSessionState(v13, v12) + 63400);
    if ( (int)v8 + 1 >= (unsigned int)v8 )
    {
      *(_DWORD *)(v11 + 63400) = v8 + 1;
      *((_DWORD *)a1 + 95) |= 0x10000u;
      v14 = v9 == 0;
      goto LABEL_10;
    }
  }
  else
  {
    if ( !(_DWORD)v8 )
      return 1;
    v11 = W32GetUserSessionState(v8, v6);
    v8 = *(unsigned int *)(W32GetUserSessionState(v16, v15) + 63400);
    if ( (_DWORD)v8 )
    {
      v8 = (unsigned int)(v8 - 1);
      *(_DWORD *)(v11 + 63400) = v8;
      *((_DWORD *)a1 + 95) &= ~0x10000u;
      v14 = v9 == 1;
LABEL_10:
      v2 = 1;
      if ( v14 )
        v7 = 1;
      goto LABEL_14;
    }
  }
  *(_DWORD *)(v11 + 63400) = -1;
LABEL_14:
  v10 = v2;
LABEL_15:
  if ( v2 )
  {
    if ( v10 )
      FixupOverlayWindowAttributes(a1);
    if ( v7 )
    {
      v17 = (void *)ReferenceDwmApiPort(v8, v6);
      DwmAsyncNotifyWindowShadowChange(v17);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
