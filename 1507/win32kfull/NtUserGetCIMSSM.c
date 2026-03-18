/*
 * XREFs of NtUserGetCIMSSM @ 0x1C0219E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetCurrentInputMessageSource @ 0x1C00F1B5C (_GetCurrentInputMessageSource.c)
 */

__int64 __fastcall NtUserGetCIMSSM(unsigned __int64 a1)
{
  _BYTE *v2; // rdx
  __int64 v3; // rcx
  unsigned int CurrentInputMessageSource; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  EnterCrit(1LL);
  if ( a1 && (unsigned int)GetCurrentInputMessageSource(0, &v8) && !v8 )
  {
    CurrentInputMessageSource = GetCurrentInputMessageSource(1, &v8);
    if ( CurrentInputMessageSource )
    {
      v5 = (unsigned int)v8;
      if ( (_DWORD)v8 == 18 )
        v5 = 2LL;
      LODWORD(v8) = v5;
      v6 = -PsGetCurrentProcessWow64Process(v5);
      v9 = (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      v3 = v6 != 0 ? 0 : 3;
      if ( (v3 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v2 = (_BYTE *)a1;
      if ( a1 >= W32UserProbeAddress )
        v2 = (_BYTE *)W32UserProbeAddress;
      *v2 = *v2;
      v2[7] = v2[7];
      *(_QWORD *)a1 = v8;
    }
  }
  else
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return CurrentInputMessageSource;
}
