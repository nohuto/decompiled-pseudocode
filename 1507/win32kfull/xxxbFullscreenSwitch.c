/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C01EFDB8
 * Callers:
 *     xxxConsoleControl @ 0x1C00804C8 (xxxConsoleControl.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  v4 = ValidateHwnd(a2);
  v6 = v4;
  if ( !v4 || (((*(_WORD *)(v4 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  v7 = gptiCurrent;
  v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v12;
  v12[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  while ( ghSwitcher )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(v6 + 47) & 7) != 1 )
      {
        xxxShowWindow((struct tagWND *)v6, gdwPUDFlags & 0x10000 | 2);
        xxxInternalUpdateWindow((struct tagWND *)v6, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState((_DWORD *)v6, 1) || ghSwitcher )
        goto LABEL_19;
      v10 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState((_DWORD *)v6, 0) || ghSwitcher )
        goto LABEL_19;
      v10 = gbFullScreen == 2;
    }
    if ( v10 )
    {
LABEL_20:
      ThreadUnlock1(v9, v8);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  ThreadUnlock1(v7, v5);
  return 0LL;
}
