/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C0148038 (xxxHandleHealthyWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rcx
  int v11; // eax
  struct tagWND *v12; // r11
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = InternalRemoveProp();
  if ( v3 )
  {
    v1 = 1;
    if ( v3 == (_QWORD *)-1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessagesEx(0x34u, *(_QWORD *)a1, 0LL);
      v3 = 0LL;
    }
  }
  else
  {
    v3 = InternalRemoveProp();
    if ( !v3 )
      return v1;
    v1 = 1;
  }
  if ( v3 )
  {
    LOBYTE(v4) = 1;
    v7 = HMValidateHandleNoSecure((unsigned __int64)v3, v4, v5, v6);
    v9 = v7;
    if ( v7 )
    {
      v10 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v11 = *(unsigned __int16 *)(v7 + 66);
      ++*(_DWORD *)(v9 + 8);
      v14[1] = v9;
      if ( (v11 & 0xFFFF3FFF) == 0x2AA )
      {
        InternalRemoveProp();
        xxxHideGhostWindow(v12, a1);
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1(v10, v8);
    }
  }
  return v1;
}
