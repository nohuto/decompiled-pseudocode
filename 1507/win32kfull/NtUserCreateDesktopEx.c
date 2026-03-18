/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C0152DE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 */

HANDLE __fastcall NtUserCreateDesktopEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        ACCESS_MASK a6)
{
  HANDLE v10; // rbx
  int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG v16; // ecx
  HANDLE v17; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v17 = 0LL;
  EnterCrit(1LL);
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 728LL) + 24LL) & 0x40;
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
  v12 = xxxCreateDesktopEx(a1, a4, a5, a6, &v17, 0);
  if ( v12 < 0 )
  {
    v16 = RtlNtStatusToDosError(v12);
    goto LABEL_15;
  }
  v10 = v17;
LABEL_11:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v10;
}
