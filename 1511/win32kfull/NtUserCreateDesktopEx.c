/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C010E0B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rbx
  int v11; // eax
  NTSTATUS Desktop; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG v16; // ecx
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v17[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 0x40;
  else
    v11 = 0;
  if ( v11 )
  {
    v16 = 5;
LABEL_15:
    UserSetLastError(v16);
    goto LABEL_11;
  }
  if ( a4 >= 2 || a2 || a3 )
  {
    v16 = 87;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v17, 0);
  if ( Desktop < 0 )
  {
    v16 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
  v10 = v17[0];
LABEL_11:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v10;
}
