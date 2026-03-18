/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C02154E0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdx
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // sf
  ULONG v11; // eax
  _OWORD v13[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( ((PsGetCurrentProcessWow64Process(a1) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (_BYTE *)a2;
  if ( a2 >= W32UserProbeAddress )
    v4 = (_BYTE *)W32UserProbeAddress;
  *v4 = *v4;
  v4[39] = v4[39];
  v5 = 0LL;
  v6 = 0;
  memset(v13, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 && (unsigned int)GetWindowCompositionInfo(v7, (__int64)v13) )
  {
    *(_OWORD *)a2 = v13[0];
    *(_OWORD *)(a2 + 16) = v13[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v13[2];
  }
  else
  {
    v6 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  v10 = v6 < 0;
  if ( v6 < 0 )
  {
    v11 = RtlNtStatusToDosError(v6);
    UserSetLastError(v11);
    v10 = v6 < 0;
  }
  LOBYTE(v5) = !v10;
  return v5;
}
