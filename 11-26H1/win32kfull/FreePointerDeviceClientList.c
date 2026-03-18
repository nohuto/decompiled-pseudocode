/*
 * XREFs of FreePointerDeviceClientList @ 0x140138E88
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     InitializePointerDevicesPresenceState @ 0x140139DA0 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerDeviceClientList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rax

  v2 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 16704);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = v3 - 2;
    v5 = v3;
    HMAssignmentUnlock(v3 - 2);
    v3 = (_QWORD *)*v3;
    if ( (_QWORD *)v3[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v3;
    v3[1] = v6;
    Win32FreePool(v4);
  }
}
