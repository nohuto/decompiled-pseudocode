/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0148380
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D55A4 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C014857C (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0148810 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // rcx
  __int64 v19; // r11
  __int64 v20; // r8
  unsigned int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // r11
  _QWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    return v4;
  }
  LOBYTE(v6) = 1;
  v9 = HMValidateHandleNoSecure((unsigned __int64)a2, v6, v7, v8);
  if ( v9 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    ++*(_DWORD *)(v9 + 8);
    v26[1] = v9;
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v9) )
      goto LABEL_23;
    if ( GetProp(v9, *(unsigned __int16 *)(gpsi + 884LL), 1LL) != -1 )
      goto LABEL_24;
    if ( !IsHungWindow(v9) )
      goto LABEL_23;
    LOBYTE(v11) = 1;
    v14 = HMValidateHandleNoSecure((unsigned __int64)a1, v11, v12, v13);
    v15 = (struct tagWND *)v14;
    if ( !v14 || *(_QWORD *)(v14 + 16) != gptiCurrent )
      goto LABEL_23;
    v10 = gpsi;
    if ( *(_WORD *)(*(_QWORD *)(v14 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      goto LABEL_24;
    v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v27;
    ++*(_DWORD *)(v14 + 8);
    v27[1] = v14;
    if ( (unsigned int)SetGhostProp((struct tagWND *)v14, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v9, a1) )
      {
        SetGhostFNID(v15, 1);
        xxxShowGhostWindow(v18, (struct tagWND *)v9);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v15)
          && !(unsigned int)IsWindowBeingDestroyed(v9)
          && (HWND)GetProp((__int64)v15, *(unsigned __int16 *)(*(_QWORD *)v19 + 884LL), 1LL) == a2
          && (HWND)GetProp(v9, v21, v20) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID(v15, 0);
        if ( (HWND)GetProp(v9, *(unsigned __int16 *)(*(_QWORD *)v25 + 884LL), 1LL) == a1 )
          InternalRemoveProp();
        xxxHideGhostWindow(v15, (struct tagWND *)v9);
      }
      InternalRemoveProp();
    }
LABEL_16:
    ThreadUnlock1(v17, v16);
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1(v23, v22);
      return v4;
    }
LABEL_23:
    v10 = gpsi;
LABEL_24:
    if ( GetProp(v9, *(unsigned __int16 *)(*(_QWORD *)v10 + 884LL), 1LL) == -1 )
      InternalRemoveProp();
    goto LABEL_17;
  }
  return v4;
}
