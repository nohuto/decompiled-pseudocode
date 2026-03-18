/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01EE750
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0148810 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01EE1FC (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE434 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct tagWND *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // rcx
  __int64 v19; // r11
  __int64 v20; // r8
  unsigned int v21; // r10d
  __int64 v22; // r11
  _QWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    ++*(_DWORD *)(v9 + 8);
    v24[1] = v9;
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v9) )
      goto LABEL_19;
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure((unsigned __int64)a1, v10, v12, v13);
    v15 = (struct tagWND *)v14;
    if ( !v14 )
      goto LABEL_19;
    v11 = gptiCurrent;
    if ( *(_QWORD *)(v14 + 16) != gptiCurrent )
      goto LABEL_19;
    v10 = gpsi;
    v11 = *(unsigned __int16 *)(gpsi + 884LL);
    if ( *(_WORD *)(*(_QWORD *)(v14 + 152) + 8LL) != (_WORD)v11 )
      goto LABEL_19;
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    ++*(_DWORD *)(v14 + 8);
    v25[1] = v14;
    if ( (unsigned int)SetFrostProp((struct tagWND *)v14, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v9, (__int64)a1) )
      {
        SetGhostFNID(v15, 1);
        xxxShowGhostWindow(v18, (struct tagWND *)v9);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v15)
          && !(unsigned int)IsWindowBeingDestroyed(v9)
          && (HWND)GetProp((__int64)v15, *(unsigned __int16 *)(*(_QWORD *)v19 + 1362LL), 1LL) == a2
          && (HWND)GetProp(v9, v21, v20) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID(v15, 0);
        if ( (HWND)GetProp(v9, *(unsigned __int16 *)(*(_QWORD *)v22 + 1362LL), 1LL) == a1 )
          InternalRemoveProp();
        xxxHideGhostWindow(v15, (struct tagWND *)v9);
      }
      InternalRemoveProp();
    }
LABEL_18:
    ThreadUnlock1(v17, v16);
LABEL_19:
    ThreadUnlock1(v11, v10);
  }
  return v4;
}
