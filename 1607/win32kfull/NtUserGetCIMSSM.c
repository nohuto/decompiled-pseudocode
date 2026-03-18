/*
 * XREFs of NtUserGetCIMSSM @ 0x1C02129A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetCurrentInputMessageSource @ 0x1C011DA14 (_GetCurrentInputMessageSource.c)
 */

__int64 __fastcall NtUserGetCIMSSM(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  int CurrentInputMessageSource; // ebx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h]

  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 && (unsigned int)GetCurrentInputMessageSource(0, &v13, v2, v3) && !v13 )
  {
    CurrentInputMessageSource = GetCurrentInputMessageSource(1, &v13, v4, v5);
    if ( CurrentInputMessageSource )
    {
      v9 = v13;
      v10 = (unsigned int)(v13 - 18);
      if ( (v10 & 0xFFFFFFEF) == 0 )
        v9 = 2;
      LODWORD(v13) = v9;
      v11 = -PsGetCurrentProcessWow64Process(v10);
      v14 = (-(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      v7 = v11 != 0 ? 0 : 3;
      if ( (v7 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (_BYTE *)a1;
      if ( a1 >= W32UserProbeAddress )
        v6 = (_BYTE *)W32UserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
      *(_QWORD *)a1 = v13;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return CurrentInputMessageSource;
}
