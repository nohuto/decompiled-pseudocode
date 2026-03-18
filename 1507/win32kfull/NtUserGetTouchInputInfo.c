/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C021C0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ecx
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v15; // rbx

  v6 = a2;
  v8 = 1;
  EnterCrit(1LL);
  if ( !a3 || a4 != 48 )
  {
    v13 = 87;
    goto LABEL_12;
  }
  v9 = HMValidateHandle(a1, 20);
  v12 = v9;
  if ( !v9 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v13 = 5;
LABEL_12:
    v8 = 0;
    UserSetLastError(v13);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v9 + 24) < (unsigned int)v6 )
    v6 = *(unsigned int *)(v9 + 24);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
  v15 = 48 * v6;
  ProbeForWrite(a3, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v12 + 32), v15);
  v11 = *(_QWORD *)(gptiCurrent + 952LL);
  if ( v11 == a1 )
  {
    FreeTouchInputInfo(v11);
    *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
