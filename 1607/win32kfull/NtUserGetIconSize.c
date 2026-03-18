/*
 * XREFs of NtUserGetIconSize @ 0x1C010BDE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C003BDD8 (_GetIconSize.c)
 *     GetAnimatedCursorFrame @ 0x1C005DA50 (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 AnimatedCursorFrame; // rcx
  int v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+24h] [rbp-24h] BYREF
  int v18; // [rsp+28h] [rbp-20h]

  v8 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v12 = HMValidateHandle(a1, v9, v10, v11);
  AnimatedCursorFrame = v12;
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(v12, a2)) != 0 )
    {
      GetIconSize(AnimatedCursorFrame, &v16, &v17);
      AnimatedCursorFrame = W32UserProbeAddress;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_DWORD *)W32UserProbeAddress;
      *a3 = v16;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v17;
      v8 = 1;
      v18 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(AnimatedCursorFrame, v13);
  return v8;
}
