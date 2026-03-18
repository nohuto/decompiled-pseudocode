/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C011D960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetCurrentInputMessageSource @ 0x1C011DA14 (_GetCurrentInputMessageSource.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(unsigned __int64 a1)
{
  _BYTE *v2; // rdx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // ebx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h]

  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    CurrentInputMessageSource = GetCurrentInputMessageSource(0LL, &v9);
    if ( CurrentInputMessageSource )
    {
      v5 = v9;
      v6 = (unsigned int)(v9 - 18);
      if ( (v6 & 0xFFFFFFEF) == 0 )
        v5 = 2;
      LODWORD(v9) = v5;
      v7 = -PsGetCurrentProcessWow64Process(v6);
      v10 = (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      v3 = v7 != 0 ? 0 : 3;
      if ( (v3 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v2 = (_BYTE *)a1;
      if ( a1 >= W32UserProbeAddress )
        v2 = (_BYTE *)W32UserProbeAddress;
      *v2 = *v2;
      v2[7] = v2[7];
      *(_QWORD *)a1 = v9;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return CurrentInputMessageSource;
}
