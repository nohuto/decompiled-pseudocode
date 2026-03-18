/*
 * XREFs of NtUserShowWindowAsync @ 0x1C0007B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v9;
      v9[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( (unsigned int)v3 > 0xB )
        UserSetLastError(87LL);
      else
        v7 = PostEventMessageEx(
               *(_QWORD *)(v4 + 16),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 392LL),
               1,
               0,
               0,
               *(_QWORD *)v4,
               v3 | gdwPUDFlags & 0x10000,
               0LL);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
