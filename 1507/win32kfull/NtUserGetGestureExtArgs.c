/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C021A740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 CurrentProcessWow64Process; // rax

  v6 = 1;
  EnterCrit(1LL);
  if ( !a3 )
  {
    v7 = 87;
LABEL_3:
    v6 = 0;
    UserSetLastError(v7);
    goto LABEL_12;
  }
  v10 = HMValidateHandle(a1, 21);
  v11 = v10;
  if ( !v10 )
  {
    v6 = 0;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v10 + 16) != gptiCurrent )
  {
    v7 = 5;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v10 + 80) )
  {
    v7 = 122;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
  ProbeForWrite(a3, *(unsigned int *)(v11 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v11 + 88), *(unsigned int *)(v11 + 80));
  v9 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v9 == a1 )
  {
    FreeGestureInfo(v9);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
