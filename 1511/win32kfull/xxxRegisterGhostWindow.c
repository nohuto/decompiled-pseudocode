/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0142840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C010C060 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0142A3C (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01430F8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 CurrentProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rax
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagWND *v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r8
  unsigned int v17; // r10d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // r11
  int v22; // r8d
  __int16 v23; // r10
  int v24; // r8d
  __int16 v25; // r10
  _QWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    return v6;
  }
  v8 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
  if ( v8 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    ++*(_DWORD *)(v8 + 8);
    v26[1] = v8;
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v8) )
      goto LABEL_23;
    if ( GetProp(v8, *(unsigned __int16 *)(gpsi + 884LL), 1LL) != -1 )
      goto LABEL_24;
    if ( !IsHungWindow(v8) )
      goto LABEL_23;
    v10 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v11 = (struct tagWND *)v10;
    if ( !v10 || *(_QWORD *)(v10 + 16) != gptiCurrent )
      goto LABEL_23;
    v9 = gpsi;
    if ( *(_WORD *)(*(_QWORD *)(v10 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      goto LABEL_24;
    v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v27;
    ++*(_DWORD *)(v10 + 8);
    v27[1] = v10;
    if ( (unsigned int)SetGhostProp((struct tagWND *)v10, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v8, a1) )
      {
        SetGhostFNID(v11, 1);
        xxxShowGhostWindow(v14, (struct tagWND *)v8);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v11)
          && !(unsigned int)IsWindowBeingDestroyed(v8)
          && (HWND)GetProp((__int64)v11, *(unsigned __int16 *)(*(_QWORD *)v15 + 884LL), 1LL) == a2
          && (HWND)GetProp(v8, v17, v16) == a1 )
        {
          v6 = 1;
          goto LABEL_16;
        }
        SetGhostFNID(v11, 0);
        if ( (HWND)GetProp(v8, *(unsigned __int16 *)(*(_QWORD *)v21 + 884LL), 1LL) == a1 )
          InternalRemoveProp(v8, v23, v22);
        xxxHideGhostWindow(v11, (struct tagWND *)v8);
      }
      InternalRemoveProp((__int64)v11, *(_WORD *)(gpsi + 884LL), 1);
    }
LABEL_16:
    ThreadUnlock1(v13, v12);
    if ( v6 )
    {
LABEL_17:
      ThreadUnlock1(v19, v18);
      return v6;
    }
LABEL_23:
    v9 = gpsi;
LABEL_24:
    if ( GetProp(v8, *(unsigned __int16 *)(*(_QWORD *)v9 + 884LL), 1LL) == -1 )
      InternalRemoveProp(v8, v25, v24);
    goto LABEL_17;
  }
  return v6;
}
