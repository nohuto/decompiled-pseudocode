/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454
 * Callers:
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  int v13; // r12d
  int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rdx

  if ( a3 )
  {
    v6 = *((_QWORD *)a3 + 2);
    v7 = *((_QWORD *)a1 + 2);
    if ( v6 != v7 )
    {
      if ( !a2 || (v8 = *((_QWORD *)a2 + 2), v8 == v7) || v8 != v6 )
        zzzAttachThreadInput(v7, v6, 0LL);
    }
  }
  if ( a2 )
  {
    v9 = *((_QWORD *)a2 + 2);
    v10 = *((_QWORD *)a1 + 2);
    if ( v9 != v10 && (!a3 || v9 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v10, v9, 1LL);
  }
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)a1;
  v12 = IsTrayWindow(a1);
  v13 = v12;
  if ( !gpqForeground || (v14 = 1, *(struct tagWND **)(gpqForeground + 80LL) != a1) )
    v14 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( a3 == a2 )
        goto LABEL_19;
      v15 = v11;
      v16 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( v14 )
        v17 = 27LL;
      else
        v17 = 30LL;
      goto LABEL_18;
    }
    v19 = 26LL;
    if ( !v14 )
      v19 = 29LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), v19, v11);
    if ( v13 )
    {
      xxxCallHook(1LL, v11, 0LL);
      PostShellHookMessagesEx(1uLL, v11, 0LL);
    }
  }
  else if ( a2 )
  {
    if ( v12 )
    {
      xxxCallHook(2LL, v11, 0LL);
      PostShellHookMessagesEx(2uLL, v11, 0LL);
    }
    v15 = v11;
    v17 = 25LL;
    v16 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( !v14 )
      v17 = 28LL;
LABEL_18:
    PostIAMShellHookMessageEx(v16, v17, v15);
  }
LABEL_19:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v18 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v18);
  }
}
