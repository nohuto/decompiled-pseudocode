/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C0214FF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9

  v6 = a2;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 || a4 != 48 )
  {
    v16 = 87LL;
    goto LABEL_12;
  }
  LOBYTE(v9) = 20;
  v12 = HMValidateHandle(a1, v9, v10, v11);
  v15 = v12;
  if ( !v12 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v16 = 5LL;
LABEL_12:
    v8 = 0;
    UserSetLastError(v16);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v12 + 24) < (unsigned int)v6 )
    v6 = *(unsigned int *)(v12 + 24);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
  v18 = 48 * v6;
  ProbeForWrite(a3, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v15 + 32), v18);
  v14 = *(_QWORD *)(gptiCurrent + 952LL);
  if ( v14 == a1 )
  {
    FreeTouchInputInfo(v14, 1LL, v19, v20);
    *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v8;
}
