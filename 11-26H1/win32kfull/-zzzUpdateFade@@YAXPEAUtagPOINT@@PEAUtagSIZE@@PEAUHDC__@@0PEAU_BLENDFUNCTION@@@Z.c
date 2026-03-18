/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x14021B130
 * Callers:
 *     zzzShowFade @ 0x14021B0B4 (zzzShowFade.c)
 *     zzzAnimateFade @ 0x1402A456C (zzzAnimateFade.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     GreUpdateSprite @ 0x140016514 (GreUpdateSprite.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rax
  struct tagWND *v14; // rbx
  unsigned int v15; // edi
  void *v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // [rsp+70h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v12 = *(_DWORD *)(UserSessionState + 43056);
  if ( (v12 & 8) != 0 )
  {
    v13 = HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 43008), 1);
    v14 = (struct tagWND *)v13;
    if ( v13 )
    {
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v13);
      zzzUpdateLayeredWindow(v14, 0LL, a1, a2, a3, a4, 0, a5, 2, 0LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  else
  {
    v15 = *(_DWORD *)(UserSessionState + 43060);
    v16 = *(void **)(UserSessionState + 43008);
    v17 = 2 - ((v12 & 0x40) != 0);
    v18 = W32GetUserSessionState(v11, v10);
    GreUpdateSprite(
      *(Gre::Base **)(*(_QWORD *)(v18 + 56968) + 40LL),
      0LL,
      v16,
      0LL,
      a1,
      a2,
      a3,
      a4,
      v15,
      a5,
      v17,
      0LL,
      0LL,
      1,
      v19,
      0);
  }
}
