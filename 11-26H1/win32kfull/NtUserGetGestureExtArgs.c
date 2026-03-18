/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1402B3720
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 CurrentProcessWow64Process; // rax

  EnterCrit(0LL, 0LL);
  v6 = PtiCurrent(v5);
  if ( !a3 )
  {
    v7 = 87;
LABEL_3:
    LODWORD(v8) = 0;
    UserSetLastError(v7);
    goto LABEL_11;
  }
  v10 = HMValidateHandleWithDescriptor(a1, 0x15u);
  v8 = v10;
  if ( !v10 )
    goto LABEL_11;
  if ( *(struct tagTHREADINFO **)(v10 + 16) != v6 )
  {
    v7 = 5;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v10 + 80) )
  {
    v7 = 122;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v11);
  ProbeForWrite(a3, *(unsigned int *)(v8 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v8 + 88), *(unsigned int *)(v8 + 80));
  LODWORD(v8) = 1;
  v9 = *((_QWORD *)v6 + 150);
  if ( v9 == a1 )
  {
    FreeGestureInfo(v9);
    *((_QWORD *)v6 + 150) = 0LL;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return (int)v8;
}
