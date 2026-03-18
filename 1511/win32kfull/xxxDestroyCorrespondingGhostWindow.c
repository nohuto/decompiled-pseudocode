/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C0142488 (xxxHandleHealthyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // esi
  _QWORD *v4; // rax
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // eax
  __int16 v11; // dx
  struct tagWND *v12; // r11
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = InternalRemoveProp((__int64)a1, *(_WORD *)(gpsi + 884LL), 1);
  if ( v4 )
  {
    v1 = 1;
    if ( v4 == (_QWORD *)-1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessagesEx(0x34u, *(_QWORD *)a1, 0LL);
      v4 = 0LL;
    }
  }
  else
  {
    v4 = InternalRemoveProp((__int64)a1, *(_WORD *)(*(_QWORD *)v5 + 1362LL), 1);
    if ( !v4 )
      return v1;
    v1 = 1;
    v3 = 1;
  }
  if ( v4 )
  {
    v6 = HMValidateHandleNoSecure((unsigned __int64)v4, 1);
    v8 = v6;
    if ( v6 )
    {
      v9 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v10 = *(unsigned __int16 *)(v6 + 66);
      ++*(_DWORD *)(v8 + 8);
      v14[1] = v8;
      if ( (v10 & 0xFFFF3FFF) == 0x2AA )
      {
        if ( v3 )
          v11 = *(_WORD *)(gpsi + 1362LL);
        else
          v11 = *(_WORD *)(gpsi + 884LL);
        InternalRemoveProp(v8, v11, 1);
        xxxHideGhostWindow(v12, a1);
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1(v9, v7);
    }
  }
  return v1;
}
