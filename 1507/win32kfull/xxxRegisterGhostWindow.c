/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C01178D0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00FF7D0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0117AC8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01180FC (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // r11
  __int64 v21; // rcx
  int v22; // r8d
  __int16 v23; // r10
  int v24; // r8d
  __int16 v25; // r10
  _QWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    return v4;
  }
  v6 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
  if ( v6 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v26;
    ++*(_DWORD *)(v6 + 8);
    v26[1] = v6;
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v6) )
      goto LABEL_23;
    if ( GetProp(v6, *(unsigned __int16 *)(gpsi + 884LL), 1LL) != -1 )
      goto LABEL_24;
    if ( !IsHungWindow(v7) )
      goto LABEL_23;
    v9 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v10 = (struct tagWND *)v9;
    if ( !v9 || *(_QWORD *)(v9 + 16) != gptiCurrent )
      goto LABEL_23;
    v8 = gpsi;
    if ( *(_WORD *)(*(_QWORD *)(v9 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      goto LABEL_24;
    v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v27;
    ++*(_DWORD *)(v9 + 8);
    v27[1] = v9;
    if ( (unsigned int)SetGhostProp((struct tagWND *)v9, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v6, a1) )
      {
        SetGhostFNID(v10, 1);
        xxxShowGhostWindow(v13, (struct tagWND *)v6);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10)
          && !(unsigned int)IsWindowBeingDestroyed(v6)
          && (HWND)GetProp((__int64)v10, *(unsigned __int16 *)(*(_QWORD *)v14 + 884LL), 1LL) == a2
          && (HWND)GetProp(v6, v16, v15) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID(v10, 0);
        if ( (HWND)GetProp(v6, *(unsigned __int16 *)(*(_QWORD *)v20 + 884LL), 1LL) == a1 )
          InternalRemoveProp(v21, v23, v22);
        xxxHideGhostWindow(v10, (struct tagWND *)v6);
      }
      InternalRemoveProp((__int64)v10, *(_WORD *)(gpsi + 884LL), 1);
    }
LABEL_16:
    ThreadUnlock1(v12, v11);
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1(v18, v17);
      return v4;
    }
LABEL_23:
    v8 = gpsi;
LABEL_24:
    if ( GetProp(v6, *(unsigned __int16 *)(*(_QWORD *)v8 + 884LL), 1LL) == -1 )
      InternalRemoveProp(v18, v25, v24);
    goto LABEL_17;
  }
  return v4;
}
