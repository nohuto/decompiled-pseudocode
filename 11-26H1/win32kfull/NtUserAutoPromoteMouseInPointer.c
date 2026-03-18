/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x140054AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPEnabledForThread @ 0x140054BF8 (IsMiPEnabledForThread.c)
 *     SetMiPPromotion @ 0x140054DB4 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  v3 = PtiCurrent(v2);
  if ( (unsigned int)IsMiPEnabledForThread(v3, v4, v3)
    && (v7 = *(_DWORD **)(v5 + 1512)) != 0LL
    && (v8 = 1LL, (*v7 & 1) != 0) )
  {
    SetMiPPromotion(v6, a1);
  }
  else
  {
    UserSetLastError(5);
    v8 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
