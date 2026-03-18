/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01F7580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01430F8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F706C (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F72A4 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 CurrentProcess; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct tagWND *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND *v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // r11
  int v20; // r8d
  __int16 v21; // r10
  _QWORD v23[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    ++*(_DWORD *)(v8 + 8);
    v23[1] = v8;
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v8) )
      goto LABEL_19;
    v11 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v12 = (struct tagWND *)v11;
    if ( !v11 )
      goto LABEL_19;
    v10 = gptiCurrent;
    if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
      goto LABEL_19;
    v9 = gpsi;
    v10 = *(unsigned __int16 *)(gpsi + 884LL);
    if ( *(_WORD *)(*(_QWORD *)(v11 + 152) + 8LL) != (_WORD)v10 )
      goto LABEL_19;
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    ++*(_DWORD *)(v11 + 8);
    v24[1] = v11;
    if ( (unsigned int)SetFrostProp((struct tagWND *)v11, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v8, (__int64)a1) )
      {
        SetGhostFNID(v12, 1);
        xxxShowGhostWindow(v15, (struct tagWND *)v8);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v12)
          && !(unsigned int)IsWindowBeingDestroyed(v8)
          && (HWND)GetProp((__int64)v12, *(unsigned __int16 *)(*(_QWORD *)v16 + 1362LL), 1LL) == a2
          && (HWND)GetProp(v8, v18, v17) == a1 )
        {
          v6 = 1;
          goto LABEL_18;
        }
        SetGhostFNID(v12, 0);
        if ( (HWND)GetProp(v8, *(unsigned __int16 *)(*(_QWORD *)v19 + 1362LL), 1LL) == a1 )
          InternalRemoveProp(v8, v21, v20);
        xxxHideGhostWindow(v12, (struct tagWND *)v8);
      }
      InternalRemoveProp((__int64)v12, *(_WORD *)(gpsi + 1362LL), 1);
    }
LABEL_18:
    ThreadUnlock1(v14, v13);
LABEL_19:
    ThreadUnlock1(v10, v9);
  }
  return v6;
}
