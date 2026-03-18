/*
 * XREFs of NtUserSetImmersiveBackgroundWindow @ 0x1C0156790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     _SetImmersiveBackgroundWindow @ 0x1C0156828 (_SetImmersiveBackgroundWindow.c)
 */

__int64 __fastcall NtUserSetImmersiveBackgroundWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
  {
    v4 = (*(_WORD *)(v2 + 66) & 0x3FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v10;
      v10[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      if ( IAMThreadAccessGranted(gptiCurrent) )
        v5 = SetImmersiveBackgroundWindow(v6);
      else
        UserSetLastError(5);
      ThreadUnlock1(v8, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
