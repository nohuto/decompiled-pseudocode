/*
 * XREFs of NtUserGetIconSize @ 0x1C00EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetIconSize @ 0x1C004A0CC (_GetIconSize.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     GetAnimatedCursorFrame @ 0x1C00EBBAC (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 AnimatedCursorFrame; // rcx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+24h] [rbp-24h] BYREF
  int v15; // [rsp+28h] [rbp-20h]

  v8 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = HMValidateHandle(a1, 3);
  AnimatedCursorFrame = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(v9, a2)) != 0 )
    {
      GetIconSize(AnimatedCursorFrame, &v13, &v14);
      AnimatedCursorFrame = W32UserProbeAddress;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_DWORD *)W32UserProbeAddress;
      *a3 = v13;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v14;
      v8 = 1;
      v15 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(AnimatedCursorFrame, v10);
  return v8;
}
