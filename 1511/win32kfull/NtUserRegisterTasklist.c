/*
 * XREFs of NtUserRegisterTasklist @ 0x1C021F210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterTasklist(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (__int64 *)ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
  {
    v3 = v2[2];
    v4 = 1;
    gptiTasklist = v3;
    ghwndSwitch = *v2;
    *(_DWORD *)(v2[2] + 440) |= 0x40u;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
