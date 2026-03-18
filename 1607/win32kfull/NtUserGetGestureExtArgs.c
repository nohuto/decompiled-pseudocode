/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C0213280
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // r8
  __int64 v17; // r9

  v6 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 )
  {
    v10 = 87LL;
LABEL_3:
    v6 = 0;
    UserSetLastError(v10);
    goto LABEL_12;
  }
  LOBYTE(v7) = 21;
  v13 = HMValidateHandle(a1, v7, v8, v9);
  v14 = v13;
  if ( !v13 )
  {
    v6 = 0;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v13 + 16) != gptiCurrent )
  {
    v10 = 5LL;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v13 + 80) )
  {
    v10 = 122LL;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
  ProbeForWrite(a3, *(unsigned int *)(v14 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v14 + 88), *(unsigned int *)(v14 + 80));
  v12 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v12 == a1 )
  {
    FreeGestureInfo(v12, 1LL, v16, v17);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
